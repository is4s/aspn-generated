
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MeasurementSatnavSubframe.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

MeasurementSatnavSubframe::MeasurementSatnavSubframe(TypeHeader header,
                                                     TypeTimestamp time_of_validity,
                                                     int64_t gnss_message_id,
                                                     int32_t prn,
                                                     TypeSatnavSatelliteSystem satellite_system,
                                                     int32_t freq_slot_id,
                                                     xt::pytensor<int8_t, 1> data_vector,
                                                     std::vector<TypeIntegrity> integrity)
    : TypeHeader(header) {
	auto header_prep                    = header.get_aspn_c();
	auto time_of_validity_prep          = time_of_validity.get_aspn_c();
	auto satellite_system_prep          = satellite_system.get_aspn_c();
	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_measurement_satnav_subframe_new(header_prep,
	                                                        time_of_validity_prep,
	                                                        gnss_message_id,
	                                                        prn,
	                                                        satellite_system_prep,
	                                                        freq_slot_id,
	                                                        data_vector.size(),
	                                                        data_vector.data(),
	                                                        integrity.size(),
	                                                        integrity_prep);

	delete[] integrity_prep;

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->header, false);
}

MeasurementSatnavSubframe::MeasurementSatnavSubframe(Aspn23MeasurementSatnavSubframe* c_struct,
                                                     bool take_ownership)
    : TypeHeader(&c_struct->header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MeasurementSatnavSubframe::MeasurementSatnavSubframe(const MeasurementSatnavSubframe& other)
    : TypeHeader(&other.c_struct->header, false) {
	auto header                         = other.get_header();
	auto time_of_validity               = other.get_time_of_validity();
	auto satellite_system               = other.get_satellite_system();
	auto integrity                      = other.get_integrity();
	auto header_prep                    = header.get_aspn_c();
	auto time_of_validity_prep          = time_of_validity.get_aspn_c();
	auto satellite_system_prep          = satellite_system.get_aspn_c();
	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_measurement_satnav_subframe_new(header_prep,
	                                                        time_of_validity_prep,
	                                                        other.get_gnss_message_id(),
	                                                        other.get_prn(),
	                                                        satellite_system_prep,
	                                                        other.get_freq_slot_id(),
	                                                        other.get_data_vector().size(),
	                                                        other.get_data_vector().data(),
	                                                        other.get_integrity().size(),
	                                                        integrity_prep);

	delete[] integrity_prep;

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->header, false);
}

MeasurementSatnavSubframe& MeasurementSatnavSubframe::operator=(
    const MeasurementSatnavSubframe& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_satnav_subframe_free(this->c_struct);
		auto header                         = other.get_header();
		auto time_of_validity               = other.get_time_of_validity();
		auto satellite_system               = other.get_satellite_system();
		auto integrity                      = other.get_integrity();
		auto header_prep                    = header.get_aspn_c();
		auto time_of_validity_prep          = time_of_validity.get_aspn_c();
		auto satellite_system_prep          = satellite_system.get_aspn_c();
		Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
		for (size_t ii = 0; ii < integrity.size(); ii++) {
			auto c_object      = integrity[ii].get_aspn_c();
			integrity_prep[ii] = *c_object;
		}

		this->c_struct = aspn23_measurement_satnav_subframe_new(header_prep,
		                                                        time_of_validity_prep,
		                                                        other.get_gnss_message_id(),
		                                                        other.get_prn(),
		                                                        satellite_system_prep,
		                                                        other.get_freq_slot_id(),
		                                                        other.get_data_vector().size(),
		                                                        other.get_data_vector().data(),
		                                                        other.get_integrity().size(),
		                                                        integrity_prep);

		delete[] integrity_prep;

		this->take_ownership = true;

		TypeHeader::reset_aspn_c(&this->c_struct->header, false);
	}
	return *this;
}

MeasurementSatnavSubframe::MeasurementSatnavSubframe(MeasurementSatnavSubframe&& other)
    : TypeHeader(&other.c_struct->header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MeasurementSatnavSubframe& MeasurementSatnavSubframe::operator=(MeasurementSatnavSubframe&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_satnav_subframe_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MeasurementSatnavSubframe::~MeasurementSatnavSubframe() {
	if (c_struct != nullptr && take_ownership)
		aspn23_measurement_satnav_subframe_free(this->c_struct);
}

Aspn23MessageType MeasurementSatnavSubframe::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MeasurementSatnavSubframe::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MeasurementSatnavSubframe::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MeasurementSatnavSubframe::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MeasurementSatnavSubframe::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MeasurementSatnavSubframe::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MeasurementSatnavSubframe::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MeasurementSatnavSubframe::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MeasurementSatnavSubframe::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MeasurementSatnavSubframe::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MeasurementSatnavSubframe* MeasurementSatnavSubframe::get_aspn_c() const { return c_struct; }

void MeasurementSatnavSubframe::reset_aspn_c(Aspn23MeasurementSatnavSubframe* replacement_struct,
                                             bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_measurement_satnav_subframe_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeHeader MeasurementSatnavSubframe::get_header() const {
	nullptr_check();
	return aspn23_type_header_copy(&c_struct->header);
}

void MeasurementSatnavSubframe::set_header(TypeHeader header) {
	nullptr_check();
	auto c_object    = std::move(header).get_aspn_c();
	c_struct->header = *c_object;
}

TypeTimestamp MeasurementSatnavSubframe::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MeasurementSatnavSubframe::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

int64_t MeasurementSatnavSubframe::get_gnss_message_id() const {
	nullptr_check();
	return c_struct->gnss_message_id;
}

void MeasurementSatnavSubframe::set_gnss_message_id(int64_t gnss_message_id) {
	nullptr_check();
	c_struct->gnss_message_id = gnss_message_id;
}

int32_t MeasurementSatnavSubframe::get_prn() const {
	nullptr_check();
	return c_struct->prn;
}

void MeasurementSatnavSubframe::set_prn(int32_t prn) {
	nullptr_check();
	c_struct->prn = prn;
}

TypeSatnavSatelliteSystem MeasurementSatnavSubframe::get_satellite_system() const {
	nullptr_check();
	return aspn23_type_satnav_satellite_system_copy(&c_struct->satellite_system);
}

void MeasurementSatnavSubframe::set_satellite_system(TypeSatnavSatelliteSystem satellite_system) {
	nullptr_check();
	auto c_object              = std::move(satellite_system).get_aspn_c();
	c_struct->satellite_system = *c_object;
}

int32_t MeasurementSatnavSubframe::get_freq_slot_id() const {
	nullptr_check();
	return c_struct->freq_slot_id;
}

void MeasurementSatnavSubframe::set_freq_slot_id(int32_t freq_slot_id) {
	nullptr_check();
	c_struct->freq_slot_id = freq_slot_id;
}

uint16_t MeasurementSatnavSubframe::get_num_bytes() const {
	nullptr_check();
	return c_struct->num_bytes;
}

xt::pytensor<int8_t, 1> MeasurementSatnavSubframe::get_data_vector() const {
	nullptr_check();
	if (c_struct->data_vector == nullptr) return {};
	std::vector<uint64_t> shape = {c_struct->num_bytes};
	return xt::adapt(c_struct->data_vector, c_struct->num_bytes, xt::no_ownership(), shape);
}

void MeasurementSatnavSubframe::set_data_vector(xt::pytensor<int8_t, 1> data_vector) {
	nullptr_check();
	memcpy(c_struct->data_vector, data_vector.data(), c_struct->num_bytes * sizeof(int8_t));
	c_struct->num_bytes = data_vector.size();
}

uint8_t MeasurementSatnavSubframe::get_num_integrity() const {
	nullptr_check();
	return c_struct->num_integrity;
}

std::vector<TypeIntegrity> MeasurementSatnavSubframe::get_integrity() const {
	nullptr_check();
	if (c_struct->integrity == nullptr) return {};
	std::vector<TypeIntegrity> out;
	for (size_t ii = 0; ii < c_struct->num_integrity; ii++) {
		out.push_back(aspn23_type_integrity_copy(&c_struct->integrity[ii]));
	}
	return out;
}

void MeasurementSatnavSubframe::set_integrity(std::vector<TypeIntegrity> integrity) {
	nullptr_check();
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object           = integrity[ii].get_aspn_c();
		c_struct->integrity[ii] = *c_object;
	}
	c_struct->num_integrity = integrity.size();
}

void MeasurementSatnavSubframe::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error(
		    "MeasurementSatnavSubframe is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
