
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"
#include "TypeHeader.h"
#include "TypeTimestamp.h"
#include "TypeIntegrity.h"
#ifdef __cplusplus
extern "C" {
#endif
ASPN_ASSUME_NONNULL_BEGIN

/**
 * Defines measurement reference.
 */

enum Aspn23MeasurementSpeedReference {

	/**
	 * Speed with respect to air measured as true airspeed (TAS) with respect to air mass expressed
	 * in sensor coordinate frame.
	 */

	ASPN23_MEASUREMENT_SPEED_REFERENCE_TAS,

	/**
	 * Speed with respect to air measured as indicated airspeed (IAS) with respect to air mass
	 * expressed in sensor coordinate frame; for example, dynamic pressure from a pitot tube
	 * converted to airspeed without compensation for instrument error, position, altitude, or
	 * temperature.
	 */

	ASPN23_MEASUREMENT_SPEED_REFERENCE_IAS,

	/**
	 * Speed with respect to water. Speed with respect to water expressed in sensor coordinate
	 * frame.
	 */

	ASPN23_MEASUREMENT_SPEED_REFERENCE_WATER,

	/**
	 * Speed with respect to ground. An example source is a ground Doppler radar.
	 */

	ASPN23_MEASUREMENT_SPEED_REFERENCE_GROUND
};

/**
 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
 */

enum Aspn23MeasurementSpeedErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_MEASUREMENT_SPEED_ERROR_MODEL_NONE
};

/**
 * Speed is the magnitude of the velocity vector with respect to the user-specified reference
 * frame.
 */

typedef struct Aspn23MeasurementSpeed {

	/**
	 * Standard ASPN measurement header.
	 */

	Aspn23TypeHeader header;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Defines measurement reference.
	 */

	enum Aspn23MeasurementSpeedReference reference;

	/**
	 * Speed as the magnitude of the velocity.
	 */

	double speed;

	/**
	 * Speed variance.
	 */

	double variance;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */

	enum Aspn23MeasurementSpeedErrorModel error_model;

	/**
	 * Number of parameters required for the error model chosen.
	 */

	uint16_t num_error_model_params;

	/**
	 * Error model parameters that characterize the optional error model.
	 */

	double* error_model_params;

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

} Aspn23MeasurementSpeed;

Aspn23MeasurementSpeed* ASPN_NULLABLE
aspn23_measurement_speed_new(Aspn23TypeHeader* header,
                             Aspn23TypeTimestamp* time_of_validity,
                             enum Aspn23MeasurementSpeedReference reference,
                             double speed,
                             double variance,
                             enum Aspn23MeasurementSpeedErrorModel error_model,
                             uint16_t num_error_model_params,
                             double* error_model_params,
                             uint8_t num_integrity,
                             Aspn23TypeIntegrity* integrity);

Aspn23MeasurementSpeed* ASPN_NULLABLE aspn23_measurement_speed_copy(Aspn23MeasurementSpeed*);

/**
 * free() all memory held by the given Aspn23MeasurementSpeed,
 * including the struct itself.
 *
 * Pointer fields (error_model_params, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_speed_free(void* pointer);
void aspn23_measurement_speed_free_members(Aspn23MeasurementSpeed* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
