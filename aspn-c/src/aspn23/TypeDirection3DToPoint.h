
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
 * Defines measurement reference frame.
 */

enum Aspn23TypeDirection3DToPointReferenceFrame {

	/**
	 * Azimuth (first component of obs) is the angle between the sensor frame x-axis (boresight) and
	 * the projection of the point onto the sensor frame's x-y plane (positive right-hand rule about
	 * the sensor frame z-axis). Elevation (second component of obs) is the angle between the sensor
	 * frame's x-y plane and the vector from the sensor to the point (positive right-hand rule about
	 * the intermediate axis formed by the azimuth rotation). The covariance is for the azimuth and
	 * elevation errors. Units for the observation are in rad, covariance rad^2.
	 */

	ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_AZ_EL,

	/**
	 * The pixel coordinates of the point in an image (sub-pixel resolution is allowed). When
	 * combined with the camera model, these can be converted to the NORMALIZED_IMAGE reference
	 * frame representation. Units for the observation are in pixels, covariance pixels^2.
	 */

	ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_PIXEL,

	/**
	 * 2D position from the sensor frame origin to the point expressed in components y and z of the
	 * sensor frame normalized by the boresight distance. The x component of the sensor frame is the
	 * boresight axis. Units for the observation are m/m, covariance (m/m)^2.
	 */

	ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_NORMALIZED_IMAGE,

	/**
	 * 2D position from the sensor frame origin to the point expressed in components y and z of the
	 * sensor frame normalized by the range to the point. The x component of the sensor frame is the
	 * boresight axis. Units for the observation are m/m, covariance (m/m)^2.
	 */

	ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_SINE_SPACE
};

/**
 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
 */

enum Aspn23TypeDirection3DToPointErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_TYPE_DIRECTION_3D_TO_POINT_ERROR_MODEL_NONE
};

/**
 * 3D direction to or from a point as defined by the reference enum. Information about the remote
 * point (its position and/or correspondence with previous or future appearances
 * of this same point) may be determined using remote_point.
 */

typedef struct Aspn23TypeDirection3DToPoint {

	/**
	 * Position and/or correspondence information about the remote point.
	 */

	Aspn23TypeRemotePoint remote_point;

	/**
	 * Defines measurement reference frame.
	 */

	enum Aspn23TypeDirection3DToPointReferenceFrame reference_frame;

	/**
	 * 3D direction to the remote point as defined in reference_frame.
	 */

	double obs[2];

	/**
	 * Covariance of the direction measurement as defined in reference_frame.
	 */

	double covariance[2][2];

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

	enum Aspn23TypeDirection3DToPointErrorModel error_model;

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

} Aspn23TypeDirection3DToPoint;

Aspn23TypeDirection3DToPoint* ASPN_NULLABLE aspn23_type_direction_3d_to_point_new(
    Aspn23TypeRemotePoint* remote_point,
    enum Aspn23TypeDirection3DToPointReferenceFrame reference_frame,
    double obs[2],
    double covariance[2][2],
    bool has_observation_characteristics,
    Aspn23TypeImageFeature* observation_characteristics,
    enum Aspn23TypeDirection3DToPointErrorModel error_model,
    uint16_t num_error_model_params,
    double* error_model_params,
    uint8_t num_integrity,
    Aspn23TypeIntegrity* integrity);

Aspn23TypeDirection3DToPoint* ASPN_NULLABLE
aspn23_type_direction_3d_to_point_copy(Aspn23TypeDirection3DToPoint*);

/**
 * free() all memory held by the given Aspn23TypeDirection3DToPoint,
 * including the struct itself.
 *
 * Pointer fields (error_model_params, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_type_direction_3d_to_point_free(void* pointer);
void aspn23_type_direction_3d_to_point_free_members(Aspn23TypeDirection3DToPoint* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
