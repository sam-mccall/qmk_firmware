#include "satan.h"

#define _BASE 0
#define _QWERTY 1
#define _SPACE 2
#define _SYMS 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// Base layer
[_BASE] = KEYMAP_ANSI(
  KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_LBRC, KC_RBRC, KC_BSPC, \
  KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_SLSH, KC_EQL, KC_BSLS, \
  MT(MOD_LCTL, KC_ESC), KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_MINS, MT(MOD_LGUI, KC_ENT),  \
  KC_LSPO, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_RSPC, \
  KC_NO, KC_NO, KC_BSPC, LT(_SPACE, KC_SPC), KC_RALT, KC_NO, KC_NO, KC_NO),

// QWERTY layer
[_QWERTY] = KEYMAP_ANSI(
  KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_TRNS, \
  KC_TRNS, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_TRNS, \
  KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, \
  KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, \
  KC_LCTL, KC_LGUI, KC_LALT, KC_TRNS, KC_RALT, KC_RGUI, KC_MENU, KC_RCTL),

// Space layer
[_SPACE] = KEYMAP_ANSI(
  TG(_QWERTY), KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, RESET, \
  KC_TRNS, KC_TRNS, LCTL(KC_PGUP), KC_PGUP, LCTL(KC_PGDN), KC_TRNS, KC_TRNS, KC_HOME, KC_UP, KC_END, LGUI(S(KC_L)), KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_LCBR, KC_WBAK, KC_PGDN, KC_WFWD, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_RCBR, KC_TRNS, KC_TRNS, \
  MT(MOD_LSFT, KC_LBRC), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MT(MOD_LSFT, KC_RBRC), \
  KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
};
