/**
 * Configuration for ruuvi.drivers.c nrf5 sdk15 platform support. Enable or disable modules you're using here.
 *
 * License: BSD-3
 * Author: Otso Jousimaa <otso@ojousima.net>
 */

#include "application_config.h"

#ifndef RUUVI_PLATFORM_NRF5_SDK15_CONFIG_H
#define RUUVI_PLATFORM_NRF5_SDK15_CONFIG_H

#if NRF5_SDK15_PLATFORM_ENABLED
#define NRF5_SDK15_GPIO_ENABLED                    APPLICATION_GPIO_ENABLED
#define NRF5_SDK15_GPIO_INTERRUPT_ENABLED          APPLICATION_GPIO_INTERRUPT_ENABLED
#define NRF5_SDK15_NRF52832_ENVIRONMENTAL_ENABLED  APPLICATION_ENVIRONMENTAL_MCU_ENABLED
#define NRF5_SDK15_LOG_ENABLED                     APPLICATION_LOG_ENABLED
#define NRF5_SDK15_SPI_ENABLED                     APPLICATION_SPI_ENABLED
#define NRF5_SDK15_YIELD_ENABLED                   APPLICATION_YIELD_ENABLED
#define NRF5_SDK15_NRF52832_ADC_ENABLED            APPLICATION_ENVIRONMENTAL_ADC_ENABLED
#define NRF5_SDK15_NRF52832_ENVIRONMENTAL_ENABLED  APPLICATION_ENVIRONMENTAL_MCU_ENABLED

#endif

#endif