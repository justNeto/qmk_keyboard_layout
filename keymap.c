#include QMK_KEYBOARD_H
#include "version.h"

#define RED_LED_ON ergodox_right_led_1_on();
#define GREEN_LED_ON ergodox_right_led_2_on();
#define BLUE_LED_ON ergodox_right_led_3_on();

#define RED_LED_OFF ergodox_right_led_1_off();
#define GREEN_LED_OFF ergodox_right_led_2_off();
#define BLUE_LED_OFF ergodox_right_led_3_off();

enum custom_keycodes {
    ST_MACRO_0,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Regular layer
     */
    [0] = LAYOUT_ergodox_pretty(
            KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_AUDIO_VOL_UP,                                KC_BRIGHTNESS_UP,KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
            KC_TILD,        KC_SCLN,        KC_COMMA,       KC_DOT,         KC_P,           KC_Y,           KC_AUDIO_VOL_DOWN,                                KC_BRIGHTNESS_DOWN,KC_F,           KC_G,           KC_C,           KC_R,           KC_L,           KC_TRANSPARENT,
            TG(3),          KC_A,           KC_O,           KC_E,           KC_U,           KC_I,                                                                           KC_D,           KC_H,           KC_T,           KC_N,           KC_S,           ST_MACRO_0,
            KC_LEFT_SHIFT,  KC_QUOTE,       KC_Q,           KC_J,           KC_K,           KC_X,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_B,           KC_M,           KC_W,           KC_V,           KC_Z,           KC_RIGHT_SHIFT,
            KC_LEFT_CTRL,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT,                                                                                                    KC_QUES,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT_CTRL,
            TG(2),          KC_AUDIO_MUTE,  KC_PSCR,        TG(4),
            KC_CAPS,        KC_NUM,
            MT(MOD_LGUI, KC_ESCAPE),LT(1,KC_SPACE), MT(MOD_LCTL, KC_TAB), MT(MOD_LCTL, KC_DELETE),      KC_BSPC,        KC_ENTER
            ),
    /*
     * Programming Layer
     */
    [1] = LAYOUT_ergodox_pretty(
            KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
            KC_TRANSPARENT, KC_TRANSPARENT, KC_GRAVE,       KC_AMPR,        KC_LBRC,        KC_LABK,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_RABK,        KC_RBRC,        KC_PIPE,        KC_BSLS,        KC_TRANSPARENT, KC_TRANSPARENT,
            KC_0,           KC_COLN,        KC_QUOTE,       KC_LPRN,        KC_LCBR,        KC_PLUS,                                                                        KC_EQUAL,       KC_RCBR,        KC_RPRN,        KC_SLASH,       KC_SCLN,        KC_DLR,
            KC_TRANSPARENT, KC_TRANSPARENT, KC_MINUS,       KC_HASH,        KC_CIRC,        KC_AT,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_ASTR,        KC_PERC,        KC_EXLM,        KC_UNDS,        KC_TRANSPARENT, KC_TRANSPARENT,
            KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
            KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
            KC_TRANSPARENT, KC_TRANSPARENT,
            KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
            ),
    /*
     * LEAGUE OF LEGENDS LAYER
     */
    [2] = LAYOUT_ergodox_pretty(
            KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_P,                                           KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
            KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT,
            KC_LEFT_GUI,    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_NO,
            KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_QUES,        KC_TRANSPARENT,
            KC_LEFT_CTRL,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT,                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
            KC_TRANSPARENT, KC_M,           KC_TRANSPARENT, KC_NO,
            KC_TRANSPARENT, KC_TRANSPARENT,
            LT(3,KC_SPACE), KC_I,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
            ),
    /*
     * Number + F keys + arrows layer
     */
    [3] = LAYOUT_ergodox_pretty(
            KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
            KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT,
            KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_NO,
            KC_TRANSPARENT, KC_F11,         KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_DOT,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_COMMA,       KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_F12,         KC_TRANSPARENT,
            KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
            KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
            KC_TRANSPARENT, KC_TRANSPARENT,
            KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
            ),
    /*
     *
     * General gaming layer
     *
     */
    [4] = LAYOUT_ergodox_pretty(
            KC_NO,          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
            KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT,
            KC_ESCAPE,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_NO,
            KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_QUES,        KC_TRANSPARENT,
            KC_LEFT_CTRL,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT,                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
            KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
            KC_TRANSPARENT, KC_TRANSPARENT,
            KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
            ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ST_MACRO_0:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_TAP(X_X)));
            }
            break;

    }
    return true;
}

uint8_t layer_state_set_user(uint8_t state) {
    uint8_t layer = biton(state);
    ergodox_board_led_off();
    BLUE_LED_OFF
    RED_LED_OFF
    GREEN_LED_OFF

    switch (layer) {
        case 1: // programming layer
            RED_LED_ON
            break;
        case 2: // LOL layer
            GREEN_LED_ON
            RED_LED_ON
            break;
        case 3: // numbers layer
            GREEN_LED_ON
            break;
        case 4:
            BLUE_LED_ON
            break;
        default:
            break;
    }
    return state;
};
