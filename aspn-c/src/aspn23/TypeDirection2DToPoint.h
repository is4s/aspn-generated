
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"
#include "TypeRemotePoint.h"
#include "TypeImageFeature.h"
#include "TypeIntegrity.h"
#ifdef __cplusplus
extern "C" {
#endif
ASPN_ASSUME_NONNULL_BEGIN

/**
 * Specifies measurement reference.
 */

enum Aspn23TypeDirection2DToPointReference {

	/**
	 * Angle between the sensor's local level N-axis and the vector from the sensor to the point
	 * projected onto the sensor's local level North-East plane. Positive angle is defined as a
	 * rotation towards the E-axis. See also NED coordinate frame definition for N, E, and D
	 * definitions. A figure depicting the angle definition is included in the conventions
	 * documentation.
	 */

	ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_TO,

	/**
	 * Angle between the point's local level N-axis and the vector from the point to the sensor
	 * projected onto the point's local level North-East plane. Positive angle is defined as a
	 * rotation towards the E-axis. The significant difference between NE_TO and NE_FROM is where
	 * the NED frame originates (NE_FROM has its origin located at the point's location). See also
	 * NED coordinate frame definition for N, E, and D definitions. A figure depicting the angle
	 * definition is included in the conventions documentation.
	 */

	ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_FROM,

	/**
	 * Angle between the sensor's local level North-East plane and the vector from the sensor to the
	 * point. Positive angle is defined as a rotation towards the negative D-axis of the NED frame.
	 * See also NED coordinate frame definition for N, E, and D definitions. A figure depicting the
	 * angle definition is included in the conventions documentation.
	 */

	ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_ELEVATION,

	/**
	 * Angle between the sensor's x-axis and the vector from the sensor to the point projected onto
	 * the sensor frame x-y plane. Positive angle is defined as a rotation towards the y-axis.
	 * Sensor frame is defined in mounting. A figure depicting the angle definition is included in
	 * the conventions documentation.
	 */

	ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_SENSOR
};

/**
 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
 */

enum Aspn23TypeDirection2DToPointErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_TYPE_DIRECTION_2D_TO_POINT_ERROR_MODEL_NONE
};

/**
 * 2D direction to or from a point as defined by the reference enum. Information about the remote
 * point (its position and/or correspondence with previous or future appearances
 * of this same point) may be determined using remote_point.
 */

typedef struct Aspn23TypeDirection2DToPoint {

	/**
	 * Position and/or correspondence information about the remote point.
	 */

	Aspn23TypeRemotePoint remote_point;

	/**
	 * Specifies measurement reference.
	 */

	enum Aspn23TypeDirection2DToPointReference reference;

	/**
	 * Observations as specified in the reference enum.
	 */

	double obs;

	/**
	 * Measurement error variance.
	 */

	double variance;

	/**
	 * Switch for whether observation_characteristics is valid or not.
	 */

	bool has_observation_characteristics;

	/**
	 * Image feature characteristics.
	 */

	Aspn23TypeImageFeature observation_characteristics;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */

	enum Aspn23TypeDirection2DToPointErrorModel error_model;

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

} Aspn23TypeDirection2DToPoint;

Aspn23TypeDirection2DToPoint* ASPN_NULLABLE
aspn23_type_direction_2d_to_point_new(Aspn23TypeRemotePoint* remote_point,
                                      enum Aspn23TypeDirection2DToPointReference reference,
                                      double obs,
                                      double variance,
                                      bool has_observation_characteristics,
                                      Aspn23TypeImageFeature* observation_characteristics,
                                      enum Aspn23TypeDirection2DToPointErrorModel error_model,
                                      uint16_t num_error_model_params,
                                      double* error_model_params,
                                      uint8_t num_integrity,
                                      Aspn23TypeIntegrity* integrity);

Aspn23TypeDirection2DToPoint* ASPN_NULLABLE
aspn23_type_direction_2d_to_point_copy(Aspn23TypeDirection2DToPoint*);

/**
 * free() all memory held by the given Aspn23TypeDirection2DToPoint,
 * including the struct itself.
 *
 * Pointer fields (error_model_params, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_type_direction_2d_to_point_free(void* pointer);
void aspn23_type_direction_2d_to_point_free_members(Aspn23TypeDirection2DToPoint* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
