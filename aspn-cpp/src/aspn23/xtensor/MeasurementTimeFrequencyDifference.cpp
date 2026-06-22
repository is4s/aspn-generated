
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MeasurementTimeFrequencyDifference.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

MeasurementTimeFrequencyDifference::MeasurementTimeFrequencyDifference(
    TypeHeader header,
    TypeTimestamp time_of_validity,
    int32_t time_of_validity_attosec,
    uint8_t clock_id1,
    uint8_t clock_id2,
    int64_t time_diff_nsec,
    int32_t time_diff_attosec,
    uint8_t digits_of_precision,
    double freq_diff,
    xt::xtensor_fixed<double, xt::xshape<2, 2>> covariance,
    Aspn23MeasurementTimeFrequencyDifferenceErrorModel error_model,
    xt::xtensor<double, 1> error_model_params,
    std::vector<TypeIntegrity> integrity)
    : TypeHeader(header) {
	auto header_prep           = header.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	double covariance_prep[2][2];
	for (size_t row = 0; row < 2; row++)
		for (size_t col = 0; col < 2; col++) covariance_prep[row][col] = covariance(row, col);

	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_measurement_time_frequency_difference_new(header_prep,
	                                                                  time_of_validity_prep,
	                                                                  time_of_validity_attosec,
	                                                                  clock_id1,
	                                                                  clock_id2,
	                                                                  time_diff_nsec,
	                                                                  time_diff_attosec,
	                                                                  digits_of_precision,
	                                                                  freq_diff,
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

MeasurementTimeFrequencyDifference::MeasurementTimeFrequencyDifference(
    Aspn23MeasurementTimeFrequencyDifference* c_struct, bool take_ownership)
    : TypeHeader(&c_struct->header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MeasurementTimeFrequencyDifference::MeasurementTimeFrequencyDifference(
    const MeasurementTimeFrequencyDifference& other)
    : TypeHeader(&other.c_struct->header, false) {
	auto header                = other.get_header();
	auto time_of_validity      = other.get_time_of_validity();
	auto covariance            = other.get_covariance();
	auto integrity             = other.get_integrity();
	auto header_prep           = header.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	double covariance_prep[2][2];
	for (size_t row = 0; row < 2; row++)
		for (size_t col = 0; col < 2; col++) covariance_prep[row][col] = covariance(row, col);

	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct =
	    aspn23_measurement_time_frequency_difference_new(header_prep,
	                                                     time_of_validity_prep,
	                                                     other.get_time_of_validity_attosec(),
	                                                     other.get_clock_id1(),
	                                                     other.get_clock_id2(),
	                                                     other.get_time_diff_nsec(),
	                                                     other.get_time_diff_attosec(),
	                                                     other.get_digits_of_precision(),
	                                                     other.get_freq_diff(),
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

MeasurementTimeFrequencyDifference& MeasurementTimeFrequencyDifference::operator=(
    const MeasurementTimeFrequencyDifference& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_time_frequency_difference_free(this->c_struct);
		auto header                = other.get_header();
		auto time_of_validity      = other.get_time_of_validity();
		auto covariance            = other.get_covariance();
		auto integrity             = other.get_integrity();
		auto header_prep           = header.get_aspn_c();
		auto time_of_validity_prep = time_of_validity.get_aspn_c();
		double covariance_prep[2][2];
		for (size_t row = 0; row < 2; row++)
			for (size_t col = 0; col < 2; col++) covariance_prep[row][col] = covariance(row, col);

		Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
		for (size_t ii = 0; ii < integrity.size(); ii++) {
			auto c_object      = integrity[ii].get_aspn_c();
			integrity_prep[ii] = *c_object;
		}

		this->c_struct =
		    aspn23_measurement_time_frequency_difference_new(header_prep,
		                                                     time_of_validity_prep,
		                                                     other.get_time_of_validity_attosec(),
		                                                     other.get_clock_id1(),
		                                                     other.get_clock_id2(),
		                                                     other.get_time_diff_nsec(),
		                                                     other.get_time_diff_attosec(),
		                                                     other.get_digits_of_precision(),
		                                                     other.get_freq_diff(),
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

MeasurementTimeFrequencyDifference::MeasurementTimeFrequencyDifference(
    MeasurementTimeFrequencyDifference&& other)
    : TypeHeader(&other.c_struct->header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MeasurementTimeFrequencyDifference& MeasurementTimeFrequencyDifference::operator=(
    MeasurementTimeFrequencyDifference&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_time_frequency_difference_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MeasurementTimeFrequencyDifference::~MeasurementTimeFrequencyDifference() {
	if (c_struct != nullptr && take_ownership)
		aspn23_measurement_time_frequency_difference_free(this->c_struct);
}

Aspn23MessageType MeasurementTimeFrequencyDifference::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MeasurementTimeFrequencyDifference::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MeasurementTimeFrequencyDifference::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MeasurementTimeFrequencyDifference::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MeasurementTimeFrequencyDifference::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MeasurementTimeFrequencyDifference::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MeasurementTimeFrequencyDifference::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MeasurementTimeFrequencyDifference::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MeasurementTimeFrequencyDifference::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MeasurementTimeFrequencyDifference::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MeasurementTimeFrequencyDifference* MeasurementTimeFrequencyDifference::get_aspn_c() const {
	return c_struct;
}

void MeasurementTimeFrequencyDifference::reset_aspn_c(
    Aspn23MeasurementTimeFrequencyDifference* replacement_struct, bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_measurement_time_frequency_difference_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeHeader MeasurementTimeFrequencyDifference::get_header() const {
	nullptr_check();
	return aspn23_type_header_copy(&c_struct->header);
}

void MeasurementTimeFrequencyDifference::set_header(TypeHeader header) {
	nullptr_check();
	auto c_object    = std::move(header).get_aspn_c();
	c_struct->header = *c_object;
}

TypeTimestamp MeasurementTimeFrequencyDifference::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MeasurementTimeFrequencyDifference::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

int32_t MeasurementTimeFrequencyDifference::get_time_of_validity_attosec() const {
	nullptr_check();
	return c_struct->time_of_validity_attosec;
}

void MeasurementTimeFrequencyDifference::set_time_of_validity_attosec(
    int32_t time_of_validity_attosec) {
	nullptr_check();
	c_struct->time_of_validity_attosec = time_of_validity_attosec;
}

uint8_t MeasurementTimeFrequencyDifference::get_clock_id1() const {
	nullptr_check();
	return c_struct->clock_id1;
}

void MeasurementTimeFrequencyDifference::set_clock_id1(uint8_t clock_id1) {
	nullptr_check();
	c_struct->clock_id1 = clock_id1;
}

uint8_t MeasurementTimeFrequencyDifference::get_clock_id2() const {
	nullptr_check();
	return c_struct->clock_id2;
}

void MeasurementTimeFrequencyDifference::set_clock_id2(uint8_t clock_id2) {
	nullptr_check();
	c_struct->clock_id2 = clock_id2;
}

int64_t MeasurementTimeFrequencyDifference::get_time_diff_nsec() const {
	nullptr_check();
	return c_struct->time_diff_nsec;
}

void MeasurementTimeFrequencyDifference::set_time_diff_nsec(int64_t time_diff_nsec) {
	nullptr_check();
	c_struct->time_diff_nsec = time_diff_nsec;
}

int32_t MeasurementTimeFrequencyDifference::get_time_diff_attosec() const {
	nullptr_check();
	return c_struct->time_diff_attosec;
}

void MeasurementTimeFrequencyDifference::set_time_diff_attosec(int32_t time_diff_attosec) {
	nullptr_check();
	c_struct->time_diff_attosec = time_diff_attosec;
}

uint8_t MeasurementTimeFrequencyDifference::get_digits_of_precision() const {
	nullptr_check();
	return c_struct->digits_of_precision;
}

void MeasurementTimeFrequencyDifference::set_digits_of_precision(uint8_t digits_of_precision) {
	nullptr_check();
	c_struct->digits_of_precision = digits_of_precision;
}

double MeasurementTimeFrequencyDifference::get_freq_diff() const {
	nullptr_check();
	return c_struct->freq_diff;
}

void MeasurementTimeFrequencyDifference::set_freq_diff(double freq_diff) {
	nullptr_check();
	c_struct->freq_diff = freq_diff;
}

xt::xtensor_fixed<double, xt::xshape<2, 2>> MeasurementTimeFrequencyDifference::get_covariance()
    const {
	nullptr_check();

	std::vector<std::size_t> shape = {2, 2};
	return xt::adapt(&c_struct->covariance[0][0], shape);
}

void MeasurementTimeFrequencyDifference::set_covariance(
    xt::xtensor_fixed<double, xt::xshape<2, 2>> covariance) {
	nullptr_check();
	memcpy(c_struct->covariance, covariance.data(), 2 * 2 * sizeof(double));
}

Aspn23MeasurementTimeFrequencyDifferenceErrorModel
MeasurementTimeFrequencyDifference::get_error_model() const {
	nullptr_check();
	return c_struct->error_model;
}

void MeasurementTimeFrequencyDifference::set_error_model(
    Aspn23MeasurementTimeFrequencyDifferenceErrorModel error_model) {
	nullptr_check();
	c_struct->error_model = error_model;
}

uint16_t MeasurementTimeFrequencyDifference::get_num_error_model_params() const {
	nullptr_check();
	return c_struct->num_error_model_params;
}

xt::xtensor<double, 1> MeasurementTimeFrequencyDifference::get_error_model_params() const {
	nullptr_check();
	if (c_struct->error_model_params == nullptr) return {};
	std::vector<uint64_t> shape = {c_struct->num_error_model_params};
	return xt::adapt(
	    c_struct->error_model_params, c_struct->num_error_model_params, xt::no_ownership(), shape);
}

void MeasurementTimeFrequencyDifference::set_error_model_params(
    xt::xtensor<double, 1> error_model_params) {
	nullptr_check();
	memcpy(c_struct->error_model_params,
	       error_model_params.data(),
	       c_struct->num_error_model_params * sizeof(double));
	c_struct->num_error_model_params = error_model_params.size();
}

uint8_t MeasurementTimeFrequencyDifference::get_num_integrity() const {
	nullptr_check();
	return c_struct->num_integrity;
}

std::vector<TypeIntegrity> MeasurementTimeFrequencyDifference::get_integrity() const {
	nullptr_check();
	if (c_struct->integrity == nullptr) return {};
	std::vector<TypeIntegrity> out;
	for (size_t ii = 0; ii < c_struct->num_integrity; ii++) {
		out.push_back(aspn23_type_integrity_copy(&c_struct->integrity[ii]));
	}
	return out;
}

void MeasurementTimeFrequencyDifference::set_integrity(std::vector<TypeIntegrity> integrity) {
	nullptr_check();
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object           = integrity[ii].get_aspn_c();
		c_struct->integrity[ii] = *c_object;
	}
	c_struct->num_integrity = integrity.size();
}

void MeasurementTimeFrequencyDifference::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error(
		    "MeasurementTimeFrequencyDifference is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
