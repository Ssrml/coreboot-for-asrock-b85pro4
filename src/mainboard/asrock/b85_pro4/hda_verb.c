/* SPDX-License-Identifier: GPL-2.0-only */

#include <device/azalia_device.h>

const u32 cim_verb_data[] = {
	0x10ec0892,     /* Codec Vendor / Device ID: Realtek */
	0x18495892,     /* Subsystem ID */
	15,             /* Number of 4 dword sets */
	AZALIA_SUBVENDOR(0, 0x18495892),
	AZALIA_PIN_CFG(0, 0x11, 0x40000000),
	AZALIA_PIN_CFG(0, 0x12, 0x411111f0),
	AZALIA_PIN_CFG(0, 0x14, 0x01014010),
	AZALIA_PIN_CFG(0, 0x15, 0x411111f0),
	AZALIA_PIN_CFG(0, 0x16, 0x411111f0),
	AZALIA_PIN_CFG(0, 0x17, 0x411111f0),
	AZALIA_PIN_CFG(0, 0x18, 0x01a19020),
	AZALIA_PIN_CFG(0, 0x19, 0x02a19130),
	AZALIA_PIN_CFG(0, 0x1a, 0x0181302f),
	AZALIA_PIN_CFG(0, 0x1b, 0x02214150),
	AZALIA_PIN_CFG(0, 0x1c, 0x411111f0),
	AZALIA_PIN_CFG(0, 0x1d, 0x4024c601),
	AZALIA_PIN_CFG(0, 0x1e, 0x90460140),
	AZALIA_PIN_CFG(0, 0x1f, 0x411111f0),

};

const u32 pc_beep_verbs[] = {};

AZALIA_ARRAY_SIZES;

