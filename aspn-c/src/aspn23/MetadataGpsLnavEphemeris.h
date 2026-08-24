
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
 * LNAV Ephemeris describing GPS satellite locations. Definitions and usage are covered in
 * ICD-GPS-200L, Section 20.3.3.4 and following.
 */

typedef struct Aspn23MetadataGpsLnavEphemeris {

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

} Aspn23MetadataGpsLnavEphemeris;

Aspn23MetadataGpsLnavEphemeris* ASPN_NULLABLE
aspn23_metadata_gps_lnav_ephemeris_new(Aspn23TypeMetadataheader* info,
                                       Aspn23TypeTimestamp* time_of_validity,
                                       uint16_t week_number,
                                       int32_t prn,
                                       Aspn23TypeSatnavClock* clock,
                                       Aspn23TypeKeplerOrbit* orbit,
                                       double t_gd,
                                       uint16_t iodc,
                                       uint8_t iode);

Aspn23MetadataGpsLnavEphemeris* ASPN_NULLABLE
aspn23_metadata_gps_lnav_ephemeris_copy(Aspn23MetadataGpsLnavEphemeris*);

/**
 * free() all memory held by the given Aspn23MetadataGpsLnavEphemeris,
 * including the struct itself.
 */

void aspn23_metadata_gps_lnav_ephemeris_free(void* pointer);
void aspn23_metadata_gps_lnav_ephemeris_free_members(Aspn23MetadataGpsLnavEphemeris* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
