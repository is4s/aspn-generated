
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
 * sensor type
 */

enum Aspn23MeasurementSpecificForce1DSensorType {

	/**
	 * Specific force integrated over last measurement period expressed as delta velocity in m/s.
	 * Variance units are (m/s)^2. Time of validity is the end of integration period. Integration
	 * period is from previous measurement to the current measurement.
	 */

	ASPN23_MEASUREMENT_SPECIFIC_FORCE_1D_SENSOR_TYPE_INTEGRATED,

	/**
	 * Specific force is sampled expressed in m/s/s. Variance units are (m/s/s)^2.
	 */

	ASPN23_MEASUREMENT_SPECIFIC_FORCE_1D_SENSOR_TYPE_SAMPLED
};

/**
 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
 */

enum Aspn23MeasurementSpecificForce1DErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_MEASUREMENT_SPECIFIC_FORCE_1D_ERROR_MODEL_NONE
};

/**
 * Measures the apparent specific force along the sense-axis. Example sensors are an atomic
 * interferometer, quantum gravimeter, or accelerometer. The apparent specific force is corrupted by
 * inertial (Coriolis and Centrifugal) effects. The sense-axis is the sensor frame x-axis as defined
 * in mounting.
 */

typedef struct Aspn23MeasurementSpecificForce1D {

	/**
	 * Standard ASPN measurement header.
	 */

	Aspn23TypeHeader header;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * sensor type
	 */

	enum Aspn23MeasurementSpecificForce1DSensorType sensor_type;

	/**
	 * Specific force defined in sensor_type enum.
	 */

	double obs;

	/**
	 * Variance of the observation with units defined in sensor_type enum.
	 */

	double variance;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */

	enum Aspn23MeasurementSpecificForce1DErrorModel error_model;

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

} Aspn23MeasurementSpecificForce1D;

Aspn23MeasurementSpecificForce1D* ASPN_NULLABLE aspn23_measurement_specific_force_1d_new(
    Aspn23TypeHeader* header,
    Aspn23TypeTimestamp* time_of_validity,
    enum Aspn23MeasurementSpecificForce1DSensorType sensor_type,
    double obs,
    double variance,
    enum Aspn23MeasurementSpecificForce1DErrorModel error_model,
    uint16_t num_error_model_params,
    double* error_model_params,
    uint8_t num_integrity,
    Aspn23TypeIntegrity* integrity);

Aspn23MeasurementSpecificForce1D* ASPN_NULLABLE
aspn23_measurement_specific_force_1d_copy(Aspn23MeasurementSpecificForce1D*);

/**
 * free() all memory held by the given Aspn23MeasurementSpecificForce1D,
 * including the struct itself.
 *
 * Pointer fields (error_model_params, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_specific_force_1d_free(void* pointer);
void aspn23_measurement_specific_force_1d_free_members(Aspn23MeasurementSpecificForce1D* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
