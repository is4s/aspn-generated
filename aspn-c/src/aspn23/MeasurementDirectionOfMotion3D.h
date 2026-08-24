
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

enum Aspn23MeasurementDirectionOfMotion3DReferenceFrame {

	/**
	 * Direction of motion with respect to earth-centered inertial (ECi) frame, expressed in an
	 * earth-centered inertial frame. See also ECi coordinate frame definition for x, y, and z
	 * definitions.
	 */

	ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_ECI,

	/**
	 * Direction of motion with respect to earth-fixed frame expressed in earth-centered,
	 * earth-fixed (ECEF) frame. See also ECEF coordinate frame definition for x, y, and z
	 * definitions.
	 */

	ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_ECEF,

	/**
	 * Local level, geodetic velocity: Velocity with respect to earth-fixed frame expressed in the
	 * North-East-Down (NED), local level frame. See also NED coordinate frame definition for N, E,
	 * and D definitions.
	 */

	ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_NED,

	/**
	 * Direction of motion with respect to earth-fixed frame expressed in sensor coordinate frame.
	 * Sensor coordinate frame is defined in sensor metadataHeader.
	 */

	ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_SENSOR
};

/**
 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
 */

enum Aspn23MeasurementDirectionOfMotion3DErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D_ERROR_MODEL_NONE
};

/**
 * Direction of motion represented as a unit vector.
 */

typedef struct Aspn23MeasurementDirectionOfMotion3D {

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

	enum Aspn23MeasurementDirectionOfMotion3DReferenceFrame reference_frame;

	/**
	 * Direction of motion represented as a unit vector.
	 */

	double obs[3];

	/**
	 * Error is expressed as rotation uncertainty about two axes, error_vector and and a second
	 * error vector that is orthogonal to both the obs vector and the error_vector.
	 */

	double error_vector[3];

	/**
	 * Error is expressed as rotation uncertainty about the following two axes: 1) error_vector, and
	 * 2) a second error vector that is orthogonal to both the obs direction vector and the
	 * error_vector.
	 */

	double covariance[2][2];

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */

	enum Aspn23MeasurementDirectionOfMotion3DErrorModel error_model;

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

} Aspn23MeasurementDirectionOfMotion3D;

Aspn23MeasurementDirectionOfMotion3D* ASPN_NULLABLE aspn23_measurement_direction_of_motion_3d_new(
    Aspn23TypeHeader* header,
    Aspn23TypeTimestamp* time_of_validity,
    enum Aspn23MeasurementDirectionOfMotion3DReferenceFrame reference_frame,
    double obs[3],
    double error_vector[3],
    double covariance[2][2],
    enum Aspn23MeasurementDirectionOfMotion3DErrorModel error_model,
    uint16_t num_error_model_params,
    double* error_model_params,
    uint8_t num_integrity,
    Aspn23TypeIntegrity* integrity);

Aspn23MeasurementDirectionOfMotion3D* ASPN_NULLABLE
aspn23_measurement_direction_of_motion_3d_copy(Aspn23MeasurementDirectionOfMotion3D*);

/**
 * free() all memory held by the given Aspn23MeasurementDirectionOfMotion3D,
 * including the struct itself.
 *
 * Pointer fields (error_model_params, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_direction_of_motion_3d_free(void* pointer);
void aspn23_measurement_direction_of_motion_3d_free_members(
    Aspn23MeasurementDirectionOfMotion3D* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
