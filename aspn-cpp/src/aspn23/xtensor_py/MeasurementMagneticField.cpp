
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MeasurementMagneticField.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

MeasurementMagneticField::MeasurementMagneticField(
    TypeHeader header,
    TypeTimestamp time_of_validity,
    double x_field_strength,
    double y_field_strength,
    double z_field_strength,
    xt::pytensor<double, 2> covariance,
    Aspn23MeasurementMagneticFieldErrorModel error_model,
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

	this->c_struct = aspn23_measurement_magnetic_field_new(
	    header_prep,
	    time_of_validity_prep,
	    covariance.dimension() == 2 ? covariance.shape()[1] : 0,
	    x_field_strength,
	    y_field_strength,
	    z_field_strength,
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

MeasurementMagneticField::MeasurementMagneticField(Aspn23MeasurementMagneticField* c_struct,
                                                   bool take_ownership)
    : TypeHeader(&c_struct->header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MeasurementMagneticField::MeasurementMagneticField(const MeasurementMagneticField& other)
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

	this->c_struct = aspn23_measurement_magnetic_field_new(
	    header_prep,
	    time_of_validity_prep,
	    other.get_covariance().dimension() == 2 ? other.get_covariance().shape()[1] : 0,
	    other.get_x_field_strength(),
	    other.get_y_field_strength(),
	    other.get_z_field_strength(),
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

MeasurementMagneticField& MeasurementMagneticField::operator=(
    const MeasurementMagneticField& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_magnetic_field_free(this->c_struct);
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

		this->c_struct = aspn23_measurement_magnetic_field_new(
		    header_prep,
		    time_of_validity_prep,
		    other.get_covariance().dimension() == 2 ? other.get_covariance().shape()[1] : 0,
		    other.get_x_field_strength(),
		    other.get_y_field_strength(),
		    other.get_z_field_strength(),
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

MeasurementMagneticField::MeasurementMagneticField(MeasurementMagneticField&& other)
    : TypeHeader(&other.c_struct->header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MeasurementMagneticField& MeasurementMagneticField::operator=(MeasurementMagneticField&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_magnetic_field_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MeasurementMagneticField::~MeasurementMagneticField() {
	if (c_struct != nullptr && take_ownership)
		aspn23_measurement_magnetic_field_free(this->c_struct);
}

Aspn23MessageType MeasurementMagneticField::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MeasurementMagneticField::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MeasurementMagneticField::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MeasurementMagneticField::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MeasurementMagneticField::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MeasurementMagneticField::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MeasurementMagneticField::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MeasurementMagneticField::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MeasurementMagneticField::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MeasurementMagneticField::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MeasurementMagneticField* MeasurementMagneticField::get_aspn_c() const { return c_struct; }

void MeasurementMagneticField::reset_aspn_c(Aspn23MeasurementMagneticField* replacement_struct,
                                            bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_measurement_magnetic_field_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeHeader MeasurementMagneticField::get_header() const {
	nullptr_check();
	return aspn23_type_header_copy(&c_struct->header);
}

void MeasurementMagneticField::set_header(TypeHeader header) {
	nullptr_check();
	auto c_object    = std::move(header).get_aspn_c();
	c_struct->header = *c_object;
}

TypeTimestamp MeasurementMagneticField::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MeasurementMagneticField::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

uint8_t MeasurementMagneticField::get_num_meas() const {
	nullptr_check();
	return c_struct->num_meas;
}

double MeasurementMagneticField::get_x_field_strength() const {
	nullptr_check();
	return c_struct->x_field_strength;
}

void MeasurementMagneticField::set_x_field_strength(double x_field_strength) {
	nullptr_check();
	c_struct->x_field_strength = x_field_strength;
}

double MeasurementMagneticField::get_y_field_strength() const {
	nullptr_check();
	return c_struct->y_field_strength;
}

void MeasurementMagneticField::set_y_field_strength(double y_field_strength) {
	nullptr_check();
	c_struct->y_field_strength = y_field_strength;
}

double MeasurementMagneticField::get_z_field_strength() const {
	nullptr_check();
	return c_struct->z_field_strength;
}

void MeasurementMagneticField::set_z_field_strength(double z_field_strength) {
	nullptr_check();
	c_struct->z_field_strength = z_field_strength;
}

xt::pytensor<double, 2> MeasurementMagneticField::get_covariance() const {
	nullptr_check();
	if (c_struct->covariance == nullptr) return {};
	std::vector<std::size_t> shape = {c_struct->num_meas, c_struct->num_meas};
	return xt::adapt(
	    c_struct->covariance, c_struct->num_meas * c_struct->num_meas, xt::no_ownership(), shape);
}

void MeasurementMagneticField::set_covariance(xt::pytensor<double, 2> covariance) {
	nullptr_check();
	memcpy(c_struct->covariance,
	       covariance.data(),
	       c_struct->num_meas * c_struct->num_meas * sizeof(double));

	c_struct->num_meas = covariance.dimension() == 2 ? covariance.shape()[1] : 0;
}

Aspn23MeasurementMagneticFieldErrorModel MeasurementMagneticField::get_error_model() const {
	nullptr_check();
	return c_struct->error_model;
}

void MeasurementMagneticField::set_error_model(
    Aspn23MeasurementMagneticFieldErrorModel error_model) {
	nullptr_check();
	c_struct->error_model = error_model;
}

uint16_t MeasurementMagneticField::get_num_error_model_params() const {
	nullptr_check();
	return c_struct->num_error_model_params;
}

xt::pytensor<double, 1> MeasurementMagneticField::get_error_model_params() const {
	nullptr_check();
	if (c_struct->error_model_params == nullptr) return {};
	std::vector<uint64_t> shape = {c_struct->num_error_model_params};
	return xt::adapt(
	    c_struct->error_model_params, c_struct->num_error_model_params, xt::no_ownership(), shape);
}

void MeasurementMagneticField::set_error_model_params(xt::pytensor<double, 1> error_model_params) {
	nullptr_check();
	memcpy(c_struct->error_model_params,
	       error_model_params.data(),
	       c_struct->num_error_model_params * sizeof(double));
	c_struct->num_error_model_params = error_model_params.size();
}

uint8_t MeasurementMagneticField::get_num_integrity() const {
	nullptr_check();
	return c_struct->num_integrity;
}

std::vector<TypeIntegrity> MeasurementMagneticField::get_integrity() const {
	nullptr_check();
	if (c_struct->integrity == nullptr) return {};
	std::vector<TypeIntegrity> out;
	for (size_t ii = 0; ii < c_struct->num_integrity; ii++) {
		out.push_back(aspn23_type_integrity_copy(&c_struct->integrity[ii]));
	}
	return out;
}

void MeasurementMagneticField::set_integrity(std::vector<TypeIntegrity> integrity) {
	nullptr_check();
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object           = integrity[ii].get_aspn_c();
		c_struct->integrity[ii] = *c_object;
	}
	c_struct->num_integrity = integrity.size();
}

void MeasurementMagneticField::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error(
		    "MeasurementMagneticField is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
