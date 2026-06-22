
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/TypeSatnavClock.h>

// xtensor
#include <xtensor-python/pytensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * satnav broadcast parameters required to calculate sv clock corrections
 */
class TypeSatnavClock {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	TypeSatnavClock(Aspn23TypeSatnavClock* c_struct, bool take_ownership = true);

	TypeSatnavClock(double t_oc, double af_0, double af_1, double af_2);

	~TypeSatnavClock();

	TypeSatnavClock(const TypeSatnavClock& other);
	TypeSatnavClock& operator=(const TypeSatnavClock& rhs);

	TypeSatnavClock(TypeSatnavClock&& other);
	TypeSatnavClock& operator=(TypeSatnavClock&& rhs);

	/**
	 * Returns the underlying C struct while retaining ownership of the pointer.  The pointer
	 * is valid so long as this object has not gone out of scope.
	 */
	Aspn23TypeSatnavClock* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23TypeSatnavClock* replacement_struct, bool take_ownership = true);

	/**
	 * Clock reference time.
	 */
	double get_t_oc() const;

	/**
	 * Clock reference time.
	 */
	void set_t_oc(double);

	/**
	 * Satellite clock bias.
	 */
	double get_af_0() const;

	/**
	 * Satellite clock bias.
	 */
	void set_af_0(double);

	/**
	 * Satellite clock drift.
	 */
	double get_af_1() const;

	/**
	 * Satellite clock drift.
	 */
	void set_af_1(double);

	/**
	 * Satellite clock drift rate.
	 */
	double get_af_2() const;

	/**
	 * Satellite clock drift rate.
	 */
	void set_af_2(double);

private:
	Aspn23TypeSatnavClock* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
