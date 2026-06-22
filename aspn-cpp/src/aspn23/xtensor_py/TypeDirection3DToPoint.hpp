
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/TypeDirection3DToPoint.h>

// xtensor
#include <xtensor-python/pytensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes
#include "TypeRemotePoint.hpp"
#include "TypeImageFeature.hpp"
#include "TypeIntegrity.hpp"

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * 3D direction to or from a point as defined by the reference enum. Information about the remote
 * point (its position and/or correspondence with previous or future appearances
 * of this same point) may be determined using remote_point.
 */
class TypeDirection3DToPoint {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	TypeDirection3DToPoint(Aspn23TypeDirection3DToPoint* c_struct, bool take_ownership = true);

	TypeDirection3DToPoint(TypeRemotePoint remote_point,
	                       Aspn23TypeDirection3DToPointReferenceFrame reference_frame,
	                       xt::pytensor<double, 1> obs,
	                       xt::pytensor<double, 2> covariance,
	                       bool has_observation_characteristics,
	                       TypeImageFeature observation_characteristics,
	                       Aspn23TypeDirection3DToPointErrorModel error_model,
	                       xt::pytensor<double, 1> error_model_params,
	                       std::vector<TypeIntegrity> integrity);

	~TypeDirection3DToPoint();

	TypeDirection3DToPoint(const TypeDirection3DToPoint& other);
	TypeDirection3DToPoint& operator=(const TypeDirection3DToPoint& rhs);

	TypeDirection3DToPoint(TypeDirection3DToPoint&& other);
	TypeDirection3DToPoint& operator=(TypeDirection3DToPoint&& rhs);

	/**
	 * Returns the underlying C struct while retaining ownership of the pointer.  The pointer
	 * is valid so long as this object has not gone out of scope.
	 */
	Aspn23TypeDirection3DToPoint* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23TypeDirection3DToPoint* replacement_struct, bool take_ownership = true);

	/**
	 * Position and/or correspondence information about the remote point.
	 */
	TypeRemotePoint get_remote_point() const;

	/**
	 * Position and/or correspondence information about the remote point.
	 */
	void set_remote_point(TypeRemotePoint);

	/**
	 * Defines measurement reference frame.
	 */
	Aspn23TypeDirection3DToPointReferenceFrame get_reference_frame() const;

	/**
	 * Defines measurement reference frame.
	 */
	void set_reference_frame(Aspn23TypeDirection3DToPointReferenceFrame);

	/**
	 * 3D direction to the remote point as defined in reference_frame.
	 */
	xt::pytensor<double, 1> get_obs() const;

	/**
	 * 3D direction to the remote point as defined in reference_frame.
	 */
	void set_obs(xt::pytensor<double, 1>);

	/**
	 * Covariance of the direction measurement as defined in reference_frame.
	 */
	xt::pytensor<double, 2> get_covariance() const;

	/**
	 * Covariance of the direction measurement as defined in reference_frame.
	 */
	void set_covariance(xt::pytensor<double, 2>);

	/**
	 * Switch for whether observation_characteristics is valid or not.
	 */
	bool get_has_observation_characteristics() const;

	/**
	 * Switch for whether observation_characteristics is valid or not.
	 */
	void set_has_observation_characteristics(bool);

	/**
	 * Image feature characteristics.
	 */
	TypeImageFeature get_observation_characteristics() const;

	/**
	 * Image feature characteristics.
	 */
	void set_observation_characteristics(TypeImageFeature);

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */
	Aspn23TypeDirection3DToPointErrorModel get_error_model() const;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */
	void set_error_model(Aspn23TypeDirection3DToPointErrorModel);

	/**
	 * Number of parameters required for the error model chosen.
	 */
	uint16_t get_num_error_model_params() const;

	/**
	 * Error model parameters that characterize the optional error model.
	 */
	xt::pytensor<double, 1> get_error_model_params() const;

	/**
	 * Error model parameters that characterize the optional error model.
	 */
	void set_error_model_params(xt::pytensor<double, 1>);

	/**
	 * Number of integrity values.
	 */
	uint8_t get_num_integrity() const;

	/**
	 * Measurement integrity. Includes the integrity method used and an integrity value (which is to
	 * be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
	 * to report multiple integrity values based on multiple integrity methods.
	 */
	std::vector<TypeIntegrity> get_integrity() const;

	/**
	 * Measurement integrity. Includes the integrity method used and an integrity value (which is to
	 * be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
	 * to report multiple integrity values based on multiple integrity methods.
	 */
	void set_integrity(std::vector<TypeIntegrity>);

private:
	Aspn23TypeDirection3DToPoint* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
