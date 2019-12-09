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

const uint32_t g_ADigitalPinMap[] = {
  // D0 - D7
  0,  // xtal 1
  1,  // xtal 2
  2,  // VBAT
  3,  // CS2
  4,  // SW1
  5,  // RES
  6,  // CS1
  7,  // GPIO #7

  // D8 - D13
  8,  // WP

  9, // MOSI
  10, // SCK

  11, // SW2
  12, // GPIO #12
  13, // GPIO #13
  14, // GPIO #14

  15, // SW3
  16, // GPIO #16

  // function set pins
  17, // GPIO #16
  18, // GPIO #16
  19, // SW4
  20, // GPIO #16
  21, // Reset
  22, // Factory Reset
  23, // SW5
  24, // N/A

  25, // SW6
  26, // LED
  27, // SW7/DFU
  28, // HOLD
  29, // MISO
  30, // TXD
  31, // RXD
};

void initVariant()
{
  // LED1 & LED2
  pinMode(PIN_LED1, OUTPUT);
  ledOff(PIN_LED1);

  pinMode(PIN_LED2, OUTPUT);
  ledOff(PIN_LED2);
}

