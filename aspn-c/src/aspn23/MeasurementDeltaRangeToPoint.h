
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"
#include "TypeHeader.h"
#include "TypeTimestamp.h"
#include "TypeRemotePoint.h"
#include "TypeIntegrity.h"
#ifdef __cplusplus
extern "C" {
#endif
ASPN_ASSUME_NONNULL_BEGIN

/**
 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
 */

enum Aspn23MeasurementDeltaRangeToPointErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_MEASUREMENT_DELTA_RANGE_TO_POINT_ERROR_MODEL_NONE
};

/**
 * Delta range to a point is the difference, d1 - d0, where
 *
 * d1 is the distance between the sensor and the point at time = (time_of_validity)
 * d0 is the distance between the sensor and the point at time = (time_of_validity - delta_t)
 *
 * Note, a negative obs indicates the sensor is closer to the point at time_of_validity than it was
 * at time_of_validity - delta_t. Information about the remote point (its position and/or
 * correspondence with previous or future appearances of this same point) may be determined using
 * remote_point.
 */

typedef struct Aspn23MeasurementDeltaRangeToPoint {

	/**
	 * Standard ASPN measurement header.
	 */

	Aspn23TypeHeader header;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Position and/or correspondence information about the remote point.
	 */

	Aspn23TypeRemotePoint remote_point;

	/**
	 * Delta range to the remote point.
	 */

	double obs;

	/**
	 * Duration of the observation time interval. The time_of_validity denotes the end of the time
	 * interval. The start of the time interval is time_of_validity - delta_t.
	 */

	double delta_t;

	/**
	 * Variance of the delta range measurement.
	 */

	double variance;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */

	enum Aspn23MeasurementDeltaRangeToPointErrorModel error_model;

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

} Aspn23MeasurementDeltaRangeToPoint;

Aspn23MeasurementDeltaRangeToPoint* ASPN_NULLABLE aspn23_measurement_delta_range_to_point_new(
    Aspn23TypeHeader* header,
    Aspn23TypeTimestamp* time_of_validity,
    Aspn23TypeRemotePoint* remote_point,
    double obs,
    double delta_t,
    double variance,
    enum Aspn23MeasurementDeltaRangeToPointErrorModel error_model,
    uint16_t num_error_model_params,
    double* error_model_params,
    uint8_t num_integrity,
    Aspn23TypeIntegrity* integrity);

Aspn23MeasurementDeltaRangeToPoint* ASPN_NULLABLE
aspn23_measurement_delta_range_to_point_copy(Aspn23MeasurementDeltaRangeToPoint*);

/**
 * free() all memory held by the given Aspn23MeasurementDeltaRangeToPoint,
 * including the struct itself.
 *
 * Pointer fields (error_model_params, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_delta_range_to_point_free(void* pointer);
void aspn23_measurement_delta_range_to_point_free_members(Aspn23MeasurementDeltaRangeToPoint* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
