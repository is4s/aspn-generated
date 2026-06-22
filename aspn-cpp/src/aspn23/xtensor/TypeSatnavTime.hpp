
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/TypeSatnavTime.h>

// xtensor
#include <xtensor/containers/xtensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes

// System includes
#include <vector>

#include <iostream>

namespace aspn23_xtensor {

/**
 * Satellite system time
 */
class TypeSatnavTime {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	TypeSatnavTime(Aspn23TypeSatnavTime* c_struct, bool take_ownership = true);

	TypeSatnavTime(uint16_t week_number,
	               double seconds_of_week,
	               Aspn23TypeSatnavTimeTimeReference time_reference);

	~TypeSatnavTime();

	TypeSatnavTime(const TypeSatnavTime& other);
	TypeSatnavTime& operator=(const TypeSatnavTime& rhs);

	TypeSatnavTime(TypeSatnavTime&& other);
	TypeSatnavTime& operator=(TypeSatnavTime&& rhs);

	/**
	 * Returns the underlying C struct while retaining ownership of the pointer.  The pointer
	 * is valid so long as this object has not gone out of scope.
	 */
	Aspn23TypeSatnavTime* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23TypeSatnavTime* replacement_struct, bool take_ownership = true);

	/**
	 * Full Week number since zero epoch at which the data provided in this message is valid,
	 * expressed in time system defined by time_reference enum (below).
	 */
	uint16_t get_week_number() const;

	/**
	 * Full Week number since zero epoch at which the data provided in this message is valid,
	 * expressed in time system defined by time_reference enum (below).
	 */
	void set_week_number(uint16_t);

	/**
	 * Seconds since start of current week at which the data provided in this message is valid,
	 * expressed in time system defined by time_reference enum (below).
	 */
	double get_seconds_of_week() const;

	/**
	 * Seconds since start of current week at which the data provided in this message is valid,
	 * expressed in time system defined by time_reference enum (below).
	 */
	void set_seconds_of_week(double);

	/**
	 * Reference time system used to express the data in this message. In a multi-GNSS receiver
	 * (GPS/GLONASS/Galileo/QZSS/BeiDou) all pseudorange observations must refer to one receiver
	 * clock only. The receiver clock time of the measurement is the receiver clock time of the
	 * received signals. It is identical for the phase and range measurements and is identical for
	 * all satellites observed in a given epoch.
	 */
	Aspn23TypeSatnavTimeTimeReference get_time_reference() const;

	/**
	 * Reference time system used to express the data in this message. In a multi-GNSS receiver
	 * (GPS/GLONASS/Galileo/QZSS/BeiDou) all pseudorange observations must refer to one receiver
	 * clock only. The receiver clock time of the measurement is the receiver clock time of the
	 * received signals. It is identical for the phase and range measurements and is identical for
	 * all satellites observed in a given epoch.
	 */
	void set_time_reference(Aspn23TypeSatnavTimeTimeReference);

private:
	Aspn23TypeSatnavTime* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

/**
 * Add a double to a TypeSatnavTime.
 * @param t TypeSatnavTime to add to.
 * @param t2_sec Value in seconds to add to \p t.
 * @return The result of the addition.
 */
TypeSatnavTime operator+(const TypeSatnavTime& t, double const t2_sec);

/**
 * Subtract a double from a TypeSatnavTime.
 * @param t TypeSatnavTime to subtract from.
 * @param t2_sec Value in seconds to subtract from \p t.
 * @return The result of the subtraction.
 */
TypeSatnavTime operator-(const TypeSatnavTime& t, double const t2_sec);

/**
 * Difference two TypeSatnavTime objects and return the result as a double.
 *
 * @param t1 TypeSatnavTime to subtract from.
 * @param t2 TypeSatnavTime to subtract from \p t1 .
 * @return The difference between the two times, represented as a double-precision number of seconds
 * @throw std::invalid_argument if the ErrorMode is DIE and t1.get_time_reference() !=
 * t2.get_time_reference()
 */
double operator-(const TypeSatnavTime& t1, const TypeSatnavTime& t2);

/**
 * Check whether two TypeSatnavTime objects represent the same time.
 * @param t1 LHS of the comparison.
 * @param t2 RHS of the comparison.
 * @return The boolean result of t1 == t2. Note, if t1.get_time_reference() !=
 * t2.get_time_reference(), will return false.
 */
bool operator==(const TypeSatnavTime& t1, const TypeSatnavTime& t2);

/**
 * Check whether two TypeSatnavTime objects represent different times.
 * @param t1 LHS of the comparison.
 * @param t2 RHS of the comparison.
 * @return The boolean result of t1 != t2. Note, if t1.get_time_reference() !=
 * t2.get_time_reference(), will return true.
 */
bool operator!=(const TypeSatnavTime& t1, const TypeSatnavTime& t2);

/**
 * Check whether TypeSatnavTime \p t2 ocurred after \p t1.
 * @param t1 LHS of the comparison.
 * @param t2 RHS of the comparison.
 * @return The boolean result of the t1 > t2.
 * @throw std::invalid_argument if the ErrorMode is DIE and t1.get_time_reference() !=
 * t2.get_time_reference()
 */
bool operator>(const TypeSatnavTime& t1, const TypeSatnavTime& t2);

/**
 * Check whether TypeSatnavTime \p t2 ocurred at or after \p t1.
 * Define the >= operator for the TypeSatnavTime class.
 * @param t1 LHS of the comparison.
 * @param t2 RHS of the comparison.
 * @return The boolean result of the t1 >= t2.
 * @throw std::invalid_argument if the ErrorMode is DIE and t1.get_time_reference() !=
 * t2.get_time_reference()
 */
bool operator>=(const TypeSatnavTime& t1, const TypeSatnavTime& t2);

/**
 * Check whether TypeSatnavTime \p t2 ocurred before \p t1.
 * @param t1 LHS of the comparison.
 * @param t2 RHS of the comparison.
 * @return The boolean result of the t1 < t2.
 * @throw std::invalid_argument if the ErrorMode is DIE and t1.get_time_reference() !=
 * t2.get_time_reference()
 */
bool operator<(const TypeSatnavTime& t1, const TypeSatnavTime& t2);

/**
 * Check whether TypeSatnavTime \p t2 ocurred at or before \p t1.
 * @param t1 LHS of the comparison.
 * @param t2 RHS of the comparison.
 * @return The boolean result of the t1 <= t2.
 * @throw std::invalid_argument if the ErrorMode is DIE and t1.get_time_reference() !=
 * t2.get_time_reference()
 */
bool operator<=(const TypeSatnavTime& t1, const TypeSatnavTime& t2);

/**
 * Define the `ostream` operator for the TypeSatnavTime class.
 * @param os The `std::ostream` reference.
 * @param t The TypeSatnavTime object to print.
 * @return The `std::ostream` reference that can print the TypeSatnavTime object.
 */
std::ostream& operator<<(std::ostream& os, const TypeSatnavTime& t);

}  // namespace aspn23_xtensor
