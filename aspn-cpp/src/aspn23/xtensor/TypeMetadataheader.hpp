
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/TypeMetadataheader.h>

// xtensor
#include <xtensor/containers/xtensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes
#include "TypeHeader.hpp"
#include <string>

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * Sensor metadata header.
 */
class TypeMetadataheader {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	TypeMetadataheader(Aspn23TypeMetadataheader* c_struct, bool take_ownership = true);

	TypeMetadataheader(TypeHeader header,
	                   const std::string& sensor_description,
	                   double delta_t_nom,
	                   uint8_t timestamp_clock_id,
	                   uint8_t digits_of_precision);

	~TypeMetadataheader();

	TypeMetadataheader(const TypeMetadataheader& other);
	TypeMetadataheader& operator=(const TypeMetadataheader& rhs);

	TypeMetadataheader(TypeMetadataheader&& other);
	TypeMetadataheader& operator=(TypeMetadataheader&& rhs);

	/**
	 * Returns the underlying C struct while retaining ownership of the pointer.  The pointer
	 * is valid so long as this object has not gone out of scope.
	 */
	Aspn23TypeMetadataheader* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23TypeMetadataheader* replacement_struct, bool take_ownership = true);

	/**
	 * Standard ASPN measurement header.
	 */
	TypeHeader get_header() const;

	/**
	 * Standard ASPN measurement header.
	 */
	void set_header(TypeHeader);

	/**
	 * Describes the device used to generate the measurement (user defined).
	 */
	std::string get_sensor_description() const;

	/**
	 * Describes the device used to generate the measurement (user defined).
	 */
	void set_sensor_description(const std::string&);

	/**
	 * Optional nominal time interval between each measurement. Actual time interval may vary. Do
	 * not report a delta_t_nom if the nominal time interval is not known ahead of time.
	 */
	double get_delta_t_nom() const;

	/**
	 * Optional nominal time interval between each measurement. Actual time interval may vary. Do
	 * not report a delta_t_nom if the nominal time interval is not known ahead of time.
	 */
	void set_delta_t_nom(double);

	/**
	 * Identifier for the timestamp's clock/timing source. See clock_identifiers.md for a full
	 * description, but the summary is as follows:
	 * 0 = ASPN System Time
	 * 1 = International Atomic Time (TAI)
	 * 2 = Universal Coordinated Time (UTC)
	 * 3 = GPS System Time
	 * 4 = Galileo System Time
	 * 5 = GLONASS System Time
	 * 6 = BeiDou System Time
	 * 7-50: Reserved for future additional time scale representations.
	 *
	 * Each message source must provide metadata information (the method used to provide the
	 * metadata information depends on the system, e.g., over the wire, written to file, etc.), and
	 * the information contained in this type (type_metadataheader) will be included in that
	 * information. In this manner, each message source's clock ID will be defined. If the clock
	 * source is updated, new metadata must be provided with an updated clock ID. If used, ASPN
	 * system time shall be represented as a monotonically increasing quantity defined by the
	 * system. System time zero epoch must be defined. For example, system time may be the time
	 * difference with respect to a system power on event. Other user-defined clocks/timing sources
	 * must be similarly defined by the system designer.
	 */
	uint8_t get_timestamp_clock_id() const;

	/**
	 * Identifier for the timestamp's clock/timing source. See clock_identifiers.md for a full
	 * description, but the summary is as follows:
	 * 0 = ASPN System Time
	 * 1 = International Atomic Time (TAI)
	 * 2 = Universal Coordinated Time (UTC)
	 * 3 = GPS System Time
	 * 4 = Galileo System Time
	 * 5 = GLONASS System Time
	 * 6 = BeiDou System Time
	 * 7-50: Reserved for future additional time scale representations.
	 *
	 * Each message source must provide metadata information (the method used to provide the
	 * metadata information depends on the system, e.g., over the wire, written to file, etc.), and
	 * the information contained in this type (type_metadataheader) will be included in that
	 * information. In this manner, each message source's clock ID will be defined. If the clock
	 * source is updated, new metadata must be provided with an updated clock ID. If used, ASPN
	 * system time shall be represented as a monotonically increasing quantity defined by the
	 * system. System time zero epoch must be defined. For example, system time may be the time
	 * difference with respect to a system power on event. Other user-defined clocks/timing sources
	 * must be similarly defined by the system designer.
	 */
	void set_timestamp_clock_id(uint8_t);

	/**
	 * Defines how many decimal digits of precision are represented in the timestamp after the
	 * decimal point. The precision of the timestamps is 10E-N, where N is digits_of_precision. A
	 * value of 3 would mean that the timestamp has precision at the 10E-3 (millisecond) level, a
	 * value of 6 would mean the timestamp has precision at the 10E-6 (microsecond) level, etc. If
	 * an implementation is using 64bit integers for their internal time representations, digits of
	 * precision may be ignored with no additional complexity. If an implementation is converting to
	 * a double, because of their choice of internal representation (which likely most estimators
	 * would use), then knowing digits of precision would be important to avoid losing resolution.
	 */
	uint8_t get_digits_of_precision() const;

	/**
	 * Defines how many decimal digits of precision are represented in the timestamp after the
	 * decimal point. The precision of the timestamps is 10E-N, where N is digits_of_precision. A
	 * value of 3 would mean that the timestamp has precision at the 10E-3 (millisecond) level, a
	 * value of 6 would mean the timestamp has precision at the 10E-6 (microsecond) level, etc. If
	 * an implementation is using 64bit integers for their internal time representations, digits of
	 * precision may be ignored with no additional complexity. If an implementation is converting to
	 * a double, because of their choice of internal representation (which likely most estimators
	 * would use), then knowing digits of precision would be important to avoid losing resolution.
	 */
	void set_digits_of_precision(uint8_t);

private:
	Aspn23TypeMetadataheader* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
