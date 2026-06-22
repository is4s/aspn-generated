
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MeasurementVelocity.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

MeasurementVelocity::MeasurementVelocity(TypeHeader header,
                                         TypeTimestamp time_of_validity,
                                         Aspn23MeasurementVelocityReferenceFrame reference_frame,
                                         double x,
                                         double y,
                                         double z,
                                         xt::pytensor<double, 2> covariance,
                                         Aspn23MeasurementVelocityErrorModel error_model,
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
	    aspn23_measurement_velocity_new(header_prep,
	                                    time_of_validity_prep,
	                                    reference_frame,
	                                    x,
	                                    y,
	                                    z,
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

MeasurementVelocity::MeasurementVelocity(Aspn23MeasurementVelocity* c_struct, bool take_ownership)
    : TypeHeader(&c_struct->header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MeasurementVelocity::MeasurementVelocity(const MeasurementVelocity& other)
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

	this->c_struct = aspn23_measurement_velocity_new(
	    header_prep,
	    time_of_validity_prep,
	    other.get_reference_frame(),
	    other.get_x(),
	    other.get_y(),
	    other.get_z(),
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

MeasurementVelocity& MeasurementVelocity::operator=(const MeasurementVelocity& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_velocity_free(this->c_struct);
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

		this->c_struct = aspn23_measurement_velocity_new(
		    header_prep,
		    time_of_validity_prep,
		    other.get_reference_frame(),
		    other.get_x(),
		    other.get_y(),
		    other.get_z(),
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

MeasurementVelocity::MeasurementVelocity(MeasurementVelocity&& other)
    : TypeHeader(&other.c_struct->header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MeasurementVelocity& MeasurementVelocity::operator=(MeasurementVelocity&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_velocity_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MeasurementVelocity::~MeasurementVelocity() {
	if (c_struct != nullptr && take_ownership) aspn23_measurement_velocity_free(this->c_struct);
}

Aspn23MessageType MeasurementVelocity::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MeasurementVelocity::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MeasurementVelocity::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MeasurementVelocity::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MeasurementVelocity::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MeasurementVelocity::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MeasurementVelocity::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MeasurementVelocity::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MeasurementVelocity::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MeasurementVelocity::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MeasurementVelocity* MeasurementVelocity::get_aspn_c() const { return c_struct; }

void MeasurementVelocity::reset_aspn_c(Aspn23MeasurementVelocity* replacement_struct,
                                       bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_measurement_velocity_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeHeader MeasurementVelocity::get_header() const {
	nullptr_check();
	return aspn23_type_header_copy(&c_struct->header);
}

void MeasurementVelocity::set_header(TypeHeader header) {
	nullptr_check();
	auto c_object    = std::move(header).get_aspn_c();
	c_struct->header = *c_object;
}

TypeTimestamp MeasurementVelocity::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MeasurementVelocity::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

Aspn23MeasurementVelocityReferenceFrame MeasurementVelocity::get_reference_frame() const {
	nullptr_check();
	return c_struct->reference_frame;
}

void MeasurementVelocity::set_reference_frame(
    Aspn23MeasurementVelocityReferenceFrame reference_frame) {
	nullptr_check();
	c_struct->reference_frame = reference_frame;
}

double MeasurementVelocity::get_x() const {
	nullptr_check();
	return c_struct->x;
}

void MeasurementVelocity::set_x(double x) {
	nullptr_check();
	c_struct->x = x;
}

double MeasurementVelocity::get_y() const {
	nullptr_check();
	return c_struct->y;
}

void MeasurementVelocity::set_y(double y) {
	nullptr_check();
	c_struct->y = y;
}

double MeasurementVelocity::get_z() const {
	nullptr_check();
	return c_struct->z;
}

void MeasurementVelocity::set_z(double z) {
	nullptr_check();
	c_struct->z = z;
}

uint8_t MeasurementVelocity::get_num_meas() const {
	nullptr_check();
	return c_struct->num_meas;
}

xt::pytensor<double, 2> MeasurementVelocity::get_covariance() const {
	nullptr_check();
	if (c_struct->covariance == nullptr) return {};
	std::vector<std::size_t> shape = {c_struct->num_meas, c_struct->num_meas};
	return xt::adapt(
	    c_struct->covariance, c_struct->num_meas * c_struct->num_meas, xt::no_ownership(), shape);
}

void MeasurementVelocity::set_covariance(xt::pytensor<double, 2> covariance) {
	nullptr_check();
	memcpy(c_struct->covariance,
	       covariance.data(),
	       c_struct->num_meas * c_struct->num_meas * sizeof(double));

	c_struct->num_meas = covariance.dimension() == 2 ? covariance.shape()[1] : 0;
}

Aspn23MeasurementVelocityErrorModel MeasurementVelocity::get_error_model() const {
	nullptr_check();
	return c_struct->error_model;
}

void MeasurementVelocity::set_error_model(Aspn23MeasurementVelocityErrorModel error_model) {
	nullptr_check();
	c_struct->error_model = error_model;
}

uint16_t MeasurementVelocity::get_num_error_model_params() const {
	nullptr_check();
	return c_struct->num_error_model_params;
}

xt::pytensor<double, 1> MeasurementVelocity::get_error_model_params() const {
	nullptr_check();
	if (c_struct->error_model_params == nullptr) return {};
	std::vector<uint64_t> shape = {c_struct->num_error_model_params};
	return xt::adapt(
	    c_struct->error_model_params, c_struct->num_error_model_params, xt::no_ownership(), shape);
}

void MeasurementVelocity::set_error_model_params(xt::pytensor<double, 1> error_model_params) {
	nullptr_check();
	memcpy(c_struct->error_model_params,
	       error_model_params.data(),
	       c_struct->num_error_model_params * sizeof(double));
	c_struct->num_error_model_params = error_model_params.size();
}

uint8_t MeasurementVelocity::get_num_integrity() const {
	nullptr_check();
	return c_struct->num_integrity;
}

std::vector<TypeIntegrity> MeasurementVelocity::get_integrity() const {
	nullptr_check();
	if (c_struct->integrity == nullptr) return {};
	std::vector<TypeIntegrity> out;
	for (size_t ii = 0; ii < c_struct->num_integrity; ii++) {
		out.push_back(aspn23_type_integrity_copy(&c_struct->integrity[ii]));
	}
	return out;
}

void MeasurementVelocity::set_integrity(std::vector<TypeIntegrity> integrity) {
	nullptr_check();
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object           = integrity[ii].get_aspn_c();
		c_struct->integrity[ii] = *c_object;
	}
	c_struct->num_integrity = integrity.size();
}

void MeasurementVelocity::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error("MeasurementVelocity is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
