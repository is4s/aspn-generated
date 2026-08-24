
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
 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
 */

enum Aspn23MeasurementAccumulatedDistanceTraveledErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_MEASUREMENT_ACCUMULATED_DISTANCE_TRAVELED_ERROR_MODEL_NONE
};

/**
 * Accumulated distance traveled over the time period from (time_of_validity - delta_t) to
 * time_of_validity. For example, a sensor that travels (over the observation time period) in one
 * direction 1m and reverses course to travel 1m back (and ends at its starting position) would have
 * an accumulated distance traveled of 2m. Sensor examples may include an odometer or a wheel
 * encoder.
 */

typedef struct Aspn23MeasurementAccumulatedDistanceTraveled {

	/**
	 * Standard ASPN measurement header.
	 */

	Aspn23TypeHeader header;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Duration of the observation time interval. The time_of_validity denotes the end of the time
	 * interval. The start of the time interval is time_of_validity - delta_t.
	 */

	double delta_t;

	/**
	 * Accumulated distance traveled over time period.
	 */

	double obs;

	/**
	 * Accumulated distance traveled variance.
	 */

	double variance;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */

	enum Aspn23MeasurementAccumulatedDistanceTraveledErrorModel error_model;

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

} Aspn23MeasurementAccumulatedDistanceTraveled;

Aspn23MeasurementAccumulatedDistanceTraveled* ASPN_NULLABLE
aspn23_measurement_accumulated_distance_traveled_new(
    Aspn23TypeHeader* header,
    Aspn23TypeTimestamp* time_of_validity,
    double delta_t,
    double obs,
    double variance,
    enum Aspn23MeasurementAccumulatedDistanceTraveledErrorModel error_model,
    uint16_t num_error_model_params,
    double* error_model_params,
    uint8_t num_integrity,
    Aspn23TypeIntegrity* integrity);

Aspn23MeasurementAccumulatedDistanceTraveled* ASPN_NULLABLE
aspn23_measurement_accumulated_distance_traveled_copy(
    Aspn23MeasurementAccumulatedDistanceTraveled*);

/**
 * free() all memory held by the given Aspn23MeasurementAccumulatedDistanceTraveled,
 * including the struct itself.
 *
 * Pointer fields (error_model_params, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_accumulated_distance_traveled_free(void* pointer);
void aspn23_measurement_accumulated_distance_traveled_free_members(
    Aspn23MeasurementAccumulatedDistanceTraveled* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
