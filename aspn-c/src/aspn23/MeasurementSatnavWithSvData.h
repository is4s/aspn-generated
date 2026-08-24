
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"
#include "TypeHeader.h"
#include "TypeTimestamp.h"
#include "TypeSatnavTime.h"
#include "TypeSatnavObs.h"
#include "TypeSatnavSvData.h"
#include "TypeIntegrity.h"
#ifdef __cplusplus
extern "C" {
#endif
ASPN_ASSUME_NONNULL_BEGIN

/**
 * Raw measurements from a satnav receiver.
 */

typedef struct Aspn23MeasurementSatnavWithSvData {

	/**
	 * Standard ASPN measurement header.
	 */

	Aspn23TypeHeader header;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Receiver clock time. In a multi-GNSS receiver (GPS/GLONASS/Galileo/QZSS/BeiDou) all
	 * pseudorange observations must refer to one receiver clock only. The receiver clock time of
	 * the measurement is the receiver clock time of the received signals. It is identical for the
	 * phase and range measurements and is identical for all satellites observed in a given epoch.
	 */

	Aspn23TypeSatnavTime receiver_clock_time;

	/**
	 * Number of different signal types tracked in the current epoch. Examples of signal types
	 * include GPS L1 C/A code, Galileo E1B.
	 */

	uint16_t num_signal_types;

	/**
	 * Total number of signals tracked across all PRNs and signal types.
	 */

	uint16_t num_signals_tracked;

	/**
	 * Array of satnav obs data for all of the signals/PRNs being tracked in this epoch.
	 */

	Aspn23TypeSatnavObs* obs;

	/**
	 * Array of satellite position, velocity, and clock information. These line up precisely with
	 * the obs, such that sv_data[N] is the satellite information for observations obs[N] for any
	 * valid N.
	 */

	Aspn23TypeSatnavSvData* sv_data;

	/**
	 * Number of integrity values.
	 */

	uint8_t num_integrity;

	/**
	 * Measurement integrity at the sensor level. Integrity is also available for each observable,
	 * which is found in the observable type definition. Includes the integrity method used and an
	 * integrity value (which is to be interpreted based upon the integrity method). The intent of
	 * allowing num_integrity > 1 is to report multiple integrity values based on multiple integrity
	 * methods.
	 */

	Aspn23TypeIntegrity* integrity;

} Aspn23MeasurementSatnavWithSvData;

Aspn23MeasurementSatnavWithSvData* ASPN_NULLABLE
aspn23_measurement_satnav_with_sv_data_new(Aspn23TypeHeader* header,
                                           Aspn23TypeTimestamp* time_of_validity,
                                           Aspn23TypeSatnavTime* receiver_clock_time,
                                           uint16_t num_signal_types,
                                           uint16_t num_signals_tracked,
                                           Aspn23TypeSatnavObs* obs,
                                           Aspn23TypeSatnavSvData* sv_data,
                                           uint8_t num_integrity,
                                           Aspn23TypeIntegrity* integrity);

Aspn23MeasurementSatnavWithSvData* ASPN_NULLABLE
aspn23_measurement_satnav_with_sv_data_copy(Aspn23MeasurementSatnavWithSvData*);

/**
 * free() all memory held by the given Aspn23MeasurementSatnavWithSvData,
 * including the struct itself.
 *
 * Pointer fields (obs, sv_data, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_satnav_with_sv_data_free(void* pointer);
void aspn23_measurement_satnav_with_sv_data_free_members(Aspn23MeasurementSatnavWithSvData* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
