
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif
ASPN_ASSUME_NONNULL_BEGIN

/**
 * Image feature characteristics
 */

typedef struct Aspn23TypeImageFeature {

	/**
	 * Value representing the magnitude of the response of the keypoint detection algorithm used to
	 * locate this keypoint in the image.
	 */

	double response;

	/**
	 * Value representing the orientation of the detected keypoint, as measured relative to the
	 * image coordinate system (radians, clockwise). Metadata flag determines if this field is
	 * calculated by the current keypoint detector.
	 */

	double orientation;

	/**
	 * Effective size (pixels) of the detected keypoint. This field takes into consideration the
	 * octave and kernel used to localize the keypoint, and normalizes to the original size of the
	 * image.
	 */

	double size;

	/**
	 * ID that ties the detected keypoint to a class or group of keypoints.
	 */

	uint16_t class_id;

	/**
	 * Octave or pyramid layer from which the detected keypoint was extracted.
	 */

	uint16_t octave;

	/**
	 * Size of the descriptor in bytes.
	 */

	uint16_t descriptor_size;

	/**
	 * Feature descriptor.
	 */

	uint8_t* descriptor;

} Aspn23TypeImageFeature;

Aspn23TypeImageFeature* ASPN_NULLABLE aspn23_type_image_feature_new(double response,
                                                                    double orientation,
                                                                    double size,
                                                                    uint16_t class_id,
                                                                    uint16_t octave,
                                                                    uint16_t descriptor_size,
                                                                    uint8_t* descriptor);

Aspn23TypeImageFeature* ASPN_NULLABLE aspn23_type_image_feature_copy(Aspn23TypeImageFeature*);

/**
 * free() all memory held by the given Aspn23TypeImageFeature,
 * including the struct itself.
 *
 * Pointer fields (descriptor) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_type_image_feature_free(void* pointer);
void aspn23_type_image_feature_free_members(Aspn23TypeImageFeature* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
