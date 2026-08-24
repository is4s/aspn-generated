
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"
#include "TypeMetadataheader.h"
#include "TypeTimestamp.h"
#ifdef __cplusplus
extern "C" {
#endif
ASPN_ASSUME_NONNULL_BEGIN

/**
 * Broadcasted GPS navigation data for estimation of single frequency ionospheric correction and
 * determination of UTC. Definitions and usage are covered in ICD-GPS-200L, Section 20.3.3.5.1.6 and
 * 20.3.3.5.1.7.
 */

typedef struct Aspn23MetadataGpsIonoUtcParameters {

	/**
	 * Standard ASPN metadata header.
	 */

	Aspn23TypeMetadataheader info;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Bias coefficient of GPS time scale relative to UTC time scale.
	 */

	double a_0;

	/**
	 * Drift coefficient of GPS time scale relative to UTC time scale.
	 */

	double a_1;

	/**
	 * Leap second count.
	 */

	int8_t delta_t_ls;

	/**
	 * Reference GPS time of week for UTC parameters
	 */

	uint32_t tot;

	/**
	 * Reference Modulo 256 GPS Week number for UTC parameters
	 */

	uint8_t wn_t;

	/**
	 * Modulo 256 GPS Week number at the end of which delta_t_lsf becomes effective.
	 */

	uint8_t wn_lsf;

	/**
	 * Day number at the end of which delta_t_lsf becomes effective (1 to 7).
	 */

	uint8_t dn;

	/**
	 * Future leap second count.
	 */

	int8_t delta_t_lsf;

	/**
	 * Zeroth-order coefficient of amplitude of vertical ionospheric delay.
	 */

	double alpha_0;

	/**
	 * First-order coefficient of amplitude of vertical ionospheric delay.
	 */

	double alpha_1;

	/**
	 * Second-order coefficient of amplitude of vertical ionospheric delay.
	 */

	double alpha_2;

	/**
	 * Third-order coefficient of amplitude of vertical ionospheric delay.
	 */

	double alpha_3;

	/**
	 * Zeroth-order coefficient of period of ionospheric delay model.
	 */

	double beta_0;

	/**
	 * First-order coefficient of period of ionospheric delay model.
	 */

	double beta_1;

	/**
	 * Second-order coefficient of period of ionospheric delay model.
	 */

	double beta_2;

	/**
	 * Third-order coefficient of period of ionospheric delay model.
	 */

	double beta_3;

} Aspn23MetadataGpsIonoUtcParameters;

Aspn23MetadataGpsIonoUtcParameters* ASPN_NULLABLE
aspn23_metadata_gps_iono_utc_parameters_new(Aspn23TypeMetadataheader* info,
                                            Aspn23TypeTimestamp* time_of_validity,
                                            double a_0,
                                            double a_1,
                                            int8_t delta_t_ls,
                                            uint32_t tot,
                                            uint8_t wn_t,
                                            uint8_t wn_lsf,
                                            uint8_t dn,
                                            int8_t delta_t_lsf,
                                            double alpha_0,
                                            double alpha_1,
                                            double alpha_2,
                                            double alpha_3,
                                            double beta_0,
                                            double beta_1,
                                            double beta_2,
                                            double beta_3);

Aspn23MetadataGpsIonoUtcParameters* ASPN_NULLABLE
aspn23_metadata_gps_iono_utc_parameters_copy(Aspn23MetadataGpsIonoUtcParameters*);

/**
 * free() all memory held by the given Aspn23MetadataGpsIonoUtcParameters,
 * including the struct itself.
 */

void aspn23_metadata_gps_iono_utc_parameters_free(void* pointer);
void aspn23_metadata_gps_iono_utc_parameters_free_members(Aspn23MetadataGpsIonoUtcParameters* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
