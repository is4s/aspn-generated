
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
 * Defines heading reference.
 */

enum Aspn23MeasurementHeadingReference {

	/**
	 * True heading. Direction to the geographic north expressed in the locally level NED frame as a
	 * rotation about the D-axis. This is akin to attitude_1d, which would be consistent with
	 * attitude_2d and attitude_3d. In that case, a ref frame enum could be used to define multiple
	 * one-dimensional attitudes, of which, heading could be one. The simpler approach of just
	 * having heading was chosen over the more general approach until there is a requirement for
	 * multiple, one-dimensional attitudes.
	 */

	ASPN23_MEASUREMENT_HEADING_REFERENCE_TRUE_HEADING,

	/**
	 * Magnetic heading. Direction to magnetic north expressed in the locally level NED frame as a
	 * rotation about the D-axis. In general, geographic position and time is required to convert
	 * from magnetic heading to true heading.
	 */

	ASPN23_MEASUREMENT_HEADING_REFERENCE_MAGNETIC_HEADING
};

/**
 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
 */

enum Aspn23MeasurementHeadingErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_MEASUREMENT_HEADING_ERROR_MODEL_NONE
};

/**
 * Local level, geographic attitude expressed in the locally level NED frame as
 * a rotation about the D-axis.
 *
 * Positive rotation follows the right-hand rule. Attitude about the other axes
 * in the NED-frame are unspecified and not sensed. Use attitude_2d or
 * attitude_3d to report a sensed dimension that is zero. See also NED
 * coordinate frame definition for N, E, and D definitions.
 */

typedef struct Aspn23MeasurementHeading {

	/**
	 * Standard ASPN measurement header.
	 */

	Aspn23TypeHeader header;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Defines heading reference.
	 */

	enum Aspn23MeasurementHeadingReference reference;

	/**
	 * Heading.
	 */

	double obs;

	/**
	 * Variance of the measurement.
	 */

	double variance;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */

	enum Aspn23MeasurementHeadingErrorModel error_model;

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

} Aspn23MeasurementHeading;

Aspn23MeasurementHeading* ASPN_NULLABLE
aspn23_measurement_heading_new(Aspn23TypeHeader* header,
                               Aspn23TypeTimestamp* time_of_validity,
                               enum Aspn23MeasurementHeadingReference reference,
                               double obs,
                               double variance,
                               enum Aspn23MeasurementHeadingErrorModel error_model,
                               uint16_t num_error_model_params,
                               double* error_model_params,
                               uint8_t num_integrity,
                               Aspn23TypeIntegrity* integrity);

Aspn23MeasurementHeading* ASPN_NULLABLE aspn23_measurement_heading_copy(Aspn23MeasurementHeading*);

/**
 * free() all memory held by the given Aspn23MeasurementHeading,
 * including the struct itself.
 *
 * Pointer fields (error_model_params, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_heading_free(void* pointer);
void aspn23_measurement_heading_free_members(Aspn23MeasurementHeading* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
