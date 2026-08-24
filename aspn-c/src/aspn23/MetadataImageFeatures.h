
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"
#include "TypeMetadataheader.h"
#include "TypeTimestamp.h"
#ifdef __cplusplus
extern "C" {
#endif
ASPN_ASSUME_NONNULL_BEGIN

/**
 * Enumerated field which provides the type of keypoint detector used.
 */

enum Aspn23MetadataImageFeaturesKeypointDetector {

	/**
	 * Keypoint detected using AGAST based detector.
	 */

	ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_AGAST,

	/**
	 * Keypoint detected using AKAZE based detector.
	 */

	ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_AKAZE,

	/**
	 * Keypoint detected using BRISK based detector.
	 */

	ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_BRISK,

	/**
	 * Keypoint detected using FAST based detector.
	 */

	ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_FAST,

	/**
	 * Keypoint detected using GFTT based detector.
	 */

	ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_GFTT,

	/**
	 * Keypoint detected using KAZE based detector.
	 */

	ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_KAZE,

	/**
	 * Keypoint detected using MSER based detector.
	 */

	ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_MSER,

	/**
	 * Keypoint detected using ORB based detector.
	 */

	ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_ORB,

	/**
	 * Keypoint detected using SIFT based detector.
	 */

	ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SIFT,

	/**
	 * Keypoint detected using SURF based detector.
	 */

	ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SURF,

	/**
	 * Keypoint detected using Harris based detector.
	 */

	ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_HARRIS,

	/**
	 * Keypoint detected using Shi-Tomasi based detector.
	 */

	ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SHI,

	/**
	 * Keypoint detected using a detector not represented in this enum.
	 */

	ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_OTHER
};

/**
 * Enumerated field which provides the type of descriptor extractor used to generate the measurement
 * descriptor vector.
 */

enum Aspn23MetadataImageFeaturesDescriptorExtractor {

	/**
	 * Descriptor computed using the AKAZE extractor.
	 */

	ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_AKAZE,

	/**
	 * Descriptor computed using the BRISK extractor.
	 */

	ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_BRISK,

	/**
	 * Descriptor computed using the KAZE extractor.
	 */

	ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_KAZE,

	/**
	 * Descriptor computed using the ORB extractor.
	 */

	ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_ORB,

	/**
	 * Descriptor computed using the SIFT extractor.
	 */

	ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_SIFT,

	/**
	 * Descriptor computed using the SURF extractor.
	 */

	ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_SURF,

	/**
	 * Descriptor computed using an extractor not represented in this enum.
	 */

	ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_OTHER
};

/**
 * Enumerated field describing the underlying datatype of the provided descriptor vector.
 */

enum Aspn23MetadataImageFeaturesDescriptorType {

	/**
	 * The descriptor data should be interpreted as an array of unsigned 8-bit ints.
	 */

	ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_TYPE_UINT8,

	/**
	 * The descriptor data should be interpreted as an array of 32-bit floats.
	 */

	ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_TYPE_FLOAT32
};

/**
 * Features from an optical camera.
 */

typedef struct Aspn23MetadataImageFeatures {

	/**
	 * Standard ASPN metadata header.
	 */

	Aspn23TypeMetadataheader info;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Enumerated field which provides the type of keypoint detector used.
	 */

	enum Aspn23MetadataImageFeaturesKeypointDetector keypoint_detector;

	/**
	 * Set to true if the keypoint detector or descriptor extractor calculates and assigns a primary
	 * orientation to the features represented in the measurements.
	 */

	bool orientation_calculated;

	/**
	 * Enumerated field which provides the type of descriptor extractor used to generate the
	 * measurement descriptor vector.
	 */

	enum Aspn23MetadataImageFeaturesDescriptorExtractor descriptor_extractor;

	/**
	 * True if the descriptor byte order is big endian, false if it is little endian. Only
	 * applicable for descriptor_types with multi-byte elements.
	 */

	bool is_bigendian;

	/**
	 * Enumerated field describing the underlying datatype of the provided descriptor vector.
	 */

	enum Aspn23MetadataImageFeaturesDescriptorType descriptor_type;

	/**
	 * The number of elements of type 'descriptor_type' in the descriptor data array. In
	 * type_image_feature, descriptor data is represented as an array of uint8 values whose length
	 * is given by 'descriptor_size'. Inconjunction with descriptor_type, these fields describe how
	 * that data should be interpreted. For example - descriptor_type UINT8:
	 * descriptor_number_of_elements == descriptor_size - descriptor_type FLOAT32:
	 * (descriptor_number_of_elements * 4) == descriptor_size
	 */

	uint16_t descriptor_number_of_elements;

} Aspn23MetadataImageFeatures;

Aspn23MetadataImageFeatures* ASPN_NULLABLE aspn23_metadata_image_features_new(
    Aspn23TypeMetadataheader* info,
    Aspn23TypeTimestamp* time_of_validity,
    enum Aspn23MetadataImageFeaturesKeypointDetector keypoint_detector,
    bool orientation_calculated,
    enum Aspn23MetadataImageFeaturesDescriptorExtractor descriptor_extractor,
    bool is_bigendian,
    enum Aspn23MetadataImageFeaturesDescriptorType descriptor_type,
    uint16_t descriptor_number_of_elements);

Aspn23MetadataImageFeatures* ASPN_NULLABLE
aspn23_metadata_image_features_copy(Aspn23MetadataImageFeatures*);

/**
 * free() all memory held by the given Aspn23MetadataImageFeatures,
 * including the struct itself.
 */

void aspn23_metadata_image_features_free(void* pointer);
void aspn23_metadata_image_features_free_members(Aspn23MetadataImageFeatures* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
