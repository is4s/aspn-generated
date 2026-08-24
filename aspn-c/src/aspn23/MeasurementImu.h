
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
 * IMU type
 */

enum Aspn23MeasurementImuImuType {

	/**
	 * delta velocity and delta rotation measurements from the device's three axis accelerometers
	 * and three axis gyroscopes. Specific force integrated over last measurement period expressed
	 * as delta_v array in m/s. Angular rate integrated over last measurement period expressed as
	 * delta_theta array in radians. Time of validity is the end of integration period. Integration
	 * period is from previous measurement to the current measurement.
	 */

	ASPN23_MEASUREMENT_IMU_IMU_TYPE_INTEGRATED,

	/**
	 * sampled specific force and rotation rates from the device's three axis accelerometers and
	 * three axis gyroscopes. Specific force is sampled expressed as an array in m/s/s. Angular rate
	 * is sampled and expressed as an array in rad/s.
	 */

	ASPN23_MEASUREMENT_IMU_IMU_TYPE_SAMPLED
};

/**
 * Inertial Measurement Unit (IMU) measurements from the device's three axis accelerometers and
 * three axis gyroscopes.
 */

typedef struct Aspn23MeasurementImu {

	/**
	 * Standard ASPN measurement header.
	 */

	Aspn23TypeHeader header;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * IMU type
	 */

	enum Aspn23MeasurementImuImuType imu_type;

	/**
	 * Accelerometer (specific force) measurements in 3 axes per enumerated definition.
	 */

	double meas_accel[3];

	/**
	 * Gyroscope measurements in 3 axes per enumerated definition.
	 */

	double meas_gyro[3];

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

} Aspn23MeasurementImu;

Aspn23MeasurementImu* ASPN_NULLABLE
aspn23_measurement_imu_new(Aspn23TypeHeader* header,
                           Aspn23TypeTimestamp* time_of_validity,
                           enum Aspn23MeasurementImuImuType imu_type,
                           double meas_accel[3],
                           double meas_gyro[3],
                           uint8_t num_integrity,
                           Aspn23TypeIntegrity* integrity);

Aspn23MeasurementImu* ASPN_NULLABLE aspn23_measurement_imu_copy(Aspn23MeasurementImu*);

/**
 * free() all memory held by the given Aspn23MeasurementImu,
 * including the struct itself.
 *
 * Pointer fields (integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_imu_free(void* pointer);
void aspn23_measurement_imu_free_members(Aspn23MeasurementImu* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
