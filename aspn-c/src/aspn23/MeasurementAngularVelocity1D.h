
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
 * sensor integration type
 */

enum Aspn23MeasurementAngularVelocity1DSensorType {

	/**
	 * Angular velocity integrated over last measurement period expressed as delta rotation in
	 * radians. Variance units are radians^2. Time of validity is the end of integration period.
	 * Integration period is from previous measurement to the current measurement.
	 */

	ASPN23_MEASUREMENT_ANGULAR_VELOCITY_1D_SENSOR_TYPE_INTEGRATED,

	/**
	 * Angular velocity is sampled expressed in rad/s. Variance units are (rad/s)^2.
	 */

	ASPN23_MEASUREMENT_ANGULAR_VELOCITY_1D_SENSOR_TYPE_SAMPLED
};

/**
 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
 */

enum Aspn23MeasurementAngularVelocity1DErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_MEASUREMENT_ANGULAR_VELOCITY_1D_ERROR_MODEL_NONE
};

/**
 * Measures the angular velocity about the sense-axis. The sense-axis is the sensor frame x-axis as
 * defined in mounting.
 */

typedef struct Aspn23MeasurementAngularVelocity1D {

	/**
	 * Standard ASPN measurement header.
	 */

	Aspn23TypeHeader header;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * sensor integration type
	 */

	enum Aspn23MeasurementAngularVelocity1DSensorType sensor_type;

	/**
	 * Angular velocity defined in sensor_type enum.
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

	enum Aspn23MeasurementAngularVelocity1DErrorModel error_model;

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

} Aspn23MeasurementAngularVelocity1D;

Aspn23MeasurementAngularVelocity1D* ASPN_NULLABLE aspn23_measurement_angular_velocity_1d_new(
    Aspn23TypeHeader* header,
    Aspn23TypeTimestamp* time_of_validity,
    enum Aspn23MeasurementAngularVelocity1DSensorType sensor_type,
    double obs,
    double variance,
    enum Aspn23MeasurementAngularVelocity1DErrorModel error_model,
    uint16_t num_error_model_params,
    double* error_model_params,
    uint8_t num_integrity,
    Aspn23TypeIntegrity* integrity);

Aspn23MeasurementAngularVelocity1D* ASPN_NULLABLE
aspn23_measurement_angular_velocity_1d_copy(Aspn23MeasurementAngularVelocity1D*);

/**
 * free() all memory held by the given Aspn23MeasurementAngularVelocity1D,
 * including the struct itself.
 *
 * Pointer fields (error_model_params, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_angular_velocity_1d_free(void* pointer);
void aspn23_measurement_angular_velocity_1d_free_members(Aspn23MeasurementAngularVelocity1D* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
