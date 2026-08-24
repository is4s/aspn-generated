
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
 * Specifies altitude reference.
 */

enum Aspn23MeasurementAltitudeReference {

	/**
	 * height above ground level (AGL). Generally, position and terrain elevation data are required
	 * to convert between AGL and (MSL or HAE).
	 */

	ASPN23_MEASUREMENT_ALTITUDE_REFERENCE_AGL,

	/**
	 * height above mean sea level (MSL). Generally, position is required to convert between MSL and
	 * HAE.
	 */

	ASPN23_MEASUREMENT_ALTITUDE_REFERENCE_MSL,

	/**
	 * height above the WGS-84 ellipsoid (HAE), also known as geodetic altitude.
	 */

	ASPN23_MEASUREMENT_ALTITUDE_REFERENCE_HAE
};

/**
 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
 */

enum Aspn23MeasurementAltitudeErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_MEASUREMENT_ALTITUDE_ERROR_MODEL_NONE,

	/**
	 * First-order Gauss-Markov (FOGM) process, defined by the following parameters
	 * (num_error_model_params = 3):
	 * 1) standard_deviation, units: m, description: standard deviation of a scalar, first order
	 * Gauss-Markov measurement noise model.
	 * 2) time_constant, units: seconds, description: time constant of a scalar, first order
	 * Gauss-Markov measurement noise model.
	 * 3) initial_standard_deviation, units: m, description: initial standard deviation of a
	 * scalar, first order Gauss-Markov measurement noise model.
	 */

	ASPN23_MEASUREMENT_ALTITUDE_ERROR_MODEL_FOGM
};

/**
 * Height above a user-specified reference frame.
 */

typedef struct Aspn23MeasurementAltitude {

	/**
	 * Standard ASPN measurement header.
	 */

	Aspn23TypeHeader header;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Specifies altitude reference.
	 */

	enum Aspn23MeasurementAltitudeReference reference;

	/**
	 * Altitude in meters, with altitude defined by the enum, altitude_type.
	 */

	double altitude;

	/**
	 * Altitude variance.
	 */

	double variance;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */

	enum Aspn23MeasurementAltitudeErrorModel error_model;

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

} Aspn23MeasurementAltitude;

Aspn23MeasurementAltitude* ASPN_NULLABLE
aspn23_measurement_altitude_new(Aspn23TypeHeader* header,
                                Aspn23TypeTimestamp* time_of_validity,
                                enum Aspn23MeasurementAltitudeReference reference,
                                double altitude,
                                double variance,
                                enum Aspn23MeasurementAltitudeErrorModel error_model,
                                uint16_t num_error_model_params,
                                double* error_model_params,
                                uint8_t num_integrity,
                                Aspn23TypeIntegrity* integrity);

Aspn23MeasurementAltitude* ASPN_NULLABLE
aspn23_measurement_altitude_copy(Aspn23MeasurementAltitude*);

/**
 * free() all memory held by the given Aspn23MeasurementAltitude,
 * including the struct itself.
 *
 * Pointer fields (error_model_params, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_altitude_free(void* pointer);
void aspn23_measurement_altitude_free_members(Aspn23MeasurementAltitude* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
