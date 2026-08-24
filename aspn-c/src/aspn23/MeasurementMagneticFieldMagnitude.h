
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

enum Aspn23MeasurementMagneticFieldMagnitudeErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_MEASUREMENT_MAGNETIC_FIELD_MAGNITUDE_ERROR_MODEL_NONE
};

/**
 * Magnetic field magnitude measurement.
 */

typedef struct Aspn23MeasurementMagneticFieldMagnitude {

	/**
	 * Standard ASPN measurement header.
	 */

	Aspn23TypeHeader header;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Field strength magnitude of magnetic field in nanoTesla (nT).
	 */

	double field_strength;

	/**
	 * Magnetic field strength magnitude variance.
	 */

	double variance;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */

	enum Aspn23MeasurementMagneticFieldMagnitudeErrorModel error_model;

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

} Aspn23MeasurementMagneticFieldMagnitude;

Aspn23MeasurementMagneticFieldMagnitude* ASPN_NULLABLE
aspn23_measurement_magnetic_field_magnitude_new(
    Aspn23TypeHeader* header,
    Aspn23TypeTimestamp* time_of_validity,
    double field_strength,
    double variance,
    enum Aspn23MeasurementMagneticFieldMagnitudeErrorModel error_model,
    uint16_t num_error_model_params,
    double* error_model_params,
    uint8_t num_integrity,
    Aspn23TypeIntegrity* integrity);

Aspn23MeasurementMagneticFieldMagnitude* ASPN_NULLABLE
aspn23_measurement_magnetic_field_magnitude_copy(Aspn23MeasurementMagneticFieldMagnitude*);

/**
 * free() all memory held by the given Aspn23MeasurementMagneticFieldMagnitude,
 * including the struct itself.
 *
 * Pointer fields (error_model_params, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_magnetic_field_magnitude_free(void* pointer);
void aspn23_measurement_magnetic_field_magnitude_free_members(
    Aspn23MeasurementMagneticFieldMagnitude* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
