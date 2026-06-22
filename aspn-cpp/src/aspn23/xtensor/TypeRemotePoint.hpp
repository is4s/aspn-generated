
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/TypeRemotePoint.h>

// xtensor
#include <xtensor/containers/xtensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * ASPN custom type representing a point. This includes optional information
 * (indicated by included_terms) for the position and a correspondence ID for the
 * point.
 */
class TypeRemotePoint {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	TypeRemotePoint(Aspn23TypeRemotePoint* c_struct, bool take_ownership = true);

	TypeRemotePoint(uint8_t included_terms,
	                uint32_t id,
	                Aspn23TypeRemotePointPositionReferenceFrame position_reference_frame,
	                double position1,
	                double position2,
	                double position3,
	                xt::xtensor<double, 2> position_covariance);

	~TypeRemotePoint();

	TypeRemotePoint(const TypeRemotePoint& other);
	TypeRemotePoint& operator=(const TypeRemotePoint& rhs);

	TypeRemotePoint(TypeRemotePoint&& other);
	TypeRemotePoint& operator=(TypeRemotePoint&& rhs);

	/**
	 * Returns the underlying C struct while retaining ownership of the pointer.  The pointer
	 * is valid so long as this object has not gone out of scope.
	 */
	Aspn23TypeRemotePoint* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23TypeRemotePoint* replacement_struct, bool take_ownership = true);

	/**
	 * Indicates which information is included about the point
	 * 0 = no information included (unknown point)
	 * 1 = id included (corresponded point)
	 * 2 = position included (known point)
	 * 3 = id and position included
	 */
	uint8_t get_included_terms() const;

	/**
	 * Indicates which information is included about the point
	 * 0 = no information included (unknown point)
	 * 1 = id included (corresponded point)
	 * 2 = position included (known point)
	 * 3 = id and position included
	 */
	void set_included_terms(uint8_t);

	/**
	 * Unique identification number assigned by the sensor. Points that have the same id from a
	 * sensor are multiple instances of the same point as determined by a sensor's point
	 * correspondence.
	 */
	uint32_t get_id() const;

	/**
	 * Unique identification number assigned by the sensor. Points that have the same id from a
	 * sensor are multiple instances of the same point as determined by a sensor's point
	 * correspondence.
	 */
	void set_id(uint32_t);

	/**
	 * Defines position reference.
	 */
	Aspn23TypeRemotePointPositionReferenceFrame get_position_reference_frame() const;

	/**
	 * Defines position reference.
	 */
	void set_position_reference_frame(Aspn23TypeRemotePointPositionReferenceFrame);

	/**
	 * First position term as defined in position_reference_frame.
	 */
	double get_position1() const;

	/**
	 * First position term as defined in position_reference_frame.
	 */
	void set_position1(double);

	/**
	 * Second position term as defined in position_reference_frame.
	 */
	double get_position2() const;

	/**
	 * Second position term as defined in position_reference_frame.
	 */
	void set_position2(double);

	/**
	 * Third position term as defined in position_reference_frame.
	 */
	double get_position3() const;

	/**
	 * Third position term as defined in position_reference_frame.
	 */
	void set_position3(double);

	/**
	 * Dimension of position provided.
	 */
	uint8_t get_num_position_components() const;

	/**
	 * Position error covariance (or variance depending on num_position_components) as defined in
	 * position_reference_frame.
	 */
	xt::xtensor<double, 2> get_position_covariance() const;

	/**
	 * Position error covariance (or variance depending on num_position_components) as defined in
	 * position_reference_frame.
	 */
	void set_position_covariance(xt::xtensor<double, 2>);

private:
	Aspn23TypeRemotePoint* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
