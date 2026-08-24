
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
 * Defines measurement reference.
 */

enum Aspn23MeasurementPositionReferenceFrame {

	/**
	 * Sensor position relative to the earth-centered, inertial (ECi) frame expressed where term1,
	 * term2, and term3 are the x, y, and z components of ECI position in meters, respectively. Each
	 * term is optional. Error covariance is given using x-axis position error component (meters),
	 * y-axis position error component (meters), and z-axis position error component (meters). In
	 * the case of nulled position components, the corresponding error covariance terms are omitted.
	 * See also ECi coordinate frame definition for x, y, and z definitions.
	 */

	ASPN23_MEASUREMENT_POSITION_REFERENCE_FRAME_ECI,

	/**
	 * Sensor position relative to the WGS-84 reference expressed using term1 as geodetic latitude
	 * in radians, term2 as longitude in radians, and term3 as geodetic altitude (or height above
	 * the WGS-84 ellipsoid) in meters. Each term is optional. Error covariance is given using
	 * north-south position error in meters (an expression of geodetic latitude error), east-west
	 * position error in meters (an expression of longitude error in meters), and geodetic altitude
	 * error in meters. In the case of nulled position components, the corresponding error
	 * covariance terms are omitted.
	 */

	ASPN23_MEASUREMENT_POSITION_REFERENCE_FRAME_GEODETIC
};

/**
 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
 */

enum Aspn23MeasurementPositionErrorModel {

	/**
	 * No additional error model provided (num_error_model_params = 0).
	 */

	ASPN23_MEASUREMENT_POSITION_ERROR_MODEL_NONE
};

/**
 * One, two, or three dimensional position relative to a user-defined reference frame.
 */

typedef struct Aspn23MeasurementPosition {

	/**
	 * Standard ASPN measurement header.
	 */

	Aspn23TypeHeader header;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Defines measurement reference.
	 */

	enum Aspn23MeasurementPositionReferenceFrame reference_frame;

	/**
	 * First position term as defined in enum.
	 *
	 * NaN indicates this optional field is not provided.
	 */

	double term1;

	/**
	 * Second position term as defined in enum.
	 *
	 * NaN indicates this optional field is not provided.
	 */

	double term2;

	/**
	 * Third position term as defined in enum.
	 *
	 * NaN indicates this optional field is not provided.
	 */

	double term3;

	/**
	 * Dimension of measurement provided.
	 */

	uint8_t num_meas;

	/**
	 * Error covariance or variance depending on observation dimension.
	 * Dimensions of covariance must be num_meas²
	 */

	double* covariance;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */

	enum Aspn23MeasurementPositionErrorModel error_model;

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

} Aspn23MeasurementPosition;

Aspn23MeasurementPosition* ASPN_NULLABLE
aspn23_measurement_position_new(Aspn23TypeHeader* header,
                                Aspn23TypeTimestamp* time_of_validity,
                                enum Aspn23MeasurementPositionReferenceFrame reference_frame,
                                double term1,
                                double term2,
                                double term3,
                                uint8_t num_meas,
                                double* covariance,
                                enum Aspn23MeasurementPositionErrorModel error_model,
                                uint16_t num_error_model_params,
                                double* error_model_params,
                                uint8_t num_integrity,
                                Aspn23TypeIntegrity* integrity);

Aspn23MeasurementPosition* ASPN_NULLABLE
aspn23_measurement_position_copy(Aspn23MeasurementPosition*);

/**
 * free() all memory held by the given Aspn23MeasurementPosition,
 * including the struct itself.
 *
 * Pointer fields (error_model_params, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_position_free(void* pointer);
void aspn23_measurement_position_free_members(Aspn23MeasurementPosition* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
