/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

//
// Prefix header for all Marlin sources
//

#include "MarlinConfigPre.h"

#include HAL_PATH(../HAL, HAL.h)

#include "../pins/pins.h"

#include HAL_PATH(../HAL, spi_pins.h)

#if defined(__AVR__) && !defined(USBCON)
  #define HardwareSerial_h // trick to disable the standard HWserial
#endif

#include "Conditionals_post.h"
#include "SanityCheck.h"

#include HAL_PATH(../HAL, SanityCheck.h)

// Include all core headers
#include "../core/enum.h"
#include "../core/language.h"
#include "../core/utility.h"
#include "../core/serial.h"
#include "../core/minmax.h"
