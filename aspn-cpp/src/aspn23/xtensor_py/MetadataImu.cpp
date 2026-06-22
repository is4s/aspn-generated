
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MetadataImu.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

MetadataImu::MetadataImu(TypeMetadataheader info,
                         TypeTimestamp time_of_validity,
                         TypeMounting mounting,
                         Aspn23MetadataImuErrorModel error_model,
                         xt::pytensor<double, 1> error_model_params)
    : TypeHeader(info.get_header()) {
	auto info_prep             = info.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	auto mounting_prep         = mounting.get_aspn_c();
	this->c_struct             = aspn23_metadata_imu_new(info_prep,
                                             time_of_validity_prep,
                                             mounting_prep,
                                             error_model,
                                             error_model_params.size(),
                                             error_model_params.data());

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
}

MetadataImu::MetadataImu(Aspn23MetadataImu* c_struct, bool take_ownership)
    : TypeHeader(&c_struct->info.header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MetadataImu::MetadataImu(const MetadataImu& other)
    : TypeHeader(&other.c_struct->info.header, false) {
	auto info                  = other.get_info();
	auto time_of_validity      = other.get_time_of_validity();
	auto mounting              = other.get_mounting();
	auto info_prep             = info.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	auto mounting_prep         = mounting.get_aspn_c();
	this->c_struct             = aspn23_metadata_imu_new(info_prep,
                                             time_of_validity_prep,
                                             mounting_prep,
                                             other.get_error_model(),
                                             other.get_error_model_params().size(),
                                             other.get_error_model_params().data());

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
}

MetadataImu& MetadataImu::operator=(const MetadataImu& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_metadata_imu_free(this->c_struct);
		auto info                  = other.get_info();
		auto time_of_validity      = other.get_time_of_validity();
		auto mounting              = other.get_mounting();
		auto info_prep             = info.get_aspn_c();
		auto time_of_validity_prep = time_of_validity.get_aspn_c();
		auto mounting_prep         = mounting.get_aspn_c();
		this->c_struct             = aspn23_metadata_imu_new(info_prep,
                                                 time_of_validity_prep,
                                                 mounting_prep,
                                                 other.get_error_model(),
                                                 other.get_error_model_params().size(),
                                                 other.get_error_model_params().data());

		this->take_ownership = true;

		TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
	}
	return *this;
}

MetadataImu::MetadataImu(MetadataImu&& other) : TypeHeader(&other.c_struct->info.header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MetadataImu& MetadataImu::operator=(MetadataImu&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_metadata_imu_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MetadataImu::~MetadataImu() {
	if (c_struct != nullptr && take_ownership) aspn23_metadata_imu_free(this->c_struct);
}

Aspn23MessageType MetadataImu::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MetadataImu::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MetadataImu::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MetadataImu::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MetadataImu::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MetadataImu::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MetadataImu::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MetadataImu::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MetadataImu::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MetadataImu::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MetadataImu* MetadataImu::get_aspn_c() const { return c_struct; }

void MetadataImu::reset_aspn_c(Aspn23MetadataImu* replacement_struct, bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership) aspn23_metadata_imu_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeMetadataheader MetadataImu::get_info() const {
	nullptr_check();
	return aspn23_type_metadataheader_copy(&c_struct->info);
}

void MetadataImu::set_info(TypeMetadataheader info) {
	nullptr_check();
	auto c_object  = std::move(info).get_aspn_c();
	c_struct->info = *c_object;
}

TypeTimestamp MetadataImu::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MetadataImu::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

TypeMounting MetadataImu::get_mounting() const {
	nullptr_check();
	return aspn23_type_mounting_copy(&c_struct->mounting);
}

void MetadataImu::set_mounting(TypeMounting mounting) {
	nullptr_check();
	auto c_object      = std::move(mounting).get_aspn_c();
	c_struct->mounting = *c_object;
}

Aspn23MetadataImuErrorModel MetadataImu::get_error_model() const {
	nullptr_check();
	return c_struct->error_model;
}

void MetadataImu::set_error_model(Aspn23MetadataImuErrorModel error_model) {
	nullptr_check();
	c_struct->error_model = error_model;
}

uint16_t MetadataImu::get_num_error_model_params() const {
	nullptr_check();
	return c_struct->num_error_model_params;
}

xt::pytensor<double, 1> MetadataImu::get_error_model_params() const {
	nullptr_check();
	if (c_struct->error_model_params == nullptr) return {};
	std::vector<uint64_t> shape = {c_struct->num_error_model_params};
	return xt::adapt(
	    c_struct->error_model_params, c_struct->num_error_model_params, xt::no_ownership(), shape);
}

void MetadataImu::set_error_model_params(xt::pytensor<double, 1> error_model_params) {
	nullptr_check();
	memcpy(c_struct->error_model_params,
	       error_model_params.data(),
	       c_struct->num_error_model_params * sizeof(double));
	c_struct->num_error_model_params = error_model_params.size();
}

void MetadataImu::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error("MetadataImu is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
