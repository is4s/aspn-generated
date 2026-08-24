
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif
ASPN_ASSUME_NONNULL_BEGIN

/**
 * Defines position reference.
 */

enum Aspn23TypeRemotePointPositionReferenceFrame {

	/**
	 * No reference frame. This is only valid if position is not included
	 * (included_terms is 0 or 1).
	 */

	ASPN23_TYPE_REMOTE_POINT_POSITION_REFERENCE_FRAME_NONE,

	/**
	 * Point position relative to the WGS-84 reference expressed using position1 as geodetic
	 * latitude in radians, position2 as longitude in radians, and position3 as geodetic altitude
	 * (or height above the WGS-84 ellipsoid) in meters. Each term is optional. position_covariance
	 * is given using north-south position error in meters (an expression of geodetic latitude
	 * error), east-west position error in meters (an expression of longitude error), and geodetic
	 * altitude error in meters. In the case of nulled position components, the corresponding error
	 * covariance terms are omitted.
	 */

	ASPN23_TYPE_REMOTE_POINT_POSITION_REFERENCE_FRAME_GEODETIC
};

/**
 * ASPN custom type representing a point. This includes optional information
 * (indicated by included_terms) for the position and a correspondence ID for the
 * point.
 */

typedef struct Aspn23TypeRemotePoint {

	/**
	 * Indicates which information is included about the point
	 * 0 = no information included (unknown point)
	 * 1 = id included (corresponded point)
	 * 2 = position included (known point)
	 * 3 = id and position included
	 */

	uint8_t included_terms;

	/**
	 * Unique identification number assigned by the sensor. Points that have the same id from a
	 * sensor are multiple instances of the same point as determined by a sensor's point
	 * correspondence.
	 */

	uint32_t id;

	/**
	 * Defines position reference.
	 */

	enum Aspn23TypeRemotePointPositionReferenceFrame position_reference_frame;

	/**
	 * First position term as defined in position_reference_frame.
	 *
	 * NaN indicates this optional field is not provided.
	 */

	double position1;

	/**
	 * Second position term as defined in position_reference_frame.
	 *
	 * NaN indicates this optional field is not provided.
	 */

	double position2;

	/**
	 * Third position term as defined in position_reference_frame.
	 *
	 * NaN indicates this optional field is not provided.
	 */

	double position3;

	/**
	 * Dimension of position provided.
	 */

	uint8_t num_position_components;

	/**
	 * Position error covariance (or variance depending on num_position_components) as defined in
	 * position_reference_frame.
	 */

	double* position_covariance;

} Aspn23TypeRemotePoint;

Aspn23TypeRemotePoint* ASPN_NULLABLE aspn23_type_remote_point_new(
    uint8_t included_terms,
    uint32_t id,
    enum Aspn23TypeRemotePointPositionReferenceFrame position_reference_frame,
    double position1,
    double position2,
    double position3,
    uint8_t num_position_components,
    double* position_covariance);

Aspn23TypeRemotePoint* ASPN_NULLABLE aspn23_type_remote_point_copy(Aspn23TypeRemotePoint*);

/**
 * free() all memory held by the given Aspn23TypeRemotePoint,
 * including the struct itself.
 */

void aspn23_type_remote_point_free(void* pointer);
void aspn23_type_remote_point_free_members(Aspn23TypeRemotePoint* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
