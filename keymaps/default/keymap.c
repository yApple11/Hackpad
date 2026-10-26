// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ A │ B │ C │
     * ├───┼───┼───┤
     * │ D │ E │ F │
     * └───┴───┴───┘
     */


     //C(KC) and C holds down control and then you put what you want after KC
     //S(KC) and S holds down shift and then you put what you want after KC
    //A(KC) and A holds down alt and then you put what you want after KC
    //refer to https://docs.qmk.fm/keycodes_basic for further keycodes

    
    [0] = LAYOUT_ortho_2x3( //default layout
        KC_SLEP, C(KC_W), KC_WWW_SEARCH,
        SC(KC_5), KC_LAUNCHPAD, A(KC_SPACE)
    )

    [1] = LAYOUT_ortho_2x3( //math layout
        KC_KP_PLUS,    KC_KP_ASTERIK,    KC_KP_SLASH,
        S(KC_COMMA),    S(KC_DOT),    S(KC_6)
    )
    [2] = LAYOUT_ortho_2x3(//onshape layout
        S(KC_S),    KC_L,    KC_D,
        KC_E,    S(KC_M),    S(KC_W)
    )  
};
