
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/TypeDirection2DToPoint.h>

// xtensor
#include <xtensor/containers/xtensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes
#include "TypeRemotePoint.hpp"
#include "TypeImageFeature.hpp"
#include "TypeIntegrity.hpp"

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * 2D direction to or from a point as defined by the reference enum. Information about the remote
 * point (its position and/or correspondence with previous or future appearances
 * of this same point) may be determined using remote_point.
 */
class TypeDirection2DToPoint {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	TypeDirection2DToPoint(Aspn23TypeDirection2DToPoint* c_struct, bool take_ownership = true);

	TypeDirection2DToPoint(TypeRemotePoint remote_point,
	                       Aspn23TypeDirection2DToPointReference reference,
	                       double obs,
	                       double variance,
	                       bool has_observation_characteristics,
	                       TypeImageFeature observation_characteristics,
	                       Aspn23TypeDirection2DToPointErrorModel error_model,
	                       xt::xtensor<double, 1> error_model_params,
	                       std::vector<TypeIntegrity> integrity);

	~TypeDirection2DToPoint();

	TypeDirection2DToPoint(const TypeDirection2DToPoint& other);
	TypeDirection2DToPoint& operator=(const TypeDirection2DToPoint& rhs);

	TypeDirection2DToPoint(TypeDirection2DToPoint&& other);
	TypeDirection2DToPoint& operator=(TypeDirection2DToPoint&& rhs);

	/**
	 * Returns the underlying C struct while retaining ownership of the pointer.  The pointer
	 * is valid so long as this object has not gone out of scope.
	 */
	Aspn23TypeDirection2DToPoint* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23TypeDirection2DToPoint* replacement_struct, bool take_ownership = true);

	/**
	 * Position and/or correspondence information about the remote point.
	 */
	TypeRemotePoint get_remote_point() const;

	/**
	 * Position and/or correspondence information about the remote point.
	 */
	void set_remote_point(TypeRemotePoint);

	/**
	 * Specifies measurement reference.
	 */
	Aspn23TypeDirection2DToPointReference get_reference() const;

	/**
	 * Specifies measurement reference.
	 */
	void set_reference(Aspn23TypeDirection2DToPointReference);

	/**
	 * Observations as specified in the reference enum.
	 */
	double get_obs() const;

	/**
	 * Observations as specified in the reference enum.
	 */
	void set_obs(double);

	/**
	 * Measurement error variance.
	 */
	double get_variance() const;

	/**
	 * Measurement error variance.
	 */
	void set_variance(double);

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
	Aspn23TypeDirection2DToPointErrorModel get_error_model() const;

	/**
	 * Defines an optional error model for other than zero-mean, additive, white Gaussian noise
	 * (AWGN).
	 */
	void set_error_model(Aspn23TypeDirection2DToPointErrorModel);

	/**
	 * Number of parameters required for the error model chosen.
	 */
	uint16_t get_num_error_model_params() const;

	/**
	 * Error model parameters that characterize the optional error model.
	 */
	xt::xtensor<double, 1> get_error_model_params() const;

	/**
	 * Error model parameters that characterize the optional error model.
	 */
	void set_error_model_params(xt::xtensor<double, 1>);

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
	Aspn23TypeDirection2DToPoint* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
