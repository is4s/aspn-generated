
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
 * Specifies measurement reference.
 */

enum Aspn23MeasurementDirectionOfMotion2DReference {

	/**
	 * Direction of motion expressed in the two-dimensional North-East plane of the locally level
	 * NED frame as the angle between the N-axis and the direction of motion. Positive angle is
	 * defined as a rotation towards the E-axis. See also NED coordinate frame definition for N, E,
	 * and D definitions.
	 */

	ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_NE,

	/**
	 * Direction of motion expressed in the two-dimensional North-Down plane of the locally level
	 * NED frame as the angle between the N-axis and the direction of motion. Positive angle is
	 * defined as a rotation towards the D-axis. See also NED coordinate frame definition for N, E,
	 * and D definitions.
	 */

	ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_ND,

	/**
	 * Direction of motion expressed in the two-dimensional East-Down plane of the locally level NED
	 * frame as the angle between the E-axis and the direction of motion. Positive angle is defined
	 * as a rotation towards the D-axis. See also NED coordinate frame definition for N, E, and D
	 * definitions.
	 */

	ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_ED,

	/**
	 * Direction of motion expressed in the sensor frame as the angle between the sensor frame
	 * x-axis and the direction of motion. Positive angle is defined as a rotation towards the
	 * sensor frame y-axis. (Sensor frame is two dimensional, x and y, as defined in mounting.)
	 */

	ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_SENSOR
};

/**
 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
 */

enum Aspn23MeasurementDirectionOfMotion2DErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D_ERROR_MODEL_NONE
};

/**
 * Direction of motion represented in a two-dimensional reference frame as defined by the enum.
 */

typedef struct Aspn23MeasurementDirectionOfMotion2D {

	/**
	 * Standard ASPN measurement header.
	 */

	Aspn23TypeHeader header;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Specifies measurement reference.
	 */

	enum Aspn23MeasurementDirectionOfMotion2DReference reference;

	/**
	 * Observations as specified in the reference enum.
	 */

	double obs;

	/**
	 * Measurement error variance.
	 */

	double variance;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */

	enum Aspn23MeasurementDirectionOfMotion2DErrorModel error_model;

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

} Aspn23MeasurementDirectionOfMotion2D;

Aspn23MeasurementDirectionOfMotion2D* ASPN_NULLABLE aspn23_measurement_direction_of_motion_2d_new(
    Aspn23TypeHeader* header,
    Aspn23TypeTimestamp* time_of_validity,
    enum Aspn23MeasurementDirectionOfMotion2DReference reference,
    double obs,
    double variance,
    enum Aspn23MeasurementDirectionOfMotion2DErrorModel error_model,
    uint16_t num_error_model_params,
    double* error_model_params,
    uint8_t num_integrity,
    Aspn23TypeIntegrity* integrity);

Aspn23MeasurementDirectionOfMotion2D* ASPN_NULLABLE
aspn23_measurement_direction_of_motion_2d_copy(Aspn23MeasurementDirectionOfMotion2D*);

/**
 * free() all memory held by the given Aspn23MeasurementDirectionOfMotion2D,
 * including the struct itself.
 *
 * Pointer fields (error_model_params, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_direction_of_motion_2d_free(void* pointer);
void aspn23_measurement_direction_of_motion_2d_free_members(
    Aspn23MeasurementDirectionOfMotion2D* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
