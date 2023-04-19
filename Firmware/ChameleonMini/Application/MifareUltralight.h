/*
 * MifareUltralight.h
 *
 *  Created on: 20.03.2013
 *      Author: skuser
 */

#ifdef CONFIG_MF_ULTRALIGHT_SUPPORT

#ifndef MIFAREULTRALIGHT_H_
#define MIFAREULTRALIGHT_H_

#include "Application.h"
#include "ISO14443-3A.h"

#define MIFARE_ULTRALIGHT_UID_SIZE          ISO14443A_UID_SIZE_DOUBLE
#define MIFARE_ULTRALIGHT_PAGE_SIZE         4
#define MIFARE_ULTRALIGHT_PAGES             16
#define MIFARE_ULTRALIGHT_EV11_PAGES        20
#define MIFARE_ULTRALIGHT_EV12_PAGES        41
#define MIFARE_ULTRALIGHT_MEM_SIZE          (MIFARE_ULTRALIGHT_PAGES * MIFARE_ULTRALIGHT_PAGE_SIZE)
#define MIFARE_ULTRALIGHT_EV11_MEM_SIZE     (MIFARE_ULTRALIGHT_EV11_PAGES * MIFARE_ULTRALIGHT_PAGE_SIZE)
#define MIFARE_ULTRALIGHT_EV12_MEM_SIZE     (MIFARE_ULTRALIGHT_EV12_PAGES * MIFARE_ULTRALIGHT_PAGE_SIZE)
#define MIFARE_ULTRALIGHT_PWD_ADDRESS       0 // In working memory
#define MIFARE_ULTRALIGHT_PWD_SIZE          4 // Bytes

void MifareUltralightAppInit(void);
void MifareUltralightEV11AppInit(void);
void MifareUltralightEV12AppInit(void);
void MifareUltralightAppReset(void);

uint16_t MifareUltralightAppProcess(uint8_t* Buffer, uint16_t BitCount);

void MifareUltralightGetUid(ConfigurationUidType Uid);
void MifareUltralightSetUid(ConfigurationUidType Uid);

void MifareUltralightGetAtqa(uint16_t * Atqa);
void MifareUltralightSetAtqa(uint16_t Atqa);
void MifareUltralightGetSak(uint8_t * Sak);
void MifareUltralightSetSak(uint8_t Sak);

#endif /* MIFAREULTRALIGHT_H_ */

#endif /* Compilation support */
