
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

/**
 * Defines measurement reference.
 */

enum Aspn23MeasurementVelocityReferenceFrame {

	/**
	 * Velocity with respect to earth-centered inertial frame, expressed in an earth-centered
	 * inertial frame. See also ECi coordinate frame definition for x, y, and z definitions.
	 */

	ASPN23_MEASUREMENT_VELOCITY_REFERENCE_FRAME_ECI,

	/**
	 * Velocity with respect to earth-fixed frame expressed in earth-centered, earth-fixed (ECEF)
	 * frame. See also ECEF coordinate frame definition for x, y, and z definitions.
	 */

	ASPN23_MEASUREMENT_VELOCITY_REFERENCE_FRAME_ECEF,

	/**
	 * Local level, geodetic velocity: Velocity with respect to earth-fixed frame expressed in the
	 * North-East-Down (NED), local level frame. See also NED coordinate frame definition for N, E,
	 * and D definitions.
	 */

	ASPN23_MEASUREMENT_VELOCITY_REFERENCE_FRAME_NED,

	/**
	 * Velocity with respect to earth-fixed frame expressed in sensor coordinate frame. Sensor
	 * coordinate frame is defined in sensor metadataHeader.
	 */

	ASPN23_MEASUREMENT_VELOCITY_REFERENCE_FRAME_SENSOR
};

/**
 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
 */

enum Aspn23MeasurementVelocityErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_MEASUREMENT_VELOCITY_ERROR_MODEL_NONE
};

/**
 * Velocity is time rate of change of position with respect to the user-specified reference frame.
 * May be one, two, or three dimensional.
 */

typedef struct Aspn23MeasurementVelocity {

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

	enum Aspn23MeasurementVelocityReferenceFrame reference_frame;

	/**
	 * Velocity along the first axis of the measurement reference frame enumerated in
	 * reference_frame.
	 *
	 * NaN indicates this optional field is not provided.
	 */

	double x;

	/**
	 * Velocity along the second axis of the measurement reference frame enumerated in
	 * reference_frame.
	 *
	 * NaN indicates this optional field is not provided.
	 */

	double y;

	/**
	 * Velocity along the third axis of the measurement reference frame enumerated in
	 * reference_frame.
	 *
	 * NaN indicates this optional field is not provided.
	 */

	double z;

	/**
	 * Dimension of measurement provided.
	 */

	uint8_t num_meas;

	/**
	 * Measurement error covariance or variance depending on measurement dimension. Dimensions of
	 * covariance must be num_meas²
	 */

	double* covariance;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */

	enum Aspn23MeasurementVelocityErrorModel error_model;

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

} Aspn23MeasurementVelocity;

Aspn23MeasurementVelocity* ASPN_NULLABLE
aspn23_measurement_velocity_new(Aspn23TypeHeader* header,
                                Aspn23TypeTimestamp* time_of_validity,
                                enum Aspn23MeasurementVelocityReferenceFrame reference_frame,
                                double x,
                                double y,
                                double z,
                                uint8_t num_meas,
                                double* covariance,
                                enum Aspn23MeasurementVelocityErrorModel error_model,
                                uint16_t num_error_model_params,
                                double* error_model_params,
                                uint8_t num_integrity,
                                Aspn23TypeIntegrity* integrity);

Aspn23MeasurementVelocity* ASPN_NULLABLE
aspn23_measurement_velocity_copy(Aspn23MeasurementVelocity*);

/**
 * free() all memory held by the given Aspn23MeasurementVelocity,
 * including the struct itself.
 *
 * Pointer fields (error_model_params, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_velocity_free(void* pointer);
void aspn23_measurement_velocity_free_members(Aspn23MeasurementVelocity* self);

#ifdef __cplusplus
}  // extern "C"
#endif
