/* Copyright 2020 Naoto Takai
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

// #include "rev1.h"

#include QMK_KEYBOARD_H

// // Defines the keycodes used by our macros in process_record_user
#define _ZERO 0
// #define _ONE 1
// #define _TWO 2
// #define _THREE 3
// #define _FOUR 4
// #define _FIVE 5
// #define _SIX 16
// // #define ZENHAN LCTL(KC_GRV)
// // #define ZENHAN LALT(KC_TILD)
// #define ZENHAN LALT(KC_GRV)
// #define ZENHAN2 LGUI(KC_GRV)

// enum custom_keycodes {
//   ZERO = SAFE_RANGE,
// //   ONE,
// //   TWO,
// //   THREE,
// //   FOUR,
// //   FIVE,
// //   SIX
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* ZERO
 *
 * ,----------------------------------------------------------------------------.
 * | Q/Esc|   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |  Del |
 * |------+------+------+------+------|------+------+------+------+------+------|
 * |  Tab |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |  Ent |
 * |------+------+------+------+------|------+------+------+------+------+------|
 * | Z/ctl| X/ctl|   C  |   V  |   B  |   N  |   M  |   ,  |   .  |
 * `-------------+------+------+------|------+------+------+------'
 */
[_ZERO] = LAYOUT_11x2_9x1(
  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_BSPC,
  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  MT(MOD_LGUI, KC_ENT),
  MT(MOD_LCTL, KC_Z),    MT(MOD_LCTL, KC_X),    KC_C,    KC_V,    KC_B, KC_N,    KC_M,    KC_COMM, KC_DOT,
),



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ZERO:
      if (record->event.pressed) {
        // persistant_default_layer_set(1UL<<_ZERO);
        set_single_persistent_default_layer(_ZERO);
      }
      return false;
      break;
    // case ONE:
    //   if (record->event.pressed) {
    //     layer_on(_ONE);
    //     update_tri_layer(_ONE, _THREE, _SIX);
    //   } else {
    //     layer_off(_ONE);
    //     update_tri_layer(_ONE, _THREE, _SIX);
    //   }
    //   return false;
    //   break;
    // case TWO:
    //   if (record->event.pressed) {
    //     layer_on(_TWO);
    //     update_tri_layer(_TWO, _FOUR, _FIVE);
    //   } else {
    //     layer_off(_TWO);
    //     update_tri_layer(_TWO, _FOUR, _FIVE);
    //   }
    //   return false;
    //   break;
    // case THREE:
    //   if (record->event.pressed) {
    //     layer_on(_THREE);
    //   } else {
    //     layer_off(_THREE);
    //   }
    //   return false;
    //   break;
    // case FOUR:
    //   if (record->event.pressed) {
    //     layer_on(_FOUR);
    //   } else {
    //     layer_off(_FOUR);
    //   }
    //   return false;
    //   break;
    // case FIVE:
    //   if (record->event.pressed) {
    //     layer_on(_FIVE);
    //   } else {
    //     layer_off(_FIVE);
    //   }
    //   break;
  }
  return true;
}
