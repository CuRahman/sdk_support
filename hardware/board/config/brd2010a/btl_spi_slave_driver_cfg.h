/***************************************************************************//**
 * @file
 * @brief Configuration header for bootloader Spi Slave Driver
 *******************************************************************************
 * # License
 * <b>Copyright 2021 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc.  Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement.  This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/
#ifndef BTL_SPI_SLAVE_DRIVER_CONFIG_H
#define BTL_SPI_SLAVE_DRIVER_CONFIG_H

// <<< Use Configuration Wizard in Context Menu >>>

// <h>SPI Slave Driver

// <o SL_SPISLAVE_RX_BUFFER_SIZE> Receive buffer size:[0-2048] <0-2048>
// <i> Default: 300
#define SL_SPISLAVE_RX_BUFFER_SIZE    300

// <o SL_SPISLAVE_TX_BUFFER_SIZE> Transmit buffer size:[0-2048] <0-2048>
// <i> Default: 50
#define SL_SPISLAVE_TX_BUFFER_SIZE    50

// <o SL_SPISLAVE_LDMA_RX_CHANNEL> LDMA channel for SPI RX:[0-1] <0-1>
// <i> Default: 0
#define SL_SPISLAVE_LDMA_RX_CHANNEL    0

// <o SL_SPISLAVE_LDMA_TX_CHANNEL> LDMA channel for SPI TX:[0-1] <0-1>
// <i> Default: 1
#define SL_SPISLAVE_LDMA_TX_CHANNEL    1

// </h>

// <<< end of configuration section >>>

// <<< sl:start pin_tool >>>
// <usart signal=TX,RX,CS,CLK> SL_SPINCP

// $[USART_SL_SPINCP]
#define SL_SPINCP_PERIPHERAL                     USART1
#define SL_SPINCP_PERIPHERAL_NO                  1

// USART1 TX on PD7
#define SL_SPINCP_TX_PORT                        gpioPortD
#define SL_SPINCP_TX_PIN                         7
#define SL_SPINCP_ROUTE_LOC                      3

// USART1 RX on PD6
#define SL_SPINCP_RX_PORT                        gpioPortD
#define SL_SPINCP_RX_PIN                         6

// USART1 CS on PC14
#define SL_SPINCP_CS_PORT                        gpioPortC
#define SL_SPINCP_CS_PIN                         14

// USART1 CLK on PC15
#define SL_SPINCP_CLK_PORT                       gpioPortC
#define SL_SPINCP_CLK_PIN                        15

// [USART_SL_SPINCP]$

// <<< sl:end pin_tool >>>

#endif // BTL_SPI_SLAVE_DRIVER_CONFIG_H