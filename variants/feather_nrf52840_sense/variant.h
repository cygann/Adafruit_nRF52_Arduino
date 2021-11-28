 /*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2018, Adafruit Industries (adafruit.com)

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_FEATHER52840_SENSE_
#define _VARIANT_FEATHER52840_SENSE_

/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)

#define USE_LFRC    // Board uses RC for LF

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

// Number of pins defined in PinDescription array
#define PINS_COUNT           (43)
#define NUM_DIGITAL_PINS     (43)
#define NUM_ANALOG_INPUTS    (2) // A2 is used for battery
#define NUM_ANALOG_OUTPUTS   (0)

// Motor PWM control
#define MOTOR0               (2)
#define MOTOR1               (3)
#define MOTOR2               (4)
#define MOTOR3               (5)
#define MOTOR4               (6)
#define MOTOR5               (7)
#define MOTOR6               (8)
#define MOTOR7               (9)
#define MOTOR8               (10)
#define MOTOR9               (11)
#define MOTOR10              (12)
#define MOTOR11              (13)
#define MOTOR12              (14)

// Motor EN
#define MOTOR_EN0            (15)
#define MOTOR_EN1            (16)
#define MOTOR_EN2            (17)
#define MOTOR_EN3            (18)
#define MOTOR_EN4            (19)
#define MOTOR_EN5            (20)
#define MOTOR_EN6            (21)
#define MOTOR_EN7            (22)
#define MOTOR_EN8            (23)
#define MOTOR_EN9            (24)
#define MOTOR_EN10           (25)
#define MOTOR_EN11           (26)
#define MOTOR_EN12           (27)

// LEDs
#define PIN_LED1             (28)
#define NEOPIXEL_NUM         0

#define LED_BUILTIN          PIN_LED1
#define LED_CONN             PIN_LED1

#define LED_STATE_ON         1         // State when LED is litted

// Microphone
#define PIN_PDM_DIN           41
#define PIN_PDM_CLK           42
#define PIN_PDM_PWR           -1  // not used

/*
 * Analog pins
 */
#define PIN_A0               (31)
#define PIN_A1               (32)
#define PIN_A2               (33)

static const uint8_t A0  = PIN_A0 ;
static const uint8_t A1  = PIN_A1 ;
static const uint8_t A2  = PIN_A2 ;
#define ADC_RESOLUTION    14

// Other pins
#define PIN_VBAT           PIN_A2

/*
 * Serial interfaces
 */
#define PIN_SERIAL1_RX       (1)
#define PIN_SERIAL1_TX       (0)

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA         (29)
#define PIN_WIRE_SCL         (30)

// QSPI Pins
#define PIN_QSPI_SCK         34
#define PIN_QSPI_CS          35
#define PIN_QSPI_IO0         36
#define PIN_QSPI_IO1         37
#define PIN_QSPI_IO2         38
#define PIN_QSPI_IO3         39

// Accel IRQ
#define ACCEL_IRQ            40

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
