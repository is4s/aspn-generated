
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MeasurementDirectionOfMotion2D.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

MeasurementDirectionOfMotion2D::MeasurementDirectionOfMotion2D(
    TypeHeader header,
    TypeTimestamp time_of_validity,
    Aspn23MeasurementDirectionOfMotion2DReference reference,
    double obs,
    double variance,
    Aspn23MeasurementDirectionOfMotion2DErrorModel error_model,
    xt::pytensor<double, 1> error_model_params,
    std::vector<TypeIntegrity> integrity)
    : TypeHeader(header) {
	auto header_prep                    = header.get_aspn_c();
	auto time_of_validity_prep          = time_of_validity.get_aspn_c();
	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_measurement_direction_of_motion_2d_new(header_prep,
	                                                               time_of_validity_prep,
	                                                               reference,
	                                                               obs,
	                                                               variance,
	                                                               error_model,
	                                                               error_model_params.size(),
	                                                               error_model_params.data(),
	                                                               integrity.size(),
	                                                               integrity_prep);

	delete[] integrity_prep;

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->header, false);
}

MeasurementDirectionOfMotion2D::MeasurementDirectionOfMotion2D(
    Aspn23MeasurementDirectionOfMotion2D* c_struct, bool take_ownership)
    : TypeHeader(&c_struct->header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MeasurementDirectionOfMotion2D::MeasurementDirectionOfMotion2D(
    const MeasurementDirectionOfMotion2D& other)
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

	this->c_struct =
	    aspn23_measurement_direction_of_motion_2d_new(header_prep,
	                                                  time_of_validity_prep,
	                                                  other.get_reference(),
	                                                  other.get_obs(),
	                                                  other.get_variance(),
	                                                  other.get_error_model(),
	                                                  other.get_error_model_params().size(),
	                                                  other.get_error_model_params().data(),
	                                                  other.get_integrity().size(),
	                                                  integrity_prep);

	delete[] integrity_prep;

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->header, false);
}

MeasurementDirectionOfMotion2D& MeasurementDirectionOfMotion2D::operator=(
    const MeasurementDirectionOfMotion2D& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_direction_of_motion_2d_free(this->c_struct);
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

		this->c_struct =
		    aspn23_measurement_direction_of_motion_2d_new(header_prep,
		                                                  time_of_validity_prep,
		                                                  other.get_reference(),
		                                                  other.get_obs(),
		                                                  other.get_variance(),
		                                                  other.get_error_model(),
		                                                  other.get_error_model_params().size(),
		                                                  other.get_error_model_params().data(),
		                                                  other.get_integrity().size(),
		                                                  integrity_prep);

		delete[] integrity_prep;

		this->take_ownership = true;

		TypeHeader::reset_aspn_c(&this->c_struct->header, false);
	}
	return *this;
}

MeasurementDirectionOfMotion2D::MeasurementDirectionOfMotion2D(
    MeasurementDirectionOfMotion2D&& other)
    : TypeHeader(&other.c_struct->header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MeasurementDirectionOfMotion2D& MeasurementDirectionOfMotion2D::operator=(
    MeasurementDirectionOfMotion2D&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_direction_of_motion_2d_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MeasurementDirectionOfMotion2D::~MeasurementDirectionOfMotion2D() {
	if (c_struct != nullptr && take_ownership)
		aspn23_measurement_direction_of_motion_2d_free(this->c_struct);
}

Aspn23MessageType MeasurementDirectionOfMotion2D::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MeasurementDirectionOfMotion2D::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MeasurementDirectionOfMotion2D::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MeasurementDirectionOfMotion2D::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MeasurementDirectionOfMotion2D::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MeasurementDirectionOfMotion2D::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MeasurementDirectionOfMotion2D::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MeasurementDirectionOfMotion2D::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MeasurementDirectionOfMotion2D::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MeasurementDirectionOfMotion2D::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MeasurementDirectionOfMotion2D* MeasurementDirectionOfMotion2D::get_aspn_c() const {
	return c_struct;
}

void MeasurementDirectionOfMotion2D::reset_aspn_c(
    Aspn23MeasurementDirectionOfMotion2D* replacement_struct, bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_measurement_direction_of_motion_2d_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeHeader MeasurementDirectionOfMotion2D::get_header() const {
	nullptr_check();
	return aspn23_type_header_copy(&c_struct->header);
}

void MeasurementDirectionOfMotion2D::set_header(TypeHeader header) {
	nullptr_check();
	auto c_object    = std::move(header).get_aspn_c();
	c_struct->header = *c_object;
}

TypeTimestamp MeasurementDirectionOfMotion2D::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MeasurementDirectionOfMotion2D::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

Aspn23MeasurementDirectionOfMotion2DReference MeasurementDirectionOfMotion2D::get_reference()
    const {
	nullptr_check();
	return c_struct->reference;
}

void MeasurementDirectionOfMotion2D::set_reference(
    Aspn23MeasurementDirectionOfMotion2DReference reference) {
	nullptr_check();
	c_struct->reference = reference;
}

double MeasurementDirectionOfMotion2D::get_obs() const {
	nullptr_check();
	return c_struct->obs;
}

void MeasurementDirectionOfMotion2D::set_obs(double obs) {
	nullptr_check();
	c_struct->obs = obs;
}

double MeasurementDirectionOfMotion2D::get_variance() const {
	nullptr_check();
	return c_struct->variance;
}

void MeasurementDirectionOfMotion2D::set_variance(double variance) {
	nullptr_check();
	c_struct->variance = variance;
}

Aspn23MeasurementDirectionOfMotion2DErrorModel MeasurementDirectionOfMotion2D::get_error_model()
    const {
	nullptr_check();
	return c_struct->error_model;
}

void MeasurementDirectionOfMotion2D::set_error_model(
    Aspn23MeasurementDirectionOfMotion2DErrorModel error_model) {
	nullptr_check();
	c_struct->error_model = error_model;
}

uint16_t MeasurementDirectionOfMotion2D::get_num_error_model_params() const {
	nullptr_check();
	return c_struct->num_error_model_params;
}

xt::pytensor<double, 1> MeasurementDirectionOfMotion2D::get_error_model_params() const {
	nullptr_check();
	if (c_struct->error_model_params == nullptr) return {};
	std::vector<uint64_t> shape = {c_struct->num_error_model_params};
	return xt::adapt(
	    c_struct->error_model_params, c_struct->num_error_model_params, xt::no_ownership(), shape);
}

void MeasurementDirectionOfMotion2D::set_error_model_params(
    xt::pytensor<double, 1> error_model_params) {
	nullptr_check();
	memcpy(c_struct->error_model_params,
	       error_model_params.data(),
	       c_struct->num_error_model_params * sizeof(double));
	c_struct->num_error_model_params = error_model_params.size();
}

uint8_t MeasurementDirectionOfMotion2D::get_num_integrity() const {
	nullptr_check();
	return c_struct->num_integrity;
}

std::vector<TypeIntegrity> MeasurementDirectionOfMotion2D::get_integrity() const {
	nullptr_check();
	if (c_struct->integrity == nullptr) return {};
	std::vector<TypeIntegrity> out;
	for (size_t ii = 0; ii < c_struct->num_integrity; ii++) {
		out.push_back(aspn23_type_integrity_copy(&c_struct->integrity[ii]));
	}
	return out;
}

void MeasurementDirectionOfMotion2D::set_integrity(std::vector<TypeIntegrity> integrity) {
	nullptr_check();
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object           = integrity[ii].get_aspn_c();
		c_struct->integrity[ii] = *c_object;
	}
	c_struct->num_integrity = integrity.size();
}

void MeasurementDirectionOfMotion2D::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error(
		    "MeasurementDirectionOfMotion2D is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
