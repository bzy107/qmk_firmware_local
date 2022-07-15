/* Copyright 2018 ENDO Katsuhiro <ka2hiro@curlybracket.co.jp>
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
#include QMK_KEYBOARD_H

// Defines the keycodes used by our macros in process_record_user
#define _ZERO 0
#define _ONE 1
#define _TWO 2
#define _THREE 3
#define _FOUR 4
#define _FIVE 5
#define _SIX 16
// #define ZENHAN LCTL(KC_GRV)
// #define ZENHAN LALT(KC_TILD)
#define ZENHAN LALT(KC_GRV)
#define ZENHAN2 LGUI(KC_GRV)

enum custom_keycodes {
  ZERO = SAFE_RANGE,
  ONE,
  TWO,
  THREE,
  FOUR,
  FIVE,
  SIX
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* ZERO
 *
 * ,----------------------------------.           ,----------------------------------.
 * |   Q  |   W  |   E  |   R  |   T  |           |   Y  |   U  |   I  |   O  |   P  |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * |   A  |   S  |   D  |   F  |   G  |           |   H  |   J  |   K  |   L  |   ;  |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * | Z/ctl| X/ctl|   C  |   V  |   B  |           |   N  |   M  |   ,  |   .  | / Alt|
 * `-------------+------+------+------|           |------+------+------+------+------'
 *               |  TWO |  Spc |  Sft |           | BkSp |Ent/GUI| ONE |
 *               `--------------------'           `--------------------'
 */
[_ZERO] = LAYOUT_split_3x5_3(
  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,         KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
  MT(MOD_LCTL, KC_Z),    MT(MOD_LCTL, KC_X),    KC_C,    KC_V,    KC_B,         KC_N,    KC_M,    KC_COMM, KC_DOT,  MT(MOD_RALT, KC_SLSH),
                    TWO,     KC_SPC,  KC_LSFT,      KC_BSPC, MT(MOD_LGUI, KC_ENT), ONE
),

/* ONE
 *
 * ,----------------------------------.             ,----------------------------------.
 * |  Esc |   !  |   @  |   #  |   $  |             |   +  |  F1  |  F2  |  F3  |  F4  |
 * |------+------+------+------+------|             |------|------+------+------+------|
 * |  Tab |   %  |   *  |   &  |   '  |             |   =  |  F5  |  F6  |  F7  |  F8  |
 * |------+------+------+------+------|             |------|------+------+------+------|
 * | Ctrl |   `  |   ^  |   \  |  Sft |             |   -  |  F9  | F10  |  F11 |  SIX |
 * `-------------+------+------+------|             |------|------+------+------+------'
 *               | THREE|  Spc |  Sft |             |  DEL |Ent/GUI|     |
 *               `--------------------'             `--------------------'
 */
[_ONE] = LAYOUT_split_3x5_3(
  KC_ESC,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,        KC_PLUS, KC_F1 ,  KC_F2 ,  KC_F3 ,  KC_F4 ,
  KC_TAB,  KC_PERC, KC_ASTR, KC_AMPR, KC_QUOT,       KC_EQL , KC_F5 ,  KC_F6 ,  KC_F7 ,  KC_F8 ,
  KC_LCTL, KC_GRV , KC_CIRC, KC_BSLS, KC_LSFT,       KC_MINS, KC_F9 ,  KC_F10,  KC_F11,  SIX,
                      THREE, KC_SPC,  KC_LSFT,       KC_DEL,  MT(MOD_LGUI, KC_ENT), _______
),

/* TWO
 *
 * ,----------------------------------.         ,----------------------------------.
 * |   1  |   2  |   3  |   4  |   5  |         |   '  |      |   ↑  |   [  |   ]  |
 * |------+------+------+------+------|         |------+------+------+------+------|
 * |   6  |   7  |   8  |   9  |   0  |         |   =  |  ←   |  (   |   →  |   )  |
 * |------+------+------+------+------|         |------+------+------+------+------|
 * | Ctrl | Tab  |  Alt | Sft  | FIVE |         |   -  |      |   ↓  |   {  |   }  |
 * `-------------+------+------+------|         |------+------+------+------+------'
 *               |      |  Spc |  Sft |         | Del  |Ent/GUI|FOUR|
 *               `--------------------'         `--------------------'
 */
[_TWO] = LAYOUT_split_3x5_3(
  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_QUOT, KC_NO, KC_UP ,   KC_LBRC,  KC_RBRC,
  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,       KC_EQL , KC_LEFT, KC_LPRN,  KC_RIGHT, KC_RPRN,
  KC_LCTL, KC_TAB,  KC_RALT, KC_LSFT, FIVE,       KC_MINS, KC_NO, KC_DOWN,  KC_LCBR,  KC_RCBR,
                    _______, KC_SPC,  KC_LSFT,    KC_DEL, MT(MOD_LGUI, KC_ENT), FOUR
),

/* THREE
 *
 * ,----------------------------------.           ,----------------------------------.
 * |   Q  |   W  |   E  |   R  |   T  |           |   Y  |   U  |   I  |   O  |   P  |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * |   A  |   S  |   D  |   F  |   G  |           |   H  |   J  |   K  |   L  |   ;  |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * |   Z  |   X  |   C  |   V  |   B  |           |   N  |   M  |  Alt | Ctrl |  GUI |
 * `-------------+------+------+------|           |------+------+------+------+------'
 *               |      |  Spc |  Sft |           | BkSp |  Ent |      |
 *               `--------------------'           `--------------------'
 */
[_THREE] =  LAYOUT_split_3x5_3(
  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,         KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,         KC_N,    KC_M,    KC_RALT, KC_LCTL, KC_LGUI,
                    _______, KC_SPC,  KC_LSFT,      KC_BSPC, KC_ENT, _______
),

/* FOUR
 *
 * ,----------------------------------.           ,----------------------------------.
 * |      |      |      |      |      |           |      |      |      |      |      |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * |      |      |      |      |      |           |      |      |      |      |      |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * |      |      |      |      |      |           |      |      |      |      |      |
 * `-------------+------+------+------|           |------+------+------+------+------'
 *               |      |      |      |           |      |      |      |
 *               `--------------------'           `--------------------'
 */
[_FOUR] =  LAYOUT_split_3x5_3(
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                KC_NO, KC_NO, KC_NO,      KC_NO, KC_NO, KC_NO
),

/* FIVE
 *
 * ,----------------------------------.           ,----------------------------------.
 * |      |      |      |      | nrm  |           |      |      |      |      |      |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * |      |      |      |      | swp  |           |      |      |      |      |      |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * |ZENHAN|ZENHAN2|     |      |      |           | Alt  |   ~  |      |      |      |
 * `-------------+------+------+------|           |------+------+------+------+------'
 *               |      |      |RESET |           |      |      |      |
 *               `--------------------'           `--------------------'
 */
[_FIVE] =  LAYOUT_split_3x5_3(
  KC_NO, KC_NO, KC_NO, KC_NO, LCG_NRM,      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  KC_NO, KC_NO, KC_NO, KC_NO, LCG_SWP,      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  ZENHAN, ZENHAN2, KC_NO, KC_NO, KC_NO,      KC_RALT, KC_TILD, KC_NO, KC_NO, KC_NO,
                    KC_NO, KC_NO, RESET,      KC_NO,  KC_NO, KC_NO
)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ZERO:
      if (record->event.pressed) {
        // persistant_default_layer_set(1UL<<_ZERO);
        set_single_persistent_default_layer(_ZERO);
      }
      return false;
      break;
    case ONE:
      if (record->event.pressed) {
        layer_on(_ONE);
        update_tri_layer(_ONE, _THREE, _SIX);
      } else {
        layer_off(_ONE);
        update_tri_layer(_ONE, _THREE, _SIX);
      }
      return false;
      break;
    case TWO:
      if (record->event.pressed) {
        layer_on(_TWO);
        update_tri_layer(_TWO, _FOUR, _FIVE);
      } else {
        layer_off(_TWO);
        update_tri_layer(_TWO, _FOUR, _FIVE);
      }
      return false;
      break;
    case THREE:
      if (record->event.pressed) {
        layer_on(_THREE);
      } else {
        layer_off(_THREE);
      }
      return false;
      break;
    case FOUR:
      if (record->event.pressed) {
        layer_on(_FOUR);
      } else {
        layer_off(_FOUR);
      }
      return false;
      break;
    case FIVE:
      if (record->event.pressed) {
        layer_on(_FIVE);
      } else {
        layer_off(_FIVE);
      }
      break;
  }
  return true;
}
