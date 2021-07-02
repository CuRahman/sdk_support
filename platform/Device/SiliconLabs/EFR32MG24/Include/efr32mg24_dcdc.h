/**************************************************************************//**
 * @file
 * @brief EFR32MG24 DCDC register and bit field definitions
 ******************************************************************************
 * # License
 * <b>Copyright 2021 Silicon Laboratories, Inc. www.silabs.com</b>
 ******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 *****************************************************************************/
#ifndef EFR32MG24_DCDC_H
#define EFR32MG24_DCDC_H
#define DCDC_HAS_SET_CLEAR

/**************************************************************************//**
* @addtogroup Parts
* @{
******************************************************************************/
/**************************************************************************//**
 * @defgroup EFR32MG24_DCDC DCDC
 * @{
 * @brief EFR32MG24 DCDC Register Declaration.
 *****************************************************************************/

/** DCDC Register Declaration. */
typedef struct {
  __IM uint32_t  IPVERSION;                     /**< IPVERSION                                          */
  __IOM uint32_t CTRL;                          /**< Control                                            */
  __IOM uint32_t EM01CTRL0;                     /**< EM01 Control                                       */
  uint32_t       RESERVED0[1U];                 /**< Reserved for future use                            */
  __IOM uint32_t EM23CTRL0;                     /**< EM23 Control                                       */
  uint32_t       RESERVED1[3U];                 /**< Reserved for future use                            */
  __IOM uint32_t PFMXCTRL;                      /**< PFMX Control Register                              */
  uint32_t       RESERVED2[1U];                 /**< Reserved for future use                            */
  __IOM uint32_t IF;                            /**< Interrupt Flags                                    */
  __IOM uint32_t IEN;                           /**< Interrupt Enable                                   */
  __IM uint32_t  STATUS;                        /**< Status Register                                    */
  __IM uint32_t  SYNCBUSY;                      /**< Syncbusy Status Register                           */
  uint32_t       RESERVED3[2U];                 /**< Reserved for future use                            */
  __IOM uint32_t LOCK;                          /**< Lock Register                                      */
  __IM uint32_t  LOCKSTATUS;                    /**< Lock Status Register                               */
  uint32_t       RESERVED4[2U];                 /**< Reserved for future use                            */
  uint32_t       RESERVED5[1U];                 /**< Reserved for future use                            */
  uint32_t       RESERVED6[7U];                 /**< Reserved for future use                            */
  uint32_t       RESERVED7[1U];                 /**< Reserved for future use                            */
  uint32_t       RESERVED8[7U];                 /**< Reserved for future use                            */
  __IOM uint32_t RPURATD0;                      /**< Root Access Type Descriptor Register               */
  __IOM uint32_t RPURATD1;                      /**< Root Access Type Descriptor Register               */
  uint32_t       RESERVED9[986U];               /**< Reserved for future use                            */
  __IM uint32_t  IPVERSION_SET;                 /**< IPVERSION                                          */
  __IOM uint32_t CTRL_SET;                      /**< Control                                            */
  __IOM uint32_t EM01CTRL0_SET;                 /**< EM01 Control                                       */
  uint32_t       RESERVED10[1U];                /**< Reserved for future use                            */
  __IOM uint32_t EM23CTRL0_SET;                 /**< EM23 Control                                       */
  uint32_t       RESERVED11[3U];                /**< Reserved for future use                            */
  __IOM uint32_t PFMXCTRL_SET;                  /**< PFMX Control Register                              */
  uint32_t       RESERVED12[1U];                /**< Reserved for future use                            */
  __IOM uint32_t IF_SET;                        /**< Interrupt Flags                                    */
  __IOM uint32_t IEN_SET;                       /**< Interrupt Enable                                   */
  __IM uint32_t  STATUS_SET;                    /**< Status Register                                    */
  __IM uint32_t  SYNCBUSY_SET;                  /**< Syncbusy Status Register                           */
  uint32_t       RESERVED13[2U];                /**< Reserved for future use                            */
  __IOM uint32_t LOCK_SET;                      /**< Lock Register                                      */
  __IM uint32_t  LOCKSTATUS_SET;                /**< Lock Status Register                               */
  uint32_t       RESERVED14[2U];                /**< Reserved for future use                            */
  uint32_t       RESERVED15[1U];                /**< Reserved for future use                            */
  uint32_t       RESERVED16[7U];                /**< Reserved for future use                            */
  uint32_t       RESERVED17[1U];                /**< Reserved for future use                            */
  uint32_t       RESERVED18[7U];                /**< Reserved for future use                            */
  __IOM uint32_t RPURATD0_SET;                  /**< Root Access Type Descriptor Register               */
  __IOM uint32_t RPURATD1_SET;                  /**< Root Access Type Descriptor Register               */
  uint32_t       RESERVED19[986U];              /**< Reserved for future use                            */
  __IM uint32_t  IPVERSION_CLR;                 /**< IPVERSION                                          */
  __IOM uint32_t CTRL_CLR;                      /**< Control                                            */
  __IOM uint32_t EM01CTRL0_CLR;                 /**< EM01 Control                                       */
  uint32_t       RESERVED20[1U];                /**< Reserved for future use                            */
  __IOM uint32_t EM23CTRL0_CLR;                 /**< EM23 Control                                       */
  uint32_t       RESERVED21[3U];                /**< Reserved for future use                            */
  __IOM uint32_t PFMXCTRL_CLR;                  /**< PFMX Control Register                              */
  uint32_t       RESERVED22[1U];                /**< Reserved for future use                            */
  __IOM uint32_t IF_CLR;                        /**< Interrupt Flags                                    */
  __IOM uint32_t IEN_CLR;                       /**< Interrupt Enable                                   */
  __IM uint32_t  STATUS_CLR;                    /**< Status Register                                    */
  __IM uint32_t  SYNCBUSY_CLR;                  /**< Syncbusy Status Register                           */
  uint32_t       RESERVED23[2U];                /**< Reserved for future use                            */
  __IOM uint32_t LOCK_CLR;                      /**< Lock Register                                      */
  __IM uint32_t  LOCKSTATUS_CLR;                /**< Lock Status Register                               */
  uint32_t       RESERVED24[2U];                /**< Reserved for future use                            */
  uint32_t       RESERVED25[1U];                /**< Reserved for future use                            */
  uint32_t       RESERVED26[7U];                /**< Reserved for future use                            */
  uint32_t       RESERVED27[1U];                /**< Reserved for future use                            */
  uint32_t       RESERVED28[7U];                /**< Reserved for future use                            */
  __IOM uint32_t RPURATD0_CLR;                  /**< Root Access Type Descriptor Register               */
  __IOM uint32_t RPURATD1_CLR;                  /**< Root Access Type Descriptor Register               */
  uint32_t       RESERVED29[986U];              /**< Reserved for future use                            */
  __IM uint32_t  IPVERSION_TGL;                 /**< IPVERSION                                          */
  __IOM uint32_t CTRL_TGL;                      /**< Control                                            */
  __IOM uint32_t EM01CTRL0_TGL;                 /**< EM01 Control                                       */
  uint32_t       RESERVED30[1U];                /**< Reserved for future use                            */
  __IOM uint32_t EM23CTRL0_TGL;                 /**< EM23 Control                                       */
  uint32_t       RESERVED31[3U];                /**< Reserved for future use                            */
  __IOM uint32_t PFMXCTRL_TGL;                  /**< PFMX Control Register                              */
  uint32_t       RESERVED32[1U];                /**< Reserved for future use                            */
  __IOM uint32_t IF_TGL;                        /**< Interrupt Flags                                    */
  __IOM uint32_t IEN_TGL;                       /**< Interrupt Enable                                   */
  __IM uint32_t  STATUS_TGL;                    /**< Status Register                                    */
  __IM uint32_t  SYNCBUSY_TGL;                  /**< Syncbusy Status Register                           */
  uint32_t       RESERVED33[2U];                /**< Reserved for future use                            */
  __IOM uint32_t LOCK_TGL;                      /**< Lock Register                                      */
  __IM uint32_t  LOCKSTATUS_TGL;                /**< Lock Status Register                               */
  uint32_t       RESERVED34[2U];                /**< Reserved for future use                            */
  uint32_t       RESERVED35[1U];                /**< Reserved for future use                            */
  uint32_t       RESERVED36[7U];                /**< Reserved for future use                            */
  uint32_t       RESERVED37[1U];                /**< Reserved for future use                            */
  uint32_t       RESERVED38[7U];                /**< Reserved for future use                            */
  __IOM uint32_t RPURATD0_TGL;                  /**< Root Access Type Descriptor Register               */
  __IOM uint32_t RPURATD1_TGL;                  /**< Root Access Type Descriptor Register               */
} DCDC_TypeDef;
/** @} End of group EFR32MG24_DCDC */

/**************************************************************************//**
 * @addtogroup EFR32MG24_DCDC
 * @{
 * @defgroup EFR32MG24_DCDC_BitFields DCDC Bit Fields
 * @{
 *****************************************************************************/

/* Bit fields for DCDC IPVERSION */
#define _DCDC_IPVERSION_RESETVALUE                  0x00000002UL                             /**< Default value for DCDC_IPVERSION            */
#define _DCDC_IPVERSION_MASK                        0xFFFFFFFFUL                             /**< Mask for DCDC_IPVERSION                     */
#define _DCDC_IPVERSION_IPVERSION_SHIFT             0                                        /**< Shift value for DCDC_IPVERSION              */
#define _DCDC_IPVERSION_IPVERSION_MASK              0xFFFFFFFFUL                             /**< Bit mask for DCDC_IPVERSION                 */
#define _DCDC_IPVERSION_IPVERSION_DEFAULT           0x00000002UL                             /**< Mode DEFAULT for DCDC_IPVERSION             */
#define DCDC_IPVERSION_IPVERSION_DEFAULT            (_DCDC_IPVERSION_IPVERSION_DEFAULT << 0) /**< Shifted mode DEFAULT for DCDC_IPVERSION     */

/* Bit fields for DCDC CTRL */
#define _DCDC_CTRL_RESETVALUE                       0x00000100UL                          /**< Default value for DCDC_CTRL                 */
#define _DCDC_CTRL_MASK                             0x800001F1UL                          /**< Mask for DCDC_CTRL                          */
#define DCDC_CTRL_MODE                              (0x1UL << 0)                          /**< DCDC/Bypass Mode Control                    */
#define _DCDC_CTRL_MODE_SHIFT                       0                                     /**< Shift value for DCDC_MODE                   */
#define _DCDC_CTRL_MODE_MASK                        0x1UL                                 /**< Bit mask for DCDC_MODE                      */
#define _DCDC_CTRL_MODE_DEFAULT                     0x00000000UL                          /**< Mode DEFAULT for DCDC_CTRL                  */
#define _DCDC_CTRL_MODE_BYPASS                      0x00000000UL                          /**< Mode BYPASS for DCDC_CTRL                   */
#define _DCDC_CTRL_MODE_DCDCREGULATION              0x00000001UL                          /**< Mode DCDCREGULATION for DCDC_CTRL           */
#define DCDC_CTRL_MODE_DEFAULT                      (_DCDC_CTRL_MODE_DEFAULT << 0)        /**< Shifted mode DEFAULT for DCDC_CTRL          */
#define DCDC_CTRL_MODE_BYPASS                       (_DCDC_CTRL_MODE_BYPASS << 0)         /**< Shifted mode BYPASS for DCDC_CTRL           */
#define DCDC_CTRL_MODE_DCDCREGULATION               (_DCDC_CTRL_MODE_DCDCREGULATION << 0) /**< Shifted mode DCDCREGULATION for DCDC_CTRL   */
#define _DCDC_CTRL_IPKTMAXCTRL_SHIFT                4                                     /**< Shift value for DCDC_IPKTMAXCTRL            */
#define _DCDC_CTRL_IPKTMAXCTRL_MASK                 0x1F0UL                               /**< Bit mask for DCDC_IPKTMAXCTRL               */
#define _DCDC_CTRL_IPKTMAXCTRL_DEFAULT              0x00000010UL                          /**< Mode DEFAULT for DCDC_CTRL                  */
#define DCDC_CTRL_IPKTMAXCTRL_DEFAULT               (_DCDC_CTRL_IPKTMAXCTRL_DEFAULT << 4) /**< Shifted mode DEFAULT for DCDC_CTRL          */

/* Bit fields for DCDC EM01CTRL0 */
#define _DCDC_EM01CTRL0_RESETVALUE                  0x00000109UL                                    /**< Default value for DCDC_EM01CTRL0            */
#define _DCDC_EM01CTRL0_MASK                        0x0000030FUL                                    /**< Mask for DCDC_EM01CTRL0                     */
#define _DCDC_EM01CTRL0_IPKVAL_SHIFT                0                                               /**< Shift value for DCDC_IPKVAL                 */
#define _DCDC_EM01CTRL0_IPKVAL_MASK                 0xFUL                                           /**< Bit mask for DCDC_IPKVAL                    */
#define _DCDC_EM01CTRL0_IPKVAL_DEFAULT              0x00000009UL                                    /**< Mode DEFAULT for DCDC_EM01CTRL0             */
#define _DCDC_EM01CTRL0_IPKVAL_Load36mA             0x00000003UL                                    /**< Mode Load36mA for DCDC_EM01CTRL0            */
#define _DCDC_EM01CTRL0_IPKVAL_Load40mA             0x00000004UL                                    /**< Mode Load40mA for DCDC_EM01CTRL0            */
#define _DCDC_EM01CTRL0_IPKVAL_Load44mA             0x00000005UL                                    /**< Mode Load44mA for DCDC_EM01CTRL0            */
#define _DCDC_EM01CTRL0_IPKVAL_Load48mA             0x00000006UL                                    /**< Mode Load48mA for DCDC_EM01CTRL0            */
#define _DCDC_EM01CTRL0_IPKVAL_Load52mA             0x00000007UL                                    /**< Mode Load52mA for DCDC_EM01CTRL0            */
#define _DCDC_EM01CTRL0_IPKVAL_Load56mA             0x00000008UL                                    /**< Mode Load56mA for DCDC_EM01CTRL0            */
#define _DCDC_EM01CTRL0_IPKVAL_Load60mA             0x00000009UL                                    /**< Mode Load60mA for DCDC_EM01CTRL0            */
#define DCDC_EM01CTRL0_IPKVAL_DEFAULT               (_DCDC_EM01CTRL0_IPKVAL_DEFAULT << 0)           /**< Shifted mode DEFAULT for DCDC_EM01CTRL0     */
#define DCDC_EM01CTRL0_IPKVAL_Load36mA              (_DCDC_EM01CTRL0_IPKVAL_Load36mA << 0)          /**< Shifted mode Load36mA for DCDC_EM01CTRL0    */
#define DCDC_EM01CTRL0_IPKVAL_Load40mA              (_DCDC_EM01CTRL0_IPKVAL_Load40mA << 0)          /**< Shifted mode Load40mA for DCDC_EM01CTRL0    */
#define DCDC_EM01CTRL0_IPKVAL_Load44mA              (_DCDC_EM01CTRL0_IPKVAL_Load44mA << 0)          /**< Shifted mode Load44mA for DCDC_EM01CTRL0    */
#define DCDC_EM01CTRL0_IPKVAL_Load48mA              (_DCDC_EM01CTRL0_IPKVAL_Load48mA << 0)          /**< Shifted mode Load48mA for DCDC_EM01CTRL0    */
#define DCDC_EM01CTRL0_IPKVAL_Load52mA              (_DCDC_EM01CTRL0_IPKVAL_Load52mA << 0)          /**< Shifted mode Load52mA for DCDC_EM01CTRL0    */
#define DCDC_EM01CTRL0_IPKVAL_Load56mA              (_DCDC_EM01CTRL0_IPKVAL_Load56mA << 0)          /**< Shifted mode Load56mA for DCDC_EM01CTRL0    */
#define DCDC_EM01CTRL0_IPKVAL_Load60mA              (_DCDC_EM01CTRL0_IPKVAL_Load60mA << 0)          /**< Shifted mode Load60mA for DCDC_EM01CTRL0    */
#define _DCDC_EM01CTRL0_DRVSPEED_SHIFT              8                                               /**< Shift value for DCDC_DRVSPEED               */
#define _DCDC_EM01CTRL0_DRVSPEED_MASK               0x300UL                                         /**< Bit mask for DCDC_DRVSPEED                  */
#define _DCDC_EM01CTRL0_DRVSPEED_DEFAULT            0x00000001UL                                    /**< Mode DEFAULT for DCDC_EM01CTRL0             */
#define _DCDC_EM01CTRL0_DRVSPEED_BEST_EMI           0x00000000UL                                    /**< Mode BEST_EMI for DCDC_EM01CTRL0            */
#define _DCDC_EM01CTRL0_DRVSPEED_DEFAULT_SETTING    0x00000001UL                                    /**< Mode DEFAULT_SETTING for DCDC_EM01CTRL0     */
#define _DCDC_EM01CTRL0_DRVSPEED_INTERMEDIATE       0x00000002UL                                    /**< Mode INTERMEDIATE for DCDC_EM01CTRL0        */
#define _DCDC_EM01CTRL0_DRVSPEED_BEST_EFFICIENCY    0x00000003UL                                    /**< Mode BEST_EFFICIENCY for DCDC_EM01CTRL0     */
#define DCDC_EM01CTRL0_DRVSPEED_DEFAULT             (_DCDC_EM01CTRL0_DRVSPEED_DEFAULT << 8)         /**< Shifted mode DEFAULT for DCDC_EM01CTRL0     */
#define DCDC_EM01CTRL0_DRVSPEED_BEST_EMI            (_DCDC_EM01CTRL0_DRVSPEED_BEST_EMI << 8)        /**< Shifted mode BEST_EMI for DCDC_EM01CTRL0    */
#define DCDC_EM01CTRL0_DRVSPEED_DEFAULT_SETTING     (_DCDC_EM01CTRL0_DRVSPEED_DEFAULT_SETTING << 8) /**< Shifted mode DEFAULT_SETTING for DCDC_EM01CTRL0*/
#define DCDC_EM01CTRL0_DRVSPEED_INTERMEDIATE        (_DCDC_EM01CTRL0_DRVSPEED_INTERMEDIATE << 8)    /**< Shifted mode INTERMEDIATE for DCDC_EM01CTRL0*/
#define DCDC_EM01CTRL0_DRVSPEED_BEST_EFFICIENCY     (_DCDC_EM01CTRL0_DRVSPEED_BEST_EFFICIENCY << 8) /**< Shifted mode BEST_EFFICIENCY for DCDC_EM01CTRL0*/

/* Bit fields for DCDC EM23CTRL0 */
#define _DCDC_EM23CTRL0_RESETVALUE                  0x00000103UL                                    /**< Default value for DCDC_EM23CTRL0            */
#define _DCDC_EM23CTRL0_MASK                        0x0000030FUL                                    /**< Mask for DCDC_EM23CTRL0                     */
#define _DCDC_EM23CTRL0_IPKVAL_SHIFT                0                                               /**< Shift value for DCDC_IPKVAL                 */
#define _DCDC_EM23CTRL0_IPKVAL_MASK                 0xFUL                                           /**< Bit mask for DCDC_IPKVAL                    */
#define _DCDC_EM23CTRL0_IPKVAL_DEFAULT              0x00000003UL                                    /**< Mode DEFAULT for DCDC_EM23CTRL0             */
#define _DCDC_EM23CTRL0_IPKVAL_Load36mA             0x00000003UL                                    /**< Mode Load36mA for DCDC_EM23CTRL0            */
#define _DCDC_EM23CTRL0_IPKVAL_Load40mA             0x00000004UL                                    /**< Mode Load40mA for DCDC_EM23CTRL0            */
#define _DCDC_EM23CTRL0_IPKVAL_Load44mA             0x00000005UL                                    /**< Mode Load44mA for DCDC_EM23CTRL0            */
#define _DCDC_EM23CTRL0_IPKVAL_Load48mA             0x00000006UL                                    /**< Mode Load48mA for DCDC_EM23CTRL0            */
#define _DCDC_EM23CTRL0_IPKVAL_Load52mA             0x00000007UL                                    /**< Mode Load52mA for DCDC_EM23CTRL0            */
#define _DCDC_EM23CTRL0_IPKVAL_Load56mA             0x00000008UL                                    /**< Mode Load56mA for DCDC_EM23CTRL0            */
#define _DCDC_EM23CTRL0_IPKVAL_Load60mA             0x00000009UL                                    /**< Mode Load60mA for DCDC_EM23CTRL0            */
#define DCDC_EM23CTRL0_IPKVAL_DEFAULT               (_DCDC_EM23CTRL0_IPKVAL_DEFAULT << 0)           /**< Shifted mode DEFAULT for DCDC_EM23CTRL0     */
#define DCDC_EM23CTRL0_IPKVAL_Load36mA              (_DCDC_EM23CTRL0_IPKVAL_Load36mA << 0)          /**< Shifted mode Load36mA for DCDC_EM23CTRL0    */
#define DCDC_EM23CTRL0_IPKVAL_Load40mA              (_DCDC_EM23CTRL0_IPKVAL_Load40mA << 0)          /**< Shifted mode Load40mA for DCDC_EM23CTRL0    */
#define DCDC_EM23CTRL0_IPKVAL_Load44mA              (_DCDC_EM23CTRL0_IPKVAL_Load44mA << 0)          /**< Shifted mode Load44mA for DCDC_EM23CTRL0    */
#define DCDC_EM23CTRL0_IPKVAL_Load48mA              (_DCDC_EM23CTRL0_IPKVAL_Load48mA << 0)          /**< Shifted mode Load48mA for DCDC_EM23CTRL0    */
#define DCDC_EM23CTRL0_IPKVAL_Load52mA              (_DCDC_EM23CTRL0_IPKVAL_Load52mA << 0)          /**< Shifted mode Load52mA for DCDC_EM23CTRL0    */
#define DCDC_EM23CTRL0_IPKVAL_Load56mA              (_DCDC_EM23CTRL0_IPKVAL_Load56mA << 0)          /**< Shifted mode Load56mA for DCDC_EM23CTRL0    */
#define DCDC_EM23CTRL0_IPKVAL_Load60mA              (_DCDC_EM23CTRL0_IPKVAL_Load60mA << 0)          /**< Shifted mode Load60mA for DCDC_EM23CTRL0    */
#define _DCDC_EM23CTRL0_DRVSPEED_SHIFT              8                                               /**< Shift value for DCDC_DRVSPEED               */
#define _DCDC_EM23CTRL0_DRVSPEED_MASK               0x300UL                                         /**< Bit mask for DCDC_DRVSPEED                  */
#define _DCDC_EM23CTRL0_DRVSPEED_DEFAULT            0x00000001UL                                    /**< Mode DEFAULT for DCDC_EM23CTRL0             */
#define _DCDC_EM23CTRL0_DRVSPEED_BEST_EMI           0x00000000UL                                    /**< Mode BEST_EMI for DCDC_EM23CTRL0            */
#define _DCDC_EM23CTRL0_DRVSPEED_DEFAULT_SETTING    0x00000001UL                                    /**< Mode DEFAULT_SETTING for DCDC_EM23CTRL0     */
#define _DCDC_EM23CTRL0_DRVSPEED_INTERMEDIATE       0x00000002UL                                    /**< Mode INTERMEDIATE for DCDC_EM23CTRL0        */
#define _DCDC_EM23CTRL0_DRVSPEED_BEST_EFFICIENCY    0x00000003UL                                    /**< Mode BEST_EFFICIENCY for DCDC_EM23CTRL0     */
#define DCDC_EM23CTRL0_DRVSPEED_DEFAULT             (_DCDC_EM23CTRL0_DRVSPEED_DEFAULT << 8)         /**< Shifted mode DEFAULT for DCDC_EM23CTRL0     */
#define DCDC_EM23CTRL0_DRVSPEED_BEST_EMI            (_DCDC_EM23CTRL0_DRVSPEED_BEST_EMI << 8)        /**< Shifted mode BEST_EMI for DCDC_EM23CTRL0    */
#define DCDC_EM23CTRL0_DRVSPEED_DEFAULT_SETTING     (_DCDC_EM23CTRL0_DRVSPEED_DEFAULT_SETTING << 8) /**< Shifted mode DEFAULT_SETTING for DCDC_EM23CTRL0*/
#define DCDC_EM23CTRL0_DRVSPEED_INTERMEDIATE        (_DCDC_EM23CTRL0_DRVSPEED_INTERMEDIATE << 8)    /**< Shifted mode INTERMEDIATE for DCDC_EM23CTRL0*/
#define DCDC_EM23CTRL0_DRVSPEED_BEST_EFFICIENCY     (_DCDC_EM23CTRL0_DRVSPEED_BEST_EFFICIENCY << 8) /**< Shifted mode BEST_EFFICIENCY for DCDC_EM23CTRL0*/

/* Bit fields for DCDC PFMXCTRL */
#define _DCDC_PFMXCTRL_RESETVALUE                   0x00000B0CUL                              /**< Default value for DCDC_PFMXCTRL             */
#define _DCDC_PFMXCTRL_MASK                         0x00001F0FUL                              /**< Mask for DCDC_PFMXCTRL                      */
#define _DCDC_PFMXCTRL_IPKVAL_SHIFT                 0                                         /**< Shift value for DCDC_IPKVAL                 */
#define _DCDC_PFMXCTRL_IPKVAL_MASK                  0xFUL                                     /**< Bit mask for DCDC_IPKVAL                    */
#define _DCDC_PFMXCTRL_IPKVAL_DEFAULT               0x0000000CUL                              /**< Mode DEFAULT for DCDC_PFMXCTRL              */
#define DCDC_PFMXCTRL_IPKVAL_DEFAULT                (_DCDC_PFMXCTRL_IPKVAL_DEFAULT << 0)      /**< Shifted mode DEFAULT for DCDC_PFMXCTRL      */
#define _DCDC_PFMXCTRL_IPKTMAXCTRL_SHIFT            8                                         /**< Shift value for DCDC_IPKTMAXCTRL            */
#define _DCDC_PFMXCTRL_IPKTMAXCTRL_MASK             0x1F00UL                                  /**< Bit mask for DCDC_IPKTMAXCTRL               */
#define _DCDC_PFMXCTRL_IPKTMAXCTRL_DEFAULT          0x0000000BUL                              /**< Mode DEFAULT for DCDC_PFMXCTRL              */
#define DCDC_PFMXCTRL_IPKTMAXCTRL_DEFAULT           (_DCDC_PFMXCTRL_IPKTMAXCTRL_DEFAULT << 8) /**< Shifted mode DEFAULT for DCDC_PFMXCTRL      */

/* Bit fields for DCDC IF */
#define _DCDC_IF_RESETVALUE                         0x00000000UL                        /**< Default value for DCDC_IF                   */
#define _DCDC_IF_MASK                               0x000003FFUL                        /**< Mask for DCDC_IF                            */
#define DCDC_IF_BYPSW                               (0x1UL << 0)                        /**< Bypass Switch Enabled                       */
#define _DCDC_IF_BYPSW_SHIFT                        0                                   /**< Shift value for DCDC_BYPSW                  */
#define _DCDC_IF_BYPSW_MASK                         0x1UL                               /**< Bit mask for DCDC_BYPSW                     */
#define _DCDC_IF_BYPSW_DEFAULT                      0x00000000UL                        /**< Mode DEFAULT for DCDC_IF                    */
#define DCDC_IF_BYPSW_DEFAULT                       (_DCDC_IF_BYPSW_DEFAULT << 0)       /**< Shifted mode DEFAULT for DCDC_IF            */
#define DCDC_IF_WARM                                (0x1UL << 1)                        /**< DCDC Warmup Time Done                       */
#define _DCDC_IF_WARM_SHIFT                         1                                   /**< Shift value for DCDC_WARM                   */
#define _DCDC_IF_WARM_MASK                          0x2UL                               /**< Bit mask for DCDC_WARM                      */
#define _DCDC_IF_WARM_DEFAULT                       0x00000000UL                        /**< Mode DEFAULT for DCDC_IF                    */
#define DCDC_IF_WARM_DEFAULT                        (_DCDC_IF_WARM_DEFAULT << 1)        /**< Shifted mode DEFAULT for DCDC_IF            */
#define DCDC_IF_RUNNING                             (0x1UL << 2)                        /**< DCDC Running                                */
#define _DCDC_IF_RUNNING_SHIFT                      2                                   /**< Shift value for DCDC_RUNNING                */
#define _DCDC_IF_RUNNING_MASK                       0x4UL                               /**< Bit mask for DCDC_RUNNING                   */
#define _DCDC_IF_RUNNING_DEFAULT                    0x00000000UL                        /**< Mode DEFAULT for DCDC_IF                    */
#define DCDC_IF_RUNNING_DEFAULT                     (_DCDC_IF_RUNNING_DEFAULT << 2)     /**< Shifted mode DEFAULT for DCDC_IF            */
#define DCDC_IF_VREGINLOW                           (0x1UL << 3)                        /**< VREGIN below threshold                      */
#define _DCDC_IF_VREGINLOW_SHIFT                    3                                   /**< Shift value for DCDC_VREGINLOW              */
#define _DCDC_IF_VREGINLOW_MASK                     0x8UL                               /**< Bit mask for DCDC_VREGINLOW                 */
#define _DCDC_IF_VREGINLOW_DEFAULT                  0x00000000UL                        /**< Mode DEFAULT for DCDC_IF                    */
#define DCDC_IF_VREGINLOW_DEFAULT                   (_DCDC_IF_VREGINLOW_DEFAULT << 3)   /**< Shifted mode DEFAULT for DCDC_IF            */
#define DCDC_IF_VREGINHIGH                          (0x1UL << 4)                        /**< VREGIN above threshold                      */
#define _DCDC_IF_VREGINHIGH_SHIFT                   4                                   /**< Shift value for DCDC_VREGINHIGH             */
#define _DCDC_IF_VREGINHIGH_MASK                    0x10UL                              /**< Bit mask for DCDC_VREGINHIGH                */
#define _DCDC_IF_VREGINHIGH_DEFAULT                 0x00000000UL                        /**< Mode DEFAULT for DCDC_IF                    */
#define DCDC_IF_VREGINHIGH_DEFAULT                  (_DCDC_IF_VREGINHIGH_DEFAULT << 4)  /**< Shifted mode DEFAULT for DCDC_IF            */
#define DCDC_IF_REGULATION                          (0x1UL << 5)                        /**< DCDC in regulation                          */
#define _DCDC_IF_REGULATION_SHIFT                   5                                   /**< Shift value for DCDC_REGULATION             */
#define _DCDC_IF_REGULATION_MASK                    0x20UL                              /**< Bit mask for DCDC_REGULATION                */
#define _DCDC_IF_REGULATION_DEFAULT                 0x00000000UL                        /**< Mode DEFAULT for DCDC_IF                    */
#define DCDC_IF_REGULATION_DEFAULT                  (_DCDC_IF_REGULATION_DEFAULT << 5)  /**< Shifted mode DEFAULT for DCDC_IF            */
#define DCDC_IF_TMAX                                (0x1UL << 6)                        /**< Ton_max Timeout Reached                     */
#define _DCDC_IF_TMAX_SHIFT                         6                                   /**< Shift value for DCDC_TMAX                   */
#define _DCDC_IF_TMAX_MASK                          0x40UL                              /**< Bit mask for DCDC_TMAX                      */
#define _DCDC_IF_TMAX_DEFAULT                       0x00000000UL                        /**< Mode DEFAULT for DCDC_IF                    */
#define DCDC_IF_TMAX_DEFAULT                        (_DCDC_IF_TMAX_DEFAULT << 6)        /**< Shifted mode DEFAULT for DCDC_IF            */
#define DCDC_IF_EM4ERR                              (0x1UL << 7)                        /**< EM4 Entry Request Error                     */
#define _DCDC_IF_EM4ERR_SHIFT                       7                                   /**< Shift value for DCDC_EM4ERR                 */
#define _DCDC_IF_EM4ERR_MASK                        0x80UL                              /**< Bit mask for DCDC_EM4ERR                    */
#define _DCDC_IF_EM4ERR_DEFAULT                     0x00000000UL                        /**< Mode DEFAULT for DCDC_IF                    */
#define DCDC_IF_EM4ERR_DEFAULT                      (_DCDC_IF_EM4ERR_DEFAULT << 7)      /**< Shifted mode DEFAULT for DCDC_IF            */
#define DCDC_IF_PPMODE                              (0x1UL << 8)                        /**< Entered Pulse Pairing mode                  */
#define _DCDC_IF_PPMODE_SHIFT                       8                                   /**< Shift value for DCDC_PPMODE                 */
#define _DCDC_IF_PPMODE_MASK                        0x100UL                             /**< Bit mask for DCDC_PPMODE                    */
#define _DCDC_IF_PPMODE_DEFAULT                     0x00000000UL                        /**< Mode DEFAULT for DCDC_IF                    */
#define DCDC_IF_PPMODE_DEFAULT                      (_DCDC_IF_PPMODE_DEFAULT << 8)      /**< Shifted mode DEFAULT for DCDC_IF            */
#define DCDC_IF_PFMXMODE                            (0x1UL << 9)                        /**< Entered PFMX mode                           */
#define _DCDC_IF_PFMXMODE_SHIFT                     9                                   /**< Shift value for DCDC_PFMXMODE               */
#define _DCDC_IF_PFMXMODE_MASK                      0x200UL                             /**< Bit mask for DCDC_PFMXMODE                  */
#define _DCDC_IF_PFMXMODE_DEFAULT                   0x00000000UL                        /**< Mode DEFAULT for DCDC_IF                    */
#define DCDC_IF_PFMXMODE_DEFAULT                    (_DCDC_IF_PFMXMODE_DEFAULT << 9)    /**< Shifted mode DEFAULT for DCDC_IF            */

/* Bit fields for DCDC IEN */
#define _DCDC_IEN_RESETVALUE                        0x00000000UL                        /**< Default value for DCDC_IEN                  */
#define _DCDC_IEN_MASK                              0x000003FFUL                        /**< Mask for DCDC_IEN                           */
#define DCDC_IEN_BYPSW                              (0x1UL << 0)                        /**< Bypass Switch Enabled Interrupt Enable      */
#define _DCDC_IEN_BYPSW_SHIFT                       0                                   /**< Shift value for DCDC_BYPSW                  */
#define _DCDC_IEN_BYPSW_MASK                        0x1UL                               /**< Bit mask for DCDC_BYPSW                     */
#define _DCDC_IEN_BYPSW_DEFAULT                     0x00000000UL                        /**< Mode DEFAULT for DCDC_IEN                   */
#define DCDC_IEN_BYPSW_DEFAULT                      (_DCDC_IEN_BYPSW_DEFAULT << 0)      /**< Shifted mode DEFAULT for DCDC_IEN           */
#define DCDC_IEN_WARM                               (0x1UL << 1)                        /**< DCDC Warmup Time Done Interrupt Enable      */
#define _DCDC_IEN_WARM_SHIFT                        1                                   /**< Shift value for DCDC_WARM                   */
#define _DCDC_IEN_WARM_MASK                         0x2UL                               /**< Bit mask for DCDC_WARM                      */
#define _DCDC_IEN_WARM_DEFAULT                      0x00000000UL                        /**< Mode DEFAULT for DCDC_IEN                   */
#define DCDC_IEN_WARM_DEFAULT                       (_DCDC_IEN_WARM_DEFAULT << 1)       /**< Shifted mode DEFAULT for DCDC_IEN           */
#define DCDC_IEN_RUNNING                            (0x1UL << 2)                        /**< DCDC Running Interrupt Enable               */
#define _DCDC_IEN_RUNNING_SHIFT                     2                                   /**< Shift value for DCDC_RUNNING                */
#define _DCDC_IEN_RUNNING_MASK                      0x4UL                               /**< Bit mask for DCDC_RUNNING                   */
#define _DCDC_IEN_RUNNING_DEFAULT                   0x00000000UL                        /**< Mode DEFAULT for DCDC_IEN                   */
#define DCDC_IEN_RUNNING_DEFAULT                    (_DCDC_IEN_RUNNING_DEFAULT << 2)    /**< Shifted mode DEFAULT for DCDC_IEN           */
#define DCDC_IEN_VREGINLOW                          (0x1UL << 3)                        /**< VREGIN below threshold Interrupt Enable     */
#define _DCDC_IEN_VREGINLOW_SHIFT                   3                                   /**< Shift value for DCDC_VREGINLOW              */
#define _DCDC_IEN_VREGINLOW_MASK                    0x8UL                               /**< Bit mask for DCDC_VREGINLOW                 */
#define _DCDC_IEN_VREGINLOW_DEFAULT                 0x00000000UL                        /**< Mode DEFAULT for DCDC_IEN                   */
#define DCDC_IEN_VREGINLOW_DEFAULT                  (_DCDC_IEN_VREGINLOW_DEFAULT << 3)  /**< Shifted mode DEFAULT for DCDC_IEN           */
#define DCDC_IEN_VREGINHIGH                         (0x1UL << 4)                        /**< VREGIN above threshold Interrupt Enable     */
#define _DCDC_IEN_VREGINHIGH_SHIFT                  4                                   /**< Shift value for DCDC_VREGINHIGH             */
#define _DCDC_IEN_VREGINHIGH_MASK                   0x10UL                              /**< Bit mask for DCDC_VREGINHIGH                */
#define _DCDC_IEN_VREGINHIGH_DEFAULT                0x00000000UL                        /**< Mode DEFAULT for DCDC_IEN                   */
#define DCDC_IEN_VREGINHIGH_DEFAULT                 (_DCDC_IEN_VREGINHIGH_DEFAULT << 4) /**< Shifted mode DEFAULT for DCDC_IEN           */
#define DCDC_IEN_REGULATION                         (0x1UL << 5)                        /**< DCDC in Regulation Interrupt Enable         */
#define _DCDC_IEN_REGULATION_SHIFT                  5                                   /**< Shift value for DCDC_REGULATION             */
#define _DCDC_IEN_REGULATION_MASK                   0x20UL                              /**< Bit mask for DCDC_REGULATION                */
#define _DCDC_IEN_REGULATION_DEFAULT                0x00000000UL                        /**< Mode DEFAULT for DCDC_IEN                   */
#define DCDC_IEN_REGULATION_DEFAULT                 (_DCDC_IEN_REGULATION_DEFAULT << 5) /**< Shifted mode DEFAULT for DCDC_IEN           */
#define DCDC_IEN_TMAX                               (0x1UL << 6)                        /**< Ton_max Timeout Interrupt Enable            */
#define _DCDC_IEN_TMAX_SHIFT                        6                                   /**< Shift value for DCDC_TMAX                   */
#define _DCDC_IEN_TMAX_MASK                         0x40UL                              /**< Bit mask for DCDC_TMAX                      */
#define _DCDC_IEN_TMAX_DEFAULT                      0x00000000UL                        /**< Mode DEFAULT for DCDC_IEN                   */
#define DCDC_IEN_TMAX_DEFAULT                       (_DCDC_IEN_TMAX_DEFAULT << 6)       /**< Shifted mode DEFAULT for DCDC_IEN           */
#define DCDC_IEN_EM4ERR                             (0x1UL << 7)                        /**< EM4 Entry Req Interrupt Enable              */
#define _DCDC_IEN_EM4ERR_SHIFT                      7                                   /**< Shift value for DCDC_EM4ERR                 */
#define _DCDC_IEN_EM4ERR_MASK                       0x80UL                              /**< Bit mask for DCDC_EM4ERR                    */
#define _DCDC_IEN_EM4ERR_DEFAULT                    0x00000000UL                        /**< Mode DEFAULT for DCDC_IEN                   */
#define DCDC_IEN_EM4ERR_DEFAULT                     (_DCDC_IEN_EM4ERR_DEFAULT << 7)     /**< Shifted mode DEFAULT for DCDC_IEN           */
#define DCDC_IEN_PPMODE                             (0x1UL << 8)                        /**< Pulse Pairing Mode Interrupt Enable         */
#define _DCDC_IEN_PPMODE_SHIFT                      8                                   /**< Shift value for DCDC_PPMODE                 */
#define _DCDC_IEN_PPMODE_MASK                       0x100UL                             /**< Bit mask for DCDC_PPMODE                    */
#define _DCDC_IEN_PPMODE_DEFAULT                    0x00000000UL                        /**< Mode DEFAULT for DCDC_IEN                   */
#define DCDC_IEN_PPMODE_DEFAULT                     (_DCDC_IEN_PPMODE_DEFAULT << 8)     /**< Shifted mode DEFAULT for DCDC_IEN           */
#define DCDC_IEN_PFMXMODE                           (0x1UL << 9)                        /**< PFMX Mode Interrupt Enable                  */
#define _DCDC_IEN_PFMXMODE_SHIFT                    9                                   /**< Shift value for DCDC_PFMXMODE               */
#define _DCDC_IEN_PFMXMODE_MASK                     0x200UL                             /**< Bit mask for DCDC_PFMXMODE                  */
#define _DCDC_IEN_PFMXMODE_DEFAULT                  0x00000000UL                        /**< Mode DEFAULT for DCDC_IEN                   */
#define DCDC_IEN_PFMXMODE_DEFAULT                   (_DCDC_IEN_PFMXMODE_DEFAULT << 9)   /**< Shifted mode DEFAULT for DCDC_IEN           */

/* Bit fields for DCDC STATUS */
#define _DCDC_STATUS_RESETVALUE                     0x00000000UL                          /**< Default value for DCDC_STATUS               */
#define _DCDC_STATUS_MASK                           0x0000071FUL                          /**< Mask for DCDC_STATUS                        */
#define DCDC_STATUS_BYPSW                           (0x1UL << 0)                          /**< Bypass Switch is currently enabled          */
#define _DCDC_STATUS_BYPSW_SHIFT                    0                                     /**< Shift value for DCDC_BYPSW                  */
#define _DCDC_STATUS_BYPSW_MASK                     0x1UL                                 /**< Bit mask for DCDC_BYPSW                     */
#define _DCDC_STATUS_BYPSW_DEFAULT                  0x00000000UL                          /**< Mode DEFAULT for DCDC_STATUS                */
#define DCDC_STATUS_BYPSW_DEFAULT                   (_DCDC_STATUS_BYPSW_DEFAULT << 0)     /**< Shifted mode DEFAULT for DCDC_STATUS        */
#define DCDC_STATUS_WARM                            (0x1UL << 1)                          /**< DCDC Warmup Done                            */
#define _DCDC_STATUS_WARM_SHIFT                     1                                     /**< Shift value for DCDC_WARM                   */
#define _DCDC_STATUS_WARM_MASK                      0x2UL                                 /**< Bit mask for DCDC_WARM                      */
#define _DCDC_STATUS_WARM_DEFAULT                   0x00000000UL                          /**< Mode DEFAULT for DCDC_STATUS                */
#define DCDC_STATUS_WARM_DEFAULT                    (_DCDC_STATUS_WARM_DEFAULT << 1)      /**< Shifted mode DEFAULT for DCDC_STATUS        */
#define DCDC_STATUS_RUNNING                         (0x1UL << 2)                          /**< DCDC is running                             */
#define _DCDC_STATUS_RUNNING_SHIFT                  2                                     /**< Shift value for DCDC_RUNNING                */
#define _DCDC_STATUS_RUNNING_MASK                   0x4UL                                 /**< Bit mask for DCDC_RUNNING                   */
#define _DCDC_STATUS_RUNNING_DEFAULT                0x00000000UL                          /**< Mode DEFAULT for DCDC_STATUS                */
#define DCDC_STATUS_RUNNING_DEFAULT                 (_DCDC_STATUS_RUNNING_DEFAULT << 2)   /**< Shifted mode DEFAULT for DCDC_STATUS        */
#define DCDC_STATUS_VREGIN                          (0x1UL << 3)                          /**< VREGIN comparator status                    */
#define _DCDC_STATUS_VREGIN_SHIFT                   3                                     /**< Shift value for DCDC_VREGIN                 */
#define _DCDC_STATUS_VREGIN_MASK                    0x8UL                                 /**< Bit mask for DCDC_VREGIN                    */
#define _DCDC_STATUS_VREGIN_DEFAULT                 0x00000000UL                          /**< Mode DEFAULT for DCDC_STATUS                */
#define DCDC_STATUS_VREGIN_DEFAULT                  (_DCDC_STATUS_VREGIN_DEFAULT << 3)    /**< Shifted mode DEFAULT for DCDC_STATUS        */
#define DCDC_STATUS_BYPCMPOUT                       (0x1UL << 4)                          /**< Bypass Comparator Output                    */
#define _DCDC_STATUS_BYPCMPOUT_SHIFT                4                                     /**< Shift value for DCDC_BYPCMPOUT              */
#define _DCDC_STATUS_BYPCMPOUT_MASK                 0x10UL                                /**< Bit mask for DCDC_BYPCMPOUT                 */
#define _DCDC_STATUS_BYPCMPOUT_DEFAULT              0x00000000UL                          /**< Mode DEFAULT for DCDC_STATUS                */
#define DCDC_STATUS_BYPCMPOUT_DEFAULT               (_DCDC_STATUS_BYPCMPOUT_DEFAULT << 4) /**< Shifted mode DEFAULT for DCDC_STATUS        */
#define DCDC_STATUS_PPMODE                          (0x1UL << 8)                          /**< DCDC in pulse-pairing mode                  */
#define _DCDC_STATUS_PPMODE_SHIFT                   8                                     /**< Shift value for DCDC_PPMODE                 */
#define _DCDC_STATUS_PPMODE_MASK                    0x100UL                               /**< Bit mask for DCDC_PPMODE                    */
#define _DCDC_STATUS_PPMODE_DEFAULT                 0x00000000UL                          /**< Mode DEFAULT for DCDC_STATUS                */
#define DCDC_STATUS_PPMODE_DEFAULT                  (_DCDC_STATUS_PPMODE_DEFAULT << 8)    /**< Shifted mode DEFAULT for DCDC_STATUS        */
#define DCDC_STATUS_PFMXMODE                        (0x1UL << 9)                          /**< DCDC in PFMX mode                           */
#define _DCDC_STATUS_PFMXMODE_SHIFT                 9                                     /**< Shift value for DCDC_PFMXMODE               */
#define _DCDC_STATUS_PFMXMODE_MASK                  0x200UL                               /**< Bit mask for DCDC_PFMXMODE                  */
#define _DCDC_STATUS_PFMXMODE_DEFAULT               0x00000000UL                          /**< Mode DEFAULT for DCDC_STATUS                */
#define DCDC_STATUS_PFMXMODE_DEFAULT                (_DCDC_STATUS_PFMXMODE_DEFAULT << 9)  /**< Shifted mode DEFAULT for DCDC_STATUS        */

/* Bit fields for DCDC SYNCBUSY */
#define _DCDC_SYNCBUSY_RESETVALUE                   0x00000000UL                            /**< Default value for DCDC_SYNCBUSY             */
#define _DCDC_SYNCBUSY_MASK                         0x000000FFUL                            /**< Mask for DCDC_SYNCBUSY                      */
#define DCDC_SYNCBUSY_CTRL                          (0x1UL << 0)                            /**< CTRL Sync Busy Status                       */
#define _DCDC_SYNCBUSY_CTRL_SHIFT                   0                                       /**< Shift value for DCDC_CTRL                   */
#define _DCDC_SYNCBUSY_CTRL_MASK                    0x1UL                                   /**< Bit mask for DCDC_CTRL                      */
#define _DCDC_SYNCBUSY_CTRL_DEFAULT                 0x00000000UL                            /**< Mode DEFAULT for DCDC_SYNCBUSY              */
#define DCDC_SYNCBUSY_CTRL_DEFAULT                  (_DCDC_SYNCBUSY_CTRL_DEFAULT << 0)      /**< Shifted mode DEFAULT for DCDC_SYNCBUSY      */
#define DCDC_SYNCBUSY_EM01CTRL0                     (0x1UL << 1)                            /**< EM01CTRL0 Sync Busy Status                  */
#define _DCDC_SYNCBUSY_EM01CTRL0_SHIFT              1                                       /**< Shift value for DCDC_EM01CTRL0              */
#define _DCDC_SYNCBUSY_EM01CTRL0_MASK               0x2UL                                   /**< Bit mask for DCDC_EM01CTRL0                 */
#define _DCDC_SYNCBUSY_EM01CTRL0_DEFAULT            0x00000000UL                            /**< Mode DEFAULT for DCDC_SYNCBUSY              */
#define DCDC_SYNCBUSY_EM01CTRL0_DEFAULT             (_DCDC_SYNCBUSY_EM01CTRL0_DEFAULT << 1) /**< Shifted mode DEFAULT for DCDC_SYNCBUSY      */
#define DCDC_SYNCBUSY_EM01CTRL1                     (0x1UL << 2)                            /**< EM01CTRL1 Sync Bust Status                  */
#define _DCDC_SYNCBUSY_EM01CTRL1_SHIFT              2                                       /**< Shift value for DCDC_EM01CTRL1              */
#define _DCDC_SYNCBUSY_EM01CTRL1_MASK               0x4UL                                   /**< Bit mask for DCDC_EM01CTRL1                 */
#define _DCDC_SYNCBUSY_EM01CTRL1_DEFAULT            0x00000000UL                            /**< Mode DEFAULT for DCDC_SYNCBUSY              */
#define DCDC_SYNCBUSY_EM01CTRL1_DEFAULT             (_DCDC_SYNCBUSY_EM01CTRL1_DEFAULT << 2) /**< Shifted mode DEFAULT for DCDC_SYNCBUSY      */
#define DCDC_SYNCBUSY_EM23CTRL0                     (0x1UL << 3)                            /**< EM23CTRL0 Sync Busy Status                  */
#define _DCDC_SYNCBUSY_EM23CTRL0_SHIFT              3                                       /**< Shift value for DCDC_EM23CTRL0              */
#define _DCDC_SYNCBUSY_EM23CTRL0_MASK               0x8UL                                   /**< Bit mask for DCDC_EM23CTRL0                 */
#define _DCDC_SYNCBUSY_EM23CTRL0_DEFAULT            0x00000000UL                            /**< Mode DEFAULT for DCDC_SYNCBUSY              */
#define DCDC_SYNCBUSY_EM23CTRL0_DEFAULT             (_DCDC_SYNCBUSY_EM23CTRL0_DEFAULT << 3) /**< Shifted mode DEFAULT for DCDC_SYNCBUSY      */
#define DCDC_SYNCBUSY_PFMXCTRL                      (0x1UL << 7)                            /**< PFMXCTRL Sync Busy Status                   */
#define _DCDC_SYNCBUSY_PFMXCTRL_SHIFT               7                                       /**< Shift value for DCDC_PFMXCTRL               */
#define _DCDC_SYNCBUSY_PFMXCTRL_MASK                0x80UL                                  /**< Bit mask for DCDC_PFMXCTRL                  */
#define _DCDC_SYNCBUSY_PFMXCTRL_DEFAULT             0x00000000UL                            /**< Mode DEFAULT for DCDC_SYNCBUSY              */
#define DCDC_SYNCBUSY_PFMXCTRL_DEFAULT              (_DCDC_SYNCBUSY_PFMXCTRL_DEFAULT << 7)  /**< Shifted mode DEFAULT for DCDC_SYNCBUSY      */

/* Bit fields for DCDC LOCK */
#define _DCDC_LOCK_RESETVALUE                       0x00000000UL                        /**< Default value for DCDC_LOCK                 */
#define _DCDC_LOCK_MASK                             0x0000FFFFUL                        /**< Mask for DCDC_LOCK                          */
#define _DCDC_LOCK_LOCKKEY_SHIFT                    0                                   /**< Shift value for DCDC_LOCKKEY                */
#define _DCDC_LOCK_LOCKKEY_MASK                     0xFFFFUL                            /**< Bit mask for DCDC_LOCKKEY                   */
#define _DCDC_LOCK_LOCKKEY_DEFAULT                  0x00000000UL                        /**< Mode DEFAULT for DCDC_LOCK                  */
#define _DCDC_LOCK_LOCKKEY_UNLOCKKEY                0x0000ABCDUL                        /**< Mode UNLOCKKEY for DCDC_LOCK                */
#define DCDC_LOCK_LOCKKEY_DEFAULT                   (_DCDC_LOCK_LOCKKEY_DEFAULT << 0)   /**< Shifted mode DEFAULT for DCDC_LOCK          */
#define DCDC_LOCK_LOCKKEY_UNLOCKKEY                 (_DCDC_LOCK_LOCKKEY_UNLOCKKEY << 0) /**< Shifted mode UNLOCKKEY for DCDC_LOCK        */

/* Bit fields for DCDC LOCKSTATUS */
#define _DCDC_LOCKSTATUS_RESETVALUE                 0x00000000UL                          /**< Default value for DCDC_LOCKSTATUS           */
#define _DCDC_LOCKSTATUS_MASK                       0x00000001UL                          /**< Mask for DCDC_LOCKSTATUS                    */
#define DCDC_LOCKSTATUS_LOCK                        (0x1UL << 0)                          /**< Lock Status                                 */
#define _DCDC_LOCKSTATUS_LOCK_SHIFT                 0                                     /**< Shift value for DCDC_LOCK                   */
#define _DCDC_LOCKSTATUS_LOCK_MASK                  0x1UL                                 /**< Bit mask for DCDC_LOCK                      */
#define _DCDC_LOCKSTATUS_LOCK_DEFAULT               0x00000000UL                          /**< Mode DEFAULT for DCDC_LOCKSTATUS            */
#define _DCDC_LOCKSTATUS_LOCK_UNLOCKED              0x00000000UL                          /**< Mode UNLOCKED for DCDC_LOCKSTATUS           */
#define _DCDC_LOCKSTATUS_LOCK_LOCKED                0x00000001UL                          /**< Mode LOCKED for DCDC_LOCKSTATUS             */
#define DCDC_LOCKSTATUS_LOCK_DEFAULT                (_DCDC_LOCKSTATUS_LOCK_DEFAULT << 0)  /**< Shifted mode DEFAULT for DCDC_LOCKSTATUS    */
#define DCDC_LOCKSTATUS_LOCK_UNLOCKED               (_DCDC_LOCKSTATUS_LOCK_UNLOCKED << 0) /**< Shifted mode UNLOCKED for DCDC_LOCKSTATUS   */
#define DCDC_LOCKSTATUS_LOCK_LOCKED                 (_DCDC_LOCKSTATUS_LOCK_LOCKED << 0)   /**< Shifted mode LOCKED for DCDC_LOCKSTATUS     */

/* Bit fields for DCDC RPURATD0 */
#define _DCDC_RPURATD0_RESETVALUE                   0x00000000UL                                    /**< Default value for DCDC_RPURATD0             */
#define _DCDC_RPURATD0_MASK                         0xF0F10FFEUL                                    /**< Mask for DCDC_RPURATD0                      */
#define DCDC_RPURATD0_RATDCTRL                      (0x1UL << 1)                                    /**< CTRL Protection Bit                         */
#define _DCDC_RPURATD0_RATDCTRL_SHIFT               1                                               /**< Shift value for DCDC_RATDCTRL               */
#define _DCDC_RPURATD0_RATDCTRL_MASK                0x2UL                                           /**< Bit mask for DCDC_RATDCTRL                  */
#define _DCDC_RPURATD0_RATDCTRL_DEFAULT             0x00000000UL                                    /**< Mode DEFAULT for DCDC_RPURATD0              */
#define DCDC_RPURATD0_RATDCTRL_DEFAULT              (_DCDC_RPURATD0_RATDCTRL_DEFAULT << 1)          /**< Shifted mode DEFAULT for DCDC_RPURATD0      */
#define DCDC_RPURATD0_RATDEM01CTRL0                 (0x1UL << 2)                                    /**< EM01CTRL0 Protection Bit                    */
#define _DCDC_RPURATD0_RATDEM01CTRL0_SHIFT          2                                               /**< Shift value for DCDC_RATDEM01CTRL0          */
#define _DCDC_RPURATD0_RATDEM01CTRL0_MASK           0x4UL                                           /**< Bit mask for DCDC_RATDEM01CTRL0             */
#define _DCDC_RPURATD0_RATDEM01CTRL0_DEFAULT        0x00000000UL                                    /**< Mode DEFAULT for DCDC_RPURATD0              */
#define DCDC_RPURATD0_RATDEM01CTRL0_DEFAULT         (_DCDC_RPURATD0_RATDEM01CTRL0_DEFAULT << 2)     /**< Shifted mode DEFAULT for DCDC_RPURATD0      */
#define DCDC_RPURATD0_RATDIZCTRL                    (0x1UL << 3)                                    /**< IZCTRL Protection Bit                       */
#define _DCDC_RPURATD0_RATDIZCTRL_SHIFT             3                                               /**< Shift value for DCDC_RATDIZCTRL             */
#define _DCDC_RPURATD0_RATDIZCTRL_MASK              0x8UL                                           /**< Bit mask for DCDC_RATDIZCTRL                */
#define _DCDC_RPURATD0_RATDIZCTRL_DEFAULT           0x00000000UL                                    /**< Mode DEFAULT for DCDC_RPURATD0              */
#define DCDC_RPURATD0_RATDIZCTRL_DEFAULT            (_DCDC_RPURATD0_RATDIZCTRL_DEFAULT << 3)        /**< Shifted mode DEFAULT for DCDC_RPURATD0      */
#define DCDC_RPURATD0_RATDEM23CTRL0                 (0x1UL << 4)                                    /**< EM23CTRL0 Protection Bit                    */
#define _DCDC_RPURATD0_RATDEM23CTRL0_SHIFT          4                                               /**< Shift value for DCDC_RATDEM23CTRL0          */
#define _DCDC_RPURATD0_RATDEM23CTRL0_MASK           0x10UL                                          /**< Bit mask for DCDC_RATDEM23CTRL0             */
#define _DCDC_RPURATD0_RATDEM23CTRL0_DEFAULT        0x00000000UL                                    /**< Mode DEFAULT for DCDC_RPURATD0              */
#define DCDC_RPURATD0_RATDEM23CTRL0_DEFAULT         (_DCDC_RPURATD0_RATDEM23CTRL0_DEFAULT << 4)     /**< Shifted mode DEFAULT for DCDC_RPURATD0      */
#define DCDC_RPURATD0_RATDEM01CTRL1                 (0x1UL << 5)                                    /**< EM01CTRL1 Protection Bit                    */
#define _DCDC_RPURATD0_RATDEM01CTRL1_SHIFT          5                                               /**< Shift value for DCDC_RATDEM01CTRL1          */
#define _DCDC_RPURATD0_RATDEM01CTRL1_MASK           0x20UL                                          /**< Bit mask for DCDC_RATDEM01CTRL1             */
#define _DCDC_RPURATD0_RATDEM01CTRL1_DEFAULT        0x00000000UL                                    /**< Mode DEFAULT for DCDC_RPURATD0              */
#define DCDC_RPURATD0_RATDEM01CTRL1_DEFAULT         (_DCDC_RPURATD0_RATDEM01CTRL1_DEFAULT << 5)     /**< Shifted mode DEFAULT for DCDC_RPURATD0      */
#define DCDC_RPURATD0_RATDEM23CTRL1                 (0x1UL << 6)                                    /**< EM23CTRL1 Protection Bit                    */
#define _DCDC_RPURATD0_RATDEM23CTRL1_SHIFT          6                                               /**< Shift value for DCDC_RATDEM23CTRL1          */
#define _DCDC_RPURATD0_RATDEM23CTRL1_MASK           0x40UL                                          /**< Bit mask for DCDC_RATDEM23CTRL1             */
#define _DCDC_RPURATD0_RATDEM23CTRL1_DEFAULT        0x00000000UL                                    /**< Mode DEFAULT for DCDC_RPURATD0              */
#define DCDC_RPURATD0_RATDEM23CTRL1_DEFAULT         (_DCDC_RPURATD0_RATDEM23CTRL1_DEFAULT << 6)     /**< Shifted mode DEFAULT for DCDC_RPURATD0      */
#define DCDC_RPURATD0_RATDPPCFG                     (0x1UL << 7)                                    /**< PPCFG Protection Bit                        */
#define _DCDC_RPURATD0_RATDPPCFG_SHIFT              7                                               /**< Shift value for DCDC_RATDPPCFG              */
#define _DCDC_RPURATD0_RATDPPCFG_MASK               0x80UL                                          /**< Bit mask for DCDC_RATDPPCFG                 */
#define _DCDC_RPURATD0_RATDPPCFG_DEFAULT            0x00000000UL                                    /**< Mode DEFAULT for DCDC_RPURATD0              */
#define DCDC_RPURATD0_RATDPPCFG_DEFAULT             (_DCDC_RPURATD0_RATDPPCFG_DEFAULT << 7)         /**< Shifted mode DEFAULT for DCDC_RPURATD0      */
#define DCDC_RPURATD0_RATDPFMXCTRL                  (0x1UL << 8)                                    /**< PFMXCTRL Protection Bit                     */
#define _DCDC_RPURATD0_RATDPFMXCTRL_SHIFT           8                                               /**< Shift value for DCDC_RATDPFMXCTRL           */
#define _DCDC_RPURATD0_RATDPFMXCTRL_MASK            0x100UL                                         /**< Bit mask for DCDC_RATDPFMXCTRL              */
#define _DCDC_RPURATD0_RATDPFMXCTRL_DEFAULT         0x00000000UL                                    /**< Mode DEFAULT for DCDC_RPURATD0              */
#define DCDC_RPURATD0_RATDPFMXCTRL_DEFAULT          (_DCDC_RPURATD0_RATDPFMXCTRL_DEFAULT << 8)      /**< Shifted mode DEFAULT for DCDC_RPURATD0      */
#define DCDC_RPURATD0_RATDTRANSCFG                  (0x1UL << 9)                                    /**< TRANSCFG Protection Bit                     */
#define _DCDC_RPURATD0_RATDTRANSCFG_SHIFT           9                                               /**< Shift value for DCDC_RATDTRANSCFG           */
#define _DCDC_RPURATD0_RATDTRANSCFG_MASK            0x200UL                                         /**< Bit mask for DCDC_RATDTRANSCFG              */
#define _DCDC_RPURATD0_RATDTRANSCFG_DEFAULT         0x00000000UL                                    /**< Mode DEFAULT for DCDC_RPURATD0              */
#define DCDC_RPURATD0_RATDTRANSCFG_DEFAULT          (_DCDC_RPURATD0_RATDTRANSCFG_DEFAULT << 9)      /**< Shifted mode DEFAULT for DCDC_RPURATD0      */
#define DCDC_RPURATD0_RATDIF                        (0x1UL << 10)                                   /**< IF Protection Bit                           */
#define _DCDC_RPURATD0_RATDIF_SHIFT                 10                                              /**< Shift value for DCDC_RATDIF                 */
#define _DCDC_RPURATD0_RATDIF_MASK                  0x400UL                                         /**< Bit mask for DCDC_RATDIF                    */
#define _DCDC_RPURATD0_RATDIF_DEFAULT               0x00000000UL                                    /**< Mode DEFAULT for DCDC_RPURATD0              */
#define DCDC_RPURATD0_RATDIF_DEFAULT                (_DCDC_RPURATD0_RATDIF_DEFAULT << 10)           /**< Shifted mode DEFAULT for DCDC_RPURATD0      */
#define DCDC_RPURATD0_RATDIEN                       (0x1UL << 11)                                   /**< IEN Protection Bit                          */
#define _DCDC_RPURATD0_RATDIEN_SHIFT                11                                              /**< Shift value for DCDC_RATDIEN                */
#define _DCDC_RPURATD0_RATDIEN_MASK                 0x800UL                                         /**< Bit mask for DCDC_RATDIEN                   */
#define _DCDC_RPURATD0_RATDIEN_DEFAULT              0x00000000UL                                    /**< Mode DEFAULT for DCDC_RPURATD0              */
#define DCDC_RPURATD0_RATDIEN_DEFAULT               (_DCDC_RPURATD0_RATDIEN_DEFAULT << 11)          /**< Shifted mode DEFAULT for DCDC_RPURATD0      */
#define DCDC_RPURATD0_RATDLOCK                      (0x1UL << 16)                                   /**< LOCK Protection Bit                         */
#define _DCDC_RPURATD0_RATDLOCK_SHIFT               16                                              /**< Shift value for DCDC_RATDLOCK               */
#define _DCDC_RPURATD0_RATDLOCK_MASK                0x10000UL                                       /**< Bit mask for DCDC_RATDLOCK                  */
#define _DCDC_RPURATD0_RATDLOCK_DEFAULT             0x00000000UL                                    /**< Mode DEFAULT for DCDC_RPURATD0              */
#define DCDC_RPURATD0_RATDLOCK_DEFAULT              (_DCDC_RPURATD0_RATDLOCK_DEFAULT << 16)         /**< Shifted mode DEFAULT for DCDC_RPURATD0      */
#define DCDC_RPURATD0_RATDTRIM0                     (0x1UL << 20)                                   /**< TRIM0 Protection Bit                        */
#define _DCDC_RPURATD0_RATDTRIM0_SHIFT              20                                              /**< Shift value for DCDC_RATDTRIM0              */
#define _DCDC_RPURATD0_RATDTRIM0_MASK               0x100000UL                                      /**< Bit mask for DCDC_RATDTRIM0                 */
#define _DCDC_RPURATD0_RATDTRIM0_DEFAULT            0x00000000UL                                    /**< Mode DEFAULT for DCDC_RPURATD0              */
#define DCDC_RPURATD0_RATDTRIM0_DEFAULT             (_DCDC_RPURATD0_RATDTRIM0_DEFAULT << 20)        /**< Shifted mode DEFAULT for DCDC_RPURATD0      */
#define DCDC_RPURATD0_RATDTRIM1                     (0x1UL << 21)                                   /**< TRIM1 Protection Bit                        */
#define _DCDC_RPURATD0_RATDTRIM1_SHIFT              21                                              /**< Shift value for DCDC_RATDTRIM1              */
#define _DCDC_RPURATD0_RATDTRIM1_MASK               0x200000UL                                      /**< Bit mask for DCDC_RATDTRIM1                 */
#define _DCDC_RPURATD0_RATDTRIM1_DEFAULT            0x00000000UL                                    /**< Mode DEFAULT for DCDC_RPURATD0              */
#define DCDC_RPURATD0_RATDTRIM1_DEFAULT             (_DCDC_RPURATD0_RATDTRIM1_DEFAULT << 21)        /**< Shifted mode DEFAULT for DCDC_RPURATD0      */
#define DCDC_RPURATD0_RATDTRIM2                     (0x1UL << 22)                                   /**< TRIM2 Protection Bit                        */
#define _DCDC_RPURATD0_RATDTRIM2_SHIFT              22                                              /**< Shift value for DCDC_RATDTRIM2              */
#define _DCDC_RPURATD0_RATDTRIM2_MASK               0x400000UL                                      /**< Bit mask for DCDC_RATDTRIM2                 */
#define _DCDC_RPURATD0_RATDTRIM2_DEFAULT            0x00000000UL                                    /**< Mode DEFAULT for DCDC_RPURATD0              */
#define DCDC_RPURATD0_RATDTRIM2_DEFAULT             (_DCDC_RPURATD0_RATDTRIM2_DEFAULT << 22)        /**< Shifted mode DEFAULT for DCDC_RPURATD0      */
#define DCDC_RPURATD0_RATDCFG                       (0x1UL << 23)                                   /**< CFG Protection Bit                          */
#define _DCDC_RPURATD0_RATDCFG_SHIFT                23                                              /**< Shift value for DCDC_RATDCFG                */
#define _DCDC_RPURATD0_RATDCFG_MASK                 0x800000UL                                      /**< Bit mask for DCDC_RATDCFG                   */
#define _DCDC_RPURATD0_RATDCFG_DEFAULT              0x00000000UL                                    /**< Mode DEFAULT for DCDC_RPURATD0              */
#define DCDC_RPURATD0_RATDCFG_DEFAULT               (_DCDC_RPURATD0_RATDCFG_DEFAULT << 23)          /**< Shifted mode DEFAULT for DCDC_RPURATD0      */
#define DCDC_RPURATD0_RATDDCDCFORCE                 (0x1UL << 28)                                   /**< DCDCFORCE Protection Bit                    */
#define _DCDC_RPURATD0_RATDDCDCFORCE_SHIFT          28                                              /**< Shift value for DCDC_RATDDCDCFORCE          */
#define _DCDC_RPURATD0_RATDDCDCFORCE_MASK           0x10000000UL                                    /**< Bit mask for DCDC_RATDDCDCFORCE             */
#define _DCDC_RPURATD0_RATDDCDCFORCE_DEFAULT        0x00000000UL                                    /**< Mode DEFAULT for DCDC_RPURATD0              */
#define DCDC_RPURATD0_RATDDCDCFORCE_DEFAULT         (_DCDC_RPURATD0_RATDDCDCFORCE_DEFAULT << 28)    /**< Shifted mode DEFAULT for DCDC_RPURATD0      */
#define DCDC_RPURATD0_RATDDBUSTEST                  (0x1UL << 29)                                   /**< DBUSTEST Protection Bit                     */
#define _DCDC_RPURATD0_RATDDBUSTEST_SHIFT           29                                              /**< Shift value for DCDC_RATDDBUSTEST           */
#define _DCDC_RPURATD0_RATDDBUSTEST_MASK            0x20000000UL                                    /**< Bit mask for DCDC_RATDDBUSTEST              */
#define _DCDC_RPURATD0_RATDDBUSTEST_DEFAULT         0x00000000UL                                    /**< Mode DEFAULT for DCDC_RPURATD0              */
#define DCDC_RPURATD0_RATDDBUSTEST_DEFAULT          (_DCDC_RPURATD0_RATDDBUSTEST_DEFAULT << 29)     /**< Shifted mode DEFAULT for DCDC_RPURATD0      */
#define DCDC_RPURATD0_RATDDCDCVCMPTEST              (0x1UL << 30)                                   /**< DCDCVCMPTEST Protection Bit                 */
#define _DCDC_RPURATD0_RATDDCDCVCMPTEST_SHIFT       30                                              /**< Shift value for DCDC_RATDDCDCVCMPTEST       */
#define _DCDC_RPURATD0_RATDDCDCVCMPTEST_MASK        0x40000000UL                                    /**< Bit mask for DCDC_RATDDCDCVCMPTEST          */
#define _DCDC_RPURATD0_RATDDCDCVCMPTEST_DEFAULT     0x00000000UL                                    /**< Mode DEFAULT for DCDC_RPURATD0              */
#define DCDC_RPURATD0_RATDDCDCVCMPTEST_DEFAULT      (_DCDC_RPURATD0_RATDDCDCVCMPTEST_DEFAULT << 30) /**< Shifted mode DEFAULT for DCDC_RPURATD0      */
#define DCDC_RPURATD0_RATDIZCTEST                   (0x1UL << 31)                                   /**< IZCTEST Protection Bit                      */
#define _DCDC_RPURATD0_RATDIZCTEST_SHIFT            31                                              /**< Shift value for DCDC_RATDIZCTEST            */
#define _DCDC_RPURATD0_RATDIZCTEST_MASK             0x80000000UL                                    /**< Bit mask for DCDC_RATDIZCTEST               */
#define _DCDC_RPURATD0_RATDIZCTEST_DEFAULT          0x00000000UL                                    /**< Mode DEFAULT for DCDC_RPURATD0              */
#define DCDC_RPURATD0_RATDIZCTEST_DEFAULT           (_DCDC_RPURATD0_RATDIZCTEST_DEFAULT << 31)      /**< Shifted mode DEFAULT for DCDC_RPURATD0      */

/* Bit fields for DCDC RPURATD1 */
#define _DCDC_RPURATD1_RESETVALUE                   0x00000000UL                               /**< Default value for DCDC_RPURATD1             */
#define _DCDC_RPURATD1_MASK                         0x00000001UL                               /**< Mask for DCDC_RPURATD1                      */
#define DCDC_RPURATD1_RATDDCDCTEST                  (0x1UL << 0)                               /**< DCDCTEST Protection Bit                     */
#define _DCDC_RPURATD1_RATDDCDCTEST_SHIFT           0                                          /**< Shift value for DCDC_RATDDCDCTEST           */
#define _DCDC_RPURATD1_RATDDCDCTEST_MASK            0x1UL                                      /**< Bit mask for DCDC_RATDDCDCTEST              */
#define _DCDC_RPURATD1_RATDDCDCTEST_DEFAULT         0x00000000UL                               /**< Mode DEFAULT for DCDC_RPURATD1              */
#define DCDC_RPURATD1_RATDDCDCTEST_DEFAULT          (_DCDC_RPURATD1_RATDDCDCTEST_DEFAULT << 0) /**< Shifted mode DEFAULT for DCDC_RPURATD1      */

/** @} End of group EFR32MG24_DCDC_BitFields */
/** @} End of group EFR32MG24_DCDC */
/** @} End of group Parts */

#endif /* EFR32MG24_DCDC_H */
