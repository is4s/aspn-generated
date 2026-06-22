
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#pragma once

// ASPN-C class to wrap.
#include <aspn23/TypeSatnavObs.h>

// xtensor
#include <xtensor-python/pytensor.hpp>
#include <xtensor/containers/xadapt.hpp>

// ASPN-C++ includes
#include "TypeSatnavSatelliteSystem.hpp"
#include "TypeSatnavSignalDescriptor.hpp"
#include "TypeIntegrity.hpp"

// System includes
#include <vector>

namespace aspn23_xtensor {

/**
 * Defines measurements that come from a satnav receiver tracking a single signal from a single
 * satellite.
 */
class TypeSatnavObs {
public:
	/**
	 *  The C struct must have been created using the corresponding aspn23_*_new() function in
	 *  ASPN-C. When this class' destructor is called, the memory will be cleaned up using the
	 *  corresponding aspn23_*_free() function in ASPN-C.
	 */
	TypeSatnavObs(Aspn23TypeSatnavObs* c_struct, bool take_ownership = true);

	TypeSatnavObs(TypeSatnavSatelliteSystem satellite_system,
	              TypeSatnavSignalDescriptor signal_descriptor,
	              int16_t prn,
	              double frequency,
	              double pseudorange,
	              float pseudorange_variance,
	              Aspn23TypeSatnavObsPseudorangeRateType pseudorange_rate_type,
	              double pseudorange_rate,
	              float pseudorange_rate_variance,
	              double carrier_phase,
	              float carrier_phase_variance,
	              float c_n0,
	              int32_t lock_count,
	              Aspn23TypeSatnavObsIonoCorrectionSource iono_correction_source,
	              bool iono_correction_applied,
	              bool tropo_correction_applied,
	              bool signal_bias_correction_applied,
	              std::vector<TypeIntegrity> integrity);

	~TypeSatnavObs();

	TypeSatnavObs(const TypeSatnavObs& other);
	TypeSatnavObs& operator=(const TypeSatnavObs& rhs);

	TypeSatnavObs(TypeSatnavObs&& other);
	TypeSatnavObs& operator=(TypeSatnavObs&& rhs);

	/**
	 * Returns the underlying C struct while retaining ownership of the pointer.  The pointer
	 * is valid so long as this object has not gone out of scope.
	 */
	Aspn23TypeSatnavObs* get_aspn_c() const;

	/**
	 * Frees the underlying C struct and replaces it with \p replacement_struct.
	 * Set \p take_ownership to false if this object should not free \p replacement_struct when it
	 * is destroyed.
	 */
	void reset_aspn_c(Aspn23TypeSatnavObs* replacement_struct, bool take_ownership = true);

	/**
	 * Enumerated field which describes the Satellite System that generated the observations.
	 */
	TypeSatnavSatelliteSystem get_satellite_system() const;

	/**
	 * Enumerated field which describes the Satellite System that generated the observations.
	 */
	void set_satellite_system(TypeSatnavSatelliteSystem);

	/**
	 * Satellite signal descriptor as defined in RINEX 3.05
	 */
	TypeSatnavSignalDescriptor get_signal_descriptor() const;

	/**
	 * Satellite signal descriptor as defined in RINEX 3.05
	 */
	void set_signal_descriptor(TypeSatnavSignalDescriptor);

	/**
	 * PRN code which identifies satellite (or slot number, in the case of GLONASS) for the
	 * observables.
	 */
	int16_t get_prn() const;

	/**
	 * PRN code which identifies satellite (or slot number, in the case of GLONASS) for the
	 * observables.
	 */
	void set_prn(int16_t);

	/**
	 * Center frequency of signal. For GLONASS, this should be the center frequency of the
	 * frequency-shifted signal with the k value taken into account.
	 */
	double get_frequency() const;

	/**
	 * Center frequency of signal. For GLONASS, this should be the center frequency of the
	 * frequency-shifted signal with the k value taken into account.
	 */
	void set_frequency(double);

	/**
	 * Pseudorange measurement
	 */
	double get_pseudorange() const;

	/**
	 * Pseudorange measurement
	 */
	void set_pseudorange(double);

	/**
	 * Variance of pseudorange measurement noise/multipath. This value must be provided if the
	 * pseudorange measurement is provided. Note: This is not intended to represent clock,
	 * atmospheric, or satellite position errors.
	 */
	float get_pseudorange_variance() const;

	/**
	 * Variance of pseudorange measurement noise/multipath. This value must be provided if the
	 * pseudorange measurement is provided. Note: This is not intended to represent clock,
	 * atmospheric, or satellite position errors.
	 */
	void set_pseudorange_variance(float);

	/**
	 * Indicates the type of measurement contained in pseudorange_rate.
	 */
	Aspn23TypeSatnavObsPseudorangeRateType get_pseudorange_rate_type() const;

	/**
	 * Indicates the type of measurement contained in pseudorange_rate.
	 */
	void set_pseudorange_rate_type(Aspn23TypeSatnavObsPseudorangeRateType);

	/**
	 * Measurement of the change in the pseudorange. See pseudorange_rate_type for details.
	 */
	double get_pseudorange_rate() const;

	/**
	 * Measurement of the change in the pseudorange. See pseudorange_rate_type for details.
	 */
	void set_pseudorange_rate(double);

	/**
	 * Variance of pseudorange_rate noise. This value must be provided if the pseudorange_rate
	 * measurement is provided.
	 */
	float get_pseudorange_rate_variance() const;

	/**
	 * Variance of pseudorange_rate noise. This value must be provided if the pseudorange_rate
	 * measurement is provided.
	 */
	void set_pseudorange_rate_variance(float);

	/**
	 * Carrier-phase (integrated Doppler) measurement. This measurement has an N cycle ambiguity
	 * (where N is unknown and arbitrary integer).
	 */
	double get_carrier_phase() const;

	/**
	 * Carrier-phase (integrated Doppler) measurement. This measurement has an N cycle ambiguity
	 * (where N is unknown and arbitrary integer).
	 */
	void set_carrier_phase(double);

	/**
	 * Variance of carrier-phase noise/multipath. This value must be provided if the carrier-phase
	 * measurement is provided. Note: This is not intended to represent clock, atmospheric, or
	 * satellite position errors or the integer N ambiguity.
	 */
	float get_carrier_phase_variance() const;

	/**
	 * Variance of carrier-phase noise/multipath. This value must be provided if the carrier-phase
	 * measurement is provided. Note: This is not intended to represent clock, atmospheric, or
	 * satellite position errors or the integer N ambiguity.
	 */
	void set_carrier_phase_variance(float);

	/**
	 * Carrier to noise density ratio. C/N0 = 10[log10(S/N0)]
	 */
	float get_c_n0() const;

	/**
	 * Carrier to noise density ratio. C/N0 = 10[log10(S/N0)]
	 */
	void set_c_n0(float);

	/**
	 * Number of observations with continuous tracking (no cycle slips). Value of -1 means that
	 * there is no loss of lock information available. First lock_count after cycle slip has
	 * occurred will have a value of 0. The lock_count only applies to the carrier-phase
	 * measurement.
	 */
	int32_t get_lock_count() const;

	/**
	 * Number of observations with continuous tracking (no cycle slips). Value of -1 means that
	 * there is no loss of lock information available. First lock_count after cycle slip has
	 * occurred will have a value of 0. The lock_count only applies to the carrier-phase
	 * measurement.
	 */
	void set_lock_count(int32_t);

	/**
	 * Enumerated field which describes the source of the ionospheric delay correction.
	 */
	Aspn23TypeSatnavObsIonoCorrectionSource get_iono_correction_source() const;

	/**
	 * Enumerated field which describes the source of the ionospheric delay correction.
	 */
	void set_iono_correction_source(Aspn23TypeSatnavObsIonoCorrectionSource);

	/**
	 * Identifies if the ionospheric correction has been applied to the measurement. 1 = Applied.
	 */
	bool get_iono_correction_applied() const;

	/**
	 * Identifies if the ionospheric correction has been applied to the measurement. 1 = Applied.
	 */
	void set_iono_correction_applied(bool);

	/**
	 * Identifies if the tropospheric correction has been applied to the measurement. 1 = Applied.
	 */
	bool get_tropo_correction_applied() const;

	/**
	 * Identifies if the tropospheric correction has been applied to the measurement. 1 = Applied.
	 */
	void set_tropo_correction_applied(bool);

	/**
	 * Represents biases within the transmitting signal that are identified in the downlink data,
	 * Group Delay for LNAV, and Interchannel Signal Correction (ISC) message for MNAV. This term
	 * indicates whether the correction is known, being applied to Pseudorange Correction, and its
	 * associated estimated error applied to the ERE. When invalid the correction and estimated
	 * error are not known and therefore not applied. 1 = Valid.
	 */
	bool get_signal_bias_correction_applied() const;

	/**
	 * Represents biases within the transmitting signal that are identified in the downlink data,
	 * Group Delay for LNAV, and Interchannel Signal Correction (ISC) message for MNAV. This term
	 * indicates whether the correction is known, being applied to Pseudorange Correction, and its
	 * associated estimated error applied to the ERE. When invalid the correction and estimated
	 * error are not known and therefore not applied. 1 = Valid.
	 */
	void set_signal_bias_correction_applied(bool);

	/**
	 * Number of integrity values.
	 */
	uint8_t get_num_integrity() const;

	/**
	 * Measurement integrity. Includes the integrity method used and an integrity value (which is to
	 * be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
	 * to report multiple integrity values based on multiple integrity methods.
	 */
	std::vector<TypeIntegrity> get_integrity() const;

	/**
	 * Measurement integrity. Includes the integrity method used and an integrity value (which is to
	 * be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
	 * to report multiple integrity values based on multiple integrity methods.
	 */
	void set_integrity(std::vector<TypeIntegrity>);

private:
	Aspn23TypeSatnavObs* c_struct;
	bool take_ownership = true;
	void nullptr_check() const;
};

}  // namespace aspn23_xtensor
