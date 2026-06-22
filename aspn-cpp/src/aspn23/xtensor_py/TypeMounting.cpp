
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "TypeMounting.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

TypeMounting::TypeMounting(xt::pytensor<double, 1> lever_arm,
                           xt::pytensor<double, 1> lever_arm_sigma,
                           xt::pytensor<double, 1> orientation_quaternion,
                           xt::pytensor<double, 2> orientation_tilt_error_covariance) {

	double lever_arm_prep[3];
	for (size_t ii = 0; ii < 3; ii++) lever_arm_prep[ii] = lever_arm(ii);

	double lever_arm_sigma_prep[3];
	for (size_t ii = 0; ii < 3; ii++) lever_arm_sigma_prep[ii] = lever_arm_sigma(ii);

	double orientation_quaternion_prep[4];
	for (size_t ii = 0; ii < 4; ii++) orientation_quaternion_prep[ii] = orientation_quaternion(ii);

	double orientation_tilt_error_covariance_prep[3][3];
	for (size_t row = 0; row < 3; row++)
		for (size_t col = 0; col < 3; col++)
			orientation_tilt_error_covariance_prep[row][col] =
			    orientation_tilt_error_covariance(row, col);

	this->c_struct = aspn23_type_mounting_new(lever_arm_prep,
	                                          lever_arm_sigma_prep,
	                                          orientation_quaternion_prep,
	                                          orientation_tilt_error_covariance_prep);

	this->take_ownership = true;
}

TypeMounting::TypeMounting(Aspn23TypeMounting* c_struct, bool take_ownership)
    : take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

TypeMounting::TypeMounting(const TypeMounting& other) {
	auto lever_arm                         = other.get_lever_arm();
	auto lever_arm_sigma                   = other.get_lever_arm_sigma();
	auto orientation_quaternion            = other.get_orientation_quaternion();
	auto orientation_tilt_error_covariance = other.get_orientation_tilt_error_covariance();

	double lever_arm_prep[3];
	for (size_t ii = 0; ii < 3; ii++) lever_arm_prep[ii] = lever_arm(ii);

	double lever_arm_sigma_prep[3];
	for (size_t ii = 0; ii < 3; ii++) lever_arm_sigma_prep[ii] = lever_arm_sigma(ii);

	double orientation_quaternion_prep[4];
	for (size_t ii = 0; ii < 4; ii++) orientation_quaternion_prep[ii] = orientation_quaternion(ii);

	double orientation_tilt_error_covariance_prep[3][3];
	for (size_t row = 0; row < 3; row++)
		for (size_t col = 0; col < 3; col++)
			orientation_tilt_error_covariance_prep[row][col] =
			    orientation_tilt_error_covariance(row, col);

	this->c_struct = aspn23_type_mounting_new(lever_arm_prep,
	                                          lever_arm_sigma_prep,
	                                          orientation_quaternion_prep,
	                                          orientation_tilt_error_covariance_prep);

	this->take_ownership = true;
}

TypeMounting& TypeMounting::operator=(const TypeMounting& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_mounting_free(this->c_struct);
		auto lever_arm                         = other.get_lever_arm();
		auto lever_arm_sigma                   = other.get_lever_arm_sigma();
		auto orientation_quaternion            = other.get_orientation_quaternion();
		auto orientation_tilt_error_covariance = other.get_orientation_tilt_error_covariance();

		double lever_arm_prep[3];
		for (size_t ii = 0; ii < 3; ii++) lever_arm_prep[ii] = lever_arm(ii);

		double lever_arm_sigma_prep[3];
		for (size_t ii = 0; ii < 3; ii++) lever_arm_sigma_prep[ii] = lever_arm_sigma(ii);

		double orientation_quaternion_prep[4];
		for (size_t ii = 0; ii < 4; ii++)
			orientation_quaternion_prep[ii] = orientation_quaternion(ii);

		double orientation_tilt_error_covariance_prep[3][3];
		for (size_t row = 0; row < 3; row++)
			for (size_t col = 0; col < 3; col++)
				orientation_tilt_error_covariance_prep[row][col] =
				    orientation_tilt_error_covariance(row, col);

		this->c_struct = aspn23_type_mounting_new(lever_arm_prep,
		                                          lever_arm_sigma_prep,
		                                          orientation_quaternion_prep,
		                                          orientation_tilt_error_covariance_prep);

		this->take_ownership = true;
	}
	return *this;
}

TypeMounting::TypeMounting(TypeMounting&& other) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

TypeMounting& TypeMounting::operator=(TypeMounting&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_mounting_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

TypeMounting::~TypeMounting() {
	if (c_struct != nullptr && take_ownership) aspn23_type_mounting_free(this->c_struct);
}

Aspn23TypeMounting* TypeMounting::get_aspn_c() const { return c_struct; }

void TypeMounting::reset_aspn_c(Aspn23TypeMounting* replacement_struct, bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_type_mounting_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

xt::pytensor<double, 1> TypeMounting::get_lever_arm() const {
	nullptr_check();

	std::vector<uint64_t> shape = {3};
	return xt::adapt(&c_struct->lever_arm[0], 3, xt::no_ownership(), shape);
}

void TypeMounting::set_lever_arm(xt::pytensor<double, 1> lever_arm) {
	nullptr_check();
	memcpy(c_struct->lever_arm, lever_arm.data(), 3 * sizeof(double));
}

xt::pytensor<double, 1> TypeMounting::get_lever_arm_sigma() const {
	nullptr_check();

	std::vector<uint64_t> shape = {3};
	return xt::adapt(&c_struct->lever_arm_sigma[0], 3, xt::no_ownership(), shape);
}

void TypeMounting::set_lever_arm_sigma(xt::pytensor<double, 1> lever_arm_sigma) {
	nullptr_check();
	memcpy(c_struct->lever_arm_sigma, lever_arm_sigma.data(), 3 * sizeof(double));
}

xt::pytensor<double, 1> TypeMounting::get_orientation_quaternion() const {
	nullptr_check();

	std::vector<uint64_t> shape = {4};
	return xt::adapt(&c_struct->orientation_quaternion[0], 4, xt::no_ownership(), shape);
}

void TypeMounting::set_orientation_quaternion(xt::pytensor<double, 1> orientation_quaternion) {
	nullptr_check();
	memcpy(c_struct->orientation_quaternion, orientation_quaternion.data(), 4 * sizeof(double));
}

xt::pytensor<double, 2> TypeMounting::get_orientation_tilt_error_covariance() const {
	nullptr_check();

	std::vector<std::size_t> shape = {3, 3};
	return xt::adapt(&c_struct->orientation_tilt_error_covariance[0][0], shape);
}

void TypeMounting::set_orientation_tilt_error_covariance(
    xt::pytensor<double, 2> orientation_tilt_error_covariance) {
	nullptr_check();
	memcpy(c_struct->orientation_tilt_error_covariance,
	       orientation_tilt_error_covariance.data(),
	       3 * 3 * sizeof(double));
}

void TypeMounting::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error("TypeMounting is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
