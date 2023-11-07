// Copyright 2022 @waffle87
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [1] =   { ENCODER_CCW_CW(RGB_HUD, RGB_HUI) },
    [2] =   { ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    //                  Encoder 1                                     Encoder 2
};
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_0,   KC_1, KC_4, KC_7,
    KC_ENT, KC_2, KC_5, KC_8,
    MO(1),  KC_3, KC_6, KC_9
  ),
  [1] = LAYOUT(
    _______, _______, _______, _______,
    _______, _______, _______, _______,
    _______, _______, _______, QK_BOOT
  ),
  [2] = LAYOUT(
    _______, _______, _______, _______,
    _______, _______, _______, _______,
    _______, _______, _______, QK_BOOT
  ),
};
