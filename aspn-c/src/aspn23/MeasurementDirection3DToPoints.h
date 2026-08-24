
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"
#include "TypeHeader.h"
#include "TypeTimestamp.h"
#include "TypeDirection3DToPoint.h"
#ifdef __cplusplus
extern "C" {
#endif
ASPN_ASSUME_NONNULL_BEGIN

/**
 * 3D direction to points.
 */

typedef struct Aspn23MeasurementDirection3DToPoints {

	/**
	 * Standard ASPN measurement header.
	 */

	Aspn23TypeHeader header;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Total number of observations.
	 */

	uint16_t num_obs;

	/**
	 * Array of observations.
	 */

	Aspn23TypeDirection3DToPoint* obs;

} Aspn23MeasurementDirection3DToPoints;

Aspn23MeasurementDirection3DToPoints* ASPN_NULLABLE
aspn23_measurement_direction_3d_to_points_new(Aspn23TypeHeader* header,
                                              Aspn23TypeTimestamp* time_of_validity,
                                              uint16_t num_obs,
                                              Aspn23TypeDirection3DToPoint* obs);

Aspn23MeasurementDirection3DToPoints* ASPN_NULLABLE
aspn23_measurement_direction_3d_to_points_copy(Aspn23MeasurementDirection3DToPoints*);

/**
 * free() all memory held by the given Aspn23MeasurementDirection3DToPoints,
 * including the struct itself.
 *
 * Pointer fields (obs) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_direction_3d_to_points_free(void* pointer);
void aspn23_measurement_direction_3d_to_points_free_members(
    Aspn23MeasurementDirection3DToPoints* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
