
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "TypeSatnavSvData.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

TypeSatnavSvData::TypeSatnavSvData(int16_t prn,
                                   TypeSatnavSatelliteSystem satellite_system,
                                   Aspn23TypeSatnavSvDataEphemerisType ephemeris_type,
                                   TypeSatnavTime sv_data_time,
                                   Aspn23TypeSatnavSvDataCoordinateFrame coordinate_frame,
                                   xt::pytensor<double, 1> sv_pos,
                                   xt::pytensor<double, 1> sv_vel,
                                   double sv_clock_bias,
                                   double sv_clock_drift,
                                   Aspn23TypeSatnavSvDataGroupDelayEnum group_delay_enum,
                                   xt::pytensor<float, 1> group_delay_vector) {
	auto satellite_system_prep = satellite_system.get_aspn_c();
	auto sv_data_time_prep     = sv_data_time.get_aspn_c();
	double sv_pos_prep[3];
	for (size_t ii = 0; ii < 3; ii++) sv_pos_prep[ii] = sv_pos(ii);

	double sv_vel_prep[3];
	for (size_t ii = 0; ii < 3; ii++) sv_vel_prep[ii] = sv_vel(ii);

	float group_delay_vector_prep[4];
	for (size_t ii = 0; ii < 4; ii++) group_delay_vector_prep[ii] = group_delay_vector(ii);

	this->c_struct = aspn23_type_satnav_sv_data_new(prn,
	                                                satellite_system_prep,
	                                                ephemeris_type,
	                                                sv_data_time_prep,
	                                                coordinate_frame,
	                                                sv_pos_prep,
	                                                sv_vel_prep,
	                                                sv_clock_bias,
	                                                sv_clock_drift,
	                                                group_delay_enum,
	                                                group_delay_vector_prep);

	this->take_ownership = true;
}

TypeSatnavSvData::TypeSatnavSvData(Aspn23TypeSatnavSvData* c_struct, bool take_ownership)
    : take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

TypeSatnavSvData::TypeSatnavSvData(const TypeSatnavSvData& other) {
	auto satellite_system      = other.get_satellite_system();
	auto sv_data_time          = other.get_sv_data_time();
	auto sv_pos                = other.get_sv_pos();
	auto sv_vel                = other.get_sv_vel();
	auto group_delay_vector    = other.get_group_delay_vector();
	auto satellite_system_prep = satellite_system.get_aspn_c();
	auto sv_data_time_prep     = sv_data_time.get_aspn_c();
	double sv_pos_prep[3];
	for (size_t ii = 0; ii < 3; ii++) sv_pos_prep[ii] = sv_pos(ii);

	double sv_vel_prep[3];
	for (size_t ii = 0; ii < 3; ii++) sv_vel_prep[ii] = sv_vel(ii);

	float group_delay_vector_prep[4];
	for (size_t ii = 0; ii < 4; ii++) group_delay_vector_prep[ii] = group_delay_vector(ii);

	this->c_struct = aspn23_type_satnav_sv_data_new(other.get_prn(),
	                                                satellite_system_prep,
	                                                other.get_ephemeris_type(),
	                                                sv_data_time_prep,
	                                                other.get_coordinate_frame(),
	                                                sv_pos_prep,
	                                                sv_vel_prep,
	                                                other.get_sv_clock_bias(),
	                                                other.get_sv_clock_drift(),
	                                                other.get_group_delay_enum(),
	                                                group_delay_vector_prep);

	this->take_ownership = true;
}

TypeSatnavSvData& TypeSatnavSvData::operator=(const TypeSatnavSvData& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_satnav_sv_data_free(this->c_struct);
		auto satellite_system      = other.get_satellite_system();
		auto sv_data_time          = other.get_sv_data_time();
		auto sv_pos                = other.get_sv_pos();
		auto sv_vel                = other.get_sv_vel();
		auto group_delay_vector    = other.get_group_delay_vector();
		auto satellite_system_prep = satellite_system.get_aspn_c();
		auto sv_data_time_prep     = sv_data_time.get_aspn_c();
		double sv_pos_prep[3];
		for (size_t ii = 0; ii < 3; ii++) sv_pos_prep[ii] = sv_pos(ii);

		double sv_vel_prep[3];
		for (size_t ii = 0; ii < 3; ii++) sv_vel_prep[ii] = sv_vel(ii);

		float group_delay_vector_prep[4];
		for (size_t ii = 0; ii < 4; ii++) group_delay_vector_prep[ii] = group_delay_vector(ii);

		this->c_struct = aspn23_type_satnav_sv_data_new(other.get_prn(),
		                                                satellite_system_prep,
		                                                other.get_ephemeris_type(),
		                                                sv_data_time_prep,
		                                                other.get_coordinate_frame(),
		                                                sv_pos_prep,
		                                                sv_vel_prep,
		                                                other.get_sv_clock_bias(),
		                                                other.get_sv_clock_drift(),
		                                                other.get_group_delay_enum(),
		                                                group_delay_vector_prep);

		this->take_ownership = true;
	}
	return *this;
}

TypeSatnavSvData::TypeSatnavSvData(TypeSatnavSvData&& other) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

TypeSatnavSvData& TypeSatnavSvData::operator=(TypeSatnavSvData&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_satnav_sv_data_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

TypeSatnavSvData::~TypeSatnavSvData() {
	if (c_struct != nullptr && take_ownership) aspn23_type_satnav_sv_data_free(this->c_struct);
}

Aspn23TypeSatnavSvData* TypeSatnavSvData::get_aspn_c() const { return c_struct; }

void TypeSatnavSvData::reset_aspn_c(Aspn23TypeSatnavSvData* replacement_struct,
                                    bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_type_satnav_sv_data_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

int16_t TypeSatnavSvData::get_prn() const {
	nullptr_check();
	return c_struct->prn;
}

void TypeSatnavSvData::set_prn(int16_t prn) {
	nullptr_check();
	c_struct->prn = prn;
}

TypeSatnavSatelliteSystem TypeSatnavSvData::get_satellite_system() const {
	nullptr_check();
	return aspn23_type_satnav_satellite_system_copy(&c_struct->satellite_system);
}

void TypeSatnavSvData::set_satellite_system(TypeSatnavSatelliteSystem satellite_system) {
	nullptr_check();
	auto c_object              = std::move(satellite_system).get_aspn_c();
	c_struct->satellite_system = *c_object;
}

Aspn23TypeSatnavSvDataEphemerisType TypeSatnavSvData::get_ephemeris_type() const {
	nullptr_check();
	return c_struct->ephemeris_type;
}

void TypeSatnavSvData::set_ephemeris_type(Aspn23TypeSatnavSvDataEphemerisType ephemeris_type) {
	nullptr_check();
	c_struct->ephemeris_type = ephemeris_type;
}

TypeSatnavTime TypeSatnavSvData::get_sv_data_time() const {
	nullptr_check();
	return aspn23_type_satnav_time_copy(&c_struct->sv_data_time);
}

void TypeSatnavSvData::set_sv_data_time(TypeSatnavTime sv_data_time) {
	nullptr_check();
	auto c_object          = std::move(sv_data_time).get_aspn_c();
	c_struct->sv_data_time = *c_object;
}

Aspn23TypeSatnavSvDataCoordinateFrame TypeSatnavSvData::get_coordinate_frame() const {
	nullptr_check();
	return c_struct->coordinate_frame;
}

void TypeSatnavSvData::set_coordinate_frame(
    Aspn23TypeSatnavSvDataCoordinateFrame coordinate_frame) {
	nullptr_check();
	c_struct->coordinate_frame = coordinate_frame;
}

xt::pytensor<double, 1> TypeSatnavSvData::get_sv_pos() const {
	nullptr_check();

	std::vector<uint64_t> shape = {3};
	return xt::adapt(&c_struct->sv_pos[0], 3, xt::no_ownership(), shape);
}

void TypeSatnavSvData::set_sv_pos(xt::pytensor<double, 1> sv_pos) {
	nullptr_check();
	memcpy(c_struct->sv_pos, sv_pos.data(), 3 * sizeof(double));
}

xt::pytensor<double, 1> TypeSatnavSvData::get_sv_vel() const {
	nullptr_check();

	std::vector<uint64_t> shape = {3};
	return xt::adapt(&c_struct->sv_vel[0], 3, xt::no_ownership(), shape);
}

void TypeSatnavSvData::set_sv_vel(xt::pytensor<double, 1> sv_vel) {
	nullptr_check();
	memcpy(c_struct->sv_vel, sv_vel.data(), 3 * sizeof(double));
}

double TypeSatnavSvData::get_sv_clock_bias() const {
	nullptr_check();
	return c_struct->sv_clock_bias;
}

void TypeSatnavSvData::set_sv_clock_bias(double sv_clock_bias) {
	nullptr_check();
	c_struct->sv_clock_bias = sv_clock_bias;
}

double TypeSatnavSvData::get_sv_clock_drift() const {
	nullptr_check();
	return c_struct->sv_clock_drift;
}

void TypeSatnavSvData::set_sv_clock_drift(double sv_clock_drift) {
	nullptr_check();
	c_struct->sv_clock_drift = sv_clock_drift;
}

Aspn23TypeSatnavSvDataGroupDelayEnum TypeSatnavSvData::get_group_delay_enum() const {
	nullptr_check();
	return c_struct->group_delay_enum;
}

void TypeSatnavSvData::set_group_delay_enum(Aspn23TypeSatnavSvDataGroupDelayEnum group_delay_enum) {
	nullptr_check();
	c_struct->group_delay_enum = group_delay_enum;
}

xt::pytensor<float, 1> TypeSatnavSvData::get_group_delay_vector() const {
	nullptr_check();

	std::vector<uint64_t> shape = {4};
	return xt::adapt(&c_struct->group_delay_vector[0], 4, xt::no_ownership(), shape);
}

void TypeSatnavSvData::set_group_delay_vector(xt::pytensor<float, 1> group_delay_vector) {
	nullptr_check();
	memcpy(c_struct->group_delay_vector, group_delay_vector.data(), 4 * sizeof(float));
}

void TypeSatnavSvData::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error("TypeSatnavSvData is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
