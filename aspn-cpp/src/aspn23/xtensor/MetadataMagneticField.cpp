
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MetadataMagneticField.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

MetadataMagneticField::MetadataMagneticField(TypeMetadataheader info,
                                             TypeTimestamp time_of_validity,
                                             TypeMounting mounting,
                                             xt::xtensor<double, 2> k,
                                             xt::xtensor<double, 1> b)
    : TypeHeader(info.get_header()) {
	auto info_prep             = info.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	auto mounting_prep         = mounting.get_aspn_c();
	this->c_struct             = aspn23_metadata_magnetic_field_new(info_prep,
                                                        time_of_validity_prep,
                                                        mounting_prep,
                                                        k.dimension() == 2 ? k.shape()[1] : 0,
                                                        k.data(),
                                                        b.data());

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
}

MetadataMagneticField::MetadataMagneticField(Aspn23MetadataMagneticField* c_struct,
                                             bool take_ownership)
    : TypeHeader(&c_struct->info.header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MetadataMagneticField::MetadataMagneticField(const MetadataMagneticField& other)
    : TypeHeader(&other.c_struct->info.header, false) {
	auto info                  = other.get_info();
	auto time_of_validity      = other.get_time_of_validity();
	auto mounting              = other.get_mounting();
	auto info_prep             = info.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	auto mounting_prep         = mounting.get_aspn_c();
	this->c_struct             = aspn23_metadata_magnetic_field_new(
        info_prep,
        time_of_validity_prep,
        mounting_prep,
        other.get_k().dimension() == 2 ? other.get_k().shape()[1] : 0,
        other.get_k().data(),
        other.get_b().data());

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
}

MetadataMagneticField& MetadataMagneticField::operator=(const MetadataMagneticField& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_metadata_magnetic_field_free(this->c_struct);
		auto info                  = other.get_info();
		auto time_of_validity      = other.get_time_of_validity();
		auto mounting              = other.get_mounting();
		auto info_prep             = info.get_aspn_c();
		auto time_of_validity_prep = time_of_validity.get_aspn_c();
		auto mounting_prep         = mounting.get_aspn_c();
		this->c_struct             = aspn23_metadata_magnetic_field_new(
            info_prep,
            time_of_validity_prep,
            mounting_prep,
            other.get_k().dimension() == 2 ? other.get_k().shape()[1] : 0,
            other.get_k().data(),
            other.get_b().data());

		this->take_ownership = true;

		TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
	}
	return *this;
}

MetadataMagneticField::MetadataMagneticField(MetadataMagneticField&& other)
    : TypeHeader(&other.c_struct->info.header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MetadataMagneticField& MetadataMagneticField::operator=(MetadataMagneticField&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_metadata_magnetic_field_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MetadataMagneticField::~MetadataMagneticField() {
	if (c_struct != nullptr && take_ownership) aspn23_metadata_magnetic_field_free(this->c_struct);
}

Aspn23MessageType MetadataMagneticField::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MetadataMagneticField::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MetadataMagneticField::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MetadataMagneticField::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MetadataMagneticField::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MetadataMagneticField::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MetadataMagneticField::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MetadataMagneticField::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MetadataMagneticField::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MetadataMagneticField::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MetadataMagneticField* MetadataMagneticField::get_aspn_c() const { return c_struct; }

void MetadataMagneticField::reset_aspn_c(Aspn23MetadataMagneticField* replacement_struct,
                                         bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_metadata_magnetic_field_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeMetadataheader MetadataMagneticField::get_info() const {
	nullptr_check();
	return aspn23_type_metadataheader_copy(&c_struct->info);
}

void MetadataMagneticField::set_info(TypeMetadataheader info) {
	nullptr_check();
	auto c_object  = std::move(info).get_aspn_c();
	c_struct->info = *c_object;
}

TypeTimestamp MetadataMagneticField::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MetadataMagneticField::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

TypeMounting MetadataMagneticField::get_mounting() const {
	nullptr_check();
	return aspn23_type_mounting_copy(&c_struct->mounting);
}

void MetadataMagneticField::set_mounting(TypeMounting mounting) {
	nullptr_check();
	auto c_object      = std::move(mounting).get_aspn_c();
	c_struct->mounting = *c_object;
}

uint8_t MetadataMagneticField::get_num_meas() const {
	nullptr_check();
	return c_struct->num_meas;
}

xt::xtensor<double, 2> MetadataMagneticField::get_k() const {
	nullptr_check();
	if (c_struct->k == nullptr) return {};
	std::vector<std::size_t> shape = {c_struct->num_meas, c_struct->num_meas};
	return xt::adapt(
	    c_struct->k, c_struct->num_meas * c_struct->num_meas, xt::no_ownership(), shape);
}

void MetadataMagneticField::set_k(xt::xtensor<double, 2> k) {
	nullptr_check();
	memcpy(c_struct->k, k.data(), c_struct->num_meas * c_struct->num_meas * sizeof(double));

	c_struct->num_meas = k.dimension() == 2 ? k.shape()[1] : 0;
}

xt::xtensor<double, 1> MetadataMagneticField::get_b() const {
	nullptr_check();
	if (c_struct->b == nullptr) return {};
	std::vector<uint64_t> shape = {c_struct->num_meas};
	return xt::adapt(c_struct->b, c_struct->num_meas, xt::no_ownership(), shape);
}

void MetadataMagneticField::set_b(xt::xtensor<double, 1> b) {
	nullptr_check();
	memcpy(c_struct->b, b.data(), c_struct->num_meas * sizeof(double));
	c_struct->num_meas = b.size();
}

void MetadataMagneticField::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error("MetadataMagneticField is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
