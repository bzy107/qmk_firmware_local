#include QMK_KEYBOARD_H
#include "keymap_jp.h"

enum layers{
    BASE, 
    _RAISE1, 
    _RAISE2, 
    _RAISE3, 
    _RAISE4, 
};

#define RAISE1 MO(_RAISE1)
#define RAISE2 MO(_RAISE2)
#define RAISE3 MO(_RAISE3)
#define RAISE4 MO(_RAISE4)
#define ZENHAN LALT(KC_GRV)

/* modify this keymap to customize. */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* BASE
   * ,----------------------------------------.                ,-----------------------------------------.
   * | ESC |   Q  |   W  |   E  |   R  |   T  |                |  Y   |   U  |   I  |   O  |   P  |ZENHAN|
   * |-----+------+------+------+------+------|                |------+------+------+------+------+------|
   * | Tab |   A  |   S  |   D  |   F  |   G  |                |  H   |   J  |   K  |   L  |   ;  |   '  |
   * |-----+------+------+------+------+------|                |------+------+------+------+------+------|
   * | Ctrl|   Z  |   X  |   C  |   V  |   B  |                |  N   |   M  |   ,  |   .  |   /  |  Sft |
   * |-----+------+------+------+------+------|                |------+------+------+------+------+------|
   * |  L4 |WINDWS|  ALt |  L2  |  Spc |  Sft |                | Bspc |  Ent |  L1  |  ALt | Ctrl |  L3  |
   * |-----+------+------+------+------+------|                |----- +------+------+------+------+------|
   */
  [BASE] = LAYOUT(
    /* Left */                                                  /* Right */
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,          KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    ZENHAN, 
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,          KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, 
    KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,          KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LSFT, 
    RAISE4,  KC_LGUI, KC_RALT, RAISE2,  KC_SPC,  KC_LSFT,       KC_BSPC, KC_ENT,  RAISE1,  KC_RALT, KC_RCTL, RAISE3  
  ),

  /* 1
   * ,----------------------------------------.                ,-----------------------------------------.
   * | ESC |   1  |   2  |   3  |   4  |   5  |                |  F1  |  F2  |  F3  |  F4  |  F5  |ZENHAN|
   * |-----+------+------+------+------+------|                |------+------+------+------+------+------|
   * | Tab |   6  |   7  |   8  |   9  |   0  |                |  F6  |  F7  |  F8  |  F9  |  F10 |      |
   * |-----+------+------+------+------+------|                |------+------+------+------+------+------|
   * | Ctrl|      |      |      |      |      |                |  F11 |  F12 |      |      |      |  Sft |
   * |-----+------+------+------+------+------|                |------+------+------+------+------+------|
   * |  L4 |WINDWS|  ALt |  L2  |  Spc |  Sft |                | Bspc |  Ent |      |  ALt | Ctrl |  L3  |
   * |-----+------+------+------+------+------|                |------+------+------+------+------+------|
   */
  [_RAISE1] = LAYOUT(
    /* Left */                                                  /* Right */
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  ZENHAN, 
    KC_TAB,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,         KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, XXXXXXX, 
    KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      KC_F11,  KC_F12,  XXXXXXX, XXXXXXX,XXXXXXX,XXXXXXX,
    RAISE4,  KC_LGUI, KC_RALT, RAISE2,  KC_SPC,  KC_LSFT,      KC_BSPC, KC_ENT,  XXXXXXX,  KC_RALT, KC_RCTL, RAISE3  
  ), 

  /* 2
   * ,----------------------------------------.                ,-----------------------------------------.
   * | ESC |   !  |   @  |   #  |   $  |   %  |                |   +  |      |   ↑  |      |   [  |   ]  |
   * |-----+------+------+------+------+------|                |------+------+------+------+------+------|
   * | Tab |   ^  |   &  |   *  |   \  |   `  |                |   =  |   ←  |      |   →  |   (  |   )  |
   * |-----+------+------+------+------+------|                |------+------+------+------+------+------|
   * | Ctrl|      |      |   _  |   |  |   ~  |                |   -  |      |   ↓  |      |   {  |   }  |
   * |-----+------+------+------+------+------|                |------+------+------+------+------+------|
   * |  L4 |WINDWS|  ALt |      |  Spc |  Sft |                | Bspc |  Ent |      |  ALt | Ctrl |  L3  |
   * |-----+------+------+------+------+------|                |------+------+------+------+------+------|
   */
  [_RAISE2] = LAYOUT(
    /* Left */                                                  /* Right */
    KC_ESC,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,       KC_PLUS, XXXXXXX, KC_UP,   XXXXXXX, KC_LBRC, KC_RBRC,
    KC_TAB,  KC_CIRC, KC_AMPR, KC_ASTR, KC_BSLS, KC_GRV,        KC_EQL , KC_LEFT, XXXXXXX,KC_RIGHT, KC_LPRN, KC_RPRN,
    KC_LCTL, XXXXXXX, XXXXXXX, KC_UNDS, KC_PIPE, KC_TILD,       KC_MINS, XXXXXXX, KC_DOWN, XXXXXXX, KC_LCBR, KC_RCBR,
    RAISE4,  KC_LGUI, KC_RALT, XXXXXXX, KC_SPC,  KC_LSFT,       KC_BSPC, KC_ENT,  XXXXXXX,  KC_RALT, KC_RCTL, RAISE3  
  ), 

  /* 3
   * ,----------------------------------------.                ,-----------------------------------------.
   * | ESC |   !  |   @  |   #  |   $  |   %  |                |   +  |      |   ↑  |      |   [  |   ]  |
   * |-----+------+------+------+------+------|                |------+------+------+------+------+------|
   * | Tab |   ^  |   &  |   *  |   \  |   `  |                |   =  |   ←  |      |   →  |   (  |   )  |
   * |-----+------+------+------+------+------|                |------+------+------+------+------+------|
   * | Ctrl|      |      |   _  |   |  |   ~  |                |   -  |      |   ↓  |      |   {  |   }  |
   * |-----+------+------+------+------+------|                |------+------+------+------+------+------|
   * |  L4 |WINDWS|  ALt |      |  Spc |  Sft |                | Bspc |  Ent |      |  ALt | Ctrl |  L3  |
   * |-----+------+------+------+------+------|                |------+------+------+------+------+------|
   */
  [_RAISE3] = LAYOUT(
    /* Left */                                                  /* Right */
    _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, RESET, 
    _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______, 
    _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______, 
    _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, XXXXXXX 
  ), 

  /* 4
   * ,----------------------------------------.                ,-----------------------------------------.
   * | ESC |   !  |   @  |   #  |   $  |   %  |                |   +  |      |   ↑  |      |   [  |   ]  |
   * |-----+------+------+------+------+------|                |------+------+------+------+------+------|
   * | Tab |   ^  |   &  |   *  |   \  |   `  |                |   =  |   ←  |      |   →  |   (  |   )  |
   * |-----+------+------+------+------+------|                |------+------+------+------+------+------|
   * | Ctrl|      |      |   _  |   |  |   ~  |                |   -  |      |   ↓  |      |   {  |   }  |
   * |-----+------+------+------+------+------|                |------+------+------+------+------+------|
   * |  L4 |WINDWS|  ALt |      |  Spc |  Sft |                | Bspc |  Ent |      |  ALt | Ctrl |  L3  |
   * |-----+------+------+------+------+------|                |------+------+------+------+------+------|
   */
  [_RAISE4] = LAYOUT(
    /* Left */                                                  /* Right */
    RESET,   _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______,
    XXXXXXX, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______
  ), 
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

  }
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
