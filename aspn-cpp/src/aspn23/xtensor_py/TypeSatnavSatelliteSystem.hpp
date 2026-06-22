
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/TypeSatnavSatelliteSystem.h>

// xtensor
#include <xtensor-python/pytensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * Satellite system name
 */
class TypeSatnavSatelliteSystem {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	TypeSatnavSatelliteSystem(Aspn23TypeSatnavSatelliteSystem* c_struct,
	                          bool take_ownership = true);

	TypeSatnavSatelliteSystem(Aspn23TypeSatnavSatelliteSystemSatelliteSystem satellite_system);

	~TypeSatnavSatelliteSystem();

	TypeSatnavSatelliteSystem(const TypeSatnavSatelliteSystem& other);
	TypeSatnavSatelliteSystem& operator=(const TypeSatnavSatelliteSystem& rhs);

	TypeSatnavSatelliteSystem(TypeSatnavSatelliteSystem&& other);
	TypeSatnavSatelliteSystem& operator=(TypeSatnavSatelliteSystem&& rhs);

	/**
	 * Returns the underlying C struct while retaining ownership of the pointer.  The pointer
	 * is valid so long as this object has not gone out of scope.
	 */
	Aspn23TypeSatnavSatelliteSystem* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23TypeSatnavSatelliteSystem* replacement_struct,
	                  bool take_ownership = true);

	/**
	 * Enumerated field which describes the Satellite System.
	 */
	Aspn23TypeSatnavSatelliteSystemSatelliteSystem get_satellite_system() const;

	/**
	 * Enumerated field which describes the Satellite System.
	 */
	void set_satellite_system(Aspn23TypeSatnavSatelliteSystemSatelliteSystem);

private:
	Aspn23TypeSatnavSatelliteSystem* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
