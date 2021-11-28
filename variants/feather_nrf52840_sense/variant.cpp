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

#include "variant.h"
#include "wiring_constants.h"
#include "wiring_digital.h"
#include "nrf.h"

const uint32_t g_ADigitalPinMap[] =
{
  // place in this list indicates which digital pin number is assigned and
  // the value corresponds to the numbering used by the NRF52840:
  // P0.00..P0.31 -> 0...31
  // P1.00..P1.31 -> 32..63

  // D0 .. D1 (GPIO)
  24,  // D0  is P0.24
  25,  // D1  is P0.25

  // D2 .. D14 (aka MOTOR0 .. MOTOR12)
  27,  // D2  is P0.27
   0,  // D3  is P0.00
   1,  // D4  is P0.01
  26,  // D5  is P0.26
   4,  // D6  is P0.04
   5,  // D7  is P0.05
   8,  // D8  is P0.08
  40,  // D9  is P1.08
  41,  // D10 is P1.09
  14,  // D11 is P0.14
  13,  // D12 is P0.13
  16,  // D13 is P0.16
  15,  // D14 is P0.15

  // D15 .. D27 (aka MOTOR_EN0 .. MOTOR_EN12)
  43,  // D15 is P1.11
  45,  // D16 is P1.13
  47,  // D17 is P1.15
  31,  // D18 is P0.31
  30,  // D19 is P0.30
  28,  // D20 is P0.28
  46,  // D21 is P1.14
  36,  // D22 is P1.04
  38,  // D23 is P1.06
  39,  // D24 is P1.07
  37,  // D25 is P1.05
  35,  // D26 is P1.03
  33,  // D27 is P1.01

  // D28 (aka PIN_LED1)
   9,  // D28 is P0.09

  // D29 .. D30 (aka I2C pins)
  12,  // D29 is P0.12 (SDA)
  11,  // D30 is P0.11 (SCL)

  // D31 .. D33 (aka A0 .. A2)
  29,  // D31 is P0.29 (A0)
   2,  // D32 is P0.02 (A1)
   3,  // D33 is P0.03 (A2, Battery)

  // QSPI pins (not exposed via any header / test point)
  19,  // D34 is P0.19 (QSPI CLK)
  20,  // D35 is P0.20 (QSPI CS)
  21,  // D36 is P0.21 (QSPI Data 0)
  32,  // D37 is P1.00 (QSPI Data 1)
  22,  // D38 is P0.22 (QSPI Data 2)
  23,  // D39 is P0.23 (QSPI Data 3)

  // Accelerometer IRQ
  34,   // D40 is P0.09

  // PDM Microphone
   6,   // D41 P0.06 is PDM Data
   7,   // D42 P0.07 is PDM Clock

  // The remaining pins are not usable:
  // The following pins were never listed as they were considered unusable
  // 18,      // P0.18 is RESET (attached to switch)
  //
  // The remaining pins are not connected (per schematic)
  // 17,      // P0.17 is not connected per schematic
  // 10,      // P0.10 is not connected per schematic
  // 42,      // P1.10 is not connected per schematic
  // 44,      // P1.12 is not connected per schematic
};

void initVariant()
{
  // LED1
  pinMode(PIN_LED1, OUTPUT);
  ledOff(PIN_LED1);
}

