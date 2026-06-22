
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MeasurementPositionAttitude.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

MeasurementPositionAttitude::MeasurementPositionAttitude(
    TypeHeader header,
    TypeTimestamp time_of_validity,
    Aspn23MeasurementPositionAttitudeReferenceFrame reference_frame,
    double p1,
    double p2,
    double p3,
    xt::pytensor<double, 1> quaternion,
    xt::pytensor<double, 2> covariance,
    Aspn23MeasurementPositionAttitudeErrorModel error_model,
    xt::pytensor<double, 1> error_model_params,
    std::vector<TypeIntegrity> integrity)
    : TypeHeader(header) {
	auto header_prep           = header.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	double quaternion_prep[4];
	for (size_t ii = 0; ii < 4; ii++) quaternion_prep[ii] = quaternion(ii);

	double covariance_prep[6][6];
	for (size_t row = 0; row < 6; row++)
		for (size_t col = 0; col < 6; col++) covariance_prep[row][col] = covariance(row, col);

	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_measurement_position_attitude_new(header_prep,
	                                                          time_of_validity_prep,
	                                                          reference_frame,
	                                                          p1,
	                                                          p2,
	                                                          p3,
	                                                          quaternion_prep,
	                                                          covariance_prep,
	                                                          error_model,
	                                                          error_model_params.size(),
	                                                          error_model_params.data(),
	                                                          integrity.size(),
	                                                          integrity_prep);

	delete[] integrity_prep;

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->header, false);
}

MeasurementPositionAttitude::MeasurementPositionAttitude(
    Aspn23MeasurementPositionAttitude* c_struct, bool take_ownership)
    : TypeHeader(&c_struct->header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MeasurementPositionAttitude::MeasurementPositionAttitude(const MeasurementPositionAttitude& other)
    : TypeHeader(&other.c_struct->header, false) {
	auto header                = other.get_header();
	auto time_of_validity      = other.get_time_of_validity();
	auto quaternion            = other.get_quaternion();
	auto covariance            = other.get_covariance();
	auto integrity             = other.get_integrity();
	auto header_prep           = header.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	double quaternion_prep[4];
	for (size_t ii = 0; ii < 4; ii++) quaternion_prep[ii] = quaternion(ii);

	double covariance_prep[6][6];
	for (size_t row = 0; row < 6; row++)
		for (size_t col = 0; col < 6; col++) covariance_prep[row][col] = covariance(row, col);

	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_measurement_position_attitude_new(header_prep,
	                                                          time_of_validity_prep,
	                                                          other.get_reference_frame(),
	                                                          other.get_p1(),
	                                                          other.get_p2(),
	                                                          other.get_p3(),
	                                                          quaternion_prep,
	                                                          covariance_prep,
	                                                          other.get_error_model(),
	                                                          other.get_error_model_params().size(),
	                                                          other.get_error_model_params().data(),
	                                                          other.get_integrity().size(),
	                                                          integrity_prep);

	delete[] integrity_prep;

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->header, false);
}

MeasurementPositionAttitude& MeasurementPositionAttitude::operator=(
    const MeasurementPositionAttitude& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_position_attitude_free(this->c_struct);
		auto header                = other.get_header();
		auto time_of_validity      = other.get_time_of_validity();
		auto quaternion            = other.get_quaternion();
		auto covariance            = other.get_covariance();
		auto integrity             = other.get_integrity();
		auto header_prep           = header.get_aspn_c();
		auto time_of_validity_prep = time_of_validity.get_aspn_c();
		double quaternion_prep[4];
		for (size_t ii = 0; ii < 4; ii++) quaternion_prep[ii] = quaternion(ii);

		double covariance_prep[6][6];
		for (size_t row = 0; row < 6; row++)
			for (size_t col = 0; col < 6; col++) covariance_prep[row][col] = covariance(row, col);

		Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
		for (size_t ii = 0; ii < integrity.size(); ii++) {
			auto c_object      = integrity[ii].get_aspn_c();
			integrity_prep[ii] = *c_object;
		}

		this->c_struct =
		    aspn23_measurement_position_attitude_new(header_prep,
		                                             time_of_validity_prep,
		                                             other.get_reference_frame(),
		                                             other.get_p1(),
		                                             other.get_p2(),
		                                             other.get_p3(),
		                                             quaternion_prep,
		                                             covariance_prep,
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

MeasurementPositionAttitude::MeasurementPositionAttitude(MeasurementPositionAttitude&& other)
    : TypeHeader(&other.c_struct->header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MeasurementPositionAttitude& MeasurementPositionAttitude::operator=(
    MeasurementPositionAttitude&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_position_attitude_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MeasurementPositionAttitude::~MeasurementPositionAttitude() {
	if (c_struct != nullptr && take_ownership)
		aspn23_measurement_position_attitude_free(this->c_struct);
}

Aspn23MessageType MeasurementPositionAttitude::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MeasurementPositionAttitude::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MeasurementPositionAttitude::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MeasurementPositionAttitude::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MeasurementPositionAttitude::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MeasurementPositionAttitude::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MeasurementPositionAttitude::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MeasurementPositionAttitude::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MeasurementPositionAttitude::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MeasurementPositionAttitude::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MeasurementPositionAttitude* MeasurementPositionAttitude::get_aspn_c() const {
	return c_struct;
}

void MeasurementPositionAttitude::reset_aspn_c(
    Aspn23MeasurementPositionAttitude* replacement_struct, bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_measurement_position_attitude_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeHeader MeasurementPositionAttitude::get_header() const {
	nullptr_check();
	return aspn23_type_header_copy(&c_struct->header);
}

void MeasurementPositionAttitude::set_header(TypeHeader header) {
	nullptr_check();
	auto c_object    = std::move(header).get_aspn_c();
	c_struct->header = *c_object;
}

TypeTimestamp MeasurementPositionAttitude::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MeasurementPositionAttitude::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

Aspn23MeasurementPositionAttitudeReferenceFrame MeasurementPositionAttitude::get_reference_frame()
    const {
	nullptr_check();
	return c_struct->reference_frame;
}

void MeasurementPositionAttitude::set_reference_frame(
    Aspn23MeasurementPositionAttitudeReferenceFrame reference_frame) {
	nullptr_check();
	c_struct->reference_frame = reference_frame;
}

double MeasurementPositionAttitude::get_p1() const {
	nullptr_check();
	return c_struct->p1;
}

void MeasurementPositionAttitude::set_p1(double p1) {
	nullptr_check();
	c_struct->p1 = p1;
}

double MeasurementPositionAttitude::get_p2() const {
	nullptr_check();
	return c_struct->p2;
}

void MeasurementPositionAttitude::set_p2(double p2) {
	nullptr_check();
	c_struct->p2 = p2;
}

double MeasurementPositionAttitude::get_p3() const {
	nullptr_check();
	return c_struct->p3;
}

void MeasurementPositionAttitude::set_p3(double p3) {
	nullptr_check();
	c_struct->p3 = p3;
}

xt::pytensor<double, 1> MeasurementPositionAttitude::get_quaternion() const {
	nullptr_check();

	std::vector<uint64_t> shape = {4};
	return xt::adapt(&c_struct->quaternion[0], 4, xt::no_ownership(), shape);
}

void MeasurementPositionAttitude::set_quaternion(xt::pytensor<double, 1> quaternion) {
	nullptr_check();
	memcpy(c_struct->quaternion, quaternion.data(), 4 * sizeof(double));
}

xt::pytensor<double, 2> MeasurementPositionAttitude::get_covariance() const {
	nullptr_check();

	std::vector<std::size_t> shape = {6, 6};
	return xt::adapt(&c_struct->covariance[0][0], shape);
}

void MeasurementPositionAttitude::set_covariance(xt::pytensor<double, 2> covariance) {
	nullptr_check();
	memcpy(c_struct->covariance, covariance.data(), 6 * 6 * sizeof(double));
}

Aspn23MeasurementPositionAttitudeErrorModel MeasurementPositionAttitude::get_error_model() const {
	nullptr_check();
	return c_struct->error_model;
}

void MeasurementPositionAttitude::set_error_model(
    Aspn23MeasurementPositionAttitudeErrorModel error_model) {
	nullptr_check();
	c_struct->error_model = error_model;
}

uint16_t MeasurementPositionAttitude::get_num_error_model_params() const {
	nullptr_check();
	return c_struct->num_error_model_params;
}

xt::pytensor<double, 1> MeasurementPositionAttitude::get_error_model_params() const {
	nullptr_check();
	if (c_struct->error_model_params == nullptr) return {};
	std::vector<uint64_t> shape = {c_struct->num_error_model_params};
	return xt::adapt(
	    c_struct->error_model_params, c_struct->num_error_model_params, xt::no_ownership(), shape);
}

void MeasurementPositionAttitude::set_error_model_params(
    xt::pytensor<double, 1> error_model_params) {
	nullptr_check();
	memcpy(c_struct->error_model_params,
	       error_model_params.data(),
	       c_struct->num_error_model_params * sizeof(double));
	c_struct->num_error_model_params = error_model_params.size();
}

uint8_t MeasurementPositionAttitude::get_num_integrity() const {
	nullptr_check();
	return c_struct->num_integrity;
}

std::vector<TypeIntegrity> MeasurementPositionAttitude::get_integrity() const {
	nullptr_check();
	if (c_struct->integrity == nullptr) return {};
	std::vector<TypeIntegrity> out;
	for (size_t ii = 0; ii < c_struct->num_integrity; ii++) {
		out.push_back(aspn23_type_integrity_copy(&c_struct->integrity[ii]));
	}
	return out;
}

void MeasurementPositionAttitude::set_integrity(std::vector<TypeIntegrity> integrity) {
	nullptr_check();
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object           = integrity[ii].get_aspn_c();
		c_struct->integrity[ii] = *c_object;
	}
	c_struct->num_integrity = integrity.size();
}

void MeasurementPositionAttitude::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error(
		    "MeasurementPositionAttitude is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
