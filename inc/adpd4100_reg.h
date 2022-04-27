#ifndef _ADPD4100_REG_H
#define _ADPD4100_REG_H

// Register Name
#define ADPD4100_REG_FIFO_STATUS         	      (0x0000U)
#define ADPD4100_REG_INT_STATUS_DATA         	(0x0001U)
#define ADPD4100_REG_INT_STATUS_LEV0         	(0x0002U)
#define ADPD4100_REG_INT_STATUS_LEV1         	(0x0003U)
#define ADPD4100_REG_INT_STATUS_TC1          	(0x0004U)
#define ADPD4100_REG_INT_STATUS_TC2          	(0x0005U)

#define ADPD4100_REG_FIFO_TH                	   (0x0006U)
#define ADPD4100_REG_INT_ACLEAR              	(0x0007U)
#define ADPD4100_REG_CHIP_ID                 	(0x0008U)
#define ADPD4100_REG_OSC32M                  	(0x0009U)
#define ADPD4100_REG_OSC32M_CAL              	(0x000AU)
#define ADPD4100_REG_OSC1M                   	(0x000BU)
#define ADPD4100_REG_OSC32K                  	(0x000CU)
#define ADPD4100_REG_TS_FREQ                 	(0x000DU)
#define ADPD4100_REG_TS_FREQH                	(0x000EU)
#define ADPD4100_REG_SYS_CTL                 	(0x000FU)
#define ADPD4100_REG_OPMODE                  	(0x0010U)
#define ADPD4100_REG_STAMP_L                 	(0x0011U)
#define ADPD4100_REG_STAMP_H                 	(0x0012U)
#define ADPD4100_REG_STAMPDELTA              	(0x0013U)

#define ADPD4100_REG_INT_ENABLE_XD           	(0x0014U)
#define ADPD4100_REG_INT_ENABLE_YD           	(0x0015U)
#define ADPD4100_REG_INT_ENABLE_XL0          	(0x0016U)
#define ADPD4100_REG_INT_ENABLE_XL1          	(0x0017U)
#define ADPD4100_REG_INT_ENABLE_XT1          	(0x0018U)
#define ADPD4100_REG_INT_ENABLE_XT2          	(0x0019U)
#define ADPD4100_REG_INT_ENABLE_YL0          	(0x001AU)
#define ADPD4100_REG_INT_ENABLE_YL1          	(0x001BU)
#define ADPD4100_REG_INT_ENABLE_YT1          	(0x001CU)
#define ADPD4100_REG_INT_ENABLE_YT2          	(0x001DU)

#define ADPD4100_REG_FIFO_STATUS_BYTES       	(0x001EU)
#define ADPD4100_REG_INPUT_SLEEP             	(0x0020U)
#define ADPD4100_REG_INPUT_CFG               	(0x0021U)
#define ADPD4100_REG_GPIO_CFG                	(0x0022U)
#define ADPD4100_REG_GPIO01                  	(0x0023U)
#define ADPD4100_REG_GPIO23                  	(0x0024U)
#define ADPD4100_REG_GPIO_IN                 	(0x0025U)
#define ADPD4100_REG_GPIO_EXT                	(0x0026U)
#define ADPD4100_REG_DATA_HOLD_FLAG          	(0x002EU)

#define ADPD4100_REG_FIFO_DATA               	(0x002FU)

#define ADPD4100_REG_SIGNAL1_L(ts)             	(0x0030U + (ts) * 0x08)
#define ADPD4100_REG_SIGNAL1_H(ts)             	(0x0031U + (ts) * 0x08)
#define ADPD4100_REG_SIGNAL2_L(ts)             	(0x0032U + (ts) * 0x08)
#define ADPD4100_REG_SIGNAL2_H(ts)             	(0x0033U + (ts) * 0x08)
#define ADPD4100_REG_DARK1_L(ts)               	(0x0034U + (ts) * 0x08)
#define ADPD4100_REG_DARK1_H(ts)               	(0x0035U + (ts) * 0x08)
#define ADPD4100_REG_DARK2_L(ts)               	(0x0036U + (ts) * 0x08)
#define ADPD4100_REG_DARK2_H(ts)               	(0x0037U + (ts) * 0x08)

#define ADPD4100_REG_IO_ADJUST               	(0x00B4U)
#define ADPD4100_REG_I2C_KEY                 	(0x00B6U)
#define ADPD4100_REG_I2C_ADDR                	(0x00B7U)

#define ADPD4100_REG_TS_CTRL(ts)               	(0x0100U + (ts) * 0x20)
#define ADPD4100_REG_TS_PATH(ts)               	(0x0101U + (ts) * 0x20)
#define ADPD4100_REG_INPUTS(ts)                	(0x0102U + (ts) * 0x20)
#define ADPD4100_REG_CATHODE(ts)               	(0x0103U + (ts) * 0x20)
#define ADPD4100_REG_AFE_TRIM(ts)              	(0x0104U + (ts) * 0x20)
#define ADPD4100_REG_LED_POW12(ts)             	(0x0105U + (ts) * 0x20)
#define ADPD4100_REG_LED_POW34(ts)             	(0x0106U + (ts) * 0x20)
#define ADPD4100_REG_COUNTS(ts)                	(0x0107U + (ts) * 0x20)
#define ADPD4100_REG_PERIOD(ts)                	(0x0108U + (ts) * 0x20)
#define ADPD4100_REG_LED_PULSE(ts)             	(0x0109U + (ts) * 0x20)
#define ADPD4100_REG_INTEG_SETUP(ts)           	(0x010AU + (ts) * 0x20)
#define ADPD4100_REG_INTEG_OS(ts)          	   (0x010BU + (ts) * 0x20)
#define ADPD4100_REG_MOD_PULSE(ts)             	(0x010CU + (ts) * 0x20)
#define ADPD4100_REG_PATTERN(ts)               	(0x010DU + (ts) * 0x20)
#define ADPD4100_REG_ADC_OFF1(ts)              	(0x010EU + (ts) * 0x20)
#define ADPD4100_REG_ADC_OFF2(ts)              	(0x010FU + (ts) * 0x20)
#define ADPD4100_REG_DATA_FORMAT(ts)            (0x0110U + (ts) * 0x20)
#define ADPD4100_REG_LIT_DATA_FORMAT(ts)        (0x0111U + (ts) * 0x20)
#define ADPD4100_REG_DECIMATE(ts)              	(0x0112U + (ts) * 0x20)
#define ADPD4100_REG_DIGINT_LIT(ts)            	(0x0113U + (ts) * 0x20)
#define ADPD4100_REG_DIGINT_DARK(ts)           	(0x0114U + (ts) * 0x20)
#define ADPD4100_REG_THRESH_CFG(ts)            	(0x0115U + (ts) * 0x20)
#define ADPD4100_REG_THRESH0(ts)               	(0x0116U + (ts) * 0x20)
#define ADPD4100_REG_THRESH1(ts)               	(0x0117U + (ts) * 0x20)

/* -------------------------------------------------------------------------------------------------------------------------
				REG_FIFO_STATUS						   Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_STATUS_FIFO_FIFO_BYTE_COUNT    	(0U)			   /*!< Number of bytes in fifo*/
#define BITP_INT_STATUS_FIFO_INT_FIFO_OFLOW     	(13U)			   /*!< Fifo overflow error.*/
#define BITP_INT_STATUS_FIFO_INT_FIFO_UFLOW     	(14U)			   /*!< Timeslot A data register interrupt status*/
#define BITP_INT_STATUS_FIFO_CLEAR_FIFO         	(15U)			   /*!< Clear FIFO*/

#define BITM_INT_STATUS_FIFO_FIFO_BYTE_COUNT    	(0x07ffU)		/*!< Number of bytes in fifo*/
#define BITM_INT_STATUS_FIFO_INT_FIFO_OFLOW     	(0x2000U)		/*!< Fifo overflow error.*/
#define BITM_INT_STATUS_FIFO_INT_FIFO_UFLOW     	(0x4000U)		/*!< Timeslot A data register interrupt status*/
#define BITM_INT_STATUS_FIFO_CLEAR_FIFO         	(0x8000U)		/*!< Clear FIFO*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_STATUS_DATA						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_STATUS_DATA_INT_DATA_A         	(0U)			   /*!< Timeslot A data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_B         	(1U)			   /*!< Timeslot B data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_C         	(2U)			   /*!< Timeslot C data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_D         	(3U)			   /*!< Timeslot D data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_E         	(4U)			   /*!< Timeslot E data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_F         	(5U)			   /*!< Timeslot F data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_G         	(6U)			   /*!< Timeslot G data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_H         	(7U)			   /*!< Timeslot H data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_I         	(8U)			   /*!< Timeslot I data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_J         	(9U)			   /*!< Timeslot J data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_K         	(10U)			   /*!< Timeslot K data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_DATA_L         	(11U)			   /*!< Timeslot L data register interrupt status*/
#define BITP_INT_STATUS_DATA_INT_FIFO_TH        	(15U)			   /*!< Fifo_th interrupt status*/

#define BITM_INT_STATUS_DATA_INT_DATA_A         	(0x0001U)		/*!< Timeslot A data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_B         	(0x0002U)		/*!< Timeslot B data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_C         	(0x0004U)		/*!< Timeslot C data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_D         	(0x0008U)		/*!< Timeslot D data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_E         	(0x0010U)		/*!< Timeslot E data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_F         	(0x0020U)		/*!< Timeslot F data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_G         	(0x0040U)		/*!< Timeslot G data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_H         	(0x0080U)		/*!< Timeslot H data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_I         	(0x0100U)		/*!< Timeslot I data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_J         	(0x0200U)		/*!< Timeslot J data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_K         	(0x0400U)		/*!< Timeslot K data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_DATA_L         	(0x0800U)		/*!< Timeslot L data register interrupt status*/
#define BITM_INT_STATUS_DATA_INT_FIFO_TH        	(0x8000U)		/*!< Fifo_th interrupt status*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_STATUS_LEV0						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_STATUS_LEV0_INT_LEV0_A         	(0U)			   /*!< Timeslot A level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_B         	(1U)			   /*!< Timeslot B level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_C         	(2U)			   /*!< Timeslot C level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_D         	(3U)			   /*!< Timeslot D level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_E         	(4U)			   /*!< Timeslot E level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_F         	(5U)			   /*!< Timeslot F level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_G         	(6U)			   /*!< Timeslot G level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_H         	(7U)			   /*!< Timeslot H level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_I         	(8U)			   /*!< Timeslot I level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_J         	(9U)			   /*!< Timeslot J level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_K         	(10U)			   /*!< Timeslot K level 0 interrupt status*/
#define BITP_INT_STATUS_LEV0_INT_LEV0_L         	(11U)			   /*!< Timeslot L level 0 interrupt status*/

#define BITM_INT_STATUS_LEV0_INT_LEV0_A         	(0x0001U)		/*!< Timeslot A level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_B         	(0x0002U)		/*!< Timeslot B level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_C         	(0x0004U)		/*!< Timeslot C level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_D         	(0x0008U)		/*!< Timeslot D level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_E         	(0x0010U)		/*!< Timeslot E level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_F         	(0x0020U)		/*!< Timeslot F level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_G         	(0x0040U)		/*!< Timeslot G level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_H         	(0x0080U)		/*!< Timeslot H level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_I         	(0x0100U)		/*!< Timeslot I level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_J         	(0x0200U)		/*!< Timeslot J level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_K         	(0x0400U)		/*!< Timeslot K level 0 interrupt status*/
#define BITM_INT_STATUS_LEV0_INT_LEV0_L         	(0x0800U)		/*!< Timeslot L level 0 interrupt status*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_STATUS_LEV1						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_STATUS_LEV1_INT_LEV1_A         	(0U)			   /*!< Timeslot A level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_B         	(1U)			   /*!< Timeslot B level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_C         	(2U)			   /*!< Timeslot C level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_D         	(3U)			   /*!< Timeslot D level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_E         	(4U)			   /*!< Timeslot E level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_F         	(5U)			   /*!< Timeslot F level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_G         	(6U)			   /*!< Timeslot G level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_H         	(7U)			   /*!< Timeslot H level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_I         	(8U)			   /*!< Timeslot I level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_J         	(9U)			   /*!< Timeslot J level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_K         	(10U)			   /*!< Timeslot K level 1 interrupt status*/
#define BITP_INT_STATUS_LEV1_INT_LEV1_L         	(11U)			   /*!< Timeslot L level 1 interrupt status*/

#define BITM_INT_STATUS_LEV1_INT_LEV1_A         	(0x0001U)		/*!< Timeslot A level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_B         	(0x0002U)		/*!< Timeslot B level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_C         	(0x0004U)		/*!< Timeslot C level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_D         	(0x0008U)		/*!< Timeslot D level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_E         	(0x0010U)		/*!< Timeslot E level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_F         	(0x0020U)		/*!< Timeslot F level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_G         	(0x0040U)		/*!< Timeslot G level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_H         	(0x0080U)		/*!< Timeslot H level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_I         	(0x0100U)		/*!< Timeslot I level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_J         	(0x0200U)		/*!< Timeslot J level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_K         	(0x0400U)		/*!< Timeslot K level 1 interrupt status*/
#define BITM_INT_STATUS_LEV1_INT_LEV1_L         	(0x0800U)		/*!< Timeslot L level 1 interrupt status*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_STATUS_TC1						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_STATUS_TC1_INT_TCLN1_A         	(0U)			   /*!< Tia channel 1 saturated interrupt Timeslot a*/
#define BITP_INT_STATUS_TC1_INT_TCLN1_B         	(1U)			   /*!< Tia channel 1 saturated interrupt Timeslot b*/
#define BITP_INT_STATUS_TC1_INT_TCLN1_C         	(2U)			   /*!< Tia channel 1 saturated interrupt Timeslot c*/
#define BITP_INT_STATUS_TC1_INT_TCLN1_D         	(3U)			   /*!< Tia channel 1 saturated interrupt Timeslot d*/
#define BITP_INT_STATUS_TC1_INT_TCLN1_E         	(4U)			   /*!< Tia channel 1 saturated interrupt Timeslot e*/
#define BITP_INT_STATUS_TC1_INT_TCLN1_F         	(5U)			   /*!< Tia channel 1 saturated interrupt Timeslot f*/
#define BITP_INT_STATUS_TC1_INT_TCLN1_G         	(6U)			   /*!< Tia channel 1 saturated interrupt Timeslot g*/
#define BITP_INT_STATUS_TC1_INT_TCLN1_H         	(7U)			   /*!< Tia channel 1 saturated interrupt Timeslot h*/
#define BITP_INT_STATUS_TC1_INT_TCLN1_I         	(8U)			   /*!< Tia channel 1 saturated interrupt Timeslot i*/
#define BITP_INT_STATUS_TC1_INT_TCLN1_J         	(9U)			   /*!< Tia channel 1 saturated interrupt Timeslot j*/
#define BITP_INT_STATUS_TC1_INT_TCLN1_K         	(10U)			   /*!< Tia channel 1 saturated interrupt Timeslot k*/
#define BITP_INT_STATUS_TC1_INT_TCLN1_L         	(11U)			   /*!< Tia channel 1 saturated interrupt Timeslot l*/

#define BITM_INT_STATUS_TC1_INT_TCLN1_A         	(0x0001U)		/*!< Tia channel 1 saturated interrupt Timeslot a*/
#define BITM_INT_STATUS_TC1_INT_TCLN1_B         	(0x0002U)		/*!< Tia channel 1 saturated interrupt Timeslot b*/
#define BITM_INT_STATUS_TC1_INT_TCLN1_C         	(0x0004U)		/*!< Tia channel 1 saturated interrupt Timeslot c*/
#define BITM_INT_STATUS_TC1_INT_TCLN1_D         	(0x0008U)		/*!< Tia channel 1 saturated interrupt Timeslot d*/
#define BITM_INT_STATUS_TC1_INT_TCLN1_E         	(0x0010U)		/*!< Tia channel 1 saturated interrupt Timeslot e*/
#define BITM_INT_STATUS_TC1_INT_TCLN1_F         	(0x0020U)		/*!< Tia channel 1 saturated interrupt Timeslot f*/
#define BITM_INT_STATUS_TC1_INT_TCLN1_G         	(0x0040U)		/*!< Tia channel 1 saturated interrupt Timeslot g*/
#define BITM_INT_STATUS_TC1_INT_TCLN1_H         	(0x0080U)		/*!< Tia channel 1 saturated interrupt Timeslot h*/
#define BITM_INT_STATUS_TC1_INT_TCLN1_I         	(0x0100U)		/*!< Tia channel 1 saturated interrupt Timeslot i*/
#define BITM_INT_STATUS_TC1_INT_TCLN1_J         	(0x0200U)		/*!< Tia channel 1 saturated interrupt Timeslot j*/
#define BITM_INT_STATUS_TC1_INT_TCLN1_K         	(0x0400U)		/*!< Tia channel 1 saturated interrupt Timeslot k*/
#define BITM_INT_STATUS_TC1_INT_TCLN1_L         	(0x0800U)		/*!< Tia channel 1 saturated interrupt Timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_STATUS_TC2						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_STATUS_TC2_INT_TCLN2_A         	(0U)			   /*!< Tia channel 2 saturated interrupt Timeslot a*/
#define BITP_INT_STATUS_TC2_INT_TCLN2_B         	(1U)			   /*!< Tia channel 2 saturated interrupt Timeslot b*/
#define BITP_INT_STATUS_TC2_INT_TCLN2_C         	(2U)			   /*!< Tia channel 2 saturated interrupt Timeslot c*/
#define BITP_INT_STATUS_TC2_INT_TCLN2_D         	(3U)			   /*!< Tia channel 2 saturated interrupt Timeslot d*/
#define BITP_INT_STATUS_TC2_INT_TCLN2_E         	(4U)			   /*!< Tia channel 2 saturated interrupt Timeslot e*/
#define BITP_INT_STATUS_TC2_INT_TCLN2_F         	(5U)			   /*!< Tia channel 2 saturated interrupt Timeslot f*/
#define BITP_INT_STATUS_TC2_INT_TCLN2_G         	(6U)			   /*!< Tia channel 2 saturated interrupt Timeslot g*/
#define BITP_INT_STATUS_TC2_INT_TCLN2_H         	(7U)			   /*!< Tia channel 2 saturated interrupt Timeslot h*/
#define BITP_INT_STATUS_TC2_INT_TCLN2_I         	(8U)			   /*!< Tia channel 2 saturated interrupt Timeslot i*/
#define BITP_INT_STATUS_TC2_INT_TCLN2_J         	(9U)			   /*!< Tia channel 2 saturated interrupt Timeslot j*/
#define BITP_INT_STATUS_TC2_INT_TCLN2_K         	(10U)			   /*!< Tia channel 2 saturated interrupt Timeslot k*/
#define BITP_INT_STATUS_TC2_INT_TCLN2_L         	(11U)			   /*!< Tia channel 2 saturated interrupt Timeslot l*/

#define BITM_INT_STATUS_TC2_INT_TCLN2_A         	(0x0001U)		/*!< Tia channel 2 saturated interrupt Timeslot a*/
#define BITM_INT_STATUS_TC2_INT_TCLN2_B         	(0x0002U)		/*!< Tia channel 2 saturated interrupt Timeslot b*/
#define BITM_INT_STATUS_TC2_INT_TCLN2_C         	(0x0004U)		/*!< Tia channel 2 saturated interrupt Timeslot c*/
#define BITM_INT_STATUS_TC2_INT_TCLN2_D         	(0x0008U)		/*!< Tia channel 2 saturated interrupt Timeslot d*/
#define BITM_INT_STATUS_TC2_INT_TCLN2_E         	(0x0010U)		/*!< Tia channel 2 saturated interrupt Timeslot e*/
#define BITM_INT_STATUS_TC2_INT_TCLN2_F         	(0x0020U)		/*!< Tia channel 2 saturated interrupt Timeslot f*/
#define BITM_INT_STATUS_TC2_INT_TCLN2_G         	(0x0040U)		/*!< Tia channel 2 saturated interrupt Timeslot g*/
#define BITM_INT_STATUS_TC2_INT_TCLN2_H         	(0x0080U)		/*!< Tia channel 2 saturated interrupt Timeslot h*/
#define BITM_INT_STATUS_TC2_INT_TCLN2_I         	(0x0100U)		/*!< Tia channel 2 saturated interrupt Timeslot i*/
#define BITM_INT_STATUS_TC2_INT_TCLN2_J         	(0x0200U)		/*!< Tia channel 2 saturated interrupt Timeslot j*/
#define BITM_INT_STATUS_TC2_INT_TCLN2_K         	(0x0400U)		/*!< Tia channel 2 saturated interrupt Timeslot k*/
#define BITM_INT_STATUS_TC2_INT_TCLN2_L         	(0x0800U)		/*!< Tia channel 2 saturated interrupt Timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_FIFO_TH						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FIFO_CTL_FIFO_TH                   	(0U)			   /*!< Fifo Interrupt Generation Threshold.*/

#define BITM_FIFO_CTL_FIFO_TH                   	(0x03ffU)		/*!< Fifo Interrupt Generation Threshold.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ACLEAR						      Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_A       	(0U)			   /*!< Timeslot A Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_B       	(1U)			   /*!< Timeslot B Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_C       	(2U)			   /*!< Timeslot C Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_D       	(3U)			   /*!< Timeslot D Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_E       	(4U)			   /*!< Timeslot E Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_F       	(5U)			   /*!< Timeslot F Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_G       	(6U)			   /*!< Timeslot G Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_H       	(7U)			   /*!< Timeslot H Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_I       	(8U)			   /*!< Timeslot I Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_J       	(9U)			   /*!< Timeslot J Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_K       	(10U)			   /*!< Timeslot K Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_DATA_L       	(11U)			   /*!< Timeslot L Interrupt auto clear enable*/
#define BITP_INT_ACLEAR_INT_ACLEAR_FIFO         	(15U)			   /*!< FIFO Threshold Interrupt auto clear enable*/

#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_A       	(0x0001U)		/*!< Timeslot A Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_B       	(0x0002U)		/*!< Timeslot B Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_C       	(0x0004U)		/*!< Timeslot C Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_D       	(0x0008U)		/*!< Timeslot D Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_E       	(0x0010U)		/*!< Timeslot E Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_F       	(0x0020U)		/*!< Timeslot F Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_G       	(0x0040U)		/*!< Timeslot G Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_H       	(0x0080U)		/*!< Timeslot H Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_I       	(0x0100U)		/*!< Timeslot I Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_J       	(0x0200U)		/*!< Timeslot J Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_K       	(0x0400U)		/*!< Timeslot K Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_DATA_L       	(0x0800U)		/*!< Timeslot L Interrupt auto clear enable*/
#define BITM_INT_ACLEAR_INT_ACLEAR_FIFO         	(0x8000U)		/*!< FIFO Threshold Interrupt auto clear enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CHIP_ID						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CHIP_ID_CHIP_ID                    	(0U)			   /*!< Chip ID*/
#define BITP_CHIP_ID_VERSION                    	(8U)			   /*!< Mask Version*/

#define BITM_CHIP_ID_CHIP_ID                    	(0x00ffU)		/*!< Chip ID*/
#define BITM_CHIP_ID_VERSION                    	(0xff00U)		/*!< Mask Version*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_OSC32M						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_OSC32M_OSC_32M_FREQ_ADJ            	(0U)			   /*!< High Freq Oscillator Frequency Control*/

#define BITM_OSC32M_OSC_32M_FREQ_ADJ            	(0x00ffU)		/*!< High Freq Oscillator Frequency Control*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_OSC32M_CAL						      Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_OSC32M_CAL_OSC_32M_CAL_COUNT       	(0U)			   /*!< High Freq Oscillator Calibration Count*/
#define BITP_OSC32M_CAL_OSC_32M_CAL_START       	(15U)			   /*!< Start High Freq Oscillator Calibration cycle*/

#define BITM_OSC32M_CAL_OSC_32M_CAL_COUNT       	(0x7fffU)		/*!< High Freq Oscillator Calibration Count*/
#define BITM_OSC32M_CAL_OSC_32M_CAL_START       	(0x8000U)		/*!< Start High Freq Oscillator Calibration cycle*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_OSC1M						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_OSC1M_OSC_1M_FREQ_ADJ              	(0U)			   /*!< Low Freq Oscillator Frequency Control*/
#define BITP_OSC1M_OSC_CLK_CAL_ENA              	(10U)			   /*!< Disable clock calibration clocking*/

#define BITM_OSC1M_OSC_1M_FREQ_ADJ              	(0x03ffU)		/*!< Low Freq Oscillator Frequency Control*/
#define BITM_OSC1M_OSC_CLK_CAL_ENA              	(0x0400U)		/*!< Disable clock calibration clocking*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_OSC32K						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_OSC32K_OSC_32K_ADJUST              	(0U)			   /*!< 32KHz oscillator trim*/
#define BITP_OSC32K_CAPTURE_TIMESTAMP           	(15U)			   /*!< Enable Timestamp capture*/

#define BITM_OSC32K_OSC_32K_ADJUST              	(0x003fU)		/*!< 32KHz oscillator trim*/
#define BITM_OSC32K_CAPTURE_TIMESTAMP           	(0x8000U)		/*!< Enable Timestamp capture*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_FREQ						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_FREQ_TIMESLOT_PERIOD_L          	(0U)			   /*!< Lower 16 bits of timeslot period in lfosc cycles.*/

#define BITM_TS_FREQ_TIMESLOT_PERIOD_L          	(0xffffU)		/*!< Lower 16 bits of timeslot period in lfosc cycles.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_FREQH						      Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_FREQH_TIMESLOT_PERIOD_H         	(0U)			   /*!< Upper 7 bits of timeslot period in lfosc cycles.*/

#define BITM_TS_FREQH_TIMESLOT_PERIOD_H         	(0x007fU)		/*!< Upper 7 bits of timeslot period in lfosc cycles.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SYS_CTL						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SYS_CTL_OSC_32K_EN                 	(0U)			   /*!< Enable Low Frequency Oscillator*/
#define BITP_SYS_CTL_OSC_1M_EN                  	(1U)			   /*!< Enable Low Frequency Oscillator*/
#define BITP_SYS_CTL_LFOSC_SEL                  	(2U)			   /*!< Select Low Frequency Oscillator*/
#define BITP_SYS_CTL_RANDOM_SLEEP               	(3U)			   /*!< Enable Random Sleep LSFR*/
#define BITP_SYS_CTL_GO_SLEEP                   	(4U)			   /*!< Sleep before first timeslot group on GO*/
#define BITP_SYS_CTL_ALT_CLK_GPIO               	(6U)			   /*!< Alternate Clock GPIO Select*/
#define BITP_SYS_CTL_ALT_CLOCKS                 	(8U)			   /*!< External clock select*/
#define BITP_SYS_CTL_SW_RESET                   	(15U)			   /*!< Software Reset*/

#define BITM_SYS_CTL_OSC_32K_EN                 	(0x0001U)		/*!< Enable Low Frequency Oscillator*/
#define BITM_SYS_CTL_OSC_1M_EN                  	(0x0002U)		/*!< Enable Low Frequency Oscillator*/
#define BITM_SYS_CTL_LFOSC_SEL                  	(0x0004U)		/*!< Select Low Frequency Oscillator*/
#define BITM_SYS_CTL_RANDOM_SLEEP               	(0x0008U)		/*!< Enable Random Sleep LSFR*/
#define BITM_SYS_CTL_GO_SLEEP                   	(0x0010U)		/*!< Sleep before first timeslot group on GO*/
#define BITM_SYS_CTL_ALT_CLK_GPIO               	(0x00c0U)		/*!< Alternate Clock GPIO Select*/
#define BITM_SYS_CTL_ALT_CLOCKS                 	(0x0300U)		/*!< External clock select*/
#define BITM_SYS_CTL_SW_RESET                   	(0x8000U)		/*!< Software Reset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_OPMODE						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_OPMODE_OP_MODE                     	(0U)			   /*!< Operating Mode*/
#define BITP_OPMODE_TIMESLOT_EN                 	(8U)			   /*!< Timeslot enable control*/

#define BITM_OPMODE_OP_MODE                     	(0x0001U)		/*!< Operating Mode*/
#define BITM_OPMODE_TIMESLOT_EN                 	(0x0f00U)		/*!< Timeslot enable control*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_STAMP_L						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_STAMP_L_TIMESTAMP_COUNT_L          	(0U)			   /*!< Count at last timestamp*/

#define BITM_STAMP_L_TIMESTAMP_COUNT_L          	(0xffffU)		/*!< Count at last timestamp*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_STAMP_H						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_STAMP_H_TIMESTAMP_COUNT_H          	(0U)			   /*!< Count at last timestamp*/

#define BITM_STAMP_H_TIMESTAMP_COUNT_H          	(0xffffU)		/*!< Count at last timestamp*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_STAMPDELTA						      Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_STAMPDELTA_TIMESTAMP_SLOT_DELTA    	(0U)			   /*!< Count remaining until next wakeup start*/

#define BITM_STAMPDELTA_TIMESTAMP_SLOT_DELTA    	(0xffffU)		/*!< Count remaining until next wakeup start*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_XD						   Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_A       	(0U)			   /*!< Interrupt channel X Timeslot A data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_B       	(1U)			   /*!< Interrupt channel X Timeslot B data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_C       	(2U)			   /*!< Interrupt channel X Timeslot C data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_D       	(3U)			   /*!< Interrupt channel X Timeslot D data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_E       	(4U)			   /*!< Interrupt channel X Timeslot E data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_F       	(5U)			   /*!< Interrupt channel X Timeslot F data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_G       	(6U)			   /*!< Interrupt channel X Timeslot G data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_H       	(7U)			   /*!< Interrupt channel X Timeslot H data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_I       	(8U)			   /*!< Interrupt channel X Timeslot I data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_J       	(9U)			   /*!< Interrupt channel X Timeslot J data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_K       	(10U)			   /*!< Interrupt channel X Timeslot K data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_DATA_L       	(11U)			   /*!< Interrupt channel X Timeslot L data interrupt enable*/
#define BITP_INT_ENABLE_XD_INTX_EN_FIFO_OFLOW   	(13U)			   /*!< FIFO overflow Interrupt enable for interrupt channel X*/
#define BITP_INT_ENABLE_XD_INTX_EN_FIFO_UFLOW   	(14U)			   /*!< FIFO underflow Interrupt enable for interrupt channel X*/
#define BITP_INT_ENABLE_XD_INTX_EN_FIFO_TH      	(15U)			   /*!< FIFO Threshold Interrupt Enable*/

#define BITM_INT_ENABLE_XD_INTX_EN_DATA_A       	(0x0001U)		/*!< Interrupt channel X Timeslot A data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_B       	(0x0002U)		/*!< Interrupt channel X Timeslot B data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_C       	(0x0004U)		/*!< Interrupt channel X Timeslot C data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_D       	(0x0008U)		/*!< Interrupt channel X Timeslot D data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_E       	(0x0010U)		/*!< Interrupt channel X Timeslot E data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_F       	(0x0020U)		/*!< Interrupt channel X Timeslot F data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_G       	(0x0040U)		/*!< Interrupt channel X Timeslot G data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_H       	(0x0080U)		/*!< Interrupt channel X Timeslot H data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_I       	(0x0100U)		/*!< Interrupt channel X Timeslot I data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_J       	(0x0200U)		/*!< Interrupt channel X Timeslot J data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_K       	(0x0400U)		/*!< Interrupt channel X Timeslot K data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_DATA_L       	(0x0800U)		/*!< Interrupt channel X Timeslot L data interrupt enable*/
#define BITM_INT_ENABLE_XD_INTX_EN_FIFO_OFLOW   	(0x2000U)		/*!< FIFO overflow Interrupt enable for interrupt channel X*/
#define BITM_INT_ENABLE_XD_INTX_EN_FIFO_UFLOW   	(0x4000U)		/*!< FIFO underflow Interrupt enable for interrupt channel X*/
#define BITM_INT_ENABLE_XD_INTX_EN_FIFO_TH      	(0x8000U)		/*!< FIFO Threshold Interrupt Enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_YD						   Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_A       	(0U)			   /*!< interrupt channel Y Timeslot A data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_B       	(1U)			   /*!< interrupt channel Y Timeslot B data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_C       	(2U)			   /*!< interrupt channel Y Timeslot C data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_D       	(3U)			   /*!< interrupt channel Y Timeslot D data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_E       	(4U)			   /*!< interrupt channel Y Timeslot E data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_F       	(5U)			   /*!< interrupt channel Y Timeslot F data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_G       	(6U)			   /*!< interrupt channel Y Timeslot G data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_H       	(7U)			   /*!< interrupt channel Y Timeslot H data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_I       	(8U)			   /*!< interrupt channel Y Timeslot I data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_J       	(9U)			   /*!< interrupt channel Y Timeslot J data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_K       	(10U)			   /*!< interrupt channel Y Timeslot K data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_DATA_L       	(11U)			   /*!< interrupt channel Y Timeslot L data interrupt enable*/
#define BITP_INT_ENABLE_YD_INTY_EN_FIFO_OFLOW   	(13U)			   /*!< FIFO overflow Interrupt enable for interrupt channel Y*/
#define BITP_INT_ENABLE_YD_INTY_EN_FIFO_UFLOW   	(14U)			   /*!< FIFO underflow Interrupt enable for interrupt channel Y*/
#define BITP_INT_ENABLE_YD_INTY_EN_FIFO_TH      	(15U)			   /*!< FIFO Threshold Interrupt Enable*/

#define BITM_INT_ENABLE_YD_INTY_EN_DATA_A       	(0x0001U)		/*!< interrupt channel Y Timeslot A data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_B       	(0x0002U)		/*!< interrupt channel Y Timeslot B data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_C       	(0x0004U)		/*!< interrupt channel Y Timeslot C data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_D       	(0x0008U)		/*!< interrupt channel Y Timeslot D data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_E       	(0x0010U)		/*!< interrupt channel Y Timeslot E data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_F       	(0x0020U)		/*!< interrupt channel Y Timeslot F data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_G       	(0x0040U)		/*!< interrupt channel Y Timeslot G data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_H       	(0x0080U)		/*!< interrupt channel Y Timeslot H data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_I       	(0x0100U)		/*!< interrupt channel Y Timeslot I data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_J       	(0x0200U)		/*!< interrupt channel Y Timeslot J data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_K       	(0x0400U)		/*!< interrupt channel Y Timeslot K data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_DATA_L       	(0x0800U)		/*!< interrupt channel Y Timeslot L data interrupt enable*/
#define BITM_INT_ENABLE_YD_INTY_EN_FIFO_OFLOW   	(0x2000U)		/*!< FIFO overflow Interrupt enable for interrupt channel Y*/
#define BITM_INT_ENABLE_YD_INTY_EN_FIFO_UFLOW   	(0x4000U)		/*!< FIFO underflow Interrupt enable for interrupt channel Y*/
#define BITM_INT_ENABLE_YD_INTY_EN_FIFO_TH      	(0x8000U)		/*!< FIFO Threshold Interrupt Enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_XL0						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_A      	(0U)			   /*!< Interrupt channel X Timeslot A level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_B      	(1U)			   /*!< Interrupt channel X Timeslot B level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_C      	(2U)			   /*!< Interrupt channel X Timeslot C level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_D      	(3U)			   /*!< Interrupt channel X Timeslot D level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_E      	(4U)			   /*!< Interrupt channel X Timeslot E level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_F      	(5U)			   /*!< Interrupt channel X Timeslot F level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_G      	(6U)			   /*!< Interrupt channel X Timeslot G level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_H      	(7U)			   /*!< Interrupt channel X Timeslot H level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_I      	(8U)			   /*!< Interrupt channel X Timeslot I level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_J      	(9U)			   /*!< Interrupt channel X Timeslot J level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_K      	(10U)			   /*!< Interrupt channel X Timeslot K level 0 interrupt enable*/
#define BITP_INT_ENABLE_XL0_INTX_EN_LEV0_L      	(11U)			   /*!< Interrupt channel X Timeslot L level 0 interrupt enable*/

#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_A      	(0x0001U)		/*!< Interrupt channel X Timeslot A level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_B      	(0x0002U)		/*!< Interrupt channel X Timeslot B level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_C      	(0x0004U)		/*!< Interrupt channel X Timeslot C level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_D      	(0x0008U)		/*!< Interrupt channel X Timeslot D level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_E      	(0x0010U)		/*!< Interrupt channel X Timeslot E level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_F      	(0x0020U)		/*!< Interrupt channel X Timeslot F level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_G      	(0x0040U)		/*!< Interrupt channel X Timeslot G level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_H      	(0x0080U)		/*!< Interrupt channel X Timeslot H level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_I      	(0x0100U)		/*!< Interrupt channel X Timeslot I level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_J      	(0x0200U)		/*!< Interrupt channel X Timeslot J level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_K      	(0x0400U)		/*!< Interrupt channel X Timeslot K level 0 interrupt enable*/
#define BITM_INT_ENABLE_XL0_INTX_EN_LEV0_L      	(0x0800U)		/*!< Interrupt channel X Timeslot L level 0 interrupt enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_XL1						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_A      	(0U)			   /*!< Interrupt channel X Timeslot A level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_B      	(1U)			   /*!< Interrupt channel X Timeslot B level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_C      	(2U)			   /*!< Interrupt channel X Timeslot C level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_D      	(3U)			   /*!< Interrupt channel X Timeslot D level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_E      	(4U)			   /*!< Interrupt channel X Timeslot E level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_F      	(5U)			   /*!< Interrupt channel X Timeslot F level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_G      	(6U)			   /*!< Interrupt channel X Timeslot G level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_H      	(7U)			   /*!< Interrupt channel X Timeslot H level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_I      	(8U)			   /*!< Interrupt channel X Timeslot I level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_J      	(9U)			   /*!< Interrupt channel X Timeslot J level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_K      	(10U)			   /*!< Interrupt channel X Timeslot K level 1 interrupt enable*/
#define BITP_INT_ENABLE_XL1_INTX_EN_LEV1_L      	(11U)			   /*!< Interrupt channel X Timeslot L level 1 interrupt enable*/

#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_A      	(0x0001U)		/*!< Interrupt channel X Timeslot A level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_B      	(0x0002U)		/*!< Interrupt channel X Timeslot B level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_C      	(0x0004U)		/*!< Interrupt channel X Timeslot C level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_D      	(0x0008U)		/*!< Interrupt channel X Timeslot D level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_E      	(0x0010U)		/*!< Interrupt channel X Timeslot E level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_F      	(0x0020U)		/*!< Interrupt channel X Timeslot F level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_G      	(0x0040U)		/*!< Interrupt channel X Timeslot G level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_H      	(0x0080U)		/*!< Interrupt channel X Timeslot H level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_I      	(0x0100U)		/*!< Interrupt channel X Timeslot I level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_J      	(0x0200U)		/*!< Interrupt channel X Timeslot J level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_K      	(0x0400U)		/*!< Interrupt channel X Timeslot K level 1 interrupt enable*/
#define BITM_INT_ENABLE_XL1_INTX_EN_LEV1_L      	(0x0800U)		/*!< Interrupt channel X Timeslot L level 1 interrupt enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_XT1						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_XT1_INTX_EN_TCLN1_A     	(0U)			   /*!< Interrupt function X chan 1 saturated interrupt Timeslot a*/
#define BITP_INT_ENABLE_XT1_INTX_EN_TCLN1_B     	(1U)			   /*!< Interrupt function X chan 1 saturated interrupt Timeslot b*/
#define BITP_INT_ENABLE_XT1_INTX_EN_TCLN1_C     	(2U)			   /*!< Interrupt function X chan 1 saturated interrupt Timeslot c*/
#define BITP_INT_ENABLE_XT1_INTX_EN_TCLN1_D     	(3U)			   /*!< Interrupt function X chan 1 saturated interrupt Timeslot d*/
#define BITP_INT_ENABLE_XT1_INTX_EN_TCLN1_E     	(4U)			   /*!< Interrupt function X chan 1 saturated interrupt Timeslot e*/
#define BITP_INT_ENABLE_XT1_INTX_EN_TCLN1_F     	(5U)			   /*!< Interrupt function X chan 1 saturated interrupt Timeslot f*/
#define BITP_INT_ENABLE_XT1_INTX_EN_TCLN1_G     	(6U)			   /*!< Interrupt function X chan 1 saturated interrupt Timeslot g*/
#define BITP_INT_ENABLE_XT1_INTX_EN_TCLN1_H     	(7U)			   /*!< Interrupt function X chan 1 saturated interrupt Timeslot h*/
#define BITP_INT_ENABLE_XT1_INTX_EN_TCLN1_I     	(8U)			   /*!< Interrupt function X chan 1 saturated interrupt Timeslot i*/
#define BITP_INT_ENABLE_XT1_INTX_EN_TCLN1_J     	(9U)			   /*!< Interrupt function X chan 1 saturated interrupt Timeslot j*/
#define BITP_INT_ENABLE_XT1_INTX_EN_TCLN1_K     	(10U)			   /*!< Interrupt function X chan 1 saturated interrupt Timeslot k*/
#define BITP_INT_ENABLE_XT1_INTX_EN_TCLN1_L     	(11U)			   /*!< Interrupt function X chan 1 saturated interrupt Timeslot l*/

#define BITM_INT_ENABLE_XT1_INTX_EN_TCLN1_A     	(0x0001U)		/*!< Interrupt function X chan 1 saturated interrupt Timeslot a*/
#define BITM_INT_ENABLE_XT1_INTX_EN_TCLN1_B     	(0x0002U)		/*!< Interrupt function X chan 1 saturated interrupt Timeslot b*/
#define BITM_INT_ENABLE_XT1_INTX_EN_TCLN1_C     	(0x0004U)		/*!< Interrupt function X chan 1 saturated interrupt Timeslot c*/
#define BITM_INT_ENABLE_XT1_INTX_EN_TCLN1_D     	(0x0008U)		/*!< Interrupt function X chan 1 saturated interrupt Timeslot d*/
#define BITM_INT_ENABLE_XT1_INTX_EN_TCLN1_E     	(0x0010U)		/*!< Interrupt function X chan 1 saturated interrupt Timeslot e*/
#define BITM_INT_ENABLE_XT1_INTX_EN_TCLN1_F     	(0x0020U)		/*!< Interrupt function X chan 1 saturated interrupt Timeslot f*/
#define BITM_INT_ENABLE_XT1_INTX_EN_TCLN1_G     	(0x0040U)		/*!< Interrupt function X chan 1 saturated interrupt Timeslot g*/
#define BITM_INT_ENABLE_XT1_INTX_EN_TCLN1_H     	(0x0080U)		/*!< Interrupt function X chan 1 saturated interrupt Timeslot h*/
#define BITM_INT_ENABLE_XT1_INTX_EN_TCLN1_I     	(0x0100U)		/*!< Interrupt function X chan 1 saturated interrupt Timeslot i*/
#define BITM_INT_ENABLE_XT1_INTX_EN_TCLN1_J     	(0x0200U)		/*!< Interrupt function X chan 1 saturated interrupt Timeslot j*/
#define BITM_INT_ENABLE_XT1_INTX_EN_TCLN1_K     	(0x0400U)		/*!< Interrupt function X chan 1 saturated interrupt Timeslot k*/
#define BITM_INT_ENABLE_XT1_INTX_EN_TCLN1_L     	(0x0800U)		/*!< Interrupt function X chan 1 saturated interrupt Timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_XT2						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_XT2_INTX_EN_TCLN2_A     	(0U)			   /*!< Interrupt function X chan 2 saturated interrupt Timeslot a*/
#define BITP_INT_ENABLE_XT2_INTX_EN_TCLN2_B     	(1U)			   /*!< Interrupt function X chan 2 saturated interrupt Timeslot b*/
#define BITP_INT_ENABLE_XT2_INTX_EN_TCLN2_C     	(2U)			   /*!< Interrupt function X chan 2 saturated interrupt Timeslot c*/
#define BITP_INT_ENABLE_XT2_INTX_EN_TCLN2_D     	(3U)			   /*!< Interrupt function X chan 2 saturated interrupt Timeslot d*/
#define BITP_INT_ENABLE_XT2_INTX_EN_TCLN2_E     	(4U)			   /*!< Interrupt function X chan 2 saturated interrupt Timeslot e*/
#define BITP_INT_ENABLE_XT2_INTX_EN_TCLN2_F     	(5U)			   /*!< Interrupt function X chan 2 saturated interrupt Timeslot f*/
#define BITP_INT_ENABLE_XT2_INTX_EN_TCLN2_G     	(6U)			   /*!< Interrupt function X chan 2 saturated interrupt Timeslot g*/
#define BITP_INT_ENABLE_XT2_INTX_EN_TCLN2_H     	(7U)			   /*!< Interrupt function X chan 2 saturated interrupt Timeslot h*/
#define BITP_INT_ENABLE_XT2_INTX_EN_TCLN2_I     	(8U)			   /*!< Interrupt function X chan 2 saturated interrupt Timeslot i*/
#define BITP_INT_ENABLE_XT2_INTX_EN_TCLN2_J     	(9U)			   /*!< Interrupt function X chan 2 saturated interrupt Timeslot j*/
#define BITP_INT_ENABLE_XT2_INTX_EN_TCLN2_K     	(10U)			   /*!< Interrupt function X chan 2 saturated interrupt Timeslot k*/
#define BITP_INT_ENABLE_XT2_INTX_EN_TCLN2_L     	(11U)			   /*!< Interrupt function X chan 2 saturated interrupt Timeslot l*/

#define BITM_INT_ENABLE_XT2_INTX_EN_TCLN2_A     	(0x0001U)		/*!< Interrupt function X chan 2 saturated interrupt Timeslot a*/
#define BITM_INT_ENABLE_XT2_INTX_EN_TCLN2_B     	(0x0002U)		/*!< Interrupt function X chan 2 saturated interrupt Timeslot b*/
#define BITM_INT_ENABLE_XT2_INTX_EN_TCLN2_C     	(0x0004U)		/*!< Interrupt function X chan 2 saturated interrupt Timeslot c*/
#define BITM_INT_ENABLE_XT2_INTX_EN_TCLN2_D     	(0x0008U)		/*!< Interrupt function X chan 2 saturated interrupt Timeslot d*/
#define BITM_INT_ENABLE_XT2_INTX_EN_TCLN2_E     	(0x0010U)		/*!< Interrupt function X chan 2 saturated interrupt Timeslot e*/
#define BITM_INT_ENABLE_XT2_INTX_EN_TCLN2_F     	(0x0020U)		/*!< Interrupt function X chan 2 saturated interrupt Timeslot f*/
#define BITM_INT_ENABLE_XT2_INTX_EN_TCLN2_G     	(0x0040U)		/*!< Interrupt function X chan 2 saturated interrupt Timeslot g*/
#define BITM_INT_ENABLE_XT2_INTX_EN_TCLN2_H     	(0x0080U)		/*!< Interrupt function X chan 2 saturated interrupt Timeslot h*/
#define BITM_INT_ENABLE_XT2_INTX_EN_TCLN2_I     	(0x0100U)		/*!< Interrupt function X chan 2 saturated interrupt Timeslot i*/
#define BITM_INT_ENABLE_XT2_INTX_EN_TCLN2_J     	(0x0200U)		/*!< Interrupt function X chan 2 saturated interrupt Timeslot j*/
#define BITM_INT_ENABLE_XT2_INTX_EN_TCLN2_K     	(0x0400U)		/*!< Interrupt function X chan 2 saturated interrupt Timeslot k*/
#define BITM_INT_ENABLE_XT2_INTX_EN_TCLN2_L     	(0x0800U)		/*!< Interrupt function X chan 2 saturated interrupt Timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_YL0						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_A      	(0U)			   /*!< interrupt channel Y Timeslot A level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_B      	(1U)			   /*!< interrupt channel Y Timeslot B level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_C      	(2U)			   /*!< interrupt channel Y Timeslot C level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_D      	(3U)			   /*!< interrupt channel Y Timeslot D level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_E      	(4U)			   /*!< interrupt channel Y Timeslot E level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_F      	(5U)			   /*!< interrupt channel Y Timeslot F level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_G      	(6U)			   /*!< interrupt channel Y Timeslot G level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_H      	(7U)			   /*!< interrupt channel Y Timeslot H level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_I      	(8U)			   /*!< interrupt channel Y Timeslot I level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_J      	(9U)			   /*!< interrupt channel Y Timeslot J level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_K      	(10U)			   /*!< interrupt channel Y Timeslot K level 0 interrupt enable*/
#define BITP_INT_ENABLE_YL0_INTY_EN_LEV0_L      	(11U)			   /*!< interrupt channel Y Timeslot L level 0 interrupt enable*/

#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_A      	(0x0001U)		/*!< interrupt channel Y Timeslot A level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_B      	(0x0002U)		/*!< interrupt channel Y Timeslot B level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_C      	(0x0004U)		/*!< interrupt channel Y Timeslot C level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_D      	(0x0008U)		/*!< interrupt channel Y Timeslot D level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_E      	(0x0010U)		/*!< interrupt channel Y Timeslot E level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_F      	(0x0020U)		/*!< interrupt channel Y Timeslot F level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_G      	(0x0040U)		/*!< interrupt channel Y Timeslot G level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_H      	(0x0080U)		/*!< interrupt channel Y Timeslot H level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_I      	(0x0100U)		/*!< interrupt channel Y Timeslot I level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_J      	(0x0200U)		/*!< interrupt channel Y Timeslot J level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_K      	(0x0400U)		/*!< interrupt channel Y Timeslot K level 0 interrupt enable*/
#define BITM_INT_ENABLE_YL0_INTY_EN_LEV0_L      	(0x0800U)		/*!< interrupt channel Y Timeslot L level 0 interrupt enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_YL1						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_A      	(0U)			   /*!< interrupt channel Y Timeslot A level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_B      	(1U)			   /*!< interrupt channel Y Timeslot B level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_C      	(2U)			   /*!< interrupt channel Y Timeslot C level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_D      	(3U)			   /*!< interrupt channel Y Timeslot D level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_E      	(4U)			   /*!< interrupt channel Y Timeslot E level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_F      	(5U)			   /*!< interrupt channel Y Timeslot F level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_G      	(6U)			   /*!< interrupt channel Y Timeslot G level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_H      	(7U)			   /*!< interrupt channel Y Timeslot H level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_I      	(8U)			   /*!< interrupt channel Y Timeslot I level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_J      	(9U)			   /*!< interrupt channel Y Timeslot J level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_K      	(10U)			   /*!< interrupt channel Y Timeslot K level 1 interrupt enable*/
#define BITP_INT_ENABLE_YL1_INTY_EN_LEV1_L      	(11U)			   /*!< interrupt channel Y Timeslot L level 1 interrupt enable*/

#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_A      	(0x0001U)		/*!< interrupt channel Y Timeslot A level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_B      	(0x0002U)		/*!< interrupt channel Y Timeslot B level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_C      	(0x0004U)		/*!< interrupt channel Y Timeslot C level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_D      	(0x0008U)		/*!< interrupt channel Y Timeslot D level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_E      	(0x0010U)		/*!< interrupt channel Y Timeslot E level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_F      	(0x0020U)		/*!< interrupt channel Y Timeslot F level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_G      	(0x0040U)		/*!< interrupt channel Y Timeslot G level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_H      	(0x0080U)		/*!< interrupt channel Y Timeslot H level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_I      	(0x0100U)		/*!< interrupt channel Y Timeslot I level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_J      	(0x0200U)		/*!< interrupt channel Y Timeslot J level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_K      	(0x0400U)		/*!< interrupt channel Y Timeslot K level 1 interrupt enable*/
#define BITM_INT_ENABLE_YL1_INTY_EN_LEV1_L      	(0x0800U)		/*!< interrupt channel Y Timeslot L level 1 interrupt enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_YT1						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_YT1_INTY_EN_TCLN1_A     	(0U)			   /*!< Interrupt function Y chan 1 saturated interrupt Timeslot a*/
#define BITP_INT_ENABLE_YT1_INTY_EN_TCLN1_B     	(1U)			   /*!< Interrupt function Y chan 1 saturated interrupt Timeslot b*/
#define BITP_INT_ENABLE_YT1_INTY_EN_TCLN1_C     	(2U)			   /*!< Interrupt function Y chan 1 saturated interrupt Timeslot c*/
#define BITP_INT_ENABLE_YT1_INTY_EN_TCLN1_D     	(3U)			   /*!< Interrupt function Y chan 1 saturated interrupt Timeslot d*/
#define BITP_INT_ENABLE_YT1_INTY_EN_TCLN1_E     	(4U)			   /*!< Interrupt function Y chan 1 saturated interrupt Timeslot e*/
#define BITP_INT_ENABLE_YT1_INTY_EN_TCLN1_F     	(5U)			   /*!< Interrupt function Y chan 1 saturated interrupt Timeslot f*/
#define BITP_INT_ENABLE_YT1_INTY_EN_TCLN1_G     	(6U)			   /*!< Interrupt function Y chan 1 saturated interrupt Timeslot g*/
#define BITP_INT_ENABLE_YT1_INTY_EN_TCLN1_H     	(7U)			   /*!< Interrupt function Y chan 1 saturated interrupt Timeslot h*/
#define BITP_INT_ENABLE_YT1_INTY_EN_TCLN1_I     	(8U)			   /*!< Interrupt function Y chan 1 saturated interrupt Timeslot i*/
#define BITP_INT_ENABLE_YT1_INTY_EN_TCLN1_J     	(9U)			   /*!< Interrupt function Y chan 1 saturated interrupt Timeslot j*/
#define BITP_INT_ENABLE_YT1_INTY_EN_TCLN1_K     	(10U)			   /*!< Interrupt function Y chan 1 saturated interrupt Timeslot k*/
#define BITP_INT_ENABLE_YT1_INTY_EN_TCLN1_L     	(11U)			   /*!< Interrupt function Y chan 1 saturated interrupt Timeslot l*/

#define BITM_INT_ENABLE_YT1_INTY_EN_TCLN1_A     	(0x0001U)		/*!< Interrupt function Y chan 1 saturated interrupt Timeslot a*/
#define BITM_INT_ENABLE_YT1_INTY_EN_TCLN1_B     	(0x0002U)		/*!< Interrupt function Y chan 1 saturated interrupt Timeslot b*/
#define BITM_INT_ENABLE_YT1_INTY_EN_TCLN1_C     	(0x0004U)		/*!< Interrupt function Y chan 1 saturated interrupt Timeslot c*/
#define BITM_INT_ENABLE_YT1_INTY_EN_TCLN1_D     	(0x0008U)		/*!< Interrupt function Y chan 1 saturated interrupt Timeslot d*/
#define BITM_INT_ENABLE_YT1_INTY_EN_TCLN1_E     	(0x0010U)		/*!< Interrupt function Y chan 1 saturated interrupt Timeslot e*/
#define BITM_INT_ENABLE_YT1_INTY_EN_TCLN1_F     	(0x0020U)		/*!< Interrupt function Y chan 1 saturated interrupt Timeslot f*/
#define BITM_INT_ENABLE_YT1_INTY_EN_TCLN1_G     	(0x0040U)		/*!< Interrupt function Y chan 1 saturated interrupt Timeslot g*/
#define BITM_INT_ENABLE_YT1_INTY_EN_TCLN1_H     	(0x0080U)		/*!< Interrupt function Y chan 1 saturated interrupt Timeslot h*/
#define BITM_INT_ENABLE_YT1_INTY_EN_TCLN1_I     	(0x0100U)		/*!< Interrupt function Y chan 1 saturated interrupt Timeslot i*/
#define BITM_INT_ENABLE_YT1_INTY_EN_TCLN1_J     	(0x0200U)		/*!< Interrupt function Y chan 1 saturated interrupt Timeslot j*/
#define BITM_INT_ENABLE_YT1_INTY_EN_TCLN1_K     	(0x0400U)		/*!< Interrupt function Y chan 1 saturated interrupt Timeslot k*/
#define BITM_INT_ENABLE_YT1_INTY_EN_TCLN1_L     	(0x0800U)		/*!< Interrupt function Y chan 1 saturated interrupt Timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INT_ENABLE_YT2						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INT_ENABLE_YT2_INTY_EN_TCLN2_A     	(0U)			   /*!< Interrupt function Y chan 2 saturated interrupt Timeslot a*/
#define BITP_INT_ENABLE_YT2_INTY_EN_TCLN2_B     	(1U)			   /*!< Interrupt function Y chan 2 saturated interrupt Timeslot b*/
#define BITP_INT_ENABLE_YT2_INTY_EN_TCLN2_C     	(2U)			   /*!< Interrupt function Y chan 2 saturated interrupt Timeslot c*/
#define BITP_INT_ENABLE_YT2_INTY_EN_TCLN2_D     	(3U)			   /*!< Interrupt function Y chan 2 saturated interrupt Timeslot d*/
#define BITP_INT_ENABLE_YT2_INTY_EN_TCLN2_E     	(4U)			   /*!< Interrupt function Y chan 2 saturated interrupt Timeslot e*/
#define BITP_INT_ENABLE_YT2_INTY_EN_TCLN2_F     	(5U)			   /*!< Interrupt function Y chan 2 saturated interrupt Timeslot f*/
#define BITP_INT_ENABLE_YT2_INTY_EN_TCLN2_G     	(6U)			   /*!< Interrupt function Y chan 2 saturated interrupt Timeslot g*/
#define BITP_INT_ENABLE_YT2_INTY_EN_TCLN2_H     	(7U)			   /*!< Interrupt function Y chan 2 saturated interrupt Timeslot h*/
#define BITP_INT_ENABLE_YT2_INTY_EN_TCLN2_I     	(8U)			   /*!< Interrupt function Y chan 2 saturated interrupt Timeslot i*/
#define BITP_INT_ENABLE_YT2_INTY_EN_TCLN2_J     	(9U)			   /*!< Interrupt function Y chan 2 saturated interrupt Timeslot j*/
#define BITP_INT_ENABLE_YT2_INTY_EN_TCLN2_K     	(10U)			   /*!< Interrupt function Y chan 2 saturated interrupt Timeslot k*/
#define BITP_INT_ENABLE_YT2_INTY_EN_TCLN2_L     	(11U)			   /*!< Interrupt function Y chan 2 saturated interrupt Timeslot l*/

#define BITM_INT_ENABLE_YT2_INTY_EN_TCLN2_A     	(0x0001U)		/*!< Interrupt function Y chan 2 saturated interrupt Timeslot a*/
#define BITM_INT_ENABLE_YT2_INTY_EN_TCLN2_B     	(0x0002U)		/*!< Interrupt function Y chan 2 saturated interrupt Timeslot b*/
#define BITM_INT_ENABLE_YT2_INTY_EN_TCLN2_C     	(0x0004U)		/*!< Interrupt function Y chan 2 saturated interrupt Timeslot c*/
#define BITM_INT_ENABLE_YT2_INTY_EN_TCLN2_D     	(0x0008U)		/*!< Interrupt function Y chan 2 saturated interrupt Timeslot d*/
#define BITM_INT_ENABLE_YT2_INTY_EN_TCLN2_E     	(0x0010U)		/*!< Interrupt function Y chan 2 saturated interrupt Timeslot e*/
#define BITM_INT_ENABLE_YT2_INTY_EN_TCLN2_F     	(0x0020U)		/*!< Interrupt function Y chan 2 saturated interrupt Timeslot f*/
#define BITM_INT_ENABLE_YT2_INTY_EN_TCLN2_G     	(0x0040U)		/*!< Interrupt function Y chan 2 saturated interrupt Timeslot g*/
#define BITM_INT_ENABLE_YT2_INTY_EN_TCLN2_H     	(0x0080U)		/*!< Interrupt function Y chan 2 saturated interrupt Timeslot h*/
#define BITM_INT_ENABLE_YT2_INTY_EN_TCLN2_I     	(0x0100U)		/*!< Interrupt function Y chan 2 saturated interrupt Timeslot i*/
#define BITM_INT_ENABLE_YT2_INTY_EN_TCLN2_J     	(0x0200U)		/*!< Interrupt function Y chan 2 saturated interrupt Timeslot j*/
#define BITM_INT_ENABLE_YT2_INTY_EN_TCLN2_K     	(0x0400U)		/*!< Interrupt function Y chan 2 saturated interrupt Timeslot k*/
#define BITM_INT_ENABLE_YT2_INTY_EN_TCLN2_L     	(0x0800U)		/*!< Interrupt function Y chan 2 saturated interrupt Timeslot l*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_FIFO_STATUS_BYTES				   Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_SUM     	(0U)			   /*!< Enable status summary byte.*/
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_D1      	(1U)			   /*!< Enable data interrupt status byte lower.*/
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_D2      	(2U)			   /*!< Enable data interrupt status byte upper.*/
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_L0      	(3U)			   /*!< Enable level 0 interrupt status byte lower.*/
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_L1      	(4U)			   /*!< Enable level 1 interrupt status byte lower.*/
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_LX      	(5U)			   /*!< Enable level 0 and level 1 interrupt status byte upper.*/
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_TS1     	(6U)			   /*!< Enable TIA sat chan 1 interrupt status byte lower.*/
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_TS2     	(7U)			   /*!< Enable TIA sat chan 2 interrupt status byte lower.*/
#define BITP_FIFO_STATUS_BYTES_ENA_STAT_TSX     	(8U)			   /*!< Enable TIA sat chan 1/2 interrupt status byte upper.*/

#define BITM_FIFO_STATUS_BYTES_ENA_STAT_SUM     	(0x0001U)		/*!< Enable status summary byte.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_D1      	(0x0002U)		/*!< Enable data interrupt status byte lower.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_D2      	(0x0004U)		/*!< Enable data interrupt status byte upper.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_L0      	(0x0008U)		/*!< Enable level 0 interrupt status byte lower.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_L1      	(0x0010U)		/*!< Enable level 1 interrupt status byte lower.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_LX      	(0x0020U)		/*!< Enable level 0 and level 1 interrupt status byte upper.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_TS1     	(0x0040U)		/*!< Enable TIA sat chan 1 interrupt status byte lower.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_TS2     	(0x0080U)		/*!< Enable TIA sat chan 2 interrupt status byte lower.*/
#define BITM_FIFO_STATUS_BYTES_ENA_STAT_TSX     	(0x0100U)		/*!< Enable TIA sat chan 1/2 interrupt status byte upper.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUT_SLEEP						   Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUT_SLEEP_INP_SLEEP_12           	(0U)			   /*!< Input pair sleep state for inputs 1 and 2*/
#define BITP_INPUT_SLEEP_INP_SLEEP_34           	(4U)			   /*!< Input pair sleep state for inputs 3 and 4*/
#define BITP_INPUT_SLEEP_INP_SLEEP_56           	(8U)			   /*!< Input pair sleep state for inputs 5 and 6*/
#define BITP_INPUT_SLEEP_INP_SLEEP_78           	(12U)			   /*!< Input pair sleep state for inputs 7 and 8*/

#define BITM_INPUT_SLEEP_INP_SLEEP_12           	(0x000fU)		/*!< Input pair sleep state for inputs 1 and 2*/
#define BITM_INPUT_SLEEP_INP_SLEEP_34           	(0x00f0U)		/*!< Input pair sleep state for inputs 3 and 4*/
#define BITM_INPUT_SLEEP_INP_SLEEP_56           	(0x0f00U)		/*!< Input pair sleep state for inputs 5 and 6*/
#define BITM_INPUT_SLEEP_INP_SLEEP_78           	(0xf000U)		/*!< Input pair sleep state for inputs 7 and 8*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUT_CFG						      Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUT_CFG_PAIR12                   	(0U)			   /*!< Input pair configuration*/
#define BITP_INPUT_CFG_PAIR34                   	(1U)			   /*!< Input pair configuration*/
#define BITP_INPUT_CFG_PAIR56                   	(2U)			   /*!< Input pair configuration*/
#define BITP_INPUT_CFG_PAIR78                   	(3U)			   /*!< Input pair configuration*/
#define BITP_INPUT_CFG_VC1_SLEEP                	(4U)			   /*!< Cathode1 sleep state*/
#define BITP_INPUT_CFG_VC2_SLEEP                	(6U)			   /*!< Cathode2 sleep state*/

#define BITM_INPUT_CFG_PAIR12                   	(0x0001U)		/*!< Input pair configuration*/
#define BITM_INPUT_CFG_PAIR34                   	(0x0002U)		/*!< Input pair configuration*/
#define BITM_INPUT_CFG_PAIR56                   	(0x0004U)		/*!< Input pair configuration*/
#define BITM_INPUT_CFG_PAIR78                   	(0x0008U)		/*!< Input pair configuration*/
#define BITM_INPUT_CFG_VC1_SLEEP                	(0x0030U)		/*!< Cathode1 sleep state*/
#define BITM_INPUT_CFG_VC2_SLEEP                	(0x00c0U)		/*!< Cathode2 sleep state*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_GPIO_CFG						      Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_CFG_GPIO_PIN_CFG0             	(0U)			   /*!< GPIO[0] Pin Configuration*/
#define BITP_GPIO_CFG_GPIO_PIN_CFG1             	(3U)			   /*!< GPIO[1] Pin Configuration*/
#define BITP_GPIO_CFG_GPIO_PIN_CFG2             	(6U)			   /*!< GPIO[2] Pin Configuration*/
#define BITP_GPIO_CFG_GPIO_PIN_CFG3             	(9U)			   /*!< GPIO[3] Pin Configuration*/
#define BITP_GPIO_CFG_GPIO_DRV                  	(12U)			   /*!< Drive Control for GPIO Pins*/
#define BITP_GPIO_CFG_GPIO_SLEW                 	(14U)			   /*!< Slew Control for GPIO Pins*/

#define BITM_GPIO_CFG_GPIO_PIN_CFG0             	(0x0007U)		/*!< GPIO[0] Pin Configuration*/
#define BITM_GPIO_CFG_GPIO_PIN_CFG1             	(0x0038U)		/*!< GPIO[1] Pin Configuration*/
#define BITM_GPIO_CFG_GPIO_PIN_CFG2             	(0x01c0U)		/*!< GPIO[2] Pin Configuration*/
#define BITM_GPIO_CFG_GPIO_PIN_CFG3             	(0x0e00U)		/*!< GPIO[3] Pin Configuration*/
#define BITM_GPIO_CFG_GPIO_DRV                  	(0x3000U)		/*!< Drive Control for GPIO Pins*/
#define BITM_GPIO_CFG_GPIO_SLEW                 	(0xc000U)		/*!< Slew Control for GPIO Pins*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_GPIO01						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO01_GPIOOUT0                    	(0U)			   /*!< GPIO Pin 0 Output Select*/
#define BITP_GPIO01_GPIOOUT1                    	(8U)			   /*!< GPIO Pin 1 Output Select*/

#define BITM_GPIO01_GPIOOUT0                    	(0x007fU)		/*!< GPIO Pin 0 Output Select*/
#define BITM_GPIO01_GPIOOUT1                    	(0x7f00U)		/*!< GPIO Pin 1 Output Select*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_GPIO23						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO23_GPIOOUT2                    	(0U)			   /*!< GPIO Pin 2 Output Select*/
#define BITP_GPIO23_GPIOOUT3                    	(8U)			   /*!< GPIO Pin 3 Output Select*/

#define BITM_GPIO23_GPIOOUT2                    	(0x007fU)		/*!< GPIO Pin 2 Output Select*/
#define BITM_GPIO23_GPIOOUT3                    	(0x7f00U)		/*!< GPIO Pin 3 Output Select*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_GPIO_IN						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_IN_GPIO_INPUT                 	(0U)			   /*!< GPIO Input value (if enabled)*/

#define BITM_GPIO_IN_GPIO_INPUT                 	(0x000fU)		/*!< GPIO Input value (if enabled)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_GPIO_EXT						      Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_GPIO_EXT_EXT_SYNC_GPIO               	(0U)			   /*!< External synchronization GPIO select*/
#define BITP_GPIO_EXT_EXT_SYNC_EN               	(2U)			   /*!< External sync enable*/
#define BITP_GPIO_EXT_TIMESTAMP_GPIO            	(4U)			   /*!< Timestamp GPIO Select*/
#define BITP_GPIO_EXT_TIMESTAMP_ALWAYS_EN       	(6U)			   /*!< Enable Timestamp Always on*/
#define BITP_GPIO_EXT_TIMESTAMP_INV             	(7U)			   /*!< Timestamp Trigger Invert*/
#define BITP_GPIO_EXT_GOUT_SLEEP                	(8U)			   /*!< Timeslot specific gpio signal sleep value*/

#define BITM_GPIO_EXT_EXT_SYNC_GPIO               	(0x0003U)	   /*!< External synchronization GPIO select*/
#define BITM_GPIO_EXT_EXT_SYNC_EN               	(0x0004U)		/*!< External sync enable*/
#define BITM_GPIO_EXT_TIMESTAMP_GPIO            	(0x0030U)		/*!< Timestamp GPIO Select*/
#define BITM_GPIO_EXT_TIMESTAMP_ALWAYS_EN       	(0x0040U)		/*!< Enable Timestamp Always on*/
#define BITM_GPIO_EXT_TIMESTAMP_INV             	(0x0080U)		/*!< Timestamp Trigger Invert*/
#define BITM_GPIO_EXT_GOUT_SLEEP                	(0x0100U)		/*!< Timeslot specific gpio signal sleep value*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA_HOLD_FLAG						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_A         	(0U)			   /*!< Prevent Update of Timeslot A data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_B         	(1U)			   /*!< Prevent Update of Timeslot B data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_C         	(2U)			   /*!< Prevent Update of Timeslot C data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_D         	(3U)			   /*!< Prevent Update of Timeslot D data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_E         	(4U)			   /*!< Prevent Update of Timeslot E data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_F         	(5U)			   /*!< Prevent Update of Timeslot F data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_G         	(6U)			   /*!< Prevent Update of Timeslot G data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_H         	(7U)			   /*!< Prevent Update of Timeslot H data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_I         	(8U)			   /*!< Prevent Update of Timeslot I data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_J         	(9U)			   /*!< Prevent Update of Timeslot J data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_K         	(10U)			   /*!< Prevent Update of Timeslot K data registers*/
#define BITP_DATA_HOLD_FLAG_HOLD_REGS_L         	(11U)			   /*!< Prevent Update of Timeslot L data registers*/

#define BITM_DATA_HOLD_FLAG_HOLD_REGS_A         	(0x0001U)		/*!< Prevent Update of Timeslot A data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_B         	(0x0002U)		/*!< Prevent Update of Timeslot B data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_C         	(0x0004U)		/*!< Prevent Update of Timeslot C data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_D         	(0x0008U)		/*!< Prevent Update of Timeslot D data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_E         	(0x0010U)		/*!< Prevent Update of Timeslot E data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_F         	(0x0020U)		/*!< Prevent Update of Timeslot F data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_G         	(0x0040U)		/*!< Prevent Update of Timeslot G data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_H         	(0x0080U)		/*!< Prevent Update of Timeslot H data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_I         	(0x0100U)		/*!< Prevent Update of Timeslot I data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_J         	(0x0200U)		/*!< Prevent Update of Timeslot J data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_K         	(0x0400U)		/*!< Prevent Update of Timeslot K data registers*/
#define BITM_DATA_HOLD_FLAG_HOLD_REGS_L         	(0x0800U)		/*!< Prevent Update of Timeslot L data registers*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_FIFO_DATA						      Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_FIFO_DATA_FIFO_DATA                	(0U)			   /*!< FIFO data port*/

#define BITM_FIFO_DATA_FIFO_DATA                	(0xffffU)		/*!< FIFO data port*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_L						      Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_L_SIGNAL1_L            	      (0U)			   /*!< Signal channel 1 lower half*/

#define BITM_SIGNAL1_L_SIGNAL1_L            	      (0xffffU)		/*!< Signal channel 1 lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL1_H						      Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL1_H_SIGNAL1_H            	      (0U)			   /*!< Signal channel 1 upper half*/

#define BITM_SIGNAL1_H_SIGNAL1_H            	      (0xffffU)		/*!< Signal channel 1 upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_L						      Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_L_SIGNAL2_L            	      (0U)			   /*!< Signal channel 2 lower half*/

#define BITM_SIGNAL2_L_SIGNAL2_L            	      (0xffffU)		/*!< Signal channel 2 lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_SIGNAL2_H						      Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_SIGNAL2_H_SIGNAL2_H            	      (0U)			   /*!< Signal channel 2 upper half*/

#define BITM_SIGNAL2_H_SIGNAL2_H            	      (0xffffU)		/*!< Signal channel 2 upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_L						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_L_DARK1_L                	      (0U)			   /*!< Dark channel 1 value lower half*/

#define BITM_DARK1_L_DARK1_L                	      (0xffffU)		/*!< Dark channel 1 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK1_H						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK1_H_DARK1_H                	      (0U)			   /*!< Dark channel 1 value upper half*/

#define BITM_DARK1_H_DARK1_H                	      (0xffffU)		/*!< Dark channel 1 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_L						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_L_DARK2_L                	      (0U)			   /*!< Dark channel 2 value lower half*/

#define BITM_DARK2_L_DARK2_L                	      (0xffffU)		/*!< Dark channel 2 value lower half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DARK2_H						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DARK2_H_DARK2_H                	      (0U)			   /*!< Dark channel 2 value upper half*/

#define BITM_DARK2_H_DARK2_H                	      (0xffffU)		/*!< Dark channel 2 value upper half*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_IO_ADJUST						      Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_IO_ADJUST_SPI_DRV                    	(0U)			   /*!< Drive control for SPI pins*/
#define BITP_IO_ADJUST_SPI_SLEW              	   (2U)			   /*!< Slew control for SPI pins*/
#define BITP_IO_ADJUST_LOW_IOVDD_EN              	(6U)			   /*!< Set to 0x0 if IOVDD of 3 V or higher is used*/

#define BITM_IO_ADJUST_SPI_DRV                    	(0x0003U)		/*!< Drive control for SPI pins*/
#define BITM_IO_ADJUST_SPI_SLEW              	   (0x000CU)		/*!< Slew control for SPI pins*/
#define BITM_IO_ADJUST_LOW_IOVDD_EN              	(0x0040U)	   /*!< Set to 0x0 if IOVDD of 3 V or higher is used*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_I2C_KEY						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2C_KEY_I2C_KEY                    	(0U)			   /*!< i2c address change key*/
#define BITP_I2C_KEY_I2C_KEY_MATCH              	(12U)			   /*!< i2c gpio bit select*/

#define BITM_I2C_KEY_I2C_KEY                    	(0x0fffU)		/*!< i2c address change key*/
#define BITM_I2C_KEY_I2C_KEY_MATCH              	(0xf000U)		/*!< i2c gpio bit select*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_I2C_ADDR						      Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_I2C_ADDR_I2C_SLAVE_ADDR            	(1U)			   /*!< i2c slave address update field*/
#define BITP_I2C_ADDR_I2C_SLAVE_KEY2            	(8U)			   /*!< i2c key part 2*/

#define BITM_I2C_ADDR_I2C_SLAVE_ADDR            	(0x00feU)		/*!< i2c slave address update field*/
#define BITM_I2C_ADDR_I2C_SLAVE_KEY2            	(0xff00U)		/*!< i2c key part 2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_CTRL						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_CTRL_TIMESLOT_OFFSET        	      (0U)			   /*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITP_TS_CTRL_INPUT_R_SELECT         	      (10U)			   /*!< Input resistor select*/
#define BITP_TS_CTRL_SAMPLE_TYPE            	      (12U)			   /*!< Timeslot Sampling Type*/
#define BITP_TS_CTRL_CH2_EN                 	      (14U)			   /*!< Channel 2 enable*/
#define BITP_TS_CTRL_SUBSAMPLE              	      (15U)			   /*!< Subsample using decimate_factor*/

#define BITM_TS_CTRL_TIMESLOT_OFFSET        	      (0x03ffU)		/*!< Timeslot A Offset in 64* lfosc1m or 2*lfosc32k cycles.*/
#define BITM_TS_CTRL_INPUT_R_SELECT        	      (0x0c00U)		/*!< Input resistor select*/
#define BITM_TS_CTRL_SAMPLE_TYPE            	      (0x3000U)		/*!< Timeslot Sampling Type*/
#define BITM_TS_CTRL_CH2_EN                 	      (0x4000U)		/*!< Channel 2 enable*/
#define BITM_TS_CTRL_SUBSAMPLE              	      (0x8000U)		/*!< Subsample using decimate_factor*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_TS_PATH						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_TS_PATH_AFE_PATH_CFG           	      (0U)			   /*!< Bypass and input mux select*/
#define BITP_TS_PATH_TS_GPIO                   	   (9U)			   /*!< Timeslot specific gpio value for this timeslot*/
#define BITP_TS_PATH_PRE_WIDTH              	      (12U)			   /*!< Precondition duration for this timeslot.*/

#define BITM_TS_PATH_AFE_PATH_CFG           	      (0x01ffU)		/*!< Bypass and input mux select*/
#define BITM_TS_PATH_TS_GPIO                   	   (0x0200U)		/*!< Timeslot specific gpio value for this timeslot*/
#define BITM_TS_PATH_PRE_WIDTH              	      (0xf000U)		/*!< Precondition duration for this timeslot.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INPUTS						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INPUTS_INP12                   	      (0U)			   /*!< Input pair12 enable*/
#define BITP_INPUTS_INP34                   	      (4U)			   /*!< Input pair34 enable*/
#define BITP_INPUTS_INP56                   	      (8U)			   /*!< Input pair56 enable*/
#define BITP_INPUTS_INP78                   	      (12U)			   /*!< input pair78 enable*/

#define BITM_INPUTS_INP12                   	      (0x000fU)		/*!< Input pair12 enable*/
#define BITM_INPUTS_INP34                   	      (0x00f0U)		/*!< Input pair34 enable*/
#define BITM_INPUTS_INP56                   	      (0x0f00U)		/*!< Input pair56 enable*/
#define BITM_INPUTS_INP78                   	      (0xf000U)		/*!< input pair78 enable*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_CATHODE						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_CATHODE_VC1_SEL                	      (0U)			   /*!< VC1 active state for this timeslot*/
#define BITP_CATHODE_VC1_ALT                	      (2U)			   /*!< VC1 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_VC1_PULSE              	      (4U)			   /*!< VC1 pulse control*/
#define BITP_CATHODE_VC2_SEL                	      (6U)			   /*!< VC2 active state for this timeslot*/
#define BITP_CATHODE_VC2_ALT                	      (8U)			   /*!< VC2 alternate pulsed state for this timeslot*/
#define BITP_CATHODE_VC2_PULSE              	      (10U)			   /*!< VC2 pulse control*/
#define BITP_CATHODE_PRECON                 	      (12U)			   /*!< Precondition value for enabled inputs during this timeslot*/

#define BITM_CATHODE_VC1_SEL                	      (0x0003U)		/*!< VC1 active state for this timeslot*/
#define BITM_CATHODE_VC1_ALT                	      (0x000cU)		/*!< VC1 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_VC1_PULSE              	      (0x0030U)		/*!< VC1 pulse control*/
#define BITM_CATHODE_VC2_SEL                	      (0x00c0U)		/*!< VC2 active state for this timeslot*/
#define BITM_CATHODE_VC2_ALT                	      (0x0300U)		/*!< VC2 alternate pulsed state for this timeslot*/
#define BITM_CATHODE_VC2_PULSE             	      (0x0c00U)		/*!< VC2 pulse control*/
#define BITM_CATHODE_PRECON                 	      (0x7000U)		/*!< Precondition value for enabled inputs during this timeslot*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_AFE_TRIM						      Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_AFE_TRIM_TIA_GAIN_CH1          	      (0U)			   /*!< Tia Resistor gain setting for channel 1*/
#define BITP_AFE_TRIM_TIA_GAIN_CH2          	      (3U)			   /*!< Tia Resistor gain setting for channel 2*/
#define BITP_AFE_TRIM_VREF_PULSE_VAL        	      (6U)			   /*!< Vref pulse alternate value*/
#define BITP_AFE_TRIM_AFE_TRIM_VREF         	      (8U)			   /*!< Voltage trim for ref buffer*/
#define BITP_AFE_TRIM_VREF_PULSE            	      (10U)			   /*!< Vref pulse control*/
#define BITP_AFE_TRIM_CH1_TRIM_INT         	      (11U)			   /*!< Channel 1 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_CH2_TRIM_INT         	      (13U)			   /*!< Channel 2 integrator resistor or buffer gain*/
#define BITP_AFE_TRIM_TIA_CEIL_DETECT_EN 	         (15U)			   /*!< Enable tia saturation detection*/

#define BITM_AFE_TRIM_TIA_GAIN_CH1          	      (0x0007U)		/*!< Tia Resistor gain setting for channel 1*/
#define BITM_AFE_TRIM_TIA_GAIN_CH2          	      (0x0038U)		/*!< Tia Resistor gain setting for channel 2*/
#define BITM_AFE_TRIM_VREF_PULSE_VAL        	      (0x00c0U)		/*!< Vref pulse alternate value*/
#define BITM_AFE_TRIM_AFE_TRIM_VREF         	      (0x0300U)		/*!< Voltage trim for ref buffer*/
#define BITM_AFE_TRIM_VREF_PULSE            	      (0x0400U)		/*!< Vref pulse control*/
#define BITM_AFE_TRIM_CH1_TRIM_INT         	      (0x1800U)		/*!< Channel 1 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_CH2_TRIM_INT         	      (0x6000U)		/*!< Channel 2 integrator resistor or buffer gain*/
#define BITM_AFE_TRIM_TIA_CEIL_DETECT_EN 	         (0x8000U)		/*!< Enable tia saturation detection*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW12						      Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW12_LED_CURRENT1         	      (0U)			   /*!< Led current setting for LED1A or LED1B output*/
#define BITP_LED_POW12_LED_DRIVESIDE1       	      (7U)			   /*!< Led output select for LED1*/
#define BITP_LED_POW12_LED_CURRENT2         	      (8U)			   /*!< Led current setting for LED2A or LED2B output*/
#define BITP_LED_POW12_LED_DRIVESIDE2       	      (15U)			   /*!< Led output select for LED2*/

#define BITM_LED_POW12_LED_CURRENT1         	      (0x007fU)		/*!< Led current setting for LED1A or LED1B output*/
#define BITM_LED_POW12_LED_DRIVESIDE1       	      (0x0080U)		/*!< Led output select for LED1*/
#define BITM_LED_POW12_LED_CURRENT2         	      (0x7f00U)		/*!< Led current setting for LED2A or LED2B output*/
#define BITM_LED_POW12_LED_DRIVESIDE2       	      (0x8000U)		/*!< Led output select for LED2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_POW34						      Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_POW34_LED_CURRENT3         	      (0U)			   /*!< Led current setting for LED3A or LED3B output*/
#define BITP_LED_POW34_LED_DRIVESIDE3       	      (7U)			   /*!< Led output select for LED3*/
#define BITP_LED_POW34_LED_CURRENT4         	      (8U)			   /*!< Led current setting for LED4A or LED4B output*/
#define BITP_LED_POW34_LED_DRIVESIDE4       	      (15U)			   /*!< Led output select for LED4*/

#define BITM_LED_POW34_LED_CURRENT3         	      (0x007fU)		/*!< Led current setting for LED3A or LED3B output*/
#define BITM_LED_POW34_LED_DRIVESIDE3       	      (0x0080U)		/*!< Led output select for LED3*/
#define BITM_LED_POW34_LED_CURRENT4         	      (0x7f00U)		/*!< Led current setting for LED4A or LED4B output*/
#define BITM_LED_POW34_LED_DRIVESIDE4       	      (0x8000U)		/*!< Led output select for LED4*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_COUNTS						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_COUNTS_NUM_REPEAT              	      (0U)			   /*!< Number of sequence repeats.*/
#define BITP_COUNTS_NUM_INT                 	      (8U)			   /*!< Number of integrates/adc or acquisition width.*/

#define BITM_COUNTS_NUM_REPEAT              	      (0x00ffU)		/*!< Number of sequence repeats.*/
#define BITM_COUNTS_NUM_INT                 	      (0xff00U)		/*!< Number of integrates/adc or acquisition width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PERIOD						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PERIOD_MIN_PERIOD              	      (0U)			   /*!< Minimum Period for pulse repetition.*/
#define BITP_PERIOD_MOD_TYPE                	      (12U)			   /*!< Modulation Connection type*/

#define BITM_PERIOD_MIN_PERIOD              	      (0x03ffU)		/*!< Minimum Period for pulse repetition.*/
#define BITM_PERIOD_MOD_TYPE                	      (0x3000U)		/*!< Modulation Connection type*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LED_PULSE						      Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LED_PULSE_LED_OFFSET           	      (0U)			   /*!< LED pulse offset*/
#define BITP_LED_PULSE_LED_WIDTH            	      (8U)			   /*!< LED pulse width*/

#define BITM_LED_PULSE_LED_OFFSET           	      (0x00ffU)		/*!< LED pulse offset*/
#define BITM_LED_PULSE_LED_WIDTH            	      (0xff00U)		/*!< LED pulse width*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_SETUP						   Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_SETUP_INTEG_WIDTH        	      (0U)			   /*!< Integrator clock width*/
#define BITP_INTEG_SETUP_ADC_COUNT          	      (6U)			   /*!< ADC conversions per pulse*/
#define BITP_INTEG_SETUP_CH1_AMP_DISABLE    	      (8U)			   /*!< Amplifier disables for power control*/
#define BITP_INTEG_SETUP_AFE_INT_C_BUF      	      (11U)			   /*!< Convert integrator to buffer*/
#define BITP_INTEG_SETUP_CH2_AMP_DISABLE    	      (12U)			   /*!< Amplifier disables for power control*/
#define BITP_INTEG_SETUP_SINGLE_INTEG       	      (15U)			   /*!< Use single integrator pulse*/

#define BITM_INTEG_SETUP_INTEG_WIDTH        	      (0x001fU)		/*!< Integrator clock width*/
#define BITM_INTEG_SETUP_ADC_COUNT          	      (0x00c0U)		/*!< ADC conversions per pulse*/
#define BITM_INTEG_SETUP_CH1_AMP_DISABLE    	      (0x0700U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_SETUP_AFE_INT_C_BUF      	      (0x0800U)		/*!< Convert integrator to buffer*/
#define BITM_INTEG_SETUP_CH2_AMP_DISABLE    	      (0x7000U)		/*!< Amplifier disables for power control*/
#define BITM_INTEG_SETUP_SINGLE_INTEG       	      (0x8000U)		/*!< Use single integrator pulse*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_INTEG_OS						      Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_INTEG_OS_INTEG_OFFSET      	         (0U)			   /*!< Integrator clock coarse offset*/

#define BITM_INTEG_OS_INTEG_OFFSET      	         (0x1FFFU)		/*!< Integrator clock coarse offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_MOD_PULSE						      Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_MOD_PULSE_MOD_OFFSET          	      (0U)			   /*!< modulation pulse offset*/
#define BITP_MOD_PULSE_MOD_WIDTH            	      (8U)			   /*!< modulation pulse width.*/

#define BITM_MOD_PULSE_MOD_OFFSET           	      (0x00ffU)		/*!< modulation pulse offset*/
#define BITM_MOD_PULSE_MOD_WIDTH            	      (0xff00U)		/*!< modulation pulse width.*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_PATTERN						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_PATTERN_REVERSE_INTEG          	      (0U)			   /*!< 4 Pulse integration reverse pattern*/
#define BITP_PATTERN_SUBTRACT               	      (4U)			   /*!< 4 Pulse subtract pattern*/
#define BITP_PATTERN_MOD_DISABLE            	      (8U)			   /*!< 4 Pulse modulation disable pattern*/
#define BITP_PATTERN_LED_DISABLE            	      (12U)			   /*!< 4 Pulse LED disable pattern*/

#define BITM_PATTERN_REVERSE_INTEG          	      (0x000fU)		/*!< 4 Pulse integration reverse pattern*/
#define BITM_PATTERN_SUBTRACT               	      (0x00f0U)		/*!< 4 Pulse subtract pattern*/
#define BITM_PATTERN_MOD_DISABLE            	      (0x0f00U)		/*!< 4 Pulse modulation disable pattern*/
#define BITM_PATTERN_LED_DISABLE            	      (0xf000U)		/*!< 4 Pulse LED disable pattern*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF1						      Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF1_CH1_ADC_ADJUST        	      (0U)			   /*!< Adjustment to ADC value*/

#define BITM_ADC_OFF1_CH1_ADC_ADJUST        	      (0x3fffU)		/*!< Adjustment to ADC value*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_ADC_OFF2						      Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_ADC_OFF2_CH2_ADC_ADJUST        	      (0U)			   /*!< Adjustment to ADC value*/
#define BITP_ADC_OFF2_A_ZERO_ADJUST        	      (15U)			   /*!< */

#define BITM_ADC_OFF2_CH2_ADC_ADJUST        	      (0x3fffU)		/*!< Adjustment to ADC value*/
#define BITM_ADC_OFF2_A_ZERO_ADJUST        	      (0x8000U)		/*!< */

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DATA_FORMAT						   Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DATA_FORMAT_SIGNAL_SIZE              	(0U)			   /*!< Signal data size*/
#define BITP_DATA_FORMAT_SIGNAL_SHIFT             	(3U)			   /*!< Signal data shift*/
#define BITP_DATA_FORMAT_DARK_SIZE                	(8U)			   /*!< Dark datsize*/
#define BITP_DATA_FORMAT_DARK_SHIFT               	(11U)			   /*!< Dark data shift*/

#define BITM_DATA_FORMAT_SIGNAL_SIZE              	(0x0007U)		/*!< Signal data size*/
#define BITM_DATA_FORMAT_SIGNAL_SHIFT             	(0x00f8U)		/*!< Signal data shift*/
#define BITM_DATA_FORMAT_DARK_SIZE                	(0x0700U)		/*!< Dark data size*/
#define BITM_DATA_FORMAT_DARK_SHIFT               	(0xf800U)		/*!< Dark data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_LIT_DATA_FORMAT						Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_LIT_DATA_FORMAT_LIT_SIZE              (0U)			   /*!< Lit data size*/
#define BITP_LIT_DATA_FORMAT_LIT_SHIFT             (3U)			   /*!< Lit data shift*/

#define BITM_LIT_DATA_FORMAT_LIT_SIZE              (0x0007U)		/*!< Lit data size*/
#define BITM_LIT_DATA_FORMAT_LIT_SHIFT             (0x00f8U)		/*!< Lit data shift*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DECIMATE						      Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DECIMATE_DECIMATE_TYPE         	      (0U)			   /*!< Decimation Type Select*/
#define BITP_DECIMATE_DECIMATE_FACTOR       	      (4U)			   /*!< Decimate Sample Divider (minus 1)*/

#define BITM_DECIMATE_DECIMATE_TYPE         	      (0x000fU)		/*!< Decimation Type Select*/
#define BITM_DECIMATE_DECIMATE_FACTOR       	      (0x07f0U)		/*!< Decimate Sample Divider (minus 1)*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_LIT						      Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_LIT_LIT_OFFSET          	      (0U)			   /*!< Acquisition Window Lit Offset*/

#define BITM_DIGINT_LIT_LIT_OFFSET          	      (0x01ffU)		/*!< Acquisition Window Lit Offset*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_DIGINT_DARK						   Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_DIGINT_DARK_DARK1_OFFSET       	      (0U)			   /*!< Acquisition Window Dark Offset 1*/
#define BITP_DIGINT_DARK_DARK2_OFFSET       	      (7U)			   /*!< Acquisition Window Dark Offset 2*/

#define BITM_DIGINT_DARK_DARK1_OFFSET       	      (0x007fU)		/*!< Acquisition Window Dark Offset 1*/
#define BITM_DIGINT_DARK_DARK2_OFFSET       	      (0xff80U)		/*!< Acquisition Window Dark Offset 2*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH_CFG						      Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH_CFG_THRESH0_TYPE        	      (0U)			   /*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_THRESH0_DIR         	      (2U)			   /*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_THRESH0_CHAN        	      (3U)			   /*!< Type of comparison for level interrupt 0*/
#define BITP_THRESH_CFG_THRESH1_TYPE        	      (4U)			   /*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_THRESH1_DIR         	      (6U)			   /*!< Type of comparison for level interrupt 1*/
#define BITP_THRESH_CFG_THRESH1_CHAN        	      (7U)			   /*!< Type of comparison for level interrupt 1*/

#define BITM_THRESH_CFG_THRESH0_TYPE        	      (0x0003U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_THRESH0_DIR         	      (0x0004U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_THRESH0_CHAN        	      (0x0008U)		/*!< Type of comparison for level interrupt 0*/
#define BITM_THRESH_CFG_THRESH1_TYPE        	      (0x0030U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_THRESH1_DIR         	      (0x0040U)		/*!< Type of comparison for level interrupt 1*/
#define BITM_THRESH_CFG_THRESH1_CHAN        	      (0x0080U)		/*!< Type of comparison for level interrupt 1*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH0						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH0_THRESH0_VALUE          	      (0U)			   /*!< Value for threshold compare level interrupt 0*/
#define BITP_THRESH0_THRESH0_SHIFT          	      (8U)			   /*!< Shift for threshold compare level interrupt 0*/

#define BITM_THRESH0_THRESH0_VALUE          	      (0x00ffU)		/*!< Value for threshold compare level interrupt 0*/
#define BITM_THRESH0_THRESH0_SHIFT          	      (0x1f00U)		/*!< Shift for threshold compare level interrupt 0*/

/* -------------------------------------------------------------------------------------------------------------------------
				REG_THRESH1						         Pos/Masks						Description
   ------------------------------------------------------------------------------------------------------------------------- */
#define BITP_THRESH1_THRESH1_VALUE          	      (0U)			   /*!< Value for threshold compare level interrupt 1*/
#define BITP_THRESH1_THRESH1_SHIFT          	      (8U)			   /*!< Shift for threshold compare level interrupt 1*/

#define BITM_THRESH1_THRESH1_VALUE          	      (0x00ffU)		/*!< Value for threshold compare level interrupt 1*/
#define BITM_THRESH1_THRESH1_SHIFT          	      (0x1f00U)		/*!< Shift for threshold compare level interrupt 1*/


#endif
