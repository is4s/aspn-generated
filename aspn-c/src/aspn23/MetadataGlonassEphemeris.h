
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
 * GLONASS Ephemeris describing GLONASS satellite locations. Definitions and usage are covered in
 * GLONASS ICD L1,L2 - Edition 5.1 2008, Section 4.4.
 */

typedef struct Aspn23MetadataGlonassEphemeris {

	/**
	 * Standard ASPN metadata header.
	 */

	Aspn23TypeMetadataheader info;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * GLONASS satellite slot number.
	 */

	int32_t slot_number;

	/**
	 * Frequency channel offset number in range from 0 to 20.
	 */

	int32_t freq_o;

	/**
	 * Calender number of day within 4 year interval starting at Jan 1 of a leap year
	 */

	int32_t n_t;

	/**
	 * Time referenced to the beginning of the frame within the current day.
	 */

	double t_k;

	/**
	 * Index of time interval within current day according to UTC(SU) + 03 hrs.
	 */

	double t_b;

	/**
	 * Relative Satellite frequency bias
	 */

	double gamma_n;

	/**
	 * Satellite clock bias.
	 */

	double tau_n;

	/**
	 * Satellite X position in PZ-90 coordinate system at time t_b.
	 */

	double sv_pos_x;

	/**
	 * Satellite X velocity in PZ-90 coordinate system at time t_b.
	 */

	double sv_vel_x;

	/**
	 * Satellite X acceleration in PZ-90 coordinate system at time t_b.
	 */

	double sv_accel_x;

	/**
	 * Satellite Y position in PZ-90 coordinate system at time t_b.
	 */

	double sv_pos_y;

	/**
	 * Satellite Y velocity in PZ-90 coordinate system at time t_b.
	 */

	double sv_vel_y;

	/**
	 * Satellite Y acceleration in PZ-90 coordinate system at time t_b.
	 */

	double sv_accel_y;

	/**
	 * Satellite Z position in PZ-90 coordinate system at time t_b.
	 */

	double sv_pos_z;

	/**
	 * Satellite Z velocity in PZ-90 coordinate system at time t_b.
	 */

	double sv_vel_z;

	/**
	 * Satellite Z acceleration in PZ-90 coordinate system at time t_b.
	 */

	double sv_accel_z;

} Aspn23MetadataGlonassEphemeris;

Aspn23MetadataGlonassEphemeris* ASPN_NULLABLE
aspn23_metadata_glonass_ephemeris_new(Aspn23TypeMetadataheader* info,
                                      Aspn23TypeTimestamp* time_of_validity,
                                      int32_t slot_number,
                                      int32_t freq_o,
                                      int32_t n_t,
                                      double t_k,
                                      double t_b,
                                      double gamma_n,
                                      double tau_n,
                                      double sv_pos_x,
                                      double sv_vel_x,
                                      double sv_accel_x,
                                      double sv_pos_y,
                                      double sv_vel_y,
                                      double sv_accel_y,
                                      double sv_pos_z,
                                      double sv_vel_z,
                                      double sv_accel_z);

Aspn23MetadataGlonassEphemeris* ASPN_NULLABLE
aspn23_metadata_glonass_ephemeris_copy(Aspn23MetadataGlonassEphemeris*);

/**
 * free() all memory held by the given Aspn23MetadataGlonassEphemeris,
 * including the struct itself.
 */

void aspn23_metadata_glonass_ephemeris_free(void* pointer);
void aspn23_metadata_glonass_ephemeris_free_members(Aspn23MetadataGlonassEphemeris* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
