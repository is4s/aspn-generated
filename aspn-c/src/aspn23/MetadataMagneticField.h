
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"
#include "TypeMetadataheader.h"
#include "TypeTimestamp.h"
#include "TypeMounting.h"
#ifdef __cplusplus
extern "C" {
#endif

/**
 * Metadata for a magnetic field measurement. In addition to generic metadata information,
 * calibration parameters may be provided to account for effects such as soft iron, scale factor,
 * non-orthogonality, zero-bias, and hard iron. In general, for an num_meas-dimensional
 * measurement,
 * the magnetic field calibration metadata (K and b) shall be used as
 *
 * m_calibrated = K * m_measured - b
 *
 * where m_calibrated, m_measured, and b are num_meas x 1 vectors (scalar for num_meas = 1) and K
 * is
 * an num_meas x num_meas matrix (scalar for num_meas = 1). See magnetic_calibration.md for
 * additional details.
 *
 * More sophisticated approaches that include calibration parameters such as time-varying effects,
 * first-order Gauss-Markov bias models, and calibration parameter uncertainties may be included
 * using an appropriate error model in the measurement message.
 */

typedef struct Aspn23MetadataMagneticField {

	/**
	 * Standard ASPN metadata header.
	 */

	Aspn23TypeMetadataheader info;

	/**
	 * Time at which the measurement is considered to be valid.
	 */

	Aspn23TypeTimestamp time_of_validity;

	/**
	 * Standard ASPN mounting information.
	 */

	Aspn23TypeMounting mounting;

	/**
	 * Dimension of measurement for which this metadata is applicable. May be 1, 2, or 3.
	 */

	uint8_t num_meas;

	/**
	 * Optional calibration parameter to account for the combined effects of soft iron, scale
	 * factor, and non-orthogonality as a unitless num_meas x num_meas matrix. Optional, but if
	 * provided, b must also be provided.
	 *
	 * NULL indicates this optional field is not provided.
	 */

	double* ASPN_NULLABLE k;

	/**
	 * Optional calibration parameter to account for the combined effects of zero-bias and hard iron
	 * as a num_meas x 1 vector in nanoTesla (nT). Optional, but if provided, K must also be
	 * provided.
	 *
	 * NULL indicates this optional field is not provided.
	 */

	double* ASPN_NULLABLE b;

} Aspn23MetadataMagneticField;

Aspn23MetadataMagneticField* ASPN_NULLABLE
aspn23_metadata_magnetic_field_new(Aspn23TypeMetadataheader* info,
                                   Aspn23TypeTimestamp* time_of_validity,
                                   Aspn23TypeMounting* mounting,
                                   uint8_t num_meas,
                                   double* ASPN_NULLABLE k,
                                   double* ASPN_NULLABLE b);

Aspn23MetadataMagneticField* ASPN_NULLABLE
aspn23_metadata_magnetic_field_copy(Aspn23MetadataMagneticField*);

/**
 * free() all memory held by the given Aspn23MetadataMagneticField,
 * including the struct itself.
 *
 * Pointer fields (b) will be freed using
 * free() if they are non-NULL. If any of these have been populated
 * using non-malloc'd memory, free them manually and set them to
 * NULL before calling this function.
 */

void aspn23_metadata_magnetic_field_free(void* pointer);
void aspn23_metadata_magnetic_field_free_members(Aspn23MetadataMagneticField* self);

#ifdef __cplusplus
}  // extern "C"
#endif
