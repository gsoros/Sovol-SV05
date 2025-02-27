/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

//
// Status Screen Logo bitmap
//
#define STATUS_LOGO_Y 6
#define STATUS_LOGO_WIDTH 40

const unsigned char status_logo_bmp[] PROGMEM = {
    B00000000, B00000000, B00000000, B00000000, B00000000,  // ........................................
    B00000000, B00000000, B00000000, B00000000, B00000000,  // ........................................
    B00000000, B00000000, B00000000, B00000000, B00000000,  // ........................................
    B00000000, B00000000, B00000000, B00000000, B00000000,  // ........................................
    B00000000, B00001000, B00000000, B00000000, B00000000,  // ............#...........................
    B00111000, B00001000, B00000011, B01100000, B00000000,  // ..###.......#.........##.##.............
    B01100100, B00001000, B00000011, B01100000, B00100000,  // .##..#......#.........##.##.......#.....
    B01000001, B00101110, B00111011, B11100011, B11110011,  // .#.....#..#.###...###.#####...######..##
    B01000001, B00101001, B01111010, B10100111, B10100111,  // .#.....#..#.#..#.####.#.#.#..####.#..###
    B01100001, B00101001, B01000010, B10100100, B10100100,  // .##....#..#.#..#.#....#.#.#..#..#.#..#..
    B00111101, B11101110, B00111010, B00100111, B10110011,  // ..####.####.###...###.#...#..####.##..##
    B00000000, B00000000, B00000000, B00000000, B00000000,  // ........................................
    B00000000, B00000000, B00000000, B00000000, B00000000,  // ........................................
    B00000000, B00000000, B00000000, B00000000, B00000000,  // ........................................
    B00000000, B00000000, B00000000, B00000000, B00000000,  // ........................................
    B00000000, B00000000, B00000000, B00000000, B00000000   // ........................................
};

//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE 20
#if HOTENDS < 2
#define STATUS_HEATERS_X 48
#define STATUS_BED_X 73
#else
#define STATUS_HEATERS_X 40
#define STATUS_BED_X 81
#endif
