
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif
ASPN_ASSUME_NONNULL_BEGIN

/**
 * Keplerian orbit parameters required to calculate satellite position
 */

typedef struct Aspn23TypeKeplerOrbit {

	/**
	 * Mean anomaly at reference time.
	 */

	double m_0;

	/**
	 * Mean motion difference from computed value.
	 */

	double delta_n;

	/**
	 * Eccentricity.
	 */

	double e;

	/**
	 * Square root of semi-major axis.
	 */

	double sqrt_a;

	/**
	 * Longitude of ascending node of orbit plane at weekly epoch
	 */

	double omega_0;

	/**
	 * Inclination angle at reference time.
	 */

	double i_0;

	/**
	 * Rate of change of inclination angle.
	 */

	double i_dot;

	/**
	 * Argument of perigee.
	 */

	double omega;

	/**
	 * Rate of right ascension.
	 */

	double omega_dot;

	/**
	 * Amplitude of cosine harmonic correction terms to the argument of latitude.
	 */

	double c_uc;

	/**
	 * Amplitude of sine harmonic correction terms to the argument of latitude.
	 */

	double c_us;

	/**
	 * Amplitude of cosine harmonic correction terms to the orbit radius.
	 */

	double c_rc;

	/**
	 * Amplitude of sine harmonic correction terms to the orbit radius.
	 */

	double c_rs;

	/**
	 * Amplitude of cosine harmonic correction terms to the angle of inclination.
	 */

	double c_ic;

	/**
	 * Amplitude of sine harmonic correction terms to the angle of inclination.
	 */

	double c_is;

	/**
	 * Ephemeris reference time.
	 */

	double t_oe;

} Aspn23TypeKeplerOrbit;

Aspn23TypeKeplerOrbit* ASPN_NULLABLE aspn23_type_kepler_orbit_new(double m_0,
                                                                  double delta_n,
                                                                  double e,
                                                                  double sqrt_a,
                                                                  double omega_0,
                                                                  double i_0,
                                                                  double i_dot,
                                                                  double omega,
                                                                  double omega_dot,
                                                                  double c_uc,
                                                                  double c_us,
                                                                  double c_rc,
                                                                  double c_rs,
                                                                  double c_ic,
                                                                  double c_is,
                                                                  double t_oe);

Aspn23TypeKeplerOrbit* ASPN_NULLABLE aspn23_type_kepler_orbit_copy(Aspn23TypeKeplerOrbit*);

/**
 * free() all memory held by the given Aspn23TypeKeplerOrbit,
 * including the struct itself.
 */

void aspn23_type_kepler_orbit_free(void* pointer);
void aspn23_type_kepler_orbit_free_members(Aspn23TypeKeplerOrbit* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
