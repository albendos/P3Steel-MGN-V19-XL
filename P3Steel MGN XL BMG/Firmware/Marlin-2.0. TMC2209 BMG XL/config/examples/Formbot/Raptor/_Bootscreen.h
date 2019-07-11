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

/**
 * Custom Bitmap for splashscreen
 *
 * You may use one of the following tools to generate the C++ bitmap array from
 * a black and white image:
 *
 *  - http://www.marlinfw.org/tools/u8glib/converter.html
 *  - http://www.digole.com/tools/PicturetoC_Hex_converter.php
 */
#include <avr/pgmspace.h>

#define CUSTOM_BOOTSCREEN_TIMEOUT   2500
#define CUSTOM_BOOTSCREEN_BMPWIDTH  128
#define CUSTOM_BOOTSCREEN_INVERTED

const unsigned char custom_start_bmp[] PROGMEM = {
  B11111101,B01010101,B01010101,B01010101,B01010101,B01010101,B01011111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B11111101,B00000000,B00000000,B00000111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B11111110,B00000111,B11000000,B00000101,B01010101,B01010101,B01010101,B01010101,B01010101,B01011111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B11111100,B00001010,B00100000,B00000110,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B11111110,B00010100,B00010000,B00000101,B00000000,B00000000,B00000111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B11111100,B00101000,B00001000,B00000110,B00000111,B11000000,B00000101,B01010101,B01010101,B01010101,B01010101,B01010101,B01011111,B11111111,B11111111,B11111111,
  B11111110,B01010100,B00000100,B00000100,B00001010,B00100000,B00000110,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111111,B11111111,B11111111,
  B11111100,B01100000,B00000100,B00000110,B00010100,B00010000,B00000101,B00000000,B00000000,B00000111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B11111110,B01010000,B00000100,B00000100,B00101000,B00001000,B00000110,B00000111,B11000000,B00000101,B01010101,B01010101,B01010101,B01010101,B01010101,B01011111,
  B11111100,B01100000,B00000100,B00000110,B01010100,B00000100,B00000100,B00001010,B00100000,B00000110,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,
  B11111110,B01010100,B00000100,B00011100,B01100000,B00000100,B00000110,B00010100,B00010000,B00000101,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,
  B11111100,B00101000,B00001000,B00101110,B01010000,B00000100,B00000100,B00101000,B00001000,B00000110,B00000111,B11000000,B00000000,B00000001,B11110000,B00111111,
  B11111110,B00010100,B00010000,B01010100,B01100000,B00000100,B00000110,B01010100,B00000100,B00000100,B00001010,B00100000,B00000000,B00000010,B00001000,B00011111,
  B11111100,B00001010,B00100000,B01100110,B01010100,B00000100,B00011100,B01100000,B00000100,B00000110,B00010100,B00010000,B00000000,B00000101,B00000100,B00111111,
  B11111110,B00000111,B11000000,B01010100,B00101000,B00001000,B00101110,B01010000,B00000100,B00000100,B00101000,B00001000,B00000000,B00001010,B00000010,B00011111,
  B11111100,B00000000,B00000000,B00101110,B00010100,B00010000,B01010100,B01100000,B00000100,B00000110,B01010100,B00000100,B00000000,B00010101,B00000001,B00111111,
  B11111110,B00000000,B00000000,B00011100,B00001010,B00100000,B01100110,B01010100,B00000100,B00011100,B01100000,B00000100,B00000000,B00011000,B00000001,B00011111,
  B11111100,B00000000,B00000000,B00000110,B00000111,B11000000,B01010100,B00101000,B00001000,B00101110,B01010000,B00000100,B00000000,B00010100,B00000001,B00111111,
  B11111110,B00000000,B00000000,B00000100,B00000000,B00000000,B00101110,B00010100,B00010000,B01010100,B01100000,B00000100,B00000000,B00011000,B00000001,B00011111,
  B11111100,B11111111,B11111111,B11111110,B00000000,B00000000,B00011100,B00001010,B00100000,B01100110,B01010100,B00000100,B00011100,B00010101,B00000001,B00111111,
  B11111110,B11010101,B01010101,B01010100,B00000000,B00000000,B00000110,B00000111,B11000000,B01010100,B00101000,B00001000,B00101010,B00001010,B00000010,B00011111,
  B11111100,B10000100,B00010000,B01000110,B00000000,B00000000,B00000100,B00000000,B00000000,B00101110,B00010100,B00010000,B01010001,B00000101,B00000100,B00111111,
  B11111110,B11000100,B00010000,B01000100,B11111111,B11111111,B11111110,B00000000,B00000000,B00011100,B00001010,B00100000,B01100001,B00000010,B10001000,B00011111,
  B11111100,B10000100,B00010000,B01000110,B11010101,B01010101,B01010100,B00000000,B00000000,B00000110,B00000111,B11000000,B01010001,B00000001,B11110000,B00111111,
  B11111110,B10000100,B00010000,B01000100,B10000100,B00010000,B01000110,B00000000,B00000000,B00000100,B00000000,B00000000,B00101010,B00000000,B00000000,B00011111,
  B11111100,B11000100,B00010000,B01000110,B11000100,B00010000,B01000100,B11111111,B11111111,B11111110,B00000000,B00000000,B00011100,B00000000,B00000000,B00111111,
  B11111110,B10000100,B00010000,B01000100,B10000100,B00010000,B01000110,B11010101,B01010101,B01010100,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,
  B11111100,B11010101,B01010101,B01010110,B10000100,B00010000,B01000100,B10000100,B00010000,B01000110,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,
  B11111100,B11111111,B11111111,B11111100,B11000100,B00010000,B01000110,B11000100,B00010000,B01000100,B11111111,B11111111,B11111111,B11111111,B11111111,B10011111,
  B11111110,B00000000,B00000000,B00000110,B10000100,B00010000,B01000100,B10000100,B00010000,B01000110,B11010101,B01010101,B01010101,B01010101,B01010101,B10111111,
  B11111101,B01010101,B01010101,B01010100,B11010101,B01010101,B01010110,B10000100,B00010000,B01000100,B10000100,B00010000,B01000001,B00000100,B00010000,B10011111,
  B11111111,B11111111,B11111111,B11111100,B11111111,B11111111,B11111100,B11000100,B00010000,B01000110,B11000100,B00010000,B01000001,B00000100,B00010001,B10111111,
  B11111111,B11111111,B11111111,B11111110,B00000000,B00000000,B00000110,B10000100,B00010000,B01000100,B10000100,B00010000,B01000001,B00000100,B00010000,B10011111,
  B11111111,B11111111,B11111111,B11111101,B01010101,B01010101,B01010100,B11010101,B01010101,B01010110,B10000100,B00010000,B01000001,B00000100,B00010000,B10011111,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111100,B11111111,B11111111,B11111100,B11000100,B00010000,B01000001,B00000100,B00010001,B10111111,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111110,B00000000,B00000000,B00000110,B10000100,B00010000,B01000001,B00000100,B00010000,B10011111,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111101,B01010101,B01010101,B01010100,B11010101,B01010101,B01010101,B01010101,B01010101,B10111111,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111100,B11111111,B11111111,B11111111,B11111111,B11111111,B10011111,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111101,B01010101,B01010101,B01010101,B01010101,B01010101,B01011111,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B11100000,B00101110,B11111011,B01111101,B11111011,B11111011,B11001111,B11000001,B11011111,B10111011,B00111110,B11000000,B11100001,B11111110,B00111100,B00011111,
  B11111101,B11101110,B01111011,B00111001,B11111001,B11110011,B11001111,B10011110,B11011111,B10111011,B00111110,B11011111,B11011110,B11111100,B11011101,B11100111,
  B11111101,B11101110,B00111011,B10111011,B11111001,B11101011,B11010111,B10111111,B01011111,B10111011,B01011110,B11011111,B11011110,B11111101,B11101101,B11110111,
  B11111101,B11101110,B10111011,B11010011,B11111010,B11101011,B10110111,B00111111,B11011111,B10111011,B01001110,B11011111,B11011111,B11111111,B11001101,B11110011,
  B11111101,B11101110,B11011011,B11000111,B11111010,B11101011,B10111011,B01111111,B11000000,B00111011,B01101110,B11000000,B11100011,B11111111,B00011101,B11110011,
  B11111101,B11101110,B11001011,B11101111,B11111010,B11011011,B10111011,B01111111,B11011111,B10111011,B01100110,B11011111,B11111000,B11111111,B11001101,B11110011,
  B11111101,B11101110,B11101011,B11101111,B11111011,B01011011,B00000011,B00111111,B01011111,B10111011,B01110110,B11011111,B11111110,B01111111,B11101101,B11110011,
  B11111101,B11101110,B11110011,B11101111,B11111011,B01011011,B01111001,B10111110,B11011111,B10111011,B01111010,B11011111,B11011110,B01111101,B11101101,B11110111,
  B11111101,B11101110,B11110011,B11101111,B11111011,B10111010,B11111101,B10011110,B11011111,B10111011,B01111100,B11011111,B11011110,B11111101,B11001101,B11100111,
  B11111101,B11101110,B11111011,B11101111,B11111011,B10111010,B11111101,B11000001,B11011111,B10111011,B01111110,B11000000,B11100000,B11111110,B00011100,B00011111
};
