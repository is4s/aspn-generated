
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

enum Aspn23MeasurementAttitude2DReferenceFrame {

	/**
	 * Local level, geographic attitude expressed in the locally level NED frame as a rotation about
	 * the E-axis followed by rotation about the N-axis. Positive rotation follows the right-hand
	 * rule. The third rotation in the NED-frame is unspecified and is not sensed. Use attitude_3d
	 * to report a sensed third dimension that is zero. See also NED coordinate frame definition for
	 * N, E, and D definitions.
	 */

	ASPN23_MEASUREMENT_ATTITUDE_2D_REFERENCE_FRAME_NE,

	/**
	 * Local level, geographic attitude expressed in the locally level NED frame as a rotation about
	 * the D-axis followed by rotation about the N-axis. Positive rotation follows the right-hand
	 * rule. The third rotation in the NED-frame is unspecified and is not sensed. Use attitude_3d
	 * to report a sensed third dimension that is zero. See also NED coordinate frame definition for
	 * N, E, and D definitions.
	 */

	ASPN23_MEASUREMENT_ATTITUDE_2D_REFERENCE_FRAME_ND,

	/**
	 * Local level, geographic attitude expressed in the locally level NED frame as a rotation about
	 * the D-axis followed by rotation about the E-axis. Positive rotation follows the right-hand
	 * rule. The third rotation in the NED-frame is unspecified and is not sensed. Use attitude_3d
	 * to report a sensed third dimension that is zero. See also NED coordinate frame definition for
	 * N, E, and D definitions.
	 */

	ASPN23_MEASUREMENT_ATTITUDE_2D_REFERENCE_FRAME_ED
};

/**
 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
 */

enum Aspn23MeasurementAttitude2DErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_MEASUREMENT_ATTITUDE_2D_ERROR_MODEL_NONE
};

/**
 * Two-dimensional, local level, geographic attitude expressed in the locally level NED frame as a
 * rotation about two axes as defined by the reference_frame.
 */

typedef struct Aspn23MeasurementAttitude2D {

	/**
	 * Standard ASPN measurement header.
	 */

	Aspn23TypeHeader header;

	/**
	 * Time at which the measurement is considered to be valid .
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Defines measurement reference.
	 */

	enum Aspn23MeasurementAttitude2DReferenceFrame reference_frame;

	/**
	 * Two-dimensional, local level, geographic attitude.
	 */

	double attitude2d[2];

	/**
	 * Covariance of the measurement.
	 */

	double covariance[2][2];

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */

	enum Aspn23MeasurementAttitude2DErrorModel error_model;

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

} Aspn23MeasurementAttitude2D;

Aspn23MeasurementAttitude2D* ASPN_NULLABLE
aspn23_measurement_attitude_2d_new(Aspn23TypeHeader* header,
                                   Aspn23TypeTimestamp* time_of_validity,
                                   enum Aspn23MeasurementAttitude2DReferenceFrame reference_frame,
                                   double attitude2d[2],
                                   double covariance[2][2],
                                   enum Aspn23MeasurementAttitude2DErrorModel error_model,
                                   uint16_t num_error_model_params,
                                   double* error_model_params,
                                   uint8_t num_integrity,
                                   Aspn23TypeIntegrity* integrity);

Aspn23MeasurementAttitude2D* ASPN_NULLABLE
aspn23_measurement_attitude_2d_copy(Aspn23MeasurementAttitude2D*);

/**
 * free() all memory held by the given Aspn23MeasurementAttitude2D,
 * including the struct itself.
 *
 * Pointer fields (error_model_params, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_attitude_2d_free(void* pointer);
void aspn23_measurement_attitude_2d_free_members(Aspn23MeasurementAttitude2D* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
