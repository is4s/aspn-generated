
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/MetadataImageFeatures.h>

// xtensor
#include <xtensor/containers/xtensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes
#include "TypeMetadataheader.hpp"
#include "TypeTimestamp.hpp"

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * Features from an optical camera.
 */
class MetadataImageFeatures : public TypeHeader {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	MetadataImageFeatures(Aspn23MetadataImageFeatures* c_struct, bool take_ownership = true);

	MetadataImageFeatures(TypeMetadataheader info,
	                      TypeTimestamp time_of_validity,
	                      Aspn23MetadataImageFeaturesKeypointDetector keypoint_detector,
	                      bool orientation_calculated,
	                      Aspn23MetadataImageFeaturesDescriptorExtractor descriptor_extractor,
	                      bool is_bigendian,
	                      Aspn23MetadataImageFeaturesDescriptorType descriptor_type,
	                      uint16_t descriptor_number_of_elements);

	~MetadataImageFeatures();

	MetadataImageFeatures(const MetadataImageFeatures& other);
	MetadataImageFeatures& operator=(const MetadataImageFeatures& rhs);

	MetadataImageFeatures(MetadataImageFeatures&& other);
	MetadataImageFeatures& operator=(MetadataImageFeatures&& rhs);

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
	Aspn23MetadataImageFeatures* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23MetadataImageFeatures* replacement_struct, bool take_ownership = true);

	/**
	 * Standard ASPN metadata header.
	 */
	TypeMetadataheader get_info() const;

	/**
	 * Standard ASPN metadata header.
	 */
	void set_info(TypeMetadataheader);

	/**
	 * Time at which the measurement is considered to be valid.
	 */
	TypeTimestamp get_time_of_validity() const;

	/**
	 * Time at which the measurement is considered to be valid.
	 */
	void set_time_of_validity(TypeTimestamp);

	/**
	 * Enumerated field which provides the type of keypoint detector used.
	 */
	Aspn23MetadataImageFeaturesKeypointDetector get_keypoint_detector() const;

	/**
	 * Enumerated field which provides the type of keypoint detector used.
	 */
	void set_keypoint_detector(Aspn23MetadataImageFeaturesKeypointDetector);

	/**
	 * Set to true if the keypoint detector or descriptor extractor calculates and assigns a primary
	 * orientation to the features represented in the measurements.
	 */
	bool get_orientation_calculated() const;

	/**
	 * Set to true if the keypoint detector or descriptor extractor calculates and assigns a primary
	 * orientation to the features represented in the measurements.
	 */
	void set_orientation_calculated(bool);

	/**
	 * Enumerated field which provides the type of descriptor extractor used to generate the
	 * measurement descriptor vector.
	 */
	Aspn23MetadataImageFeaturesDescriptorExtractor get_descriptor_extractor() const;

	/**
	 * Enumerated field which provides the type of descriptor extractor used to generate the
	 * measurement descriptor vector.
	 */
	void set_descriptor_extractor(Aspn23MetadataImageFeaturesDescriptorExtractor);

	/**
	 * True if the descriptor byte order is big endian, false if it is little endian. Only
	 * applicable for descriptor_types with multi-byte elements.
	 */
	bool get_is_bigendian() const;

	/**
	 * True if the descriptor byte order is big endian, false if it is little endian. Only
	 * applicable for descriptor_types with multi-byte elements.
	 */
	void set_is_bigendian(bool);

	/**
	 * Enumerated field describing the underlying datatype of the provided descriptor vector.
	 */
	Aspn23MetadataImageFeaturesDescriptorType get_descriptor_type() const;

	/**
	 * Enumerated field describing the underlying datatype of the provided descriptor vector.
	 */
	void set_descriptor_type(Aspn23MetadataImageFeaturesDescriptorType);

	/**
	 * The number of elements of type 'descriptor_type' in the descriptor data array. In
	 * type_image_feature, descriptor data is represented as an array of uint8 values whose length
	 * is given by 'descriptor_size'. Inconjunction with descriptor_type, these fields describe how
	 * that data should be interpreted. For example - descriptor_type UINT8:
	 * descriptor_number_of_elements == descriptor_size - descriptor_type FLOAT32:
	 * (descriptor_number_of_elements * 4) == descriptor_size
	 */
	uint16_t get_descriptor_number_of_elements() const;

	/**
	 * The number of elements of type 'descriptor_type' in the descriptor data array. In
	 * type_image_feature, descriptor data is represented as an array of uint8 values whose length
	 * is given by 'descriptor_size'. Inconjunction with descriptor_type, these fields describe how
	 * that data should be interpreted. For example - descriptor_type UINT8:
	 * descriptor_number_of_elements == descriptor_size - descriptor_type FLOAT32:
	 * (descriptor_number_of_elements * 4) == descriptor_size
	 */
	void set_descriptor_number_of_elements(uint16_t);

private:
	Aspn23MetadataImageFeatures* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
