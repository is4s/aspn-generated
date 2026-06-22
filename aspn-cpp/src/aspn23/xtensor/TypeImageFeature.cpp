
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "TypeImageFeature.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

TypeImageFeature::TypeImageFeature(double response,
                                   double orientation,
                                   double size,
                                   uint16_t class_id,
                                   uint16_t octave,
                                   xt::xtensor<uint8_t, 1> descriptor) {

	this->c_struct = aspn23_type_image_feature_new(
	    response, orientation, size, class_id, octave, descriptor.size(), descriptor.data());

	this->take_ownership = true;
}

TypeImageFeature::TypeImageFeature(Aspn23TypeImageFeature* c_struct, bool take_ownership)
    : take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

TypeImageFeature::TypeImageFeature(const TypeImageFeature& other) {

	this->c_struct = aspn23_type_image_feature_new(other.get_response(),
	                                               other.get_orientation(),
	                                               other.get_size(),
	                                               other.get_class_id(),
	                                               other.get_octave(),
	                                               other.get_descriptor().size(),
	                                               other.get_descriptor().data());

	this->take_ownership = true;
}

TypeImageFeature& TypeImageFeature::operator=(const TypeImageFeature& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_image_feature_free(this->c_struct);

		this->c_struct = aspn23_type_image_feature_new(other.get_response(),
		                                               other.get_orientation(),
		                                               other.get_size(),
		                                               other.get_class_id(),
		                                               other.get_octave(),
		                                               other.get_descriptor().size(),
		                                               other.get_descriptor().data());

		this->take_ownership = true;
	}
	return *this;
}

TypeImageFeature::TypeImageFeature(TypeImageFeature&& other) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

TypeImageFeature& TypeImageFeature::operator=(TypeImageFeature&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_image_feature_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

TypeImageFeature::~TypeImageFeature() {
	if (c_struct != nullptr && take_ownership) aspn23_type_image_feature_free(this->c_struct);
}

Aspn23TypeImageFeature* TypeImageFeature::get_aspn_c() const { return c_struct; }

void TypeImageFeature::reset_aspn_c(Aspn23TypeImageFeature* replacement_struct,
                                    bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_type_image_feature_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

double TypeImageFeature::get_response() const {
	nullptr_check();
	return c_struct->response;
}

void TypeImageFeature::set_response(double response) {
	nullptr_check();
	c_struct->response = response;
}

double TypeImageFeature::get_orientation() const {
	nullptr_check();
	return c_struct->orientation;
}

void TypeImageFeature::set_orientation(double orientation) {
	nullptr_check();
	c_struct->orientation = orientation;
}

double TypeImageFeature::get_size() const {
	nullptr_check();
	return c_struct->size;
}

void TypeImageFeature::set_size(double size) {
	nullptr_check();
	c_struct->size = size;
}

uint16_t TypeImageFeature::get_class_id() const {
	nullptr_check();
	return c_struct->class_id;
}

void TypeImageFeature::set_class_id(uint16_t class_id) {
	nullptr_check();
	c_struct->class_id = class_id;
}

uint16_t TypeImageFeature::get_octave() const {
	nullptr_check();
	return c_struct->octave;
}

void TypeImageFeature::set_octave(uint16_t octave) {
	nullptr_check();
	c_struct->octave = octave;
}

uint16_t TypeImageFeature::get_descriptor_size() const {
	nullptr_check();
	return c_struct->descriptor_size;
}

xt::xtensor<uint8_t, 1> TypeImageFeature::get_descriptor() const {
	nullptr_check();
	if (c_struct->descriptor == nullptr) return {};
	std::vector<uint64_t> shape = {c_struct->descriptor_size};
	return xt::adapt(c_struct->descriptor, c_struct->descriptor_size, xt::no_ownership(), shape);
}

void TypeImageFeature::set_descriptor(xt::xtensor<uint8_t, 1> descriptor) {
	nullptr_check();
	memcpy(c_struct->descriptor, descriptor.data(), c_struct->descriptor_size * sizeof(uint8_t));
	c_struct->descriptor_size = descriptor.size();
}

void TypeImageFeature::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error("TypeImageFeature is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
