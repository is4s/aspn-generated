
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/TypeSatnavSignalDescriptor.h>

// xtensor
#include <xtensor-python/pytensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * Satellite signal descriptor as defined in RINEX 3.05
 */
class TypeSatnavSignalDescriptor {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	TypeSatnavSignalDescriptor(Aspn23TypeSatnavSignalDescriptor* c_struct,
	                           bool take_ownership = true);

	TypeSatnavSignalDescriptor(Aspn23TypeSatnavSignalDescriptorSignalDescriptor signal_descriptor);

	~TypeSatnavSignalDescriptor();

	TypeSatnavSignalDescriptor(const TypeSatnavSignalDescriptor& other);
	TypeSatnavSignalDescriptor& operator=(const TypeSatnavSignalDescriptor& rhs);

	TypeSatnavSignalDescriptor(TypeSatnavSignalDescriptor&& other);
	TypeSatnavSignalDescriptor& operator=(TypeSatnavSignalDescriptor&& rhs);

	/**
	 * Returns the underlying C struct while retaining ownership of the pointer.  The pointer
	 * is valid so long as this object has not gone out of scope.
	 */
	Aspn23TypeSatnavSignalDescriptor* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23TypeSatnavSignalDescriptor* replacement_struct,
	                  bool take_ownership = true);

	/**
	 * Three letter RINEX Observation Code of signal as given in Table A23 of RINEX 3.05
	 * specification (https://files.igs.org/pub/data/format/rinex305.pdf). RINEX Observation Code
	 * must be paired with Satellite system to determine a unique identifier
	 */
	Aspn23TypeSatnavSignalDescriptorSignalDescriptor get_signal_descriptor() const;

	/**
	 * Three letter RINEX Observation Code of signal as given in Table A23 of RINEX 3.05
	 * specification (https://files.igs.org/pub/data/format/rinex305.pdf). RINEX Observation Code
	 * must be paired with Satellite system to determine a unique identifier
	 */
	void set_signal_descriptor(Aspn23TypeSatnavSignalDescriptorSignalDescriptor);

private:
	Aspn23TypeSatnavSignalDescriptor* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
