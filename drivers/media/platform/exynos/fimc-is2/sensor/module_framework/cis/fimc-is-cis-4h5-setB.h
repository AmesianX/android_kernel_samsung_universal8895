/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_CIS_4H5_SET_B_H
#define FIMC_IS_CIS_4H5_SET_B_H

#include "fimc-is-cis.h"
#include "fimc-is-cis-4h5.h"

/* 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_4h5_setfile_B_3280x2458_30fps[] = {
	0x0101, 0x00, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x20, 0x1,
	0x0200, 0x0D, 0x1,
	0x0201, 0x78, 0x1,
	0x0202, 0x04, 0x1,
	0x0203, 0xE2, 0x1,
	0x0340, 0x09, 0x1,
	0x0341, 0xF0, 0x1,
	0x0342, 0x0E, 0x1,
	0x0343, 0x68, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x00, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0x02, 0x1,
	0x0348, 0x0C, 0x1,
	0x0349, 0xCF, 0x1,
	0x034A, 0x09, 0x1,
	0x034B, 0x9B, 0x1,
	0x034C, 0x0C, 0x1,
	0x034D, 0xD0, 0x1,
	0x034E, 0x09, 0x1,
	0x034F, 0x9A, 0x1,
	0x0390, 0x00, 0x1,
	0x0391, 0x00, 0x1,
	0x0940, 0x00, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x0301, 0x02, 0x1,
	0x0303, 0x01, 0x1,
	0x0305, 0x06, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0x82, 0x1,
	0x0309, 0x02, 0x1,
	0x030B, 0x01, 0x1,
	0x3C59, 0x00, 0x1,
	0x030D, 0x06, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0x99, 0x1,
	0x3C5A, 0x00, 0x1,
	0x0310, 0x01, 0x1,
	0x3C50, 0x53, 0x1,
	0x3C62, 0x02, 0x1,
	0x3C63, 0xD0, 0x1,
	0x3C64, 0x00, 0x1,
	0x3C65, 0x00, 0x1,
	0x3C1E, 0x0F, 0x1,
	0x3500, 0x0C, 0x1,
	0x3000, 0x07, 0x1,
	0x3001, 0x05, 0x1,
	0x3002, 0x03, 0x1,
	0x300A, 0x03, 0x1,
	0x300C, 0x6E, 0x1,
	0x300D, 0x76, 0x1,
	0x3010, 0x00, 0x1,
	0x3012, 0x12, 0x1,
	0x3014, 0x00, 0x1,
	0x3017, 0x0F, 0x1,
	0x3019, 0x36, 0x1,
	0x301A, 0x8C, 0x1,
	0x301B, 0x04, 0x1,
	0x3071, 0x00, 0x1,
	0x3072, 0x00, 0x1,
	0x3073, 0x00, 0x1,
	0x3074, 0x00, 0x1,
	0x3075, 0x00, 0x1,
	0x3076, 0x0A, 0x1,
	0x3077, 0x03, 0x1,
	0x3078, 0x84, 0x1,
	0x3079, 0x00, 0x1,
	0x307A, 0x00, 0x1,
	0x307B, 0x00, 0x1,
	0x307C, 0x00, 0x1,
	0x3085, 0x00, 0x1,
	0x3086, 0x8B, 0x1,
	0x30A6, 0x03, 0x1,
	0x30A7, 0x00, 0x1,
	0x30A8, 0xA0, 0x1,
	0x3032, 0x00, 0x1,
	0x303C, 0xA0, 0x1,
	0x304A, 0x25, 0x1,
	0x3054, 0x71, 0x1,
	0x3044, 0x01, 0x1,
	0x3048, 0x04, 0x1,
	0x303D, 0x09, 0x1,
	0x304B, 0x4F, 0x1,
	0x303A, 0xEA, 0x1,
	0x3039, 0x55, 0x1,
	0x305E, 0x11, 0x1,
	0x3038, 0x76, 0x1,
	0x3097, 0x66, 0x1,
	0x3096, 0x06, 0x1,
	0x308F, 0x00, 0x1,
	0x3230, 0x04, 0x1,
	0x3042, 0x01, 0x1,
	0x3053, 0x01, 0x1,
	0x320D, 0x00, 0x1,
	0x3035, 0x00, 0x1,
	0x3030, 0x04, 0x1,
	0x3B29, 0x01, 0x1,
	0x3C98, 0x00, 0x1,
	0x3901, 0x03, 0x1,
	0x3C67, 0x00, 0x1,
	0x3C1A, 0xA8, 0x1,
};

/* 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_4h5_setfile_B_3280x1846_30fps[] = {
	0x0101, 0x00, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x20, 0x1,
	0x0200, 0x11, 0x1,
	0x0201, 0x3A, 0x1,
	0x0202, 0x04, 0x1,
	0x0203, 0xE2, 0x1,
	0x0340, 0x07, 0x1,
	0x0341, 0xD7, 0x1,
	0x0342, 0x12, 0x1,
	0x0343, 0x2A, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x00, 0x1,
	0x0346, 0x01, 0x1,
	0x0347, 0x34, 0x1,
	0x0348, 0x0C, 0x1,
	0x0349, 0xCF, 0x1,
	0x034A, 0x08, 0x1,
	0x034B, 0x69, 0x1,
	0x034C, 0x0C, 0x1,
	0x034D, 0xD0, 0x1,
	0x034E, 0x07, 0x1,
	0x034F, 0x36, 0x1,
	0x0390, 0x00, 0x1,
	0x0391, 0x00, 0x1,
	0x0940, 0x00, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x0301, 0x02, 0x1,
	0x0303, 0x01, 0x1,
	0x0305, 0x06, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0x82, 0x1,
	0x0309, 0x02, 0x1,
	0x030B, 0x01, 0x1,
	0x3C59, 0x00, 0x1,
	0x030D, 0x06, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0x7A, 0x1,
	0x3C5A, 0x00, 0x1,
	0x0310, 0x01, 0x1,
	0x3C50, 0x53, 0x1,
	0x3C62, 0x02, 0x1,
	0x3C63, 0x5E, 0x1,
	0x3C64, 0xAA, 0x1,
	0x3C65, 0xAA, 0x1,
	0x3C1E, 0x0F, 0x1,
	0x3500, 0x0C, 0x1,
	0x3000, 0x07, 0x1,
	0x3001, 0x05, 0x1,
	0x3002, 0x03, 0x1,
	0x300A, 0x03, 0x1,
	0x300C, 0x6E, 0x1,
	0x300D, 0x76, 0x1,
	0x3010, 0x00, 0x1,
	0x3012, 0x12, 0x1,
	0x3014, 0x00, 0x1,
	0x3017, 0x0F, 0x1,
	0x3019, 0x36, 0x1,
	0x301A, 0x8C, 0x1,
	0x301B, 0x04, 0x1,
	0x3071, 0x00, 0x1,
	0x3072, 0x00, 0x1,
	0x3073, 0x00, 0x1,
	0x3074, 0x00, 0x1,
	0x3075, 0x00, 0x1,
	0x3076, 0x0A, 0x1,
	0x3077, 0x03, 0x1,
	0x3078, 0x84, 0x1,
	0x3079, 0x00, 0x1,
	0x307A, 0x00, 0x1,
	0x307B, 0x00, 0x1,
	0x307C, 0x00, 0x1,
	0x3085, 0x00, 0x1,
	0x3086, 0x8B, 0x1,
	0x30A6, 0x03, 0x1,
	0x30A7, 0x00, 0x1,
	0x30A8, 0xA0, 0x1,
	0x3032, 0x00, 0x1,
	0x303C, 0xA0, 0x1,
	0x304A, 0x25, 0x1,
	0x3054, 0x71, 0x1,
	0x3044, 0x01, 0x1,
	0x3048, 0x04, 0x1,
	0x303D, 0x09, 0x1,
	0x304B, 0x4F, 0x1,
	0x303A, 0xEA, 0x1,
	0x3039, 0x55, 0x1,
	0x305E, 0x11, 0x1,
	0x3038, 0x76, 0x1,
	0x3097, 0x66, 0x1,
	0x3096, 0x06, 0x1,
	0x308F, 0x00, 0x1,
	0x3230, 0x04, 0x1,
	0x3042, 0x01, 0x1,
	0x3053, 0x01, 0x1,
	0x320D, 0x00, 0x1,
	0x3035, 0x00, 0x1,
	0x3030, 0xF5, 0x1,
	0x3B29, 0x01, 0x1,
	0x3C98, 0x00, 0x1,
	0x3901, 0x03, 0x1,
	0x3C67, 0x00, 0x1,
	0x3C1A, 0xA8, 0x1,
};

/* 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_4h5_setfile_B_1640x924_60fps[] = {
	0x0101, 0x00, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x20, 0x1,
	0x0200, 0x0D, 0x1,
	0x0201, 0x8A, 0x1,
	0x0202, 0x04, 0x1,
	0x0203, 0xE2, 0x1,
	0x0340, 0x04, 0x1,
	0x0341, 0xEC, 0x1,
	0x0342, 0x0E, 0x1,
	0x0343, 0x7A, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x00, 0x1,
	0x0346, 0x01, 0x1,
	0x0347, 0x34, 0x1,
	0x0348, 0x0C, 0x1,
	0x0349, 0xCF, 0x1,
	0x034A, 0x08, 0x1,
	0x034B, 0x6B, 0x1,
	0x034C, 0x06, 0x1,
	0x034D, 0x68, 0x1,
	0x034E, 0x03, 0x1,
	0x034F, 0x9C, 0x1,
	0x0390, 0x01, 0x1,
	0x0391, 0x02, 0x1,
	0x0940, 0x01, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x01, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x03, 0x1,
	0x0301, 0x02, 0x1,
	0x0303, 0x01, 0x1,
	0x0305, 0x06, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0x82, 0x1,
	0x0309, 0x02, 0x1,
	0x030B, 0x01, 0x1,
	0x3C59, 0x00, 0x1,
	0x030D, 0x06, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0x99, 0x1,
	0x3C5A, 0x00, 0x1,
	0x0310, 0x01, 0x1,
	0x3C50, 0x53, 0x1,
	0x3C62, 0x02, 0x1,
	0x3C63, 0xBC, 0x1,
	0x3C64, 0x00, 0x1,
	0x3C65, 0x00, 0x1,
	0x3C1E, 0x0F, 0x1,
	0x3500, 0x0C, 0x1,
	0x3000, 0x07, 0x1,
	0x3001, 0x05, 0x1,
	0x3002, 0x03, 0x1,
	0x300A, 0x03, 0x1,
	0x300C, 0x6E, 0x1,
	0x300D, 0x76, 0x1,
	0x3010, 0x0A, 0x1,
	0x3012, 0x1D, 0x1,
	0x3014, 0x00, 0x1,
	0x3017, 0x0F, 0x1,
	0x3019, 0x36, 0x1,
	0x301A, 0x8C, 0x1,
	0x301B, 0x08, 0x1,
	0x3071, 0x00, 0x1,
	0x3072, 0x00, 0x1,
	0x3073, 0x00, 0x1,
	0x3074, 0x00, 0x1,
	0x3075, 0x00, 0x1,
	0x3076, 0x0A, 0x1,
	0x3077, 0x03, 0x1,
	0x3078, 0x84, 0x1,
	0x3079, 0x00, 0x1,
	0x307A, 0x00, 0x1,
	0x307B, 0x00, 0x1,
	0x307C, 0x00, 0x1,
	0x3085, 0x00, 0x1,
	0x3086, 0x8B, 0x1,
	0x30A6, 0x03, 0x1,
	0x30A7, 0x00, 0x1,
	0x30A8, 0xA0, 0x1,
	0x3032, 0x01, 0x1,
	0x303C, 0xA0, 0x1,
	0x304A, 0x25, 0x1,
	0x3054, 0x71, 0x1,
	0x3044, 0x01, 0x1,
	0x3048, 0x04, 0x1,
	0x303D, 0x09, 0x1,
	0x304B, 0x4F, 0x1,
	0x303A, 0xEA, 0x1,
	0x3039, 0x25, 0x1,
	0x305E, 0x11, 0x1,
	0x3038, 0x55, 0x1,
	0x3097, 0x32, 0x1,
	0x3096, 0x00, 0x1,
	0x308F, 0x00, 0x1,
	0x3230, 0x04, 0x1,
	0x3042, 0x01, 0x1,
	0x3053, 0x01, 0x1,
	0x320D, 0x00, 0x1,
	0x3035, 0x00, 0x1,
	0x3030, 0x04, 0x1,
	0x3B29, 0x01, 0x1,
	0x3C98, 0x00, 0x1,
	0x3901, 0x03, 0x1,
	0x3C67, 0x00, 0x1,
	0x3C1A, 0xA8, 0x1,
};

/* 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_4h5_setfile_B_816x604_120fps[] = {
	0x0101, 0x00, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x20, 0x1,
	0x0200, 0x0D, 0x1,
	0x0201, 0x8A, 0x1,
	0x0202, 0x04, 0x1,
	0x0203, 0xE2, 0x1,
	0x0340, 0x02, 0x1,
	0x0341, 0x94, 0x1,
	0x0342, 0x0E, 0x1,
	0x0343, 0x7A, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x08, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0x18, 0x1,
	0x0348, 0x0C, 0x1,
	0x0349, 0xC7, 0x1,
	0x034A, 0x09, 0x1,
	0x034B, 0x87, 0x1,
	0x034C, 0x03, 0x1,
	0x034D, 0x30, 0x1,
	0x034E, 0x02, 0x1,
	0x034F, 0x5C, 0x1,
	0x0390, 0x01, 0x1,
	0x0391, 0x24, 0x1,
	0x0940, 0x01, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x03, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x07, 0x1,
	0x0301, 0x02, 0x1,
	0x0303, 0x01, 0x1,
	0x0305, 0x06, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0x82, 0x1,
	0x0309, 0x02, 0x1,
	0x030B, 0x01, 0x1,
	0x3C59, 0x00, 0x1,
	0x030D, 0x06, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0x99, 0x1,
	0x3C5A, 0x00, 0x1,
	0x0310, 0x01, 0x1,
	0x3C50, 0x53, 0x1,
	0x3C62, 0x02, 0x1,
	0x3C63, 0x97, 0x1,
	0x3C64, 0x00, 0x1,
	0x3C65, 0x00, 0x1,
	0x3C1E, 0x0F, 0x1,
	0x3500, 0x0C, 0x1,
	0x3000, 0x07, 0x1,
	0x3001, 0x05, 0x1,
	0x3002, 0x03, 0x1,
	0x300A, 0x03, 0x1,
	0x300C, 0x6E, 0x1,
	0x300D, 0x76, 0x1,
	0x3010, 0x00, 0x1,
	0x3012, 0x1D, 0x1,
	0x3014, 0x00, 0x1,
	0x3017, 0x0F, 0x1,
	0x3019, 0x36, 0x1,
	0x301A, 0x82, 0x1,
	0x301B, 0x08, 0x1,
	0x3071, 0x00, 0x1,
	0x3072, 0x00, 0x1,
	0x3073, 0x00, 0x1,
	0x3074, 0x00, 0x1,
	0x3075, 0x00, 0x1,
	0x3076, 0x0A, 0x1,
	0x3077, 0x03, 0x1,
	0x3078, 0x84, 0x1,
	0x3079, 0x00, 0x1,
	0x307A, 0x00, 0x1,
	0x307B, 0x00, 0x1,
	0x307C, 0x00, 0x1,
	0x3085, 0x00, 0x1,
	0x3086, 0x8B, 0x1,
	0x30A6, 0x03, 0x1,
	0x30A7, 0x00, 0x1,
	0x30A8, 0xA0, 0x1,
	0x3032, 0x01, 0x1,
	0x303C, 0xA0, 0x1,
	0x304A, 0x25, 0x1,
	0x3054, 0x71, 0x1,
	0x3044, 0x01, 0x1,
	0x3048, 0x04, 0x1,
	0x303D, 0x07, 0x1,
	0x304B, 0x4F, 0x1,
	0x303A, 0xEA, 0x1,
	0x3039, 0x25, 0x1,
	0x305E, 0x11, 0x1,
	0x3038, 0xFF, 0x1,
	0x3097, 0x31, 0x1,
	0x3096, 0x00, 0x1,
	0x308F, 0x00, 0x1,
	0x3230, 0x04, 0x1,
	0x3042, 0x01, 0x1,
	0x3053, 0x01, 0x1,
	0x320D, 0x00, 0x1,
	0x3035, 0x01, 0x1,
	0x3030, 0x04, 0x1,
	0x3B29, 0x01, 0x1,
	0x3C98, 0x00, 0x1,
	0x3901, 0x02, 0x1,
	0x3C67, 0x07, 0x1,
};

/* 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_4h5_setfile_B_816x460_120fps[] = {
	0x0101, 0x00, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x20, 0x1,
	0x0200, 0x0D, 0x1,
	0x0201, 0x8A, 0x1,
	0x0202, 0x04, 0x1,
	0x0203, 0xE2, 0x1,
	0x0340, 0x02, 0x1,
	0x0341, 0x76, 0x1,
	0x0342, 0x0E, 0x1,
	0x0343, 0x7A, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x08, 0x1,
	0x0346, 0x01, 0x1,
	0x0347, 0x38, 0x1,
	0x0348, 0x0C, 0x1,
	0x0349, 0xC7, 0x1,
	0x034A, 0x08, 0x1,
	0x034B, 0x67, 0x1,
	0x034C, 0x03, 0x1,
	0x034D, 0x30, 0x1,
	0x034E, 0x01, 0x1,
	0x034F, 0xCC, 0x1,
	0x0390, 0x01, 0x1,
	0x0391, 0x24, 0x1,
	0x0940, 0x01, 0x1,
	0x0381, 0x01, 0x1,
	0x0383, 0x03, 0x1,
	0x0385, 0x01, 0x1,
	0x0387, 0x07, 0x1,
	0x0301, 0x02, 0x1,
	0x0303, 0x01, 0x1,
	0x0305, 0x06, 0x1,
	0x0306, 0x00, 0x1,
	0x0307, 0x82, 0x1,
	0x0309, 0x02, 0x1,
	0x030B, 0x01, 0x1,
	0x3C59, 0x00, 0x1,
	0x030D, 0x06, 0x1,
	0x030E, 0x00, 0x1,
	0x030F, 0x99, 0x1,
	0x3C5A, 0x00, 0x1,
	0x0310, 0x01, 0x1,
	0x3C50, 0x53, 0x1,
	0x3C62, 0x02, 0x1,
	0x3C63, 0x97, 0x1,
	0x3C64, 0x00, 0x1,
	0x3C65, 0x00, 0x1,
	0x3C1E, 0x0F, 0x1,
	0x3500, 0x0C, 0x1,
	0x3000, 0x07, 0x1,
	0x3001, 0x05, 0x1,
	0x3002, 0x03, 0x1,
	0x300A, 0x03, 0x1,
	0x300C, 0x6E, 0x1,
	0x300D, 0x76, 0x1,
	0x3010, 0x00, 0x1,
	0x3012, 0x1D, 0x1,
	0x3014, 0x00, 0x1,
	0x3017, 0x0F, 0x1,
	0x3019, 0x36, 0x1,
	0x301A, 0x82, 0x1,
	0x301B, 0x08, 0x1,
	0x3071, 0x00, 0x1,
	0x3072, 0x00, 0x1,
	0x3073, 0x00, 0x1,
	0x3074, 0x00, 0x1,
	0x3075, 0x00, 0x1,
	0x3076, 0x0A, 0x1,
	0x3077, 0x03, 0x1,
	0x3078, 0x84, 0x1,
	0x3079, 0x00, 0x1,
	0x307A, 0x00, 0x1,
	0x307B, 0x00, 0x1,
	0x307C, 0x00, 0x1,
	0x3085, 0x00, 0x1,
	0x3086, 0x8B, 0x1,
	0x30A6, 0x03, 0x1,
	0x30A7, 0x00, 0x1,
	0x30A8, 0xA0, 0x1,
	0x3032, 0x01, 0x1,
	0x303C, 0xA0, 0x1,
	0x304A, 0x25, 0x1,
	0x3054, 0x71, 0x1,
	0x3044, 0x01, 0x1,
	0x3048, 0x04, 0x1,
	0x303D, 0x07, 0x1,
	0x304B, 0x4F, 0x1,
	0x303A, 0xEA, 0x1,
	0x3039, 0x25, 0x1,
	0x305E, 0x11, 0x1,
	0x3038, 0xFF, 0x1,
	0x3097, 0x31, 0x1,
	0x3096, 0x00, 0x1,
	0x308F, 0x00, 0x1,
	0x3230, 0x04, 0x1,
	0x3042, 0x01, 0x1,
	0x3053, 0x01, 0x1,
	0x320D, 0x00, 0x1,
	0x3035, 0x01, 0x1,
	0x3030, 0x04, 0x1,
	0x3B29, 0x01, 0x1,
	0x3C98, 0x00, 0x1,
	0x3901, 0x02, 0x1,
	0x3C67, 0x07, 0x1,
};

const struct sensor_pll_info sensor_4h5_pllinfo_B_3280x2458_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x02, /* vt_pix_clk_div	(0x0301) */
	0x01, /* vt_sys_clk_div	(0x0303) */
	0x06, /* pre_pll_clk_div	(0x0305) */
	0x82, /* pll_multiplier	(0x0307) */
	0x02, /* op_pix_clk_div	(0x0309) */
	0x01, /* op_sys_clk_div	(0x030B) */

	0x06, /* secnd_pre_pll_clk_div	(0x030D) */
	0x99, /* secnd_pll_multiplier	(0x030F) */
	0x09F0, /* frame_length_lines	(0x0341) */
	0x0E68, /* line_length_pck	(0x0343) */
};

const struct sensor_pll_info sensor_4h5_pllinfo_B_3280x1846_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x02, /* vt_pix_clk_div	(0x0301) */
	0x01, /* vt_sys_clk_div	(0x0303) */
	0x06, /* pre_pll_clk_div	(0x0305) */
	0x82, /* pll_multiplier	(0x0307) */
	0x02, /* op_pix_clk_div	(0x0309) */
	0x01, /* op_sys_clk_div	(0x030B) */

	0x06, /* secnd_pre_pll_clk_div	(0x030D) */
	0x7A, /* secnd_pll_multiplier	(0x030F) */
	0x07D7, /* frame_length_lines	(0x0341) */
	0x122A, /* line_length_pck	(0x0343) */
};

const struct sensor_pll_info sensor_4h5_pllinfo_B_1640x924_60fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x02, /* vt_pix_clk_div	(0x0301) */
	0x01, /* vt_sys_clk_div	(0x0303) */
	0x06, /* pre_pll_clk_div	(0x0305) */
	0x82, /* pll_multiplier	(0x0307) */
	0x02, /* op_pix_clk_div	(0x0309) */
	0x01, /* op_sys_clk_div	(0x030B) */

	0x06, /* secnd_pre_pll_clk_div	(0x030D) */
	0x99, /* secnd_pll_multiplier	(0x030F) */
	0x04EC, /* frame_length_lines	(0x0341) */
	0x0E7A, /* line_length_pck	(0x0343) */
};

const struct sensor_pll_info sensor_4h5_pllinfo_B_816x604_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x02, /* vt_pix_clk_div	(0x0301) */
	0x01, /* vt_sys_clk_div	(0x0303) */
	0x06, /* pre_pll_clk_div	(0x0305) */
	0x82, /* pll_multiplier	(0x0307) */
	0x02, /* op_pix_clk_div	(0x0309) */
	0x01, /* op_sys_clk_div	(0x030B) */

	0x06, /* secnd_pre_pll_clk_div	(0x030D) */
	0x99, /* secnd_pll_multiplier	(0x030F) */
	0x0294, /* frame_length_lines	(0x0341) */
	0x0E7A, /* line_length_pck	(0x0343) */
};

const struct sensor_pll_info sensor_4h5_pllinfo_B_816x460_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x02, /* vt_pix_clk_div	(0x0301) */
	0x01, /* vt_sys_clk_div	(0x0303) */
	0x06, /* pre_pll_clk_div	(0x0305) */
	0x82, /* pll_multiplier	(0x0307) */
	0x02, /* op_pix_clk_div	(0x0309) */
	0x01, /* op_sys_clk_div	(0x030B) */

	0x06, /* secnd_pre_pll_clk_div	(0x030D) */
	0x99, /* secnd_pll_multiplier	(0x030F) */
	0x0276, /* frame_length_lines	(0x0341) */
	0x0E7A, /* line_length_pck	(0x0343) */
};

static const u32 *sensor_4h5_setfiles_B[] = {
	/* 16x10 margin */
	sensor_4h5_setfile_B_3280x2458_30fps,
	sensor_4h5_setfile_B_3280x1846_30fps,
	sensor_4h5_setfile_B_1640x924_60fps,
	sensor_4h5_setfile_B_816x604_120fps,
	sensor_4h5_setfile_B_816x460_120fps,
};

static const u32 sensor_4h5_setfile_B_sizes[] = {
	/* 16x10 margin */
	sizeof(sensor_4h5_setfile_B_3280x2458_30fps) / sizeof(sensor_4h5_setfile_B_3280x2458_30fps[0]),
	sizeof(sensor_4h5_setfile_B_3280x1846_30fps) / sizeof(sensor_4h5_setfile_B_3280x1846_30fps[0]),
	sizeof(sensor_4h5_setfile_B_1640x924_60fps) / sizeof(sensor_4h5_setfile_B_1640x924_60fps[0]),
	sizeof(sensor_4h5_setfile_B_816x604_120fps) / sizeof(sensor_4h5_setfile_B_816x604_120fps[0]),
	sizeof(sensor_4h5_setfile_B_816x460_120fps) / sizeof(sensor_4h5_setfile_B_816x460_120fps[0]),
};

static const struct sensor_pll_info *sensor_4h5_pllinfos_B[] = {
	/* 16x10 margin */
	&sensor_4h5_pllinfo_B_3280x2458_30fps,
	&sensor_4h5_pllinfo_B_3280x1846_30fps,
	&sensor_4h5_pllinfo_B_1640x924_60fps,
	&sensor_4h5_pllinfo_B_816x604_120fps,
	&sensor_4h5_pllinfo_B_816x460_120fps,
};

#endif
