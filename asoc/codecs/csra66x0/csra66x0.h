/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2018, The Linux Foundation. All rights reserved.
 */

#ifndef _CSRA66X0_H
#define _CSRA66X0_H

/* CSRA66X0 register addresses */
#define CSRA66X0_BASE 0x7000

#define CSRA66X0_AUDIO_IF_RX_CONFIG1            (CSRA66X0_BASE+0x0000)
#define CSRA66X0_AUDIO_IF_RX_CONFIG2            (CSRA66X0_BASE+0x0001)
#define CSRA66X0_AUDIO_IF_RX_CONFIG3            (CSRA66X0_BASE+0x0002)
#define CSRA66X0_AUDIO_IF_TX_EN                 (CSRA66X0_BASE+0x0003)
#define CSRA66X0_AUDIO_IF_TX_CONFIG1            (CSRA66X0_BASE+0x0004)
#define CSRA66X0_AUDIO_IF_TX_CONFIG2            (CSRA66X0_BASE+0x0005)
#define CSRA66X0_I2C_DEVICE_ADDRESS             (CSRA66X0_BASE+0x0006)
#define CSRA66X0_CHIP_ID_FA                     (CSRA66X0_BASE+0x0007)
#define CSRA66X0_ROM_VER_FA                     (CSRA66X0_BASE+0x0008)
#define CSRA66X0_CHIP_REV_0_FA                  (CSRA66X0_BASE+0x0009)
#define CSRA66X0_CHIP_REV_1_FA                  (CSRA66X0_BASE+0x000A)
#define CSRA66X0_CH1_MIX_SEL                    (CSRA66X0_BASE+0x000B)
#define CSRA66X0_CH2_MIX_SEL                    (CSRA66X0_BASE+0x000C)
#define CSRA66X0_CH1_SAMPLE1_SCALE_0            (CSRA66X0_BASE+0x000D)
#define CSRA66X0_CH1_SAMPLE1_SCALE_1            (CSRA66X0_BASE+0x000E)
#define CSRA66X0_CH1_SAMPLE3_SCALE_0            (CSRA66X0_BASE+0x000F)
#define CSRA66X0_CH1_SAMPLE3_SCALE_1            (CSRA66X0_BASE+0x0010)
#define CSRA66X0_CH1_SAMPLE5_SCALE_0            (CSRA66X0_BASE+0x0011)
#define CSRA66X0_CH1_SAMPLE5_SCALE_1            (CSRA66X0_BASE+0x0012)
#define CSRA66X0_CH1_SAMPLE7_SCALE_0            (CSRA66X0_BASE+0x0013)
#define CSRA66X0_CH1_SAMPLE7_SCALE_1            (CSRA66X0_BASE+0x0014)
#define CSRA66X0_CH1_SAMPLE2_SCALE_0            (CSRA66X0_BASE+0x0015)
#define CSRA66X0_CH1_SAMPLE2_SCALE_1            (CSRA66X0_BASE+0x0016)
#define CSRA66X0_CH1_SAMPLE4_SCALE_0            (CSRA66X0_BASE+0x0017)
#define CSRA66X0_CH1_SAMPLE4_SCALE_1            (CSRA66X0_BASE+0x0018)
#define CSRA66X0_CH1_SAMPLE6_SCALE_0            (CSRA66X0_BASE+0x0019)
#define CSRA66X0_CH1_SAMPLE6_SCALE_1            (CSRA66X0_BASE+0x001A)
#define CSRA66X0_CH1_SAMPLE8_SCALE_0            (CSRA66X0_BASE+0x001B)
#define CSRA66X0_CH1_SAMPLE8_SCALE_1            (CSRA66X0_BASE+0x001C)
#define CSRA66X0_CH2_SAMPLE1_SCALE_0            (CSRA66X0_BASE+0x001D)
#define CSRA66X0_CH2_SAMPLE1_SCALE_1            (CSRA66X0_BASE+0x001E)
#define CSRA66X0_CH2_SAMPLE3_SCALE_0            (CSRA66X0_BASE+0x001F)
#define CSRA66X0_CH2_SAMPLE3_SCALE_1            (CSRA66X0_BASE+0x0020)
#define CSRA66X0_CH2_SAMPLE5_SCALE_0            (CSRA66X0_BASE+0x0021)
#define CSRA66X0_CH2_SAMPLE5_SCALE_1            (CSRA66X0_BASE+0x0022)
#define CSRA66X0_CH2_SAMPLE7_SCALE_0            (CSRA66X0_BASE+0x0023)
#define CSRA66X0_CH2_SAMPLE7_SCALE_1            (CSRA66X0_BASE+0x0024)
#define CSRA66X0_CH2_SAMPLE2_SCALE_0            (CSRA66X0_BASE+0x0025)
#define CSRA66X0_CH2_SAMPLE2_SCALE_1            (CSRA66X0_BASE+0x0026)
#define CSRA66X0_CH2_SAMPLE4_SCALE_0            (CSRA66X0_BASE+0x0027)
#define CSRA66X0_CH2_SAMPLE4_SCALE_1            (CSRA66X0_BASE+0x0028)
#define CSRA66X0_CH2_SAMPLE6_SCALE_0            (CSRA66X0_BASE+0x0029)
#define CSRA66X0_CH2_SAMPLE6_SCALE_1            (CSRA66X0_BASE+0x002A)
#define CSRA66X0_CH2_SAMPLE8_SCALE_0            (CSRA66X0_BASE+0x002B)
#define CSRA66X0_CH2_SAMPLE8_SCALE_1            (CSRA66X0_BASE+0x002C)
#define CSRA66X0_VOLUME_CONFIG_FA               (CSRA66X0_BASE+0x002D)
#define CSRA66X0_STARTUP_DELAY_FA               (CSRA66X0_BASE+0x002E)
#define CSRA66X0_CH1_VOLUME_0_FA                (CSRA66X0_BASE+0x002F)
#define CSRA66X0_CH1_VOLUME_1_FA                (CSRA66X0_BASE+0x0030)
#define CSRA66X0_CH2_VOLUME_0_FA                (CSRA66X0_BASE+0x0031)
#define CSRA66X0_CH2_VOLUME_1_FA                (CSRA66X0_BASE+0x0032)
#define CSRA66X0_QUAD_ENC_COUNT_0_FA            (CSRA66X0_BASE+0x0033)
#define CSRA66X0_QUAD_ENC_COUNT_1_FA            (CSRA66X0_BASE+0x0034)
#define CSRA66X0_SOFT_CLIP_CONFIG               (CSRA66X0_BASE+0x0035)
#define CSRA66X0_CH1_HARD_CLIP_THRESH           (CSRA66X0_BASE+0x0036)
#define CSRA66X0_CH2_HARD_CLIP_THRESH           (CSRA66X0_BASE+0x0037)
#define CSRA66X0_SOFT_CLIP_THRESH               (CSRA66X0_BASE+0x0038)
#define CSRA66X0_DS_ENABLE_THRESH_0             (CSRA66X0_BASE+0x0039)
#define CSRA66X0_DS_ENABLE_THRESH_1             (CSRA66X0_BASE+0x003A)
#define CSRA66X0_DS_TARGET_COUNT_0              (CSRA66X0_BASE+0x003B)
#define CSRA66X0_DS_TARGET_COUNT_1              (CSRA66X0_BASE+0x003C)
#define CSRA66X0_DS_TARGET_COUNT_2              (CSRA66X0_BASE+0x003D)
#define CSRA66X0_DS_DISABLE_THRESH_0            (CSRA66X0_BASE+0x003E)
#define CSRA66X0_DS_DISABLE_THRESH_1            (CSRA66X0_BASE+0x003F)
#define CSRA66X0_DCA_CTRL                       (CSRA66X0_BASE+0x0040)
#define CSRA66X0_CH1_DCA_THRESH                 (CSRA66X0_BASE+0x0041)
#define CSRA66X0_CH2_DCA_THRESH                 (CSRA66X0_BASE+0x0042)
#define CSRA66X0_DCA_ATTACK_RATE                (CSRA66X0_BASE+0x0043)
#define CSRA66X0_DCA_RELEASE_RATE               (CSRA66X0_BASE+0x0044)
#define CSRA66X0_CH1_OUTPUT_INVERT_EN           (CSRA66X0_BASE+0x0045)
#define CSRA66X0_CH2_OUTPUT_INVERT_EN           (CSRA66X0_BASE+0x0046)
#define CSRA66X0_CH1_176P4K_DELAY               (CSRA66X0_BASE+0x0047)
#define CSRA66X0_CH2_176P4K_DELAY               (CSRA66X0_BASE+0x0048)
#define CSRA66X0_CH1_192K_DELAY                 (CSRA66X0_BASE+0x0049)
#define CSRA66X0_CH2_192K_DELAY                 (CSRA66X0_BASE+0x004A)
#define CSRA66X0_DEEMP_CONFIG_FA                (CSRA66X0_BASE+0x004B)
#define CSRA66X0_CH1_TREBLE_GAIN_CTRL_FA        (CSRA66X0_BASE+0x004C)
#define CSRA66X0_CH2_TREBLE_GAIN_CTRL_FA        (CSRA66X0_BASE+0x004D)
#define CSRA66X0_CH1_TREBLE_FC_CTRL_FA          (CSRA66X0_BASE+0x004E)
#define CSRA66X0_CH2_TREBLE_FC_CTRL_FA          (CSRA66X0_BASE+0x004F)
#define CSRA66X0_CH1_BASS_GAIN_CTRL_FA          (CSRA66X0_BASE+0x0050)
#define CSRA66X0_CH2_BASS_GAIN_CTRL_FA          (CSRA66X0_BASE+0x0051)
#define CSRA66X0_CH1_BASS_FC_CTRL_FA            (CSRA66X0_BASE+0x0052)
#define CSRA66X0_CH2_BASS_FC_CTRL_FA            (CSRA66X0_BASE+0x0053)
#define CSRA66X0_FILTER_SEL_8K                  (CSRA66X0_BASE+0x0054)
#define CSRA66X0_FILTER_SEL_11P025K             (CSRA66X0_BASE+0x0055)
#define CSRA66X0_FILTER_SEL_16K                 (CSRA66X0_BASE+0x0056)
#define CSRA66X0_FILTER_SEL_22P05K              (CSRA66X0_BASE+0x0057)
#define CSRA66X0_FILTER_SEL_32K                 (CSRA66X0_BASE+0x0058)
#define CSRA66X0_FILTER_SEL_44P1K_48K           (CSRA66X0_BASE+0x0059)
#define CSRA66X0_FILTER_SEL_88P2K_96K           (CSRA66X0_BASE+0x005A)
#define CSRA66X0_FILTER_SEL_176P4K_192K         (CSRA66X0_BASE+0x005B)
/* RESERVED (CSRA66X0_BASE+0x005C) */
#define CSRA66X0_USER_DSP_CTRL                  (CSRA66X0_BASE+0x005D)
#define CSRA66X0_TEST_TONE_CTRL                 (CSRA66X0_BASE+0x005E)
#define CSRA66X0_TEST_TONE_FREQ_0               (CSRA66X0_BASE+0x005F)
#define CSRA66X0_TEST_TONE_FREQ_1               (CSRA66X0_BASE+0x0060)
#define CSRA66X0_TEST_TONE_FREQ_2               (CSRA66X0_BASE+0x0061)
#define CSRA66X0_AUDIO_RATE_CTRL_FA             (CSRA66X0_BASE+0x0062)
#define CSRA66X0_MODULATION_INDEX_CTRL          (CSRA66X0_BASE+0x0063)
#define CSRA66X0_MODULATION_INDEX_COUNT         (CSRA66X0_BASE+0x0064)
#define CSRA66X0_MIN_MODULATION_PULSE_WIDTH     (CSRA66X0_BASE+0x0065)
#define CSRA66X0_DEAD_TIME_CTRL                 (CSRA66X0_BASE+0x0066)
#define CSRA66X0_DEAD_TIME_THRESHOLD_0          (CSRA66X0_BASE+0x0067)
#define CSRA66X0_DEAD_TIME_THRESHOLD_1          (CSRA66X0_BASE+0x0068)
#define CSRA66X0_DEAD_TIME_THRESHOLD_2          (CSRA66X0_BASE+0x0069)
#define CSRA66X0_CH1_LOW_SIDE_DLY               (CSRA66X0_BASE+0x006A)
#define CSRA66X0_CH2_LOW_SIDE_DLY               (CSRA66X0_BASE+0x006B)
#define CSRA66X0_SPECTRUM_CTRL                  (CSRA66X0_BASE+0x006C)
/* RESERVED (CSRA66X0_BASE+0x006D) */
#define CSRA66X0_SPECTRUM_SPREAD_CTRL           (CSRA66X0_BASE+0x006E)
/* RESERVED (CSRA66X0_BASE+0x006F) */
/* ... */
/* RESERVED (CSRA66X0_BASE+0x007C) */
#define CSRA66X0_EXT_PA_PROTECT_POLARITY        (CSRA66X0_BASE+0x007D)
#define CSRA66X0_TEMP0_BACKOFF_COMP_VALUE       (CSRA66X0_BASE+0x007E)
#define CSRA66X0_TEMP0_SHUTDOWN_COMP_VALUE      (CSRA66X0_BASE+0x007F)
#define CSRA66X0_TEMP1_BACKOFF_COMP_VALUE       (CSRA66X0_BASE+0x0080)
#define CSRA66X0_TEMP1_SHUTDOWN_COMP_VALUE      (CSRA66X0_BASE+0x0081)
#define CSRA66X0_TEMP_PROT_BACKOFF              (CSRA66X0_BASE+0x0082)
#define CSRA66X0_TEMP_READ0_FA                  (CSRA66X0_BASE+0x0083)
#define CSRA66X0_TEMP_READ1_FA                  (CSRA66X0_BASE+0x0084)
#define CSRA66X0_CHIP_STATE_CTRL_FA             (CSRA66X0_BASE+0x0085)
/* RESERVED (CSRA66X0_BASE+0x0086) */
#define CSRA66X0_PWM_OUTPUT_CONFIG              (CSRA66X0_BASE+0x0087)
#define CSRA66X0_MISC_CONTROL_STATUS_0          (CSRA66X0_BASE+0x0088)
#define CSRA66X0_MISC_CONTROL_STATUS_1_FA       (CSRA66X0_BASE+0x0089)
#define CSRA66X0_PIO0_SELECT                    (CSRA66X0_BASE+0x008A)
#define CSRA66X0_PIO1_SELECT                    (CSRA66X0_BASE+0x008B)
#define CSRA66X0_PIO2_SELECT                    (CSRA66X0_BASE+0x008C)
#define CSRA66X0_PIO3_SELECT                    (CSRA66X0_BASE+0x008D)
#define CSRA66X0_PIO4_SELECT                    (CSRA66X0_BASE+0x008E)
#define CSRA66X0_PIO5_SELECT                    (CSRA66X0_BASE+0x008F)
#define CSRA66X0_PIO6_SELECT                    (CSRA66X0_BASE+0x0090)
#define CSRA66X0_PIO7_SELECT                    (CSRA66X0_BASE+0x0091)
#define CSRA66X0_PIO8_SELECT                    (CSRA66X0_BASE+0x0092)
#define CSRA66X0_PIO_DIRN0                      (CSRA66X0_BASE+0x0093)
#define CSRA66X0_PIO_DIRN1                      (CSRA66X0_BASE+0x0094)
#define CSRA66X0_PIO_PULL_EN0                   (CSRA66X0_BASE+0x0095)
#define CSRA66X0_PIO_PULL_EN1                   (CSRA66X0_BASE+0x0096)
#define CSRA66X0_PIO_PULL_DIR0                  (CSRA66X0_BASE+0x0097)
#define CSRA66X0_PIO_PULL_DIR1                  (CSRA66X0_BASE+0x0098)
#define CSRA66X0_PIO_DRIVE_OUT0_FA              (CSRA66X0_BASE+0x0099)
#define CSRA66X0_PIO_DRIVE_OUT1_FA              (CSRA66X0_BASE+0x009A)
#define CSRA66X0_PIO_STATUS_IN0_FA              (CSRA66X0_BASE+0x009B)
#define CSRA66X0_PIO_STATUS_IN1_FA              (CSRA66X0_BASE+0x009C)
/* RESERVED (CSRA66X0_BASE+0x009D) */
#define CSRA66X0_IRQ_OUTPUT_ENABLE              (CSRA66X0_BASE+0x009E)
#define CSRA66X0_IRQ_OUTPUT_POLARITY            (CSRA66X0_BASE+0x009F)
#define CSRA66X0_IRQ_OUTPUT_STATUS_FA           (CSRA66X0_BASE+0x00A0)
#define CSRA66X0_CLIP_DCA_STATUS_FA             (CSRA66X0_BASE+0x00A1)
#define CSRA66X0_CHIP_STATE_STATUS_FA           (CSRA66X0_BASE+0x00A2)
#define CSRA66X0_FAULT_STATUS_FA                (CSRA66X0_BASE+0x00A3)
#define CSRA66X0_OTP_STATUS_FA                  (CSRA66X0_BASE+0x00A4)
#define CSRA66X0_AUDIO_IF_STATUS_FA             (CSRA66X0_BASE+0x00A5)
/* RESERVED (CSRA66X0_BASE+0x00A6) */
#define CSRA66X0_DSP_SATURATION_STATUS_FA       (CSRA66X0_BASE+0x00A7)
#define CSRA66X0_AUDIO_RATE_STATUS_FA           (CSRA66X0_BASE+0x00A8)
/* RESERVED (CSRA66X0_BASE+0x00A9) */
/* ... */
/* RESERVED (CSRA66X0_BASE+0x00AB) */
#define CSRA66X0_DISABLE_PWM_OUTPUT             (CSRA66X0_BASE+0x00AC)
/* RESERVED (CSRA66X0_BASE+0x00AD) */
/* ... */
/* RESERVED (CSRA66X0_BASE+0x00B0) */
#define CSRA66X0_OTP_VER_FA                     (CSRA66X0_BASE+0x00B1)
#define CSRA66X0_RAM_VER_FA                     (CSRA66X0_BASE+0x00B2)
/* RESERVED (CSRA66X0_BASE+0x00B3) */
#define CSRA66X0_AUDIO_SATURATION_FLAGS_FA      (CSRA66X0_BASE+0x00B4)
#define CSRA66X0_DCOFFSET_CHAN_1_01_FA          (CSRA66X0_BASE+0x00B5)
#define CSRA66X0_DCOFFSET_CHAN_1_02_FA          (CSRA66X0_BASE+0x00B6)
#define CSRA66X0_DCOFFSET_CHAN_1_03_FA          (CSRA66X0_BASE+0x00B7)
#define CSRA66X0_DCOFFSET_CHAN_2_01_FA          (CSRA66X0_BASE+0x00B8)
#define CSRA66X0_DCOFFSET_CHAN_2_02_FA          (CSRA66X0_BASE+0x00B9)
#define CSRA66X0_DCOFFSET_CHAN_2_03_FA          (CSRA66X0_BASE+0x00BA)
#define CSRA66X0_FORCED_PA_SWITCHING_CTRL       (CSRA66X0_BASE+0x00BB)
#define CSRA66X0_PA_FORCE_PULSE_WIDTH           (CSRA66X0_BASE+0x00BC)
#define CSRA66X0_PA_HIGH_MODULATION_CTRL_CH1    (CSRA66X0_BASE+0x00BD)
/* RESERVED (CSRA66X0_BASE+0x00BE) */
/* RESERVED (CSRA66X0_BASE+0x00BF) */
#define CSRA66X0_HIGH_MODULATION_THRESHOLD_LOW  (CSRA66X0_BASE+0x00C0)
#define CSRA66X0_HIGH_MODULATION_THRESHOLD_HIGH (CSRA66X0_BASE+0x00C1)
/* RESERVED (CSRA66X0_BASE+0x00C2) */
/* RESERVED (CSRA66X0_BASE+0x00C3) */
#define CSRA66X0_PA_FREEZE_CTRL                 (CSRA66X0_BASE+0x00C4)
#define CSRA66X0_DCA_FREEZE_CTRL                (CSRA66X0_BASE+0x00C5)
/* RESERVED (CSRA66X0_BASE+0x00C6) */
/* ... */
/* RESERVED (CSRA66X0_BASE+0x00FF) */
#define CSRA66X0_MAX_REGISTER_ADDR  CSRA66X0_DCA_FREEZE_CTRL

#define EXPECTED_CSRA66X0_CHIP_ID 0x39

#define SPK_VOLUME_M20DB 0x119
#define SPK_VOLUME_M20DB_LSB (SPK_VOLUME_M20DB & 0x0FF)
#define SPK_VOLUME_M20DB_MSB ((SPK_VOLUME_M20DB & 0x100)>>8)
#define SPK_VOLUME_LSB_MSK 0x00FF
#define SPK_VOLUME_MSB_MSK 0x0100

#define CONFIG_STATE    0x0
#define RUN_STATE       0x1
#define STDBY_STATE     0x2

#define FAULT_STATUS_INTERNAL       0x01
#define FAULT_STATUS_OTP_INTEGRITY  0x02
#define FAULT_STATUS_PADS2          0x04
#define FAULT_STATUS_SMPS           0x08
#define FAULT_STATUS_TEMP           0x10
#define FAULT_STATUS_PROTECT        0x20

#endif /* _CSRA66X0_H */
