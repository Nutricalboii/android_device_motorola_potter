/* Device-specific android_filesystem_config.h
   This file includes the core Android filesystem config which defines all standard AID_* identifiers,
   then adds Motorola‑specific IDs.
   It deliberately does NOT use the same include guard as the core file to avoid suppressing its content.
*/
#ifndef ANDROID_DEVICE_MOTOROLA_POTTER_FS_CONFIG_H
#define ANDROID_DEVICE_MOTOROLA_POTTER_FS_CONFIG_H

#if defined(EXCLUDE_FS_CONFIG_STRUCTURES)
#undef EXCLUDE_FS_CONFIG_STRUCTURES
#endif

#include "../../../../halium/system/core/libcutils/include/private/android_filesystem_config.h"

/* Motorola specific IDs */
#define AID_MOT_ACCY      9000  /* access to accessory */
#define AID_MOT_PWRIC     9001  /* power IC */
#define AID_MOT_USB       9002  /* mot usb */
#define AID_MOT_DRM       9003  /* can access DRM resource */
#define AID_MOT_TCMD      9004  /* mot_tcmd */
#define AID_MOT_SEC_RTC   9005  /* mot cpcap rtc */
#define AID_MOT_TOMBSTONE 9006
#define AID_MOT_TPAPI     9007  /* mot_tpapi */
#define AID_MOT_SECCLKD   9008  /* mot_secclkd */
#define AID_MOT_WHISPER   9009  /* Whisper Protocol access */
#define AID_MOT_CAIF      9010  /* can create CAIF sockets */
#define AID_MOT_DLNA      9011  /* DLNA native */
#define AID_MOT_ATVC      9012  /* mot_atvc - service only */
#define AID_SPRINT_EXTENSION 9013  /* sprint extension service */
#define AID_MOT_DBVC      9014  /* mot_dbvc - data block feature */
#define AID_FINGERP       9015  /* fingerprint */
#define AID_MOT_ESDFS     9016  /* mot_esdfs package list parsing */
#define AID_POWER         9017  /* power management */
#define AID_ITSON         9018  /* itson permission */
#define AID_MOT_DTV       9019  /* dtv */
#define AID_MOT_SHARED    9323  /* motorola shared uid */
#define AID_MOT_COMMON    9341  /* motorola common uid */

#endif /* ANDROID_DEVICE_MOTOROLA_POTTER_FS_CONFIG_H */
