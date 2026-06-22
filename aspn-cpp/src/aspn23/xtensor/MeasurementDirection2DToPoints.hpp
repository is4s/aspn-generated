
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/MeasurementDirection2DToPoints.h>

// xtensor
#include <xtensor/containers/xtensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes
#include "TypeHeader.hpp"
#include "TypeTimestamp.hpp"
#include "TypeDirection2DToPoint.hpp"

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * 2D direction to points.
 */
class MeasurementDirection2DToPoints : public TypeHeader {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	MeasurementDirection2DToPoints(Aspn23MeasurementDirection2DToPoints* c_struct,
	                               bool take_ownership = true);

	MeasurementDirection2DToPoints(TypeHeader header,
	                               TypeTimestamp time_of_validity,
	                               std::vector<TypeDirection2DToPoint> obs);

	~MeasurementDirection2DToPoints();

	MeasurementDirection2DToPoints(const MeasurementDirection2DToPoints& other);
	MeasurementDirection2DToPoints& operator=(const MeasurementDirection2DToPoints& rhs);

	MeasurementDirection2DToPoints(MeasurementDirection2DToPoints&& other);
	MeasurementDirection2DToPoints& operator=(MeasurementDirection2DToPoints&& rhs);

	Aspn23MessageType get_message_type() const override;
	void set_message_type(Aspn23MessageType) override;

	uint32_t get_vendor_id() const override;
	void set_vendor_id(uint32_t) override;

	uint64_t get_device_id() const override;
	void set_device_id(uint64_t) override;

	uint32_t get_context_id() const override;
	void set_context_id(uint32_t) override;

	uint16_t get_sequence_id() const override;
	void set_sequence_id(uint16_t) override;

	/**
	 * Returns the underlying C struct while retaining ownership of the pointer.  The pointer
	 * is valid so long as this object has not gone out of scope.
	 */
	Aspn23MeasurementDirection2DToPoints* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23MeasurementDirection2DToPoints* replacement_struct,
	                  bool take_ownership = true);

	/**
	 * Standard ASPN measurement header.
	 */
	TypeHeader get_header() const;

	/**
	 * Standard ASPN measurement header.
	 */
	void set_header(TypeHeader);

	/**
	 * Time at which the measurement is considered to be valid.
	 */
	TypeTimestamp get_time_of_validity() const;

	/**
	 * Time at which the measurement is considered to be valid.
	 */
	void set_time_of_validity(TypeTimestamp);

	/**
	 * Total number of observations.
	 */
	uint16_t get_num_obs() const;

	/**
	 * Array of observations.
	 */
	std::vector<TypeDirection2DToPoint> get_obs() const;

	/**
	 * Array of observations.
	 */
	void set_obs(std::vector<TypeDirection2DToPoint>);

private:
	Aspn23MeasurementDirection2DToPoints* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
