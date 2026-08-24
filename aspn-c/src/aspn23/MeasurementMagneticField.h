
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

enum Aspn23MeasurementMagneticFieldErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_MEASUREMENT_MAGNETIC_FIELD_ERROR_MODEL_NONE
};

/**
 * Vector magnetic field. Represents the magnetic field strength along sensor x, y, and z axes as
 * defined in mounting. May represent 1-D, 2-D, or 3-D measurement
 */

typedef struct Aspn23MeasurementMagneticField {

	/**
	 * Standard ASPN measurement header.
	 */

	Aspn23TypeHeader header;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Dimension of measurement provided. May be 1, 2, or 3.
	 */

	uint8_t num_meas;

	/**
	 * Field strength of magnetic field in nanoTesla (nT).
	 *
	 * NaN indicates this optional field is not provided.
	 */

	double x_field_strength;

	/**
	 * Field strength of magnetic field in nanoTesla (nT).
	 *
	 * NaN indicates this optional field is not provided.
	 */

	double y_field_strength;

	/**
	 * Field strength of magnetic field in nanoTesla (nT).
	 *
	 * NaN indicates this optional field is not provided.
	 */

	double z_field_strength;

	/**
	 * Measurement error variance or covariance depending on measurement dimension.
	 * Dimensions of covariance must be num_meas²
	 */

	double* covariance;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */

	enum Aspn23MeasurementMagneticFieldErrorModel error_model;

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

} Aspn23MeasurementMagneticField;

Aspn23MeasurementMagneticField* ASPN_NULLABLE
aspn23_measurement_magnetic_field_new(Aspn23TypeHeader* header,
                                      Aspn23TypeTimestamp* time_of_validity,
                                      uint8_t num_meas,
                                      double x_field_strength,
                                      double y_field_strength,
                                      double z_field_strength,
                                      double* covariance,
                                      enum Aspn23MeasurementMagneticFieldErrorModel error_model,
                                      uint16_t num_error_model_params,
                                      double* error_model_params,
                                      uint8_t num_integrity,
                                      Aspn23TypeIntegrity* integrity);

Aspn23MeasurementMagneticField* ASPN_NULLABLE
aspn23_measurement_magnetic_field_copy(Aspn23MeasurementMagneticField*);

/**
 * free() all memory held by the given Aspn23MeasurementMagneticField,
 * including the struct itself.
 *
 * Pointer fields (error_model_params, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_magnetic_field_free(void* pointer);
void aspn23_measurement_magnetic_field_free_members(Aspn23MeasurementMagneticField* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
