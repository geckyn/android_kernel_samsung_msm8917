/* Copyright (c) 2011-2018, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef S5K5E9YX_OTP_H
#define S5K5E9YX_OTP_H

#define S5K5E9_OTP_CONTROL_REGISTER			0x0A00
#define S5K5E9_OTP_ERROR_FLAG_REGISTER		0x0A01
#define S5K5E9_OTP_PAGE_SELECT_REGISTER		0x0A02
#define S5K5E9_OTP_PAGE_START_REGISTER		0x0A04
#define S5K5E9_OTP_PAGE_END_REGISTER			0x0A43
#define S5K5E9_OTP_TOTAL_PAGE_COUNT			0x0040
#define S5K5E9_OTP_PAGE_SIZE					0x0040
#define S5K5E9_OTP_MODULE_ID_OFFSET			0x00C2
#define S5K5E9_OTP_MODULE_ID_SIZE				0x0010
#define S5K5E9_OTP_SENSOR_ID_OFFSET			0x00C4
#define S5K5E9_OTP_SENSOR_ID_SIZE				0x0010

static struct msm_camera_i2c_reg_array load_s5k5e9yx_otp_setfile_reg[] = {
	/*============== Load setfile =====================*/
	
	/* Streaming off */
	{0x0100, 0x00},
	
	/* Apply Global Settings */
	{0x0A02, 0x3F},
	{0x3B45, 0x01},
	{0x3290, 0x10},
	{0x0B05, 0x01},
	{0x3069, 0x87},
	{0x3074, 0x06},
	{0x3075, 0x2F},
	{0x301F, 0x20},
	{0x306B, 0x9A},
	{0x3091, 0x1B},
	{0x306E, 0x71},
	{0x306F, 0x28},
	{0x306D, 0x08},
	{0x3084, 0x16},
	{0x3070, 0x0F},
	{0x306A, 0x79},
	{0x30B0, 0xFF},
	{0x30C2, 0x05},
	{0x30C4, 0x06},
	{0x3012, 0x4E},
	{0x3080, 0x08},
	{0x3083, 0x14},
	{0x3200, 0x01},
	{0x3081, 0x07},
	{0x307B, 0x85},
	{0x307A, 0x0A},
	{0x3079, 0x0A},
	{0x308A, 0x20},
	{0x308B, 0x08},
	{0x308C, 0x0B},
	{0x392F, 0x01},
	{0x3930, 0x00},
	{0x3924, 0x7F},
	{0x3925, 0xFD},
	{0x3C08, 0xFF},
	{0x3C09, 0xFF},
	{0x3C31, 0xFF},
	{0x3C32, 0xFF}, 

	/* Apply Mode Settings */
	{0x0136, 0x18},
	{0x0137, 0x00},
	{0x0301, 0x06},
	{0x0305, 0x04},
	{0x0306, 0x00},
	{0x0307, 0x5F},
	{0x3C1F, 0x00},
	{0x030D, 0x04},
	{0x030E, 0x00},
	{0x030F, 0x92},
	{0x3C17, 0x00},
	{0x0340, 0x07},
	{0x0341, 0xEE},
	{0x0342, 0x0C},
	{0x0343, 0x28},
	{0x0344, 0x00},
	{0x0345, 0x08},
	{0x0346, 0x00},
	{0x0347, 0x08},
	{0x0348, 0x0A},
	{0x0349, 0x27},
	{0x034A, 0x07},
	{0x034B, 0x9F},
	{0x034C, 0x0A},
	{0x034D, 0x20},
	{0x034E, 0x07},
	{0x034F, 0x98},
	{0x0381, 0x01},
	{0x0383, 0x01},
	{0x0385, 0x01},
	{0x0387, 0x01},
	{0x0900, 0x00},
	{0x0901, 0x00},
	{0x0204, 0x00},
	{0x0205, 0x20},
	{0x0200, 0x0B},
	{0x0201, 0x9C},
	{0x0202, 0x00},
	{0x0203, 0x02},
	{0x0820, 0x03},
	{0x0821, 0x6C},
	{0x0822, 0x00},
	{0x0823, 0x00},
	{0x0112, 0x0A},
	{0x0113, 0x0A},
	{0x0114, 0x01},
	{0x3929, 0x0F},
	{0x0101, 0x00},
	{0x30B8, 0x2A},
	{0x30BA, 0x2E},

	/* Streaming on */
	{0x0100, 0x01},	
};

static struct msm_camera_i2c_reg_array init_write_s5k5e9yx_otp_reg[] = {
	{0x3b42, 0x68},
	{0x3b41, 0x01},
	{0x3b40, 0x00},
	{0x3b45, 0x02},
	{0x0A00, 0x04},
	{0x0A00, 0x03},
	{0x3b42, 0x00},
	{0x0A02, 0x02},
	{0x0A00, 0x03},
};

static struct msm_camera_i2c_reg_array finish_write_s5k5e9yx_otp_reg[] = {
	{0x0A00, 0x04},
	{0x0A00, 0x00},
	{0x3b40, 0x01},
};

static struct msm_camera_i2c_reg_array init_read_s5k5e9yx_otp_reg[] = {
	{0x0A00, 0x04},
	{0x0A02, 0x11},
	{0x0A00, 0x01},
};

static struct msm_camera_i2c_reg_array finish_read_s5k5e9yx_otp_reg[] = {
	{0x0A00, 0x04},
	{0x0A00, 0x00},
};

#endif /* S5K5E9YX_OTP_H */
