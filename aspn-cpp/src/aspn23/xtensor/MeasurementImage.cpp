
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MeasurementImage.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

MeasurementImage::MeasurementImage(TypeHeader header,
                                   TypeTimestamp time_of_validity,
                                   uint32_t height,
                                   uint32_t width,
                                   bool is_bigendian,
                                   Aspn23MeasurementImageImageType image_type,
                                   xt::xtensor<uint8_t, 1> image_data,
                                   Aspn23MeasurementImageCameraModel camera_model,
                                   xt::xtensor<double, 1> model_coefficients,
                                   std::vector<TypeIntegrity> integrity)
    : TypeHeader(header) {
	auto header_prep                    = header.get_aspn_c();
	auto time_of_validity_prep          = time_of_validity.get_aspn_c();
	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_measurement_image_new(header_prep,
	                                              time_of_validity_prep,
	                                              height,
	                                              width,
	                                              is_bigendian,
	                                              image_type,
	                                              image_data.size(),
	                                              image_data.data(),
	                                              camera_model,
	                                              model_coefficients.size(),
	                                              model_coefficients.data(),
	                                              integrity.size(),
	                                              integrity_prep);

	delete[] integrity_prep;

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->header, false);
}

MeasurementImage::MeasurementImage(Aspn23MeasurementImage* c_struct, bool take_ownership)
    : TypeHeader(&c_struct->header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MeasurementImage::MeasurementImage(const MeasurementImage& other)
    : TypeHeader(&other.c_struct->header, false) {
	auto header                         = other.get_header();
	auto time_of_validity               = other.get_time_of_validity();
	auto integrity                      = other.get_integrity();
	auto header_prep                    = header.get_aspn_c();
	auto time_of_validity_prep          = time_of_validity.get_aspn_c();
	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_measurement_image_new(header_prep,
	                                              time_of_validity_prep,
	                                              other.get_height(),
	                                              other.get_width(),
	                                              other.get_is_bigendian(),
	                                              other.get_image_type(),
	                                              other.get_image_data().size(),
	                                              other.get_image_data().data(),
	                                              other.get_camera_model(),
	                                              other.get_model_coefficients().size(),
	                                              other.get_model_coefficients().data(),
	                                              other.get_integrity().size(),
	                                              integrity_prep);

	delete[] integrity_prep;

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->header, false);
}

MeasurementImage& MeasurementImage::operator=(const MeasurementImage& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_image_free(this->c_struct);
		auto header                         = other.get_header();
		auto time_of_validity               = other.get_time_of_validity();
		auto integrity                      = other.get_integrity();
		auto header_prep                    = header.get_aspn_c();
		auto time_of_validity_prep          = time_of_validity.get_aspn_c();
		Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
		for (size_t ii = 0; ii < integrity.size(); ii++) {
			auto c_object      = integrity[ii].get_aspn_c();
			integrity_prep[ii] = *c_object;
		}

		this->c_struct = aspn23_measurement_image_new(header_prep,
		                                              time_of_validity_prep,
		                                              other.get_height(),
		                                              other.get_width(),
		                                              other.get_is_bigendian(),
		                                              other.get_image_type(),
		                                              other.get_image_data().size(),
		                                              other.get_image_data().data(),
		                                              other.get_camera_model(),
		                                              other.get_model_coefficients().size(),
		                                              other.get_model_coefficients().data(),
		                                              other.get_integrity().size(),
		                                              integrity_prep);

		delete[] integrity_prep;

		this->take_ownership = true;

		TypeHeader::reset_aspn_c(&this->c_struct->header, false);
	}
	return *this;
}

MeasurementImage::MeasurementImage(MeasurementImage&& other)
    : TypeHeader(&other.c_struct->header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MeasurementImage& MeasurementImage::operator=(MeasurementImage&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_image_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MeasurementImage::~MeasurementImage() {
	if (c_struct != nullptr && take_ownership) aspn23_measurement_image_free(this->c_struct);
}

Aspn23MessageType MeasurementImage::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MeasurementImage::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MeasurementImage::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MeasurementImage::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MeasurementImage::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MeasurementImage::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MeasurementImage::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MeasurementImage::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MeasurementImage::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MeasurementImage::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MeasurementImage* MeasurementImage::get_aspn_c() const { return c_struct; }

void MeasurementImage::reset_aspn_c(Aspn23MeasurementImage* replacement_struct,
                                    bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_measurement_image_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeHeader MeasurementImage::get_header() const {
	nullptr_check();
	return aspn23_type_header_copy(&c_struct->header);
}

void MeasurementImage::set_header(TypeHeader header) {
	nullptr_check();
	auto c_object    = std::move(header).get_aspn_c();
	c_struct->header = *c_object;
}

TypeTimestamp MeasurementImage::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MeasurementImage::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

uint32_t MeasurementImage::get_height() const {
	nullptr_check();
	return c_struct->height;
}

void MeasurementImage::set_height(uint32_t height) {
	nullptr_check();
	c_struct->height = height;
}

uint32_t MeasurementImage::get_width() const {
	nullptr_check();
	return c_struct->width;
}

void MeasurementImage::set_width(uint32_t width) {
	nullptr_check();
	c_struct->width = width;
}

bool MeasurementImage::get_is_bigendian() const {
	nullptr_check();
	return c_struct->is_bigendian;
}

void MeasurementImage::set_is_bigendian(bool is_bigendian) {
	nullptr_check();
	c_struct->is_bigendian = is_bigendian;
}

Aspn23MeasurementImageImageType MeasurementImage::get_image_type() const {
	nullptr_check();
	return c_struct->image_type;
}

void MeasurementImage::set_image_type(Aspn23MeasurementImageImageType image_type) {
	nullptr_check();
	c_struct->image_type = image_type;
}

uint64_t MeasurementImage::get_image_data_length() const {
	nullptr_check();
	return c_struct->image_data_length;
}

xt::xtensor<uint8_t, 1> MeasurementImage::get_image_data() const {
	nullptr_check();
	if (c_struct->image_data == nullptr) return {};
	std::vector<uint64_t> shape = {c_struct->image_data_length};
	return xt::adapt(c_struct->image_data, c_struct->image_data_length, xt::no_ownership(), shape);
}

void MeasurementImage::set_image_data(xt::xtensor<uint8_t, 1> image_data) {
	nullptr_check();
	memcpy(c_struct->image_data, image_data.data(), c_struct->image_data_length * sizeof(uint8_t));
	c_struct->image_data_length = image_data.size();
}

Aspn23MeasurementImageCameraModel MeasurementImage::get_camera_model() const {
	nullptr_check();
	return c_struct->camera_model;
}

void MeasurementImage::set_camera_model(Aspn23MeasurementImageCameraModel camera_model) {
	nullptr_check();
	c_struct->camera_model = camera_model;
}

uint8_t MeasurementImage::get_num_model_coefficients() const {
	nullptr_check();
	return c_struct->num_model_coefficients;
}

xt::xtensor<double, 1> MeasurementImage::get_model_coefficients() const {
	nullptr_check();
	if (c_struct->model_coefficients == nullptr) return {};
	std::vector<uint64_t> shape = {c_struct->num_model_coefficients};
	return xt::adapt(
	    c_struct->model_coefficients, c_struct->num_model_coefficients, xt::no_ownership(), shape);
}

void MeasurementImage::set_model_coefficients(xt::xtensor<double, 1> model_coefficients) {
	nullptr_check();
	memcpy(c_struct->model_coefficients,
	       model_coefficients.data(),
	       c_struct->num_model_coefficients * sizeof(double));
	c_struct->num_model_coefficients = model_coefficients.size();
}

uint8_t MeasurementImage::get_num_integrity() const {
	nullptr_check();
	return c_struct->num_integrity;
}

std::vector<TypeIntegrity> MeasurementImage::get_integrity() const {
	nullptr_check();
	if (c_struct->integrity == nullptr) return {};
	std::vector<TypeIntegrity> out;
	for (size_t ii = 0; ii < c_struct->num_integrity; ii++) {
		out.push_back(aspn23_type_integrity_copy(&c_struct->integrity[ii]));
	}
	return out;
}

void MeasurementImage::set_integrity(std::vector<TypeIntegrity> integrity) {
	nullptr_check();
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object           = integrity[ii].get_aspn_c();
		c_struct->integrity[ii] = *c_object;
	}
	c_struct->num_integrity = integrity.size();
}

void MeasurementImage::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error("MeasurementImage is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
