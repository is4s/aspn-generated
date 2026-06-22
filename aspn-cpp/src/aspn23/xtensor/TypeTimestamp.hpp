
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/TypeTimestamp.h>

// xtensor
#include <xtensor/containers/xtensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes

// System includes
#include <vector>

#include <iostream>

namespace aspn23_xtensor {

/**
 * Whole number nanoseconds elapsed since timestamp's zero epoch. If negative, whole number
 * nanoseconds until timestamp's zero epoch. The zero epoch definition is based on the timing source
 * used by the message provider. The timing source used by the message provider is defined by the
 * `timestamp_clock_id` included in the `type_metadataheader` as part of the metadata. Additionally,
 * the timestamp's digits of precision are included in the `type_metadataheader` as part of the
 * metadata, which may be useful if an implementation is converting the timestamp to another type
 * internally.
 * If needed, the time elapsed in seconds is equal to elapsed_nsec * 1e-9.
 */
class TypeTimestamp {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	TypeTimestamp(Aspn23TypeTimestamp* c_struct, bool take_ownership = true);

	TypeTimestamp(int64_t elapsed_nsec);

	~TypeTimestamp();

	TypeTimestamp(const TypeTimestamp& other);
	TypeTimestamp& operator=(const TypeTimestamp& rhs);

	TypeTimestamp(TypeTimestamp&& other);
	TypeTimestamp& operator=(TypeTimestamp&& rhs);

	/**
	 * Returns the underlying C struct while retaining ownership of the pointer.  The pointer
	 * is valid so long as this object has not gone out of scope.
	 */
	Aspn23TypeTimestamp* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23TypeTimestamp* replacement_struct, bool take_ownership = true);

	/**
	 * Whole number nanoseconds elapsed since timestamp's zero epoch. If negative, whole number
	 * nanoseconds until timestamp's zero epoch.
	 */
	int64_t get_elapsed_nsec() const;

	/**
	 * Whole number nanoseconds elapsed since timestamp's zero epoch. If negative, whole number
	 * nanoseconds until timestamp's zero epoch.
	 */
	void set_elapsed_nsec(int64_t);

private:
	Aspn23TypeTimestamp* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

/**
 * Create a TypeTimestamp object from decimal seconds.
 *
 * @param t The decimal time in seconds since the epoch.
 */
TypeTimestamp to_type_timestamp(double t = 0.);

/**
 * Create a TypeTimestamp object from integer seconds and nanoseconds.
 *
 * @param sec The number of seconds since the epoch, to be combined with \p nsec.
 * @param nsec The number of nanoseconds since the epoch, to be combined with \p sec.
 */
TypeTimestamp to_type_timestamp(int64_t sec, int64_t nsec);

/**
 * @param time An ASPN time
 *
 * @return A double-precision representation of this time in seconds. At realistic epoch times,
 * doubles are considerably less precise than TypeTimestamp's native storage format of an integer
 * number of nanoseconds, so such conversions should be kept to a minimum.
 */
double to_seconds(const TypeTimestamp& time);

/**
 * Add the value of two TypeTimestamp objects together without converting data types.
 *
 * @param t1 First TypeTimestamp object
 * @param t2 Second TypeTimestamp object
 *
 * @return A TypeTimestamp object holding the added time, (t1 + t2).
 */
TypeTimestamp operator+(const TypeTimestamp& t1, const TypeTimestamp& t2);

/**
 * Add the value of a TypeTimestamp object and a double value (in seconds). This operator overload
 * avoids an implicit cast from double to TypeTimestamp, which would yield an invalid result if the
 * double is in seconds, since TypeTimestamp stores time in nanoseconds.
 *
 * @param t1 A TypeTimestamp object
 * @param t2_sec A double value in seconds
 *
 * @return A TypeTimestamp object holding the added time, (t1 + t2_sec).
 */
TypeTimestamp operator+(const TypeTimestamp& t1, double t2_sec);

/**
 * @param t1_sec A double value in seconds
 * @param t2 A TypeTimestamp object
 *
 * @return A TypeTimestamp object holding the added time, (t1_sec + t2).
 */
TypeTimestamp operator+(double t1_sec, const TypeTimestamp& t2);

/**
 * Subtract the value of one Timestamp object from another Timestamp.
 *
 * @param t1 First TypeTimestamp object
 * @param t2 Second TypeTimestamp object
 *
 * @return A TypeTimestamp object holding the subtracted time, (t1 - t2).
 */
TypeTimestamp operator-(const TypeTimestamp& t1, const TypeTimestamp& t2);

/**
 * Subtract the value of a double (in seconds) from a TypeTimestamp object. This operator overload
 * avoids an implicit cast from double to TypeTimestamp, which would yield an invalid result if the
 * double is in seconds, since TypeTimestamp stores time in nanoseconds.
 *
 * @param t1 A TypeTimestamp object
 * @param t2_sec A double value in seconds
 *
 * @return A TypeTimestamp object holding the subtracted time, (t1 - t2_sec).
 */
TypeTimestamp operator-(const TypeTimestamp& t1, double t2_sec);

/**
 * @param t1_sec A double value in seconds
 * @param t2 A TypeTimestamp object
 *
 * @return A TypeTimestamp object holding the subtracted time, (t1_sec - t2).
 */
TypeTimestamp operator-(double t1_sec, const TypeTimestamp& t2);

/**
 * Check whether two TypeTimestamp objects represent the same nanosecond.
 *
 * @param t1 A TypeTimestamp object
 * @param t2 Another TypeTimestamp object
 *
 * @return `true` when both times represent the same nanosecond.
 */
bool operator==(const TypeTimestamp& t1, const TypeTimestamp& t2);

/**
 * Check whether two TypeTimestamp objects represent the same nanosecond.
 *
 * @param t1_sec A double value in seconds
 * @param t2 A TypeTimestamp object
 *
 * @return `true` when both times represent the same nanosecond.
 */
bool operator==(double t1_sec, const TypeTimestamp& t2);

/**
 * Check whether two TypeTimestamp objects represent the same nanosecond.
 *
 * @param t1 A TypeTimestamp object
 * @param t2_sec A double value in seconds
 *
 * @return `true` when both times represent the same nanosecond.
 */
bool operator==(const TypeTimestamp& t1, double t2_sec);

/**
 * Check whether two TypeTimestamp objects represent a different nanosecond.
 *
 * @param t1 A TypeTimestamp object
 * @param t2 Another TypeTimestamp object
 *
 * @return `true` when both times do not represent the same nanosecond.
 */
bool operator!=(const TypeTimestamp& t1, const TypeTimestamp& t2);

/**
 * Check whether two TypeTimestamp objects represent a different nanosecond.
 *
 * @param t1_sec A double value in seconds
 * @param t2 A TypeTimestamp object
 *
 * @return `true` when both times do not represent the same nanosecond.
 */
bool operator!=(double t1_sec, const TypeTimestamp& t2);

/**
 * Check whether two TypeTimestamp objects represent a different nanosecond.
 *
 * @param t1 A TypeTimestamp object
 * @param t2_sec A double value in seconds
 *
 * @return `true` when both times do not represent the same nanosecond.
 */
bool operator!=(const TypeTimestamp& t1, double t2_sec);

/**
 * Check whether time \p t1 occurred before time \p t2.
 *
 * @param t1 A TypeTimestamp object
 * @param t2 Another TypeTimestamp object
 *
 * @return `true` when \p t1 represents an earlier nanosecond than \p t2.
 */
bool operator<(const TypeTimestamp& t1, const TypeTimestamp& t2);

/**
 * @param t1_sec A double value in seconds
 * @param t2 A TypeTimestamp object
 *
 * @return `true` when \p t1_sec represents an earlier nanosecond than \p t2.
 */
bool operator<(double t1_sec, const TypeTimestamp& t2);

/**
 * @param t1 A TypeTimestamp object
 * @param t2_sec A double value in seconds
 *
 * @return `true` when \p t1 represents an earlier nanosecond than \p t2_sec.
 */
bool operator<(const TypeTimestamp& t1, double t2_sec);

/**
 * Check whether time \p t1 occurred after time \p t2.
 *
 * @param t1 A TypeTimestamp object
 * @param t2 Another TypeTimestamp object
 *
 * @return `true` when \p t1 represents a later nanosecond than \p t2.
 */
bool operator>(const TypeTimestamp& t1, const TypeTimestamp& t2);

/**
 * @param t1_sec A double value in seconds
 * @param t2 A TypeTimestamp object
 *
 * @return `true` when \p t1_sec represents a later nanosecond than \p t2.
 */
bool operator>(double t1_sec, const TypeTimestamp& t2);

/**
 * @param t1 A TypeTimestamp object
 * @param t2_sec A double value in seconds
 *
 * @return `true` when \p t1 represents a later nanosecond than \p t2_sec.
 */
bool operator>(const TypeTimestamp& t1, double t2_sec);

/**
 * Check whether time \p t1 is equal to or after \p t2.
 *
 * @param t1 A TypeTimestamp object
 * @param t2 A double value in seconds
 *
 * @return `true` when \p t1 represents a nanosecond later than or equal to \p t2.
 */
bool operator>=(const TypeTimestamp& t1, const TypeTimestamp& t2);

/**
 * @param t1_sec A double value in seconds
 * @param t2 A TypeTimestamp object
 *
 * @return `true` when \p t1_sec represents a nanosecond later than or equal to \p t2.
 */
bool operator>=(double t1_sec, const TypeTimestamp& t2);

/**
 * @param t1 A double value in seconds
 * @param t2_sec A TypeTimestamp object
 *
 * @return `true` when \p t1 represents a nanosecond later than or equal to \p t2_sec.
 */
bool operator>=(const TypeTimestamp& t1, double t2_sec);

/**
 * Check whether time \p t1 is equal to or before \p t2.
 *
 * @param t1 A TypeTimestamp object
 * @param t2 Another TypeTimestamp object
 *
 * @return `true` when \p t1 represents a nanosecond before or equal to \p t2.
 */
bool operator<=(const TypeTimestamp& t1, const TypeTimestamp& t2);

/**
 * @param t1_sec A double value in seconds
 * @param t2 A TypeTimestamp object
 *
 * @return `true` when \p t1_sec represents a nanosecond before or equal to \p t2.
 */
bool operator<=(double t1_sec, const TypeTimestamp& t2);

/**
 * @param t1 A TypeTimestamp object
 * @param t2_sec A double value in seconds
 *
 * @return `true` when \p t1 represents a nanosecond before or equal to \p t2_sec.
 */
bool operator<=(const TypeTimestamp& t1, double t2_sec);

/**
 * Write a human-readable representation of a `TypeTimestamp` to the given output stream.
 * @param output stream to write to.
 * @param time TypeTimestamp object being described.
 *
 * @return The output stream `output` after writing.
 */
std::ostream& operator<<(std::ostream& output, const TypeTimestamp& time);

}  // namespace aspn23_xtensor
