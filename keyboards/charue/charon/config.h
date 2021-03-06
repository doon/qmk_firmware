/*
Copyright 2020 Michael Pio "Coarse" Mayol  <mfmayol@up.edu.ph>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4344 // CD for CharueDesign
#define PRODUCT_ID      0x4348 // CH for Charon
#define DEVICE_VER      0x0001 // Revision prototype
#define MANUFACTURER    CharueDesign
#define PRODUCT         Charon

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

#define MATRIX_COL_PINS { A2, A1, A0, B0, A7, A4, A3, B11, B10, B2, B1, B12, B7, B5, B6 }
#define MATRIX_ROW_PINS { A15, B4, B3, B8, B9 }
#define DIODE_DIRECTION COL2ROW
/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

#define LED_CAPS_LOCK_PIN F1
#define LED_PIN_ON_STATE 0
