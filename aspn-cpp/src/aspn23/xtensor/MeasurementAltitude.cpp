
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MeasurementAltitude.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

MeasurementAltitude::MeasurementAltitude(TypeHeader header,
                                         TypeTimestamp time_of_validity,
                                         Aspn23MeasurementAltitudeReference reference,
                                         double altitude,
                                         double variance,
                                         Aspn23MeasurementAltitudeErrorModel error_model,
                                         xt::xtensor<double, 1> error_model_params,
                                         std::vector<TypeIntegrity> integrity)
    : TypeHeader(header) {
	auto header_prep                    = header.get_aspn_c();
	auto time_of_validity_prep          = time_of_validity.get_aspn_c();
	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_measurement_altitude_new(header_prep,
	                                                 time_of_validity_prep,
	                                                 reference,
	                                                 altitude,
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

MeasurementAltitude::MeasurementAltitude(Aspn23MeasurementAltitude* c_struct, bool take_ownership)
    : TypeHeader(&c_struct->header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MeasurementAltitude::MeasurementAltitude(const MeasurementAltitude& other)
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

	this->c_struct = aspn23_measurement_altitude_new(header_prep,
	                                                 time_of_validity_prep,
	                                                 other.get_reference(),
	                                                 other.get_altitude(),
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

MeasurementAltitude& MeasurementAltitude::operator=(const MeasurementAltitude& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_altitude_free(this->c_struct);
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

		this->c_struct = aspn23_measurement_altitude_new(header_prep,
		                                                 time_of_validity_prep,
		                                                 other.get_reference(),
		                                                 other.get_altitude(),
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

MeasurementAltitude::MeasurementAltitude(MeasurementAltitude&& other)
    : TypeHeader(&other.c_struct->header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MeasurementAltitude& MeasurementAltitude::operator=(MeasurementAltitude&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_altitude_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MeasurementAltitude::~MeasurementAltitude() {
	if (c_struct != nullptr && take_ownership) aspn23_measurement_altitude_free(this->c_struct);
}

Aspn23MessageType MeasurementAltitude::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MeasurementAltitude::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MeasurementAltitude::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MeasurementAltitude::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MeasurementAltitude::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MeasurementAltitude::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MeasurementAltitude::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MeasurementAltitude::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MeasurementAltitude::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MeasurementAltitude::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MeasurementAltitude* MeasurementAltitude::get_aspn_c() const { return c_struct; }

void MeasurementAltitude::reset_aspn_c(Aspn23MeasurementAltitude* replacement_struct,
                                       bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_measurement_altitude_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeHeader MeasurementAltitude::get_header() const {
	nullptr_check();
	return aspn23_type_header_copy(&c_struct->header);
}

void MeasurementAltitude::set_header(TypeHeader header) {
	nullptr_check();
	auto c_object    = std::move(header).get_aspn_c();
	c_struct->header = *c_object;
}

TypeTimestamp MeasurementAltitude::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MeasurementAltitude::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

Aspn23MeasurementAltitudeReference MeasurementAltitude::get_reference() const {
	nullptr_check();
	return c_struct->reference;
}

void MeasurementAltitude::set_reference(Aspn23MeasurementAltitudeReference reference) {
	nullptr_check();
	c_struct->reference = reference;
}

double MeasurementAltitude::get_altitude() const {
	nullptr_check();
	return c_struct->altitude;
}

void MeasurementAltitude::set_altitude(double altitude) {
	nullptr_check();
	c_struct->altitude = altitude;
}

double MeasurementAltitude::get_variance() const {
	nullptr_check();
	return c_struct->variance;
}

void MeasurementAltitude::set_variance(double variance) {
	nullptr_check();
	c_struct->variance = variance;
}

Aspn23MeasurementAltitudeErrorModel MeasurementAltitude::get_error_model() const {
	nullptr_check();
	return c_struct->error_model;
}

void MeasurementAltitude::set_error_model(Aspn23MeasurementAltitudeErrorModel error_model) {
	nullptr_check();
	c_struct->error_model = error_model;
}

uint16_t MeasurementAltitude::get_num_error_model_params() const {
	nullptr_check();
	return c_struct->num_error_model_params;
}

xt::xtensor<double, 1> MeasurementAltitude::get_error_model_params() const {
	nullptr_check();
	if (c_struct->error_model_params == nullptr) return {};
	std::vector<uint64_t> shape = {c_struct->num_error_model_params};
	return xt::adapt(
	    c_struct->error_model_params, c_struct->num_error_model_params, xt::no_ownership(), shape);
}

void MeasurementAltitude::set_error_model_params(xt::xtensor<double, 1> error_model_params) {
	nullptr_check();
	memcpy(c_struct->error_model_params,
	       error_model_params.data(),
	       c_struct->num_error_model_params * sizeof(double));
	c_struct->num_error_model_params = error_model_params.size();
}

uint8_t MeasurementAltitude::get_num_integrity() const {
	nullptr_check();
	return c_struct->num_integrity;
}

std::vector<TypeIntegrity> MeasurementAltitude::get_integrity() const {
	nullptr_check();
	if (c_struct->integrity == nullptr) return {};
	std::vector<TypeIntegrity> out;
	for (size_t ii = 0; ii < c_struct->num_integrity; ii++) {
		out.push_back(aspn23_type_integrity_copy(&c_struct->integrity[ii]));
	}
	return out;
}

void MeasurementAltitude::set_integrity(std::vector<TypeIntegrity> integrity) {
	nullptr_check();
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object           = integrity[ii].get_aspn_c();
		c_struct->integrity[ii] = *c_object;
	}
	c_struct->num_integrity = integrity.size();
}

void MeasurementAltitude::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error("MeasurementAltitude is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
