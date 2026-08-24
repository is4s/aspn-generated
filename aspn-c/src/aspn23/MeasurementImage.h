
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"
#include "TypeHeader.h"
#include "TypeTimestamp.h"
#include "TypeIntegrity.h"
#ifdef __cplusplus
extern "C" {
#endif
ASPN_ASSUME_NONNULL_BEGIN

/**
 * Enumerated field which specifies the datatype of the pixels represented in this image.
 * Raw images are stored in row-major order. In multi-channel raw images, the first element contains
 * the first pixel of the first channel, the second element contains the first pixel of the second
 * channel, and so on. The data of each multi-byte pixel should be contiguous within the data array
 * with the endianness defined by the is_bigendian field.
 * Example - 2x2 RAW_RGB8 image_data[0] row1 col1 chanR image_data[1] row1 col1 chanG image_data[2]
 * row1 col1 chanB image_data[3] row1 col2 chanR image_data[4] row1 col2 chanG image_data[5] row1
 * col2 chanB image_data[6] row2 col1 chanR image_data[7] row2 col1 chanG image_data[8] row2 col1
 * chanB image_data[9] row2 col2 chanR image_data[10] row2 col2 chanG image_data[11] row2 col2 chanB
 * Example - 2x2 RAW_GRAY16, is_bigendian = 1 Where byte 1 is the most significant byte (byte1 << 8
 * | byte2): image_data[0] row1 col1 byte1 image_data[1] row1 col1 byte2 image_data[2] row1 col2
 * byte1 image_data[3] row1 col2 byte2 image_data[4] row2 col1 byte1 image_data[5] row2 col1 byte2
 * image_data[6] row2 col2 byte1 image_data[7] row2 col2 byte2
 */

enum Aspn23MeasurementImageImageType {

	/**
	 * Windows Bitmaps
	 */

	ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_BMP,

	/**
	 * Portable Network Graphics
	 */

	ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_PNG,

	/**
	 * Joint Photographic Experts Group
	 */

	ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_JPG,

	/**
	 * Tag Image File Format
	 */

	ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_TIFF,

	/**
	 * Single channel raw gray scale image. One byte per pixel.
	 */

	ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAY8,

	/**
	 * Three channel raw RGB image. One byte per pixel per channel.
	 */

	ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_RGB8,

	/**
	 * Three channel raw BGR image. One byte per pixel per channel.
	 */

	ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_BGR8,

	/**
	 * Four channel raw RGBA image. One byte per pixel per channel.
	 */

	ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_RGBA8,

	/**
	 * Four channel raw BGRA image. One byte per pixel per channel.
	 */

	ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_BGRA8,

	/**
	 * Single channel raw gray scale image. Two bytes per pixel.
	 */

	ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAY16,

	/**
	 * Single channel raw gray scale image. Eight bytes per pixel.
	 */

	ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAYFLOAT64
};

/**
 * The model used to map 3D points in the world to 2D points on the image plane
 */

enum Aspn23MeasurementImageCameraModel {

	/**
	 * A 10 parameter model, 4 parameters composing the 2D focal length fc = (fx, fy) and camera
	 * principal point cc = (cx, cy) in pixels, a model of radial and tangential distortion
	 * specified using the 5 parameters (kc1, kc2, kc3, kc4, kc5). And the skew parameter, alpha_c.
	 * Mapping from 3D points in the world to 2D points in the image is described at
	 * http://www.vision.caltech.edu/bouguetj/calib_doc/htmls/parameters.html
	 */

	ASPN23_MEASUREMENT_IMAGE_CAMERA_MODEL_ASPN_PINHOLE_PLUMB_BOB,

	/**
	 * A 4 parameter model, modeling only the the 2D focal length fc = (fx, fy) and camera principal
	 * point cc = (cx, cy). Effectively using the same model as described in described at
	 * http://www.vision.caltech.edu/bouguetj/calib_doc/htmls/parameters.html, with all distortion
	 * and skew parameters zeroed out
	 */

	ASPN23_MEASUREMENT_IMAGE_CAMERA_MODEL_ASPN_LINEAR_MODEL
};

/**
 * 2D Raster Image
 */

typedef struct Aspn23MeasurementImage {

	/**
	 * Standard ASPN measurement header.
	 */

	Aspn23TypeHeader header;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * The number of pixel rows in this image.
	 */

	uint32_t height;

	/**
	 * The number of pixel columns in this image.
	 */

	uint32_t width;

	/**
	 * True if the image_data byte order is big endian, false if it is little endian. For raw
	 * image_types, this is only applicable for image_types with multi-byte pixels.
	 */

	bool is_bigendian;

	/**
	 * Enumerated field which specifies the datatype of the pixels represented in this image.
	 * Raw images are stored in row-major order. In multi-channel raw images, the first element
	 * contains the first pixel of the first channel, the second element contains the first pixel of
	 * the second channel, and so on. The data of each multi-byte pixel should be contiguous within
	 * the data array with the endianness defined by the is_bigendian field. Example - 2x2 RAW_RGB8
	 * image_data[0] row1 col1 chanR image_data[1] row1 col1 chanG image_data[2] row1 col1 chanB
	 * image_data[3] row1 col2 chanR image_data[4] row1 col2 chanG image_data[5] row1 col2 chanB
	 * image_data[6] row2 col1 chanR image_data[7] row2 col1 chanG image_data[8] row2 col1 chanB
	 * image_data[9] row2 col2 chanR image_data[10] row2 col2 chanG image_data[11] row2 col2 chanB
	 * Example - 2x2 RAW_GRAY16, is_bigendian = 1 Where byte 1 is the most significant byte (byte1
	 * << 8 | byte2): image_data[0] row1 col1 byte1 image_data[1] row1 col1 byte2 image_data[2] row1
	 * col2 byte1 image_data[3] row1 col2 byte2 image_data[4] row2 col1 byte1 image_data[5] row2
	 * col1 byte2 image_data[6] row2 col2 byte1 image_data[7] row2 col2 byte2
	 */

	enum Aspn23MeasurementImageImageType image_type;

	/**
	 * Length of the byte array holding the encoded image. For raw image types, this should be equal
	 * to height * width * num_channels * bytes_per_pixel.
	 */

	uint64_t image_data_length;

	/**
	 * Stores the encoded image. Interpretation varies based on the image_type.
	 */

	uint8_t* image_data;

	/**
	 * The model used to map 3D points in the world to 2D points on the image plane
	 */

	enum Aspn23MeasurementImageCameraModel camera_model;

	/**
	 * The number of coefficients used in camera model.
	 */

	uint8_t num_model_coefficients;

	/**
	 * The camera model parameters, size depending on the distortion model.
	 */

	double* model_coefficients;

	/**
	 * Number of integrity values.
	 */

	uint8_t num_integrity;

	/**
	 * Measurement integrity. Includes the integrity method used and an integrity value (which is to
	 * be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
	 * to report multiple integrity values based on multiple integrity methods.
	 */

	Aspn23TypeIntegrity* integrity;

} Aspn23MeasurementImage;

Aspn23MeasurementImage* ASPN_NULLABLE
aspn23_measurement_image_new(Aspn23TypeHeader* header,
                             Aspn23TypeTimestamp* time_of_validity,
                             uint32_t height,
                             uint32_t width,
                             bool is_bigendian,
                             enum Aspn23MeasurementImageImageType image_type,
                             uint64_t image_data_length,
                             uint8_t* image_data,
                             enum Aspn23MeasurementImageCameraModel camera_model,
                             uint8_t num_model_coefficients,
                             double* model_coefficients,
                             uint8_t num_integrity,
                             Aspn23TypeIntegrity* integrity);

Aspn23MeasurementImage* ASPN_NULLABLE aspn23_measurement_image_copy(Aspn23MeasurementImage*);

/**
 * free() all memory held by the given Aspn23MeasurementImage,
 * including the struct itself.
 *
 * Pointer fields (image_data, model_coefficients, integrity) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_measurement_image_free(void* pointer);
void aspn23_measurement_image_free_members(Aspn23MeasurementImage* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
