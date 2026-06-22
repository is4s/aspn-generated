
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MeasurementPosition.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

MeasurementPosition::MeasurementPosition(TypeHeader header,
                                         TypeTimestamp time_of_validity,
                                         Aspn23MeasurementPositionReferenceFrame reference_frame,
                                         double term1,
                                         double term2,
                                         double term3,
                                         xt::pytensor<double, 2> covariance,
                                         Aspn23MeasurementPositionErrorModel error_model,
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

	this->c_struct =
	    aspn23_measurement_position_new(header_prep,
	                                    time_of_validity_prep,
	                                    reference_frame,
	                                    term1,
	                                    term2,
	                                    term3,
	                                    covariance.dimension() == 2 ? covariance.shape()[1] : 0,
	                                    covariance.data(),
	                                    error_model,
	                                    error_model_params.size(),
	                                    error_model_params.data(),
	                                    integrity.size(),
	                                    integrity_prep);

	delete[] integrity_prep;

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->header, false);
}

MeasurementPosition::MeasurementPosition(Aspn23MeasurementPosition* c_struct, bool take_ownership)
    : TypeHeader(&c_struct->header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MeasurementPosition::MeasurementPosition(const MeasurementPosition& other)
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

	this->c_struct = aspn23_measurement_position_new(
	    header_prep,
	    time_of_validity_prep,
	    other.get_reference_frame(),
	    other.get_term1(),
	    other.get_term2(),
	    other.get_term3(),
	    other.get_covariance().dimension() == 2 ? other.get_covariance().shape()[1] : 0,
	    other.get_covariance().data(),
	    other.get_error_model(),
	    other.get_error_model_params().size(),
	    other.get_error_model_params().data(),
	    other.get_integrity().size(),
	    integrity_prep);

	delete[] integrity_prep;

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->header, false);
}

MeasurementPosition& MeasurementPosition::operator=(const MeasurementPosition& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_position_free(this->c_struct);
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

		this->c_struct = aspn23_measurement_position_new(
		    header_prep,
		    time_of_validity_prep,
		    other.get_reference_frame(),
		    other.get_term1(),
		    other.get_term2(),
		    other.get_term3(),
		    other.get_covariance().dimension() == 2 ? other.get_covariance().shape()[1] : 0,
		    other.get_covariance().data(),
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

MeasurementPosition::MeasurementPosition(MeasurementPosition&& other)
    : TypeHeader(&other.c_struct->header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MeasurementPosition& MeasurementPosition::operator=(MeasurementPosition&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_position_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MeasurementPosition::~MeasurementPosition() {
	if (c_struct != nullptr && take_ownership) aspn23_measurement_position_free(this->c_struct);
}

Aspn23MessageType MeasurementPosition::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MeasurementPosition::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MeasurementPosition::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MeasurementPosition::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MeasurementPosition::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MeasurementPosition::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MeasurementPosition::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MeasurementPosition::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MeasurementPosition::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MeasurementPosition::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MeasurementPosition* MeasurementPosition::get_aspn_c() const { return c_struct; }

void MeasurementPosition::reset_aspn_c(Aspn23MeasurementPosition* replacement_struct,
                                       bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_measurement_position_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeHeader MeasurementPosition::get_header() const {
	nullptr_check();
	return aspn23_type_header_copy(&c_struct->header);
}

void MeasurementPosition::set_header(TypeHeader header) {
	nullptr_check();
	auto c_object    = std::move(header).get_aspn_c();
	c_struct->header = *c_object;
}

TypeTimestamp MeasurementPosition::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MeasurementPosition::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

Aspn23MeasurementPositionReferenceFrame MeasurementPosition::get_reference_frame() const {
	nullptr_check();
	return c_struct->reference_frame;
}

void MeasurementPosition::set_reference_frame(
    Aspn23MeasurementPositionReferenceFrame reference_frame) {
	nullptr_check();
	c_struct->reference_frame = reference_frame;
}

double MeasurementPosition::get_term1() const {
	nullptr_check();
	return c_struct->term1;
}

void MeasurementPosition::set_term1(double term1) {
	nullptr_check();
	c_struct->term1 = term1;
}

double MeasurementPosition::get_term2() const {
	nullptr_check();
	return c_struct->term2;
}

void MeasurementPosition::set_term2(double term2) {
	nullptr_check();
	c_struct->term2 = term2;
}

double MeasurementPosition::get_term3() const {
	nullptr_check();
	return c_struct->term3;
}

void MeasurementPosition::set_term3(double term3) {
	nullptr_check();
	c_struct->term3 = term3;
}

uint8_t MeasurementPosition::get_num_meas() const {
	nullptr_check();
	return c_struct->num_meas;
}

xt::pytensor<double, 2> MeasurementPosition::get_covariance() const {
	nullptr_check();
	if (c_struct->covariance == nullptr) return {};
	std::vector<std::size_t> shape = {c_struct->num_meas, c_struct->num_meas};
	return xt::adapt(
	    c_struct->covariance, c_struct->num_meas * c_struct->num_meas, xt::no_ownership(), shape);
}

void MeasurementPosition::set_covariance(xt::pytensor<double, 2> covariance) {
	nullptr_check();
	memcpy(c_struct->covariance,
	       covariance.data(),
	       c_struct->num_meas * c_struct->num_meas * sizeof(double));

	c_struct->num_meas = covariance.dimension() == 2 ? covariance.shape()[1] : 0;
}

Aspn23MeasurementPositionErrorModel MeasurementPosition::get_error_model() const {
	nullptr_check();
	return c_struct->error_model;
}

void MeasurementPosition::set_error_model(Aspn23MeasurementPositionErrorModel error_model) {
	nullptr_check();
	c_struct->error_model = error_model;
}

uint16_t MeasurementPosition::get_num_error_model_params() const {
	nullptr_check();
	return c_struct->num_error_model_params;
}

xt::pytensor<double, 1> MeasurementPosition::get_error_model_params() const {
	nullptr_check();
	if (c_struct->error_model_params == nullptr) return {};
	std::vector<uint64_t> shape = {c_struct->num_error_model_params};
	return xt::adapt(
	    c_struct->error_model_params, c_struct->num_error_model_params, xt::no_ownership(), shape);
}

void MeasurementPosition::set_error_model_params(xt::pytensor<double, 1> error_model_params) {
	nullptr_check();
	memcpy(c_struct->error_model_params,
	       error_model_params.data(),
	       c_struct->num_error_model_params * sizeof(double));
	c_struct->num_error_model_params = error_model_params.size();
}

uint8_t MeasurementPosition::get_num_integrity() const {
	nullptr_check();
	return c_struct->num_integrity;
}

std::vector<TypeIntegrity> MeasurementPosition::get_integrity() const {
	nullptr_check();
	if (c_struct->integrity == nullptr) return {};
	std::vector<TypeIntegrity> out;
	for (size_t ii = 0; ii < c_struct->num_integrity; ii++) {
		out.push_back(aspn23_type_integrity_copy(&c_struct->integrity[ii]));
	}
	return out;
}

void MeasurementPosition::set_integrity(std::vector<TypeIntegrity> integrity) {
	nullptr_check();
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object           = integrity[ii].get_aspn_c();
		c_struct->integrity[ii] = *c_object;
	}
	c_struct->num_integrity = integrity.size();
}

void MeasurementPosition::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error("MeasurementPosition is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
