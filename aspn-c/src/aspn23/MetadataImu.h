
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"
#include "TypeMetadataheader.h"
#include "TypeTimestamp.h"
#include "TypeMounting.h"
#ifdef __cplusplus
extern "C" {
#endif
ASPN_ASSUME_NONNULL_BEGIN

/**
 * Allows the user to select an appropriate error model. Parameters are defined here. The number of
 * parameters and the values for those parameters are included in subsequent fields.
 */

enum Aspn23MetadataImuErrorModel {

	/**
	 * All axes are identical and uncorrelated with each other axis (num_error_model_params = 14).
	 * 1) accel_bias_sigma, units: m/s/s, description: Standard deviation of constant bias for
	 * accelerometer measurements.
	 * 2) accel_bias_mean, units: m/s/s, description: Mean of constant bias for accelerometer
	 * measurements.
	 * 3) accel_time_correlated_bias_sigma, units: m/s/s, description: Standard deviation of
	 * zero-mean time-correlated bias for accelerometer measurement.
	 * 4) accel_time_correlated_bias_time_constant, units: s, description: Time constant of
	 * zero-mean time-correlated bias for accelerometer measurement.
	 * 5) accel_scale_factor_mean, units: ppm, description: Mean of accelerometer scale factor
	 * modeled as a constant with Gaussian uncertainty.
	 * 6) accel_scale_factor_sigma, units: ppm, description: Standard deviation of accelerometer
	 * scale factor modeled as a constant with Gaussian uncertainty.
	 * 7) velocity_random_walk, units: m/s/sqrt(s), description: Velocity random walk due to
	 * acceleration.
	 * 8) gyro_bias_sigma, units: rad/s, description: Standard deviation of constant bias for gyro
	 * measurements.
	 * 9) gyro_bias_mean, units: rad/s, description: Mean of constant bias for gyro measurements.
	 * 10) gyro_time_correlated_bias_sigma, units: rad/s, description: Standard deviation of
	 * zero-mean time-correlated bias for gyro measurements.
	 * 11) gyro_time_correlated_bias_time_constant, units: s, description: Time constant of
	 * zero-mean time-correlated bias for gyro measurements.
	 * 12) gyro_scale_factor_mean, units: ppm, description: Mean of gyro scale factor modeled as a
	 * constant with Gaussian uncertainty.
	 * 13) gyro_scale_factor_sigma, units: ppm, description: Standard deviation of gyro scale
	 * factor modeled as a constant with Gaussian uncertainty.
	 * 14) angular_random_walk, units: rad/sqrt(s), description: Angular random walk due to gyros.
	 */

	ASPN23_METADATA_IMU_ERROR_MODEL_BASIC
};

/**
 * Metadata for inertial measurement unit.
 */

typedef struct Aspn23MetadataImu {

	/**
	 * Standard ASPN metadata header.
	 */

	Aspn23TypeMetadataheader info;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Standard ASPN mounting information.
	 */

	Aspn23TypeMounting mounting;

	/**
	 * Allows the user to select an appropriate error model. Parameters are defined here. The number
	 * of parameters and the values for those parameters are included in subsequent fields.
	 */

	enum Aspn23MetadataImuErrorModel error_model;

	/**
	 * Number of parameters required for the error model chosen.
	 */

	uint16_t num_error_model_params;

	/**
	 * Error model parameters that characterize the optional error model.
	 */

	double* error_model_params;

} Aspn23MetadataImu;

Aspn23MetadataImu* ASPN_NULLABLE
aspn23_metadata_imu_new(Aspn23TypeMetadataheader* info,
                        Aspn23TypeTimestamp* time_of_validity,
                        Aspn23TypeMounting* mounting,
                        enum Aspn23MetadataImuErrorModel error_model,
                        uint16_t num_error_model_params,
                        double* error_model_params);

Aspn23MetadataImu* ASPN_NULLABLE aspn23_metadata_imu_copy(Aspn23MetadataImu*);

/**
 * free() all memory held by the given Aspn23MetadataImu,
 * including the struct itself.
 *
 * Pointer fields (error_model_params) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_metadata_imu_free(void* pointer);
void aspn23_metadata_imu_free_members(Aspn23MetadataImu* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
