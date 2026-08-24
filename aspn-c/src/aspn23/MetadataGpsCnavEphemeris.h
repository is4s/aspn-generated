
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"
#include "TypeMetadataheader.h"
#include "TypeTimestamp.h"
#include "TypeSatnavClock.h"
#include "TypeKeplerOrbit.h"
#ifdef __cplusplus
extern "C" {
#endif
ASPN_ASSUME_NONNULL_BEGIN

/**
 * CNAV Ephemeris describing GPS satellite locations. Definitions and usage are covered in
 * ICD-GPS-200L, Section 20.3.3.4 and following.
 */

typedef struct Aspn23MetadataGpsCnavEphemeris {

	/**
	 * Standard ASPN metadata header.
	 */

	Aspn23TypeMetadataheader info;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Full GPS week number calculated from the Modulo 1024 WN in Subframe 1 and the number of GPS
	 * week rollovers
	 */

	uint16_t week_number;

	/**
	 * Satellite PRN number.
	 */

	int32_t prn;

	/**
	 * GNSS broadcast parameters required to calculate sv clock corrections.
	 */

	Aspn23TypeSatnavClock clock;

	/**
	 * Keplerian orbit parameters required to calculate satellite position.
	 */

	Aspn23TypeKeplerOrbit orbit;

	/**
	 * Group delay differential between L1 and L2.
	 */

	double t_gd;

	/**
	 * Issue of Data Clock. 10 bit value from Subframe 1
	 */

	uint16_t iodc;

	/**
	 * Issue of Data Ephemeris. 8 bits repeated in Subframe 2 and Subframe 3. Should match the 8
	 * LSBs of the IODC.
	 */

	uint8_t iode;

	/**
	 * L1 P(Y) to L1 C/A inter-signal correction.
	 */

	double isc_l1_ca;

	/**
	 * L1 P(Y) to L2C inter-signal correction.
	 */

	double isc_l2_c;

	/**
	 * L1 P(Y) to L5 I5 inter-signal correction.
	 */

	double isc_l5_i5;

	/**
	 * L1 P(Y) to L5 Q5 inter-signal correction.
	 */

	double isc_l5_q5;

	/**
	 * Semi-major axis difference at reference time.
	 */

	double delta_a_0;

	/**
	 * Change rate of semi-major axis.
	 */

	double a_dot;

} Aspn23MetadataGpsCnavEphemeris;

Aspn23MetadataGpsCnavEphemeris* ASPN_NULLABLE
aspn23_metadata_gps_cnav_ephemeris_new(Aspn23TypeMetadataheader* info,
                                       Aspn23TypeTimestamp* time_of_validity,
                                       uint16_t week_number,
                                       int32_t prn,
                                       Aspn23TypeSatnavClock* clock,
                                       Aspn23TypeKeplerOrbit* orbit,
                                       double t_gd,
                                       uint16_t iodc,
                                       uint8_t iode,
                                       double isc_l1_ca,
                                       double isc_l2_c,
                                       double isc_l5_i5,
                                       double isc_l5_q5,
                                       double delta_a_0,
                                       double a_dot);

Aspn23MetadataGpsCnavEphemeris* ASPN_NULLABLE
aspn23_metadata_gps_cnav_ephemeris_copy(Aspn23MetadataGpsCnavEphemeris*);

/**
 * free() all memory held by the given Aspn23MetadataGpsCnavEphemeris,
 * including the struct itself.
 */

void aspn23_metadata_gps_cnav_ephemeris_free(void* pointer);
void aspn23_metadata_gps_cnav_ephemeris_free_members(Aspn23MetadataGpsCnavEphemeris* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
