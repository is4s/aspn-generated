
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead.
 */

#include <aspn23/utils.h>
#include <aspn23/messages_and_types.h>

bool aspn23_is_core_message(AspnBase* base) {
	if (base == NULL) {
		printf("is_core_message received a NULL pointer\n");
		return false;
	}
	return base->message_type <= ASPN_LAST_MESSAGE;
}

Aspn23TypeTimestamp aspn23_get_time(const AspnBase* base) {
	switch (base->message_type) {

	case ASPN_METADATA_BEIDOU_EPHEMERIS: {
		Aspn23MetadataBeidouEphemeris* child = (Aspn23MetadataBeidouEphemeris*)base;
		return child->time_of_validity;
	}

	case ASPN_METADATA_GLONASS_EPHEMERIS: {
		Aspn23MetadataGlonassEphemeris* child = (Aspn23MetadataGlonassEphemeris*)base;
		return child->time_of_validity;
	}

	case ASPN_METADATA_GPS_CNAV_EPHEMERIS: {
		Aspn23MetadataGpsCnavEphemeris* child = (Aspn23MetadataGpsCnavEphemeris*)base;
		return child->time_of_validity;
	}

	case ASPN_METADATA_GPS_LNAV_EPHEMERIS: {
		Aspn23MetadataGpsLnavEphemeris* child = (Aspn23MetadataGpsLnavEphemeris*)base;
		return child->time_of_validity;
	}

	case ASPN_METADATA_GPS_MNAV_EPHEMERIS: {
		Aspn23MetadataGpsMnavEphemeris* child = (Aspn23MetadataGpsMnavEphemeris*)base;
		return child->time_of_validity;
	}

	case ASPN_METADATA_GPS_IONO_UTC_PARAMETERS: {
		Aspn23MetadataGpsIonoUtcParameters* child = (Aspn23MetadataGpsIonoUtcParameters*)base;
		return child->time_of_validity;
	}

	case ASPN_METADATA_GALILEO_EPHEMERIS: {
		Aspn23MetadataGalileoEphemeris* child = (Aspn23MetadataGalileoEphemeris*)base;
		return child->time_of_validity;
	}

	case ASPN_METADATA_IMU: {
		Aspn23MetadataImu* child = (Aspn23MetadataImu*)base;
		return child->time_of_validity;
	}

	case ASPN_METADATA_GENERIC: {
		Aspn23MetadataGeneric* child = (Aspn23MetadataGeneric*)base;
		return child->time_of_validity;
	}

	case ASPN_METADATA_IMAGE_FEATURES: {
		Aspn23MetadataImageFeatures* child = (Aspn23MetadataImageFeatures*)base;
		return child->time_of_validity;
	}

	case ASPN_METADATA_MAGNETIC_FIELD: {
		Aspn23MetadataMagneticField* child = (Aspn23MetadataMagneticField*)base;
		return child->time_of_validity;
	}

	case ASPN_METADATA_SATNAV_OBS: {
		Aspn23MetadataSatnavObs* child = (Aspn23MetadataSatnavObs*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_IMU: {
		Aspn23MeasurementImu* child = (Aspn23MeasurementImu*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_TDOA_1TX_2RX: {
		Aspn23MeasurementTdoa1Tx2Rx* child = (Aspn23MeasurementTdoa1Tx2Rx*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_TDOA_2TX_1RX: {
		Aspn23MeasurementTdoa2Tx1Rx* child = (Aspn23MeasurementTdoa2Tx1Rx*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_ACCUMULATED_DISTANCE_TRAVELED: {
		Aspn23MeasurementAccumulatedDistanceTraveled* child =
		    (Aspn23MeasurementAccumulatedDistanceTraveled*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_ALTITUDE: {
		Aspn23MeasurementAltitude* child = (Aspn23MeasurementAltitude*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_ANGULAR_VELOCITY: {
		Aspn23MeasurementAngularVelocity* child = (Aspn23MeasurementAngularVelocity*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_ANGULAR_VELOCITY_1D: {
		Aspn23MeasurementAngularVelocity1D* child = (Aspn23MeasurementAngularVelocity1D*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_ATTITUDE_2D: {
		Aspn23MeasurementAttitude2D* child = (Aspn23MeasurementAttitude2D*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_ATTITUDE_3D: {
		Aspn23MeasurementAttitude3D* child = (Aspn23MeasurementAttitude3D*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_BAROMETER: {
		Aspn23MeasurementBarometer* child = (Aspn23MeasurementBarometer*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_DELTA_POSITION: {
		Aspn23MeasurementDeltaPosition* child = (Aspn23MeasurementDeltaPosition*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_DELTA_RANGE: {
		Aspn23MeasurementDeltaRange* child = (Aspn23MeasurementDeltaRange*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_DELTA_RANGE_TO_POINT: {
		Aspn23MeasurementDeltaRangeToPoint* child = (Aspn23MeasurementDeltaRangeToPoint*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_DIRECTION_2D_TO_POINTS: {
		Aspn23MeasurementDirection2DToPoints* child = (Aspn23MeasurementDirection2DToPoints*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_DIRECTION_3D_TO_POINTS: {
		Aspn23MeasurementDirection3DToPoints* child = (Aspn23MeasurementDirection3DToPoints*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_DIRECTION_OF_MOTION_2D: {
		Aspn23MeasurementDirectionOfMotion2D* child = (Aspn23MeasurementDirectionOfMotion2D*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_DIRECTION_OF_MOTION_3D: {
		Aspn23MeasurementDirectionOfMotion3D* child = (Aspn23MeasurementDirectionOfMotion3D*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_FREQUENCY_DIFFERENCE: {
		Aspn23MeasurementFrequencyDifference* child = (Aspn23MeasurementFrequencyDifference*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_HEADING: {
		Aspn23MeasurementHeading* child = (Aspn23MeasurementHeading*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_IMAGE: {
		Aspn23MeasurementImage* child = (Aspn23MeasurementImage*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_MAGNETIC_FIELD: {
		Aspn23MeasurementMagneticField* child = (Aspn23MeasurementMagneticField*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_MAGNETIC_FIELD_MAGNITUDE: {
		Aspn23MeasurementMagneticFieldMagnitude* child =
		    (Aspn23MeasurementMagneticFieldMagnitude*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_POSITION: {
		Aspn23MeasurementPosition* child = (Aspn23MeasurementPosition*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_POSITION_ATTITUDE: {
		Aspn23MeasurementPositionAttitude* child = (Aspn23MeasurementPositionAttitude*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_POSITION_VELOCITY_ATTITUDE: {
		Aspn23MeasurementPositionVelocityAttitude* child =
		    (Aspn23MeasurementPositionVelocityAttitude*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_RANGE_RATE_TO_POINT: {
		Aspn23MeasurementRangeRateToPoint* child = (Aspn23MeasurementRangeRateToPoint*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_RANGE_TO_POINT: {
		Aspn23MeasurementRangeToPoint* child = (Aspn23MeasurementRangeToPoint*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_SATNAV: {
		Aspn23MeasurementSatnav* child = (Aspn23MeasurementSatnav*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_SATNAV_SUBFRAME: {
		Aspn23MeasurementSatnavSubframe* child = (Aspn23MeasurementSatnavSubframe*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_SATNAV_WITH_SV_DATA: {
		Aspn23MeasurementSatnavWithSvData* child = (Aspn23MeasurementSatnavWithSvData*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_SPECIFIC_FORCE_1D: {
		Aspn23MeasurementSpecificForce1D* child = (Aspn23MeasurementSpecificForce1D*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_SPEED: {
		Aspn23MeasurementSpeed* child = (Aspn23MeasurementSpeed*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_TEMPERATURE: {
		Aspn23MeasurementTemperature* child = (Aspn23MeasurementTemperature*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_TIME: {
		Aspn23MeasurementTime* child = (Aspn23MeasurementTime*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_TIME_DIFFERENCE: {
		Aspn23MeasurementTimeDifference* child = (Aspn23MeasurementTimeDifference*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_TIME_FREQUENCY_DIFFERENCE: {
		Aspn23MeasurementTimeFrequencyDifference* child =
		    (Aspn23MeasurementTimeFrequencyDifference*)base;
		return child->time_of_validity;
	}

	case ASPN_MEASUREMENT_VELOCITY: {
		Aspn23MeasurementVelocity* child = (Aspn23MeasurementVelocity*)base;
		return child->time_of_validity;
	}

	default: {
		printf("aspn23_get_time: cannot get time from message of type %i\n", base->message_type);
		Aspn23TypeTimestamp out = {0};
		return out;
	}
	}
}

void aspn23_set_time(AspnBase* base, Aspn23TypeTimestamp time) {
	switch (base->message_type) {

	case ASPN_METADATA_BEIDOU_EPHEMERIS: {
		Aspn23MetadataBeidouEphemeris* child = (Aspn23MetadataBeidouEphemeris*)base;
		child->time_of_validity              = time;
		return;
	}

	case ASPN_METADATA_GLONASS_EPHEMERIS: {
		Aspn23MetadataGlonassEphemeris* child = (Aspn23MetadataGlonassEphemeris*)base;
		child->time_of_validity               = time;
		return;
	}

	case ASPN_METADATA_GPS_CNAV_EPHEMERIS: {
		Aspn23MetadataGpsCnavEphemeris* child = (Aspn23MetadataGpsCnavEphemeris*)base;
		child->time_of_validity               = time;
		return;
	}

	case ASPN_METADATA_GPS_LNAV_EPHEMERIS: {
		Aspn23MetadataGpsLnavEphemeris* child = (Aspn23MetadataGpsLnavEphemeris*)base;
		child->time_of_validity               = time;
		return;
	}

	case ASPN_METADATA_GPS_MNAV_EPHEMERIS: {
		Aspn23MetadataGpsMnavEphemeris* child = (Aspn23MetadataGpsMnavEphemeris*)base;
		child->time_of_validity               = time;
		return;
	}

	case ASPN_METADATA_GPS_IONO_UTC_PARAMETERS: {
		Aspn23MetadataGpsIonoUtcParameters* child = (Aspn23MetadataGpsIonoUtcParameters*)base;
		child->time_of_validity                   = time;
		return;
	}

	case ASPN_METADATA_GALILEO_EPHEMERIS: {
		Aspn23MetadataGalileoEphemeris* child = (Aspn23MetadataGalileoEphemeris*)base;
		child->time_of_validity               = time;
		return;
	}

	case ASPN_METADATA_IMU: {
		Aspn23MetadataImu* child = (Aspn23MetadataImu*)base;
		child->time_of_validity  = time;
		return;
	}

	case ASPN_METADATA_GENERIC: {
		Aspn23MetadataGeneric* child = (Aspn23MetadataGeneric*)base;
		child->time_of_validity      = time;
		return;
	}

	case ASPN_METADATA_IMAGE_FEATURES: {
		Aspn23MetadataImageFeatures* child = (Aspn23MetadataImageFeatures*)base;
		child->time_of_validity            = time;
		return;
	}

	case ASPN_METADATA_MAGNETIC_FIELD: {
		Aspn23MetadataMagneticField* child = (Aspn23MetadataMagneticField*)base;
		child->time_of_validity            = time;
		return;
	}

	case ASPN_METADATA_SATNAV_OBS: {
		Aspn23MetadataSatnavObs* child = (Aspn23MetadataSatnavObs*)base;
		child->time_of_validity        = time;
		return;
	}

	case ASPN_MEASUREMENT_IMU: {
		Aspn23MeasurementImu* child = (Aspn23MeasurementImu*)base;
		child->time_of_validity     = time;
		return;
	}

	case ASPN_MEASUREMENT_TDOA_1TX_2RX: {
		Aspn23MeasurementTdoa1Tx2Rx* child = (Aspn23MeasurementTdoa1Tx2Rx*)base;
		child->time_of_validity            = time;
		return;
	}

	case ASPN_MEASUREMENT_TDOA_2TX_1RX: {
		Aspn23MeasurementTdoa2Tx1Rx* child = (Aspn23MeasurementTdoa2Tx1Rx*)base;
		child->time_of_validity            = time;
		return;
	}

	case ASPN_MEASUREMENT_ACCUMULATED_DISTANCE_TRAVELED: {
		Aspn23MeasurementAccumulatedDistanceTraveled* child =
		    (Aspn23MeasurementAccumulatedDistanceTraveled*)base;
		child->time_of_validity = time;
		return;
	}

	case ASPN_MEASUREMENT_ALTITUDE: {
		Aspn23MeasurementAltitude* child = (Aspn23MeasurementAltitude*)base;
		child->time_of_validity          = time;
		return;
	}

	case ASPN_MEASUREMENT_ANGULAR_VELOCITY: {
		Aspn23MeasurementAngularVelocity* child = (Aspn23MeasurementAngularVelocity*)base;
		child->time_of_validity                 = time;
		return;
	}

	case ASPN_MEASUREMENT_ANGULAR_VELOCITY_1D: {
		Aspn23MeasurementAngularVelocity1D* child = (Aspn23MeasurementAngularVelocity1D*)base;
		child->time_of_validity                   = time;
		return;
	}

	case ASPN_MEASUREMENT_ATTITUDE_2D: {
		Aspn23MeasurementAttitude2D* child = (Aspn23MeasurementAttitude2D*)base;
		child->time_of_validity            = time;
		return;
	}

	case ASPN_MEASUREMENT_ATTITUDE_3D: {
		Aspn23MeasurementAttitude3D* child = (Aspn23MeasurementAttitude3D*)base;
		child->time_of_validity            = time;
		return;
	}

	case ASPN_MEASUREMENT_BAROMETER: {
		Aspn23MeasurementBarometer* child = (Aspn23MeasurementBarometer*)base;
		child->time_of_validity           = time;
		return;
	}

	case ASPN_MEASUREMENT_DELTA_POSITION: {
		Aspn23MeasurementDeltaPosition* child = (Aspn23MeasurementDeltaPosition*)base;
		child->time_of_validity               = time;
		return;
	}

	case ASPN_MEASUREMENT_DELTA_RANGE: {
		Aspn23MeasurementDeltaRange* child = (Aspn23MeasurementDeltaRange*)base;
		child->time_of_validity            = time;
		return;
	}

	case ASPN_MEASUREMENT_DELTA_RANGE_TO_POINT: {
		Aspn23MeasurementDeltaRangeToPoint* child = (Aspn23MeasurementDeltaRangeToPoint*)base;
		child->time_of_validity                   = time;
		return;
	}

	case ASPN_MEASUREMENT_DIRECTION_2D_TO_POINTS: {
		Aspn23MeasurementDirection2DToPoints* child = (Aspn23MeasurementDirection2DToPoints*)base;
		child->time_of_validity                     = time;
		return;
	}

	case ASPN_MEASUREMENT_DIRECTION_3D_TO_POINTS: {
		Aspn23MeasurementDirection3DToPoints* child = (Aspn23MeasurementDirection3DToPoints*)base;
		child->time_of_validity                     = time;
		return;
	}

	case ASPN_MEASUREMENT_DIRECTION_OF_MOTION_2D: {
		Aspn23MeasurementDirectionOfMotion2D* child = (Aspn23MeasurementDirectionOfMotion2D*)base;
		child->time_of_validity                     = time;
		return;
	}

	case ASPN_MEASUREMENT_DIRECTION_OF_MOTION_3D: {
		Aspn23MeasurementDirectionOfMotion3D* child = (Aspn23MeasurementDirectionOfMotion3D*)base;
		child->time_of_validity                     = time;
		return;
	}

	case ASPN_MEASUREMENT_FREQUENCY_DIFFERENCE: {
		Aspn23MeasurementFrequencyDifference* child = (Aspn23MeasurementFrequencyDifference*)base;
		child->time_of_validity                     = time;
		return;
	}

	case ASPN_MEASUREMENT_HEADING: {
		Aspn23MeasurementHeading* child = (Aspn23MeasurementHeading*)base;
		child->time_of_validity         = time;
		return;
	}

	case ASPN_MEASUREMENT_IMAGE: {
		Aspn23MeasurementImage* child = (Aspn23MeasurementImage*)base;
		child->time_of_validity       = time;
		return;
	}

	case ASPN_MEASUREMENT_MAGNETIC_FIELD: {
		Aspn23MeasurementMagneticField* child = (Aspn23MeasurementMagneticField*)base;
		child->time_of_validity               = time;
		return;
	}

	case ASPN_MEASUREMENT_MAGNETIC_FIELD_MAGNITUDE: {
		Aspn23MeasurementMagneticFieldMagnitude* child =
		    (Aspn23MeasurementMagneticFieldMagnitude*)base;
		child->time_of_validity = time;
		return;
	}

	case ASPN_MEASUREMENT_POSITION: {
		Aspn23MeasurementPosition* child = (Aspn23MeasurementPosition*)base;
		child->time_of_validity          = time;
		return;
	}

	case ASPN_MEASUREMENT_POSITION_ATTITUDE: {
		Aspn23MeasurementPositionAttitude* child = (Aspn23MeasurementPositionAttitude*)base;
		child->time_of_validity                  = time;
		return;
	}

	case ASPN_MEASUREMENT_POSITION_VELOCITY_ATTITUDE: {
		Aspn23MeasurementPositionVelocityAttitude* child =
		    (Aspn23MeasurementPositionVelocityAttitude*)base;
		child->time_of_validity = time;
		return;
	}

	case ASPN_MEASUREMENT_RANGE_RATE_TO_POINT: {
		Aspn23MeasurementRangeRateToPoint* child = (Aspn23MeasurementRangeRateToPoint*)base;
		child->time_of_validity                  = time;
		return;
	}

	case ASPN_MEASUREMENT_RANGE_TO_POINT: {
		Aspn23MeasurementRangeToPoint* child = (Aspn23MeasurementRangeToPoint*)base;
		child->time_of_validity              = time;
		return;
	}

	case ASPN_MEASUREMENT_SATNAV: {
		Aspn23MeasurementSatnav* child = (Aspn23MeasurementSatnav*)base;
		child->time_of_validity        = time;
		return;
	}

	case ASPN_MEASUREMENT_SATNAV_SUBFRAME: {
		Aspn23MeasurementSatnavSubframe* child = (Aspn23MeasurementSatnavSubframe*)base;
		child->time_of_validity                = time;
		return;
	}

	case ASPN_MEASUREMENT_SATNAV_WITH_SV_DATA: {
		Aspn23MeasurementSatnavWithSvData* child = (Aspn23MeasurementSatnavWithSvData*)base;
		child->time_of_validity                  = time;
		return;
	}

	case ASPN_MEASUREMENT_SPECIFIC_FORCE_1D: {
		Aspn23MeasurementSpecificForce1D* child = (Aspn23MeasurementSpecificForce1D*)base;
		child->time_of_validity                 = time;
		return;
	}

	case ASPN_MEASUREMENT_SPEED: {
		Aspn23MeasurementSpeed* child = (Aspn23MeasurementSpeed*)base;
		child->time_of_validity       = time;
		return;
	}

	case ASPN_MEASUREMENT_TEMPERATURE: {
		Aspn23MeasurementTemperature* child = (Aspn23MeasurementTemperature*)base;
		child->time_of_validity             = time;
		return;
	}

	case ASPN_MEASUREMENT_TIME: {
		Aspn23MeasurementTime* child = (Aspn23MeasurementTime*)base;
		child->time_of_validity      = time;
		return;
	}

	case ASPN_MEASUREMENT_TIME_DIFFERENCE: {
		Aspn23MeasurementTimeDifference* child = (Aspn23MeasurementTimeDifference*)base;
		child->time_of_validity                = time;
		return;
	}

	case ASPN_MEASUREMENT_TIME_FREQUENCY_DIFFERENCE: {
		Aspn23MeasurementTimeFrequencyDifference* child =
		    (Aspn23MeasurementTimeFrequencyDifference*)base;
		child->time_of_validity = time;
		return;
	}

	case ASPN_MEASUREMENT_VELOCITY: {
		Aspn23MeasurementVelocity* child = (Aspn23MeasurementVelocity*)base;
		child->time_of_validity          = time;
		return;
	}

	default: {
		printf("aspn23_set_time: cannot get time from message of type %i\n", base->message_type);
		return;
	}
	}
}

AspnBase* ASPN_NULLABLE aspn23_copy_message(AspnBase* base) {
	switch (base->message_type) {

	case ASPN_METADATA_BEIDOU_EPHEMERIS: {
		Aspn23MetadataBeidouEphemeris* child = (Aspn23MetadataBeidouEphemeris*)base;
		return (AspnBase*)aspn23_metadata_beidou_ephemeris_copy(child);
	}

	case ASPN_METADATA_GLONASS_EPHEMERIS: {
		Aspn23MetadataGlonassEphemeris* child = (Aspn23MetadataGlonassEphemeris*)base;
		return (AspnBase*)aspn23_metadata_glonass_ephemeris_copy(child);
	}

	case ASPN_METADATA_GPS_CNAV_EPHEMERIS: {
		Aspn23MetadataGpsCnavEphemeris* child = (Aspn23MetadataGpsCnavEphemeris*)base;
		return (AspnBase*)aspn23_metadata_gps_cnav_ephemeris_copy(child);
	}

	case ASPN_METADATA_GPS_LNAV_EPHEMERIS: {
		Aspn23MetadataGpsLnavEphemeris* child = (Aspn23MetadataGpsLnavEphemeris*)base;
		return (AspnBase*)aspn23_metadata_gps_lnav_ephemeris_copy(child);
	}

	case ASPN_METADATA_GPS_MNAV_EPHEMERIS: {
		Aspn23MetadataGpsMnavEphemeris* child = (Aspn23MetadataGpsMnavEphemeris*)base;
		return (AspnBase*)aspn23_metadata_gps_mnav_ephemeris_copy(child);
	}

	case ASPN_METADATA_GPS_IONO_UTC_PARAMETERS: {
		Aspn23MetadataGpsIonoUtcParameters* child = (Aspn23MetadataGpsIonoUtcParameters*)base;
		return (AspnBase*)aspn23_metadata_gps_iono_utc_parameters_copy(child);
	}

	case ASPN_METADATA_GALILEO_EPHEMERIS: {
		Aspn23MetadataGalileoEphemeris* child = (Aspn23MetadataGalileoEphemeris*)base;
		return (AspnBase*)aspn23_metadata_galileo_ephemeris_copy(child);
	}

	case ASPN_METADATA_IMU: {
		Aspn23MetadataImu* child = (Aspn23MetadataImu*)base;
		return (AspnBase*)aspn23_metadata_imu_copy(child);
	}

	case ASPN_METADATA_GENERIC: {
		Aspn23MetadataGeneric* child = (Aspn23MetadataGeneric*)base;
		return (AspnBase*)aspn23_metadata_generic_copy(child);
	}

	case ASPN_METADATA_IMAGE_FEATURES: {
		Aspn23MetadataImageFeatures* child = (Aspn23MetadataImageFeatures*)base;
		return (AspnBase*)aspn23_metadata_image_features_copy(child);
	}

	case ASPN_METADATA_MAGNETIC_FIELD: {
		Aspn23MetadataMagneticField* child = (Aspn23MetadataMagneticField*)base;
		return (AspnBase*)aspn23_metadata_magnetic_field_copy(child);
	}

	case ASPN_METADATA_SATNAV_OBS: {
		Aspn23MetadataSatnavObs* child = (Aspn23MetadataSatnavObs*)base;
		return (AspnBase*)aspn23_metadata_satnav_obs_copy(child);
	}

	case ASPN_MEASUREMENT_IMU: {
		Aspn23MeasurementImu* child = (Aspn23MeasurementImu*)base;
		return (AspnBase*)aspn23_measurement_imu_copy(child);
	}

	case ASPN_MEASUREMENT_TDOA_1TX_2RX: {
		Aspn23MeasurementTdoa1Tx2Rx* child = (Aspn23MeasurementTdoa1Tx2Rx*)base;
		return (AspnBase*)aspn23_measurement_tdoa_1tx_2rx_copy(child);
	}

	case ASPN_MEASUREMENT_TDOA_2TX_1RX: {
		Aspn23MeasurementTdoa2Tx1Rx* child = (Aspn23MeasurementTdoa2Tx1Rx*)base;
		return (AspnBase*)aspn23_measurement_tdoa_2tx_1rx_copy(child);
	}

	case ASPN_MEASUREMENT_ACCUMULATED_DISTANCE_TRAVELED: {
		Aspn23MeasurementAccumulatedDistanceTraveled* child =
		    (Aspn23MeasurementAccumulatedDistanceTraveled*)base;
		return (AspnBase*)aspn23_measurement_accumulated_distance_traveled_copy(child);
	}

	case ASPN_MEASUREMENT_ALTITUDE: {
		Aspn23MeasurementAltitude* child = (Aspn23MeasurementAltitude*)base;
		return (AspnBase*)aspn23_measurement_altitude_copy(child);
	}

	case ASPN_MEASUREMENT_ANGULAR_VELOCITY: {
		Aspn23MeasurementAngularVelocity* child = (Aspn23MeasurementAngularVelocity*)base;
		return (AspnBase*)aspn23_measurement_angular_velocity_copy(child);
	}

	case ASPN_MEASUREMENT_ANGULAR_VELOCITY_1D: {
		Aspn23MeasurementAngularVelocity1D* child = (Aspn23MeasurementAngularVelocity1D*)base;
		return (AspnBase*)aspn23_measurement_angular_velocity_1d_copy(child);
	}

	case ASPN_MEASUREMENT_ATTITUDE_2D: {
		Aspn23MeasurementAttitude2D* child = (Aspn23MeasurementAttitude2D*)base;
		return (AspnBase*)aspn23_measurement_attitude_2d_copy(child);
	}

	case ASPN_MEASUREMENT_ATTITUDE_3D: {
		Aspn23MeasurementAttitude3D* child = (Aspn23MeasurementAttitude3D*)base;
		return (AspnBase*)aspn23_measurement_attitude_3d_copy(child);
	}

	case ASPN_MEASUREMENT_BAROMETER: {
		Aspn23MeasurementBarometer* child = (Aspn23MeasurementBarometer*)base;
		return (AspnBase*)aspn23_measurement_barometer_copy(child);
	}

	case ASPN_MEASUREMENT_DELTA_POSITION: {
		Aspn23MeasurementDeltaPosition* child = (Aspn23MeasurementDeltaPosition*)base;
		return (AspnBase*)aspn23_measurement_delta_position_copy(child);
	}

	case ASPN_MEASUREMENT_DELTA_RANGE: {
		Aspn23MeasurementDeltaRange* child = (Aspn23MeasurementDeltaRange*)base;
		return (AspnBase*)aspn23_measurement_delta_range_copy(child);
	}

	case ASPN_MEASUREMENT_DELTA_RANGE_TO_POINT: {
		Aspn23MeasurementDeltaRangeToPoint* child = (Aspn23MeasurementDeltaRangeToPoint*)base;
		return (AspnBase*)aspn23_measurement_delta_range_to_point_copy(child);
	}

	case ASPN_MEASUREMENT_DIRECTION_2D_TO_POINTS: {
		Aspn23MeasurementDirection2DToPoints* child = (Aspn23MeasurementDirection2DToPoints*)base;
		return (AspnBase*)aspn23_measurement_direction_2d_to_points_copy(child);
	}

	case ASPN_MEASUREMENT_DIRECTION_3D_TO_POINTS: {
		Aspn23MeasurementDirection3DToPoints* child = (Aspn23MeasurementDirection3DToPoints*)base;
		return (AspnBase*)aspn23_measurement_direction_3d_to_points_copy(child);
	}

	case ASPN_MEASUREMENT_DIRECTION_OF_MOTION_2D: {
		Aspn23MeasurementDirectionOfMotion2D* child = (Aspn23MeasurementDirectionOfMotion2D*)base;
		return (AspnBase*)aspn23_measurement_direction_of_motion_2d_copy(child);
	}

	case ASPN_MEASUREMENT_DIRECTION_OF_MOTION_3D: {
		Aspn23MeasurementDirectionOfMotion3D* child = (Aspn23MeasurementDirectionOfMotion3D*)base;
		return (AspnBase*)aspn23_measurement_direction_of_motion_3d_copy(child);
	}

	case ASPN_MEASUREMENT_FREQUENCY_DIFFERENCE: {
		Aspn23MeasurementFrequencyDifference* child = (Aspn23MeasurementFrequencyDifference*)base;
		return (AspnBase*)aspn23_measurement_frequency_difference_copy(child);
	}

	case ASPN_MEASUREMENT_HEADING: {
		Aspn23MeasurementHeading* child = (Aspn23MeasurementHeading*)base;
		return (AspnBase*)aspn23_measurement_heading_copy(child);
	}

	case ASPN_MEASUREMENT_IMAGE: {
		Aspn23MeasurementImage* child = (Aspn23MeasurementImage*)base;
		return (AspnBase*)aspn23_measurement_image_copy(child);
	}

	case ASPN_MEASUREMENT_MAGNETIC_FIELD: {
		Aspn23MeasurementMagneticField* child = (Aspn23MeasurementMagneticField*)base;
		return (AspnBase*)aspn23_measurement_magnetic_field_copy(child);
	}

	case ASPN_MEASUREMENT_MAGNETIC_FIELD_MAGNITUDE: {
		Aspn23MeasurementMagneticFieldMagnitude* child =
		    (Aspn23MeasurementMagneticFieldMagnitude*)base;
		return (AspnBase*)aspn23_measurement_magnetic_field_magnitude_copy(child);
	}

	case ASPN_MEASUREMENT_POSITION: {
		Aspn23MeasurementPosition* child = (Aspn23MeasurementPosition*)base;
		return (AspnBase*)aspn23_measurement_position_copy(child);
	}

	case ASPN_MEASUREMENT_POSITION_ATTITUDE: {
		Aspn23MeasurementPositionAttitude* child = (Aspn23MeasurementPositionAttitude*)base;
		return (AspnBase*)aspn23_measurement_position_attitude_copy(child);
	}

	case ASPN_MEASUREMENT_POSITION_VELOCITY_ATTITUDE: {
		Aspn23MeasurementPositionVelocityAttitude* child =
		    (Aspn23MeasurementPositionVelocityAttitude*)base;
		return (AspnBase*)aspn23_measurement_position_velocity_attitude_copy(child);
	}

	case ASPN_MEASUREMENT_RANGE_RATE_TO_POINT: {
		Aspn23MeasurementRangeRateToPoint* child = (Aspn23MeasurementRangeRateToPoint*)base;
		return (AspnBase*)aspn23_measurement_range_rate_to_point_copy(child);
	}

	case ASPN_MEASUREMENT_RANGE_TO_POINT: {
		Aspn23MeasurementRangeToPoint* child = (Aspn23MeasurementRangeToPoint*)base;
		return (AspnBase*)aspn23_measurement_range_to_point_copy(child);
	}

	case ASPN_MEASUREMENT_SATNAV: {
		Aspn23MeasurementSatnav* child = (Aspn23MeasurementSatnav*)base;
		return (AspnBase*)aspn23_measurement_satnav_copy(child);
	}

	case ASPN_MEASUREMENT_SATNAV_SUBFRAME: {
		Aspn23MeasurementSatnavSubframe* child = (Aspn23MeasurementSatnavSubframe*)base;
		return (AspnBase*)aspn23_measurement_satnav_subframe_copy(child);
	}

	case ASPN_MEASUREMENT_SATNAV_WITH_SV_DATA: {
		Aspn23MeasurementSatnavWithSvData* child = (Aspn23MeasurementSatnavWithSvData*)base;
		return (AspnBase*)aspn23_measurement_satnav_with_sv_data_copy(child);
	}

	case ASPN_MEASUREMENT_SPECIFIC_FORCE_1D: {
		Aspn23MeasurementSpecificForce1D* child = (Aspn23MeasurementSpecificForce1D*)base;
		return (AspnBase*)aspn23_measurement_specific_force_1d_copy(child);
	}

	case ASPN_MEASUREMENT_SPEED: {
		Aspn23MeasurementSpeed* child = (Aspn23MeasurementSpeed*)base;
		return (AspnBase*)aspn23_measurement_speed_copy(child);
	}

	case ASPN_MEASUREMENT_TEMPERATURE: {
		Aspn23MeasurementTemperature* child = (Aspn23MeasurementTemperature*)base;
		return (AspnBase*)aspn23_measurement_temperature_copy(child);
	}

	case ASPN_MEASUREMENT_TIME: {
		Aspn23MeasurementTime* child = (Aspn23MeasurementTime*)base;
		return (AspnBase*)aspn23_measurement_time_copy(child);
	}

	case ASPN_MEASUREMENT_TIME_DIFFERENCE: {
		Aspn23MeasurementTimeDifference* child = (Aspn23MeasurementTimeDifference*)base;
		return (AspnBase*)aspn23_measurement_time_difference_copy(child);
	}

	case ASPN_MEASUREMENT_TIME_FREQUENCY_DIFFERENCE: {
		Aspn23MeasurementTimeFrequencyDifference* child =
		    (Aspn23MeasurementTimeFrequencyDifference*)base;
		return (AspnBase*)aspn23_measurement_time_frequency_difference_copy(child);
	}

	case ASPN_MEASUREMENT_VELOCITY: {
		Aspn23MeasurementVelocity* child = (Aspn23MeasurementVelocity*)base;
		return (AspnBase*)aspn23_measurement_velocity_copy(child);
	}

	default: {
		return NULL;
	}
	}
}
