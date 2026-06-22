
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/TypeImageFeature.h>

// xtensor
#include <xtensor-python/pytensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * Image feature characteristics
 */
class TypeImageFeature {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	TypeImageFeature(Aspn23TypeImageFeature* c_struct, bool take_ownership = true);

	TypeImageFeature(double response,
	                 double orientation,
	                 double size,
	                 uint16_t class_id,
	                 uint16_t octave,
	                 xt::pytensor<uint8_t, 1> descriptor);

	~TypeImageFeature();

	TypeImageFeature(const TypeImageFeature& other);
	TypeImageFeature& operator=(const TypeImageFeature& rhs);

	TypeImageFeature(TypeImageFeature&& other);
	TypeImageFeature& operator=(TypeImageFeature&& rhs);

	/**
	 * Returns the underlying C struct while retaining ownership of the pointer.  The pointer
	 * is valid so long as this object has not gone out of scope.
	 */
	Aspn23TypeImageFeature* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23TypeImageFeature* replacement_struct, bool take_ownership = true);

	/**
	 * Value representing the magnitude of the response of the keypoint detection algorithm used to
	 * locate this keypoint in the image.
	 */
	double get_response() const;

	/**
	 * Value representing the magnitude of the response of the keypoint detection algorithm used to
	 * locate this keypoint in the image.
	 */
	void set_response(double);

	/**
	 * Value representing the orientation of the detected keypoint, as measured relative to the
	 * image coordinate system (radians, clockwise). Metadata flag determines if this field is
	 * calculated by the current keypoint detector.
	 */
	double get_orientation() const;

	/**
	 * Value representing the orientation of the detected keypoint, as measured relative to the
	 * image coordinate system (radians, clockwise). Metadata flag determines if this field is
	 * calculated by the current keypoint detector.
	 */
	void set_orientation(double);

	/**
	 * Effective size (pixels) of the detected keypoint. This field takes into consideration the
	 * octave and kernel used to localize the keypoint, and normalizes to the original size of the
	 * image.
	 */
	double get_size() const;

	/**
	 * Effective size (pixels) of the detected keypoint. This field takes into consideration the
	 * octave and kernel used to localize the keypoint, and normalizes to the original size of the
	 * image.
	 */
	void set_size(double);

	/**
	 * ID that ties the detected keypoint to a class or group of keypoints.
	 */
	uint16_t get_class_id() const;

	/**
	 * ID that ties the detected keypoint to a class or group of keypoints.
	 */
	void set_class_id(uint16_t);

	/**
	 * Octave or pyramid layer from which the detected keypoint was extracted.
	 */
	uint16_t get_octave() const;

	/**
	 * Octave or pyramid layer from which the detected keypoint was extracted.
	 */
	void set_octave(uint16_t);

	/**
	 * Size of the descriptor in bytes.
	 */
	uint16_t get_descriptor_size() const;

	/**
	 * Feature descriptor.
	 */
	xt::pytensor<uint8_t, 1> get_descriptor() const;

	/**
	 * Feature descriptor.
	 */
	void set_descriptor(xt::pytensor<uint8_t, 1>);

private:
	Aspn23TypeImageFeature* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
