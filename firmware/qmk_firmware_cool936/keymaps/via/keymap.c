// Copyright 2022 m.ki (@telzo2000)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST,
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QWERTY = SAFE_RANGE,
    LOWER,
    RAISE,
    ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Default Layer
     * ,-------------------------            ---------------------------.
     * |  Q |  W |  E |  R |  T |            | Y |  U |  I |  O |   P   |
     * |---------------------------          ---------------------------|
     * |  A   |  S |  D |  F |  G |            | H |  J |  K |  L | Ent |
     * |------------------------------           -----------------------|
     * |     Z   |  X |  C |  V |  B |           |  N |  M |  , |  .    |
     * `--------------------------------      --------------------------'
     *        |LCtrl| LGui| LAlt|Lower |      |Rise| spc    |  BS |
     *        `-------------------------      --------------------'
     */
    [_QWERTY] = LAYOUT(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_ENT,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    LT(KC_MINS,KC_COMM),   KC_DOT, 
    KC_LCTL, KC_LGUI, KC_LALT, LT(_LOWER,KC_SPACE),LT(_RAISE,KC_SPACE), LSFT_T(KC_SPACE),  LT(_LOWER,KC_BSPC)

  ),
    /* LOWER Layer
    *  ,-------------------------            ---------------------------.
     * |  1 |  2 |  3 |  4 |  5 |            | 6 |  7 |  8 |  9 |   0   |
     * |---------------------------          ---------------------------|
     * |  !   |  @ |  # |  $ |  % |            | ^ | & |  * |  ( | )    |
     * |------------------------------           -----------------------|
     * |     +   |  - |  * |  / |  = |           |  ~ | \  |  { |  }    |
     * `--------------------------------      --------------------------'
     *        |LCtrl| LGui| LAlt | spc |      |Rise| spc    |Lower|
     *        `-------------------------      --------------------'     
*/  
  [_LOWER] = LAYOUT(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   
    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, 
    KC_PPLS,    KC_PMNS,    KC_PAST,    KC_PSLS,    KC_PEQL,    KC_GRV,    KC_JYEN,    RSFT(KC_LBRC),   RSFT(KC_RBRC),  
    KC_LCTL, KC_LGUI, KC_LALT,LSFT_T(KC_SPACE),       LT(_RAISE,KC_SPACE), KC_MINS,  KC_NO
 
 ),
  /* RAISE Layer
    *  ,-------------------------            ---------------------------.
     * | F1 | F2 | F3 | F4 | F5 |            | F6| F7 | F8 | F9 | F10   |
     * |---------------------------          ---------------------------|
     * |  @   | \ |  ; |  : |  ' |            |left|down| up |right| _  |
     * |------------------------------           -----------------------|
     * |     *1  | *2 |  *3 |  *4 | *5 |      | *6 | *7  |  *8 |  no    |
     * `--------------------------------      --------------------------'
     *        |LCtrl| LGui| LAlt | spc |      |Rise| spc    |Lower|
     *        `-------------------------      --------------------'         
*1 RGB_TOG
*2 RGB_MOD
*3 RGB_HUI
*4 RGB_HUD
*5 RGB_SAI
*6 RGB_SAD
*7 RGB_VAI 
*8 RGB_VAD
*/  
  
  [_RAISE] = LAYOUT(
    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10, 
    KC_AT,    KC_BSLS,    KC_SCLN,   RSFT(KC_SCLN), KC_QUOT,    KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, LSFT(KC_MINS),
    RGB_TOG,    RGB_MOD,    RGB_HUI,    RGB_HUD,    RGB_SAI,    RGB_SAD,    RGB_VAI,    KC_LBRC,   KC_RBRC, 
    RGB_VAD,  RGB_SPI, RGB_SPD,RSFT(KC_MINS),RGB_M_T,       KC_SPACE,  LT(_LOWER,KC_BSPC)
  ) 
};

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* Left encoder */
        switch (get_highest_layer(layer_state)) {
            case _QWERTY:
                if (clockwise) {
                    tap_code(KC_TAB);
                } else {
                    tap_code16(S(KC_TAB));
                }
                break;
            case _RAISE:
                if (clockwise) {
                //    tap_code(KC_VOLU);
                    if(keymap_config.swap_lalt_lgui==false){
                        tap_code(KC_LANG2);
                    }else {
                        tap_code16(A(KC_GRV));
                    }
                } else {
                    if(keymap_config.swap_lalt_lgui==false){
                    tap_code(KC_LANG1);
                    } else {
                        tap_code16(A(KC_GRV));
                    }
                }
                break;
            case _ADJUST:
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
            }
        }

    } else if (index == 1) { /* Right encoder */
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
}
