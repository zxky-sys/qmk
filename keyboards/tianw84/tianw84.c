/* Copyright 2017 @TurboMech /u/TurboMech <discord> @A9entOran9e#6134
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#include "tianw84.h"
#include "rgblight.h"
#include "action_layer.h"
#include "quantum.h"
#include "action.h"
led_config_t g_led_config = { {
  //Key Matrix to LED Index
{26,25,24,23,22,21,20,19,18,17,16,15,14,13,12, 11}, \
{27,28,29,30,31,32,33,34,35,36,37,38,39,  NO_LED,40,  10}, \
{54,  NO_LED,53,52,51,50,49,48,47,46,45,44,43,42,41,  9}, \
{55,  NO_LED,56,57,58,59,60,61,62,63,64,65,66,67,  NO_LED, 8}, \
{80,  NO_LED,79,78,77,76,75,74,73,72,71,70,  NO_LED,69,68,7}, \
{81,82,  NO_LED,83,  NO_LED, NO_LED,0,  NO_LED, NO_LED, NO_LED,1,2,3,4,5, 6} , \
}, {
  //LED Index to Physical Positon
{ 0, 0 },{ 0, 15 },{ 0, 30 },{ 0, 45 },{ 0, 60 },{ 0, 75 },{ 0, 90 },{ 0, 105 },{ 0, 119 },{ 0, 134 },{ 0, 149 },{ 0, 164 },{ 0, 179 },{ 0, 194 },{ 0, 209 },{ 0, 224 },
{ 13, 0 },{ 13, 15 },{ 13, 30 },{ 13, 45 },{ 13, 60 },{ 13, 75 },{ 13, 90 },{ 13, 105 },{ 13, 119 },{ 13, 134 },{ 13, 149 },{ 13, 164 },{ 13, 179 },{ 13, 209 },{ 13, 224 },
{ 26, 0 },{ 26, 30 },{ 26, 45 },{ 26, 60 },{ 26, 75 },{ 26, 90 },{ 26, 105 },{ 26, 119 },{ 26, 134 },{ 26, 149 },{ 26, 164 },{ 26, 179 },{ 26, 194 },{ 26, 209 },{ 26, 224 },
{ 38, 0 },{ 38, 30 },{ 38, 45 },{ 38, 60 },{ 38, 75 },{ 38, 90 },{ 38, 105 },{ 38, 119 },{ 38, 134 },{ 38, 149 },{ 38, 164 },{ 38, 179 },{ 38, 194 },{ 38, 224 },
{ 51, 0 },{ 51, 30 },{ 51, 45 },{ 51, 60 },{ 51, 75 },{ 51, 90 },{ 51, 105 },{ 51, 119 },{ 51, 134 },{ 51, 149 },{ 51, 164 },{ 51, 194 },{ 51, 209 },{ 51, 224 },
{ 64, 0 },{ 64, 15 },{ 64, 45 },{ 64, 90 },{ 64, 149 },{ 64, 164 },{ 64, 179 },{ 64, 194 },{ 64, 209 },{ 64, 224 },
}, {
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,
} };

void matrix_scan_kb(void) {
	// put your looping keyboard code here
	// runs every cycle (a lot)

	matrix_scan_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
	// put your per-action keyboard code here
	// runs for every action, just before processing by the firmware

	return process_record_user(keycode, record);
}

void led_set_kb(uint8_t usb_led) {
	// put your keyboard LED indicator (ex: Caps Lock LED) toggling code here

	led_set_user(usb_led);
}



