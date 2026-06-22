
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/MeasurementImage.h>

// xtensor
#include <xtensor-python/pytensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes
#include "TypeHeader.hpp"
#include "TypeTimestamp.hpp"
#include "TypeIntegrity.hpp"

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * 2D Raster Image
 */
class MeasurementImage : public TypeHeader {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	MeasurementImage(Aspn23MeasurementImage* c_struct, bool take_ownership = true);

	MeasurementImage(TypeHeader header,
	                 TypeTimestamp time_of_validity,
	                 uint32_t height,
	                 uint32_t width,
	                 bool is_bigendian,
	                 Aspn23MeasurementImageImageType image_type,
	                 xt::pytensor<uint8_t, 1> image_data,
	                 Aspn23MeasurementImageCameraModel camera_model,
	                 xt::pytensor<double, 1> model_coefficients,
	                 std::vector<TypeIntegrity> integrity);

	~MeasurementImage();

	MeasurementImage(const MeasurementImage& other);
	MeasurementImage& operator=(const MeasurementImage& rhs);

	MeasurementImage(MeasurementImage&& other);
	MeasurementImage& operator=(MeasurementImage&& rhs);

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
	Aspn23MeasurementImage* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23MeasurementImage* replacement_struct, bool take_ownership = true);

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
	 * The number of pixel rows in this image.
	 */
	uint32_t get_height() const;

	/**
	 * The number of pixel rows in this image.
	 */
	void set_height(uint32_t);

	/**
	 * The number of pixel columns in this image.
	 */
	uint32_t get_width() const;

	/**
	 * The number of pixel columns in this image.
	 */
	void set_width(uint32_t);

	/**
	 * True if the image_data byte order is big endian, false if it is little endian. For raw
	 * image_types, this is only applicable for image_types with multi-byte pixels.
	 */
	bool get_is_bigendian() const;

	/**
	 * True if the image_data byte order is big endian, false if it is little endian. For raw
	 * image_types, this is only applicable for image_types with multi-byte pixels.
	 */
	void set_is_bigendian(bool);

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
	Aspn23MeasurementImageImageType get_image_type() const;

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
	void set_image_type(Aspn23MeasurementImageImageType);

	/**
	 * Length of the byte array holding the encoded image. For raw image types, this should be equal
	 * to height * width * num_channels * bytes_per_pixel.
	 */
	uint64_t get_image_data_length() const;

	/**
	 * Stores the encoded image. Interpretation varies based on the image_type.
	 */
	xt::pytensor<uint8_t, 1> get_image_data() const;

	/**
	 * Stores the encoded image. Interpretation varies based on the image_type.
	 */
	void set_image_data(xt::pytensor<uint8_t, 1>);

	/**
	 * The model used to map 3D points in the world to 2D points on the image plane
	 */
	Aspn23MeasurementImageCameraModel get_camera_model() const;

	/**
	 * The model used to map 3D points in the world to 2D points on the image plane
	 */
	void set_camera_model(Aspn23MeasurementImageCameraModel);

	/**
	 * The number of coefficients used in camera model.
	 */
	uint8_t get_num_model_coefficients() const;

	/**
	 * The camera model parameters, size depending on the distortion model.
	 */
	xt::pytensor<double, 1> get_model_coefficients() const;

	/**
	 * The camera model parameters, size depending on the distortion model.
	 */
	void set_model_coefficients(xt::pytensor<double, 1>);

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
	Aspn23MeasurementImage* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
