
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

enum Aspn23MeasurementAngularVelocityReferenceFrame {

	/**
	 * Angular velocity with respect to earth-centered inertial frame, expressed in an
	 * earth-centered inertial frame. See also ECi coordinate frame definition for x, y, and z
	 * definitions.
	 */

	ASPN23_MEASUREMENT_ANGULAR_VELOCITY_REFERENCE_FRAME_ECI,

	/**
	 * Angular velocity with respect to earth-fixed frame expressed in earth-centered, earth-fixed
	 * (ECEF) frame. See also ECEF coordinate frame definition for x, y, and z definitions.
	 */

	ASPN23_MEASUREMENT_ANGULAR_VELOCITY_REFERENCE_FRAME_ECEF,

	/**
	 * Angular velocity with respect to earth-fixed frame expressed in the North-East-Down (NED),
	 * local level frame. See also NED coordinate frame definition for N, E, and D definitions.
	 */

	ASPN23_MEASUREMENT_ANGULAR_VELOCITY_REFERENCE_FRAME_NED,

	/**
	 * Angular velocity with respect to an inertial frame expressed in sensor coordinate frame.
	 * Sensor coordinate frame is defined in sensor metadataHeader.
	 */

	ASPN23_MEASUREMENT_ANGULAR_VELOCITY_REFERENCE_FRAME_SENSOR
};

/**
 * IMU type
 */

enum Aspn23MeasurementAngularVelocityImuType {

	/**
	 * delta rotation measurements. Angular rate integrated over last measurement period expressed
	 * in radians. Time of validity is the end of the integration period. Integration period is from
	 * the previous measurement to the current measurement.
	 */

	ASPN23_MEASUREMENT_ANGULAR_VELOCITY_IMU_TYPE_INTEGRATED,

	/**
	 * sampled rotation rates. Angular rate is sampled and expressed in rad/s.
	 */

	ASPN23_MEASUREMENT_ANGULAR_VELOCITY_IMU_TYPE_SAMPLED
};

/**
 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
 */

enum Aspn23MeasurementAngularVelocityErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_MEASUREMENT_ANGULAR_VELOCITY_ERROR_MODEL_NONE
};

/**
 * Three dimensional angular velocity relative to and expressed in a user-defined reference frame.
 */

typedef struct Aspn23MeasurementAngularVelocity {

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

	enum Aspn23MeasurementAngularVelocityReferenceFrame reference_frame;

	/**
	 * IMU type
	 */

	enum Aspn23MeasurementAngularVelocityImuType imu_type;

	/**
	 * Angular velocity in 3 axes per enumerated definition.
	 */

	double meas[3];

	/**
	 * Measurement error covariance.
	 */

	double covariance[3][3];

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */

	enum Aspn23MeasurementAngularVelocityErrorModel error_model;

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

} Aspn23MeasurementAngularVelocity;

Aspn23MeasurementAngularVelocity* ASPN_NULLABLE aspn23_measurement_angular_velocity_new(
    Aspn23TypeHeader* header,
    Aspn23TypeTimestamp* time_of_validity,
    enum Aspn23MeasurementAngularVelocityReferenceFrame reference_frame,
    enum Aspn23MeasurementAngularVelocityImuType imu_type,
    double meas[3],
    double covariance[3][3],
    enum Aspn23MeasurementAngularVelocityErrorModel error_model,
    uint16_t num_error_model_params,
    double* error_model_params,
    uint8_t num_integrity,
    Aspn23TypeIntegrity* integrity);

Aspn23MeasurementAngularVelocity* ASPN_NULLABLE
aspn23_measurement_angular_velocity_copy(Aspn23MeasurementAngularVelocity*);

/**
 * free() all memory held by the given Aspn23MeasurementAngularVelocity,
 * including the struct itself.
 *
 * Pointer fields (error_model_params, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_angular_velocity_free(void* pointer);
void aspn23_measurement_angular_velocity_free_members(Aspn23MeasurementAngularVelocity* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
