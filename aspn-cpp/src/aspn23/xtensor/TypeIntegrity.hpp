
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/TypeIntegrity.h>

// xtensor
#include <xtensor/containers/xtensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * Integrity provides a numerical measure of the trustworthiness of the associated measurement. The
 * integrity_method enum specifies the integrity method and the appropriate interpretation of the
 * integrity_value.
 */
class TypeIntegrity {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	TypeIntegrity(Aspn23TypeIntegrity* c_struct, bool take_ownership = true);

	TypeIntegrity(Aspn23TypeIntegrityIntegrityMethod integrity_method, double integrity_value);

	~TypeIntegrity();

	TypeIntegrity(const TypeIntegrity& other);
	TypeIntegrity& operator=(const TypeIntegrity& rhs);

	TypeIntegrity(TypeIntegrity&& other);
	TypeIntegrity& operator=(TypeIntegrity&& rhs);

	/**
	 * Returns the underlying C struct while retaining ownership of the pointer.  The pointer
	 * is valid so long as this object has not gone out of scope.
	 */
	Aspn23TypeIntegrity* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23TypeIntegrity* replacement_struct, bool take_ownership = true);

	/**
	 * Enumerated field which describes the meaning of the integrity value. Integrity methods may
	 * use multiple enum entries if there is a need to pass multiple integrity values. For example,
	 * an integrity method with 3 parameters may use 3 enum entries (e.g., MY_METHOD_VALUE1,
	 * MY_METHOD_VALUE2, MY_METHOD_VALUE3). When integrity is reported in a message, a vector of
	 * integrity types is passed. In the MY_METHOD example, num_integrity = 3 just for the MY_METHOD
	 * integrity. If additional integrity methods are also reported, then num_integrity would be
	 * greater than 3 to include those additional methods.
	 */
	Aspn23TypeIntegrityIntegrityMethod get_integrity_method() const;

	/**
	 * Enumerated field which describes the meaning of the integrity value. Integrity methods may
	 * use multiple enum entries if there is a need to pass multiple integrity values. For example,
	 * an integrity method with 3 parameters may use 3 enum entries (e.g., MY_METHOD_VALUE1,
	 * MY_METHOD_VALUE2, MY_METHOD_VALUE3). When integrity is reported in a message, a vector of
	 * integrity types is passed. In the MY_METHOD example, num_integrity = 3 just for the MY_METHOD
	 * integrity. If additional integrity methods are also reported, then num_integrity would be
	 * greater than 3 to include those additional methods.
	 */
	void set_integrity_method(Aspn23TypeIntegrityIntegrityMethod);

	/**
	 * Measurement integrity value to be interpreted based on the definition in the integrity_type
	 * enum.
	 */
	double get_integrity_value() const;

	/**
	 * Measurement integrity value to be interpreted based on the definition in the integrity_type
	 * enum.
	 */
	void set_integrity_value(double);

private:
	Aspn23TypeIntegrity* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
