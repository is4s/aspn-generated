
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#pragma once
#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif
ASPN_ASSUME_NONNULL_BEGIN

/**
 * Enumerated field which describes the meaning of the integrity value. Integrity methods may use
 * multiple enum entries if there is a need to pass multiple integrity values. For example, an
 * integrity method with 3 parameters may use 3 enum entries (e.g., MY_METHOD_VALUE1,
 * MY_METHOD_VALUE2, MY_METHOD_VALUE3). When integrity is reported in a message, a vector of
 * integrity types is passed. In the MY_METHOD example, num_integrity = 3 just for the MY_METHOD
 * integrity. If additional integrity methods are also reported, then num_integrity would be greater
 * than 3 to include those additional methods.
 */

enum Aspn23TypeIntegrityIntegrityMethod {

	/**
	 * Reserved for future use.
	 */

	ASPN23_TYPE_INTEGRITY_INTEGRITY_METHOD_RESERVED = 17
};

/**
 * Integrity provides a numerical measure of the trustworthiness of the associated measurement. The
 * integrity_method enum specifies the integrity method and the appropriate interpretation of the
 * integrity_value.
 */

typedef struct Aspn23TypeIntegrity {

	/**
	 * Enumerated field which describes the meaning of the integrity value. Integrity methods may
	 * use multiple enum entries if there is a need to pass multiple integrity values. For example,
	 * an integrity method with 3 parameters may use 3 enum entries (e.g., MY_METHOD_VALUE1,
	 * MY_METHOD_VALUE2, MY_METHOD_VALUE3). When integrity is reported in a message, a vector of
	 * integrity types is passed. In the MY_METHOD example, num_integrity = 3 just for the MY_METHOD
	 * integrity. If additional integrity methods are also reported, then num_integrity would be
	 * greater than 3 to include those additional methods.
	 */

	enum Aspn23TypeIntegrityIntegrityMethod integrity_method;

	/**
	 * Measurement integrity value to be interpreted based on the definition in the integrity_type
	 * enum.
	 *
	 * NaN indicates this optional field is not provided.
	 */

	double integrity_value;

} Aspn23TypeIntegrity;

Aspn23TypeIntegrity* ASPN_NULLABLE aspn23_type_integrity_new(
    enum Aspn23TypeIntegrityIntegrityMethod integrity_method, double integrity_value);

Aspn23TypeIntegrity* ASPN_NULLABLE aspn23_type_integrity_copy(Aspn23TypeIntegrity*);

/**
 * free() all memory held by the given Aspn23TypeIntegrity,
 * including the struct itself.
 */

void aspn23_type_integrity_free(void* pointer);
void aspn23_type_integrity_free_members(Aspn23TypeIntegrity* self);
ASPN_ASSUME_NONNULL_END
#ifdef __cplusplus
}  // extern "C"
#endif
