
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"
#include "TypeHeader.h"
#include "TypeTimestamp.h"
#include "TypeSatnavSatelliteSystem.h"
#include "TypeIntegrity.h"
#ifdef __cplusplus
extern "C" {
#endif
ASPN_ASSUME_NONNULL_BEGIN

/**
 * satnav navigation data bit subframe.
 */

typedef struct Aspn23MeasurementSatnavSubframe {

	/**
	 * Standard ASPN measurement header.
	 */

	Aspn23TypeHeader header;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Message ID provided from the satnav receiver.
	 */

	int64_t gnss_message_id;

	/**
	 * Satellite ID number.
	 */

	int32_t prn;

	/**
	 * Describes the satellite system that generated the subframe.
	 */

	Aspn23TypeSatnavSatelliteSystem satellite_system;

	/**
	 * Frequency slot +7 (range from 0-13). Only used for GLONASS.
	 */

	int32_t freq_slot_id;

	/**
	 * Number of bytes of subframe data.
	 */

	uint16_t num_bytes;

	/**
	 * num_bytes sized array of raw subframe message collected by the sensor. The underlying type
	 * and shape of the data vector is given by satnav_msg_id.
	 */

	int8_t* data_vector;

	/**
	 * Number of integrity values.
	 */

	uint8_t num_integrity;

	/**
	 * Measurement integrity. Includes the integrity method used and an integrity value (which is to
	 * be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
	 * to report multiple integrity values based on multiple integrity methods.
	 */

	Aspn23TypeIntegrity* integrity;

} Aspn23MeasurementSatnavSubframe;

Aspn23MeasurementSatnavSubframe* ASPN_NULLABLE
aspn23_measurement_satnav_subframe_new(Aspn23TypeHeader* header,
                                       Aspn23TypeTimestamp* time_of_validity,
                                       int64_t gnss_message_id,
                                       int32_t prn,
                                       Aspn23TypeSatnavSatelliteSystem* satellite_system,
                                       int32_t freq_slot_id,
                                       uint16_t num_bytes,
                                       int8_t* data_vector,
                                       uint8_t num_integrity,
                                       Aspn23TypeIntegrity* integrity);

Aspn23MeasurementSatnavSubframe* ASPN_NULLABLE
aspn23_measurement_satnav_subframe_copy(Aspn23MeasurementSatnavSubframe*);

/**
 * free() all memory held by the given Aspn23MeasurementSatnavSubframe,
 * including the struct itself.
 *
 * Pointer fields (data_vector, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_satnav_subframe_free(void* pointer);
void aspn23_measurement_satnav_subframe_free_members(Aspn23MeasurementSatnavSubframe* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
