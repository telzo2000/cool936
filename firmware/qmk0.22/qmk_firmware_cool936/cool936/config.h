// Copyright 2024 m.ki (@telzo2000)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#define SOFT_SERIAL_PIN D2

#define WS2812_DI_PIN D3

#ifdef WS2812_DI_PIN
#    define RGBLED_NUM 16
#    define RGBLIGHT_HUE_STEP 16
#    define RGBLIGHT_SAT_STEP 16
#    define RGBLIGHT_VAL_STEP 16  
#    define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
#    define RGBLIGHT_SLEEP 
#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_EFFECT_SNAKE
#    define RGBLIGHT_EFFECT_KNIGHT
#    define RGBLIGHT_EFFECT_CHRISTMAS
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
#    define RGBLIGHT_EFFECT_RGB_TEST
#    define RGBLIGHT_EFFECT_ALTERNATING
#    define RGBLIGHT_BREATHE_TABLE_SIZE 256     
#    define RGBLIGHT_EFFECT_BREATHE_CENTER 1.85  // 1 to 2.7
#    define RGBLIGHT_EFFECT_BREATHE_MAX    255   // 0 to 255
#endif