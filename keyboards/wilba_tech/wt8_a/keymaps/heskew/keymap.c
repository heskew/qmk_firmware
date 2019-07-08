#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    LAYOUT(
        BL_STEP, KC_2, KC_3, KC_AUDIO_VOL_UP,
        BL_TOGG, KC_6, KC_7, KC_AUDIO_VOL_DOWN ),

    LAYOUT(
        KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

    LAYOUT(
        KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

    LAYOUT(
        KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO) };

