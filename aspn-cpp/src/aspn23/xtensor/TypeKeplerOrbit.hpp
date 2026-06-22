
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/TypeKeplerOrbit.h>

// xtensor
#include <xtensor/containers/xtensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * Keplerian orbit parameters required to calculate satellite position
 */
class TypeKeplerOrbit {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	TypeKeplerOrbit(Aspn23TypeKeplerOrbit* c_struct, bool take_ownership = true);

	TypeKeplerOrbit(double m_0,
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

	~TypeKeplerOrbit();

	TypeKeplerOrbit(const TypeKeplerOrbit& other);
	TypeKeplerOrbit& operator=(const TypeKeplerOrbit& rhs);

	TypeKeplerOrbit(TypeKeplerOrbit&& other);
	TypeKeplerOrbit& operator=(TypeKeplerOrbit&& rhs);

	/**
	 * Returns the underlying C struct while retaining ownership of the pointer.  The pointer
	 * is valid so long as this object has not gone out of scope.
	 */
	Aspn23TypeKeplerOrbit* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23TypeKeplerOrbit* replacement_struct, bool take_ownership = true);

	/**
	 * Mean anomaly at reference time.
	 */
	double get_m_0() const;

	/**
	 * Mean anomaly at reference time.
	 */
	void set_m_0(double);

	/**
	 * Mean motion difference from computed value.
	 */
	double get_delta_n() const;

	/**
	 * Mean motion difference from computed value.
	 */
	void set_delta_n(double);

	/**
	 * Eccentricity.
	 */
	double get_e() const;

	/**
	 * Eccentricity.
	 */
	void set_e(double);

	/**
	 * Square root of semi-major axis.
	 */
	double get_sqrt_a() const;

	/**
	 * Square root of semi-major axis.
	 */
	void set_sqrt_a(double);

	/**
	 * Longitude of ascending node of orbit plane at weekly epoch
	 */
	double get_omega_0() const;

	/**
	 * Longitude of ascending node of orbit plane at weekly epoch
	 */
	void set_omega_0(double);

	/**
	 * Inclination angle at reference time.
	 */
	double get_i_0() const;

	/**
	 * Inclination angle at reference time.
	 */
	void set_i_0(double);

	/**
	 * Rate of change of inclination angle.
	 */
	double get_i_dot() const;

	/**
	 * Rate of change of inclination angle.
	 */
	void set_i_dot(double);

	/**
	 * Argument of perigee.
	 */
	double get_omega() const;

	/**
	 * Argument of perigee.
	 */
	void set_omega(double);

	/**
	 * Rate of right ascension.
	 */
	double get_omega_dot() const;

	/**
	 * Rate of right ascension.
	 */
	void set_omega_dot(double);

	/**
	 * Amplitude of cosine harmonic correction terms to the argument of latitude.
	 */
	double get_c_uc() const;

	/**
	 * Amplitude of cosine harmonic correction terms to the argument of latitude.
	 */
	void set_c_uc(double);

	/**
	 * Amplitude of sine harmonic correction terms to the argument of latitude.
	 */
	double get_c_us() const;

	/**
	 * Amplitude of sine harmonic correction terms to the argument of latitude.
	 */
	void set_c_us(double);

	/**
	 * Amplitude of cosine harmonic correction terms to the orbit radius.
	 */
	double get_c_rc() const;

	/**
	 * Amplitude of cosine harmonic correction terms to the orbit radius.
	 */
	void set_c_rc(double);

	/**
	 * Amplitude of sine harmonic correction terms to the orbit radius.
	 */
	double get_c_rs() const;

	/**
	 * Amplitude of sine harmonic correction terms to the orbit radius.
	 */
	void set_c_rs(double);

	/**
	 * Amplitude of cosine harmonic correction terms to the angle of inclination.
	 */
	double get_c_ic() const;

	/**
	 * Amplitude of cosine harmonic correction terms to the angle of inclination.
	 */
	void set_c_ic(double);

	/**
	 * Amplitude of sine harmonic correction terms to the angle of inclination.
	 */
	double get_c_is() const;

	/**
	 * Amplitude of sine harmonic correction terms to the angle of inclination.
	 */
	void set_c_is(double);

	/**
	 * Ephemeris reference time.
	 */
	double get_t_oe() const;

	/**
	 * Ephemeris reference time.
	 */
	void set_t_oe(double);

private:
	Aspn23TypeKeplerOrbit* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
