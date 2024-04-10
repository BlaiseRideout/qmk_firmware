#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = SAFE_RANGE,
  ST_MACRO_0,
};



enum tap_dance_codes {
  DANCE_0,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_ESCAPE,      KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_LBRC,
    LT(2,KC_TAB),   MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LSFT, KC_D),MT(MOD_LCTL, KC_F),KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_H,           MT(MOD_RCTL, KC_J),MT(MOD_RSFT, KC_K),MT(MOD_LALT, KC_L),MT(MOD_RGUI, KC_SCLN),KC_QUOTE,
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LT(5,KC_TAB),   LT(4,KC_ESCAPE),RGB_MODE_FORWARD,                                                                                                RGB_TOG,        LT(2,KC_ENTER), LT(8,KC_DELETE),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    TD(DANCE_0),    KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, LT(6,KC_SPACE)
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRC,
    KC_TRANSPARENT, KC_QUOTE,       KC_COMMA,       KC_DOT,         KC_P,           KC_Y,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F,           KC_G,           KC_C,           KC_R,           KC_L,           KC_SLASH,
    KC_TRANSPARENT, MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_O),MT(MOD_LSFT, KC_E),MT(MOD_LCTL, KC_U),KC_I,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_D,           MT(MOD_RCTL, KC_H),MT(MOD_RSFT, KC_T),MT(MOD_LALT, KC_N),MT(MOD_RGUI, KC_S),KC_MINUS,
    KC_TRANSPARENT, KC_SCLN,        KC_Q,           KC_J,           KC_K,           KC_X,                                           KC_B,           KC_M,           KC_W,           KC_V,           KC_Z,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_GRAVE,       KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    LALT(KC_TAB),   LALT(LSFT(KC_TAB)),LALT(KC_TAB),   KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PAGE_UP,     KC_HOME,        KC_UP,          KC_END,         KC_PSCR,        KC_F12,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_ENTER,
    KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MEDIA_PLAY_PAUSE,                                LCTL(LSFT(KC_TAB)),LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   LSFT(KC_INSERT),KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_DELETE,      KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_DYNAMIC_TAPPING_TERM_UP,KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_RBRC,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_EQUAL,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_DYNAMIC_TAPPING_TERM_PRINT,QK_DYNAMIC_TAPPING_TERM_DOWN,                                KC_UNDS,        KC_RCBR,        KC_LCBR,        KC_PIPE,        KC_BSLS,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPC
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_MINUS,
    KC_TRANSPARENT, KC_GRAVE,       KC_TILD,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_RBRC,        KC_UNDS,        KC_TRANSPARENT, KC_PLUS,        KC_TRANSPARENT, KC_EQUAL,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_UNDS,        KC_RCBR,        KC_LCBR,        KC_PIPE,        KC_BSLS,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, KC_F1,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_PSCR,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F12,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PAUSE,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    AU_TOGG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,
    MU_TOGG,        KC_MS_WH_UP,    KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_WH_UP,    KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT,
    MU_NEXT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_MS_WH_LEFT,  KC_MS_WH_RIGHT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,                                KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_RIGHT, LSFT(KC_INSERT),KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_DELETE,      KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TAB,         KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    TO(2),          TO(2),          KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LEFT_SHIFT,  KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT_SHIFT,
    KC_LEFT_CTRL,   KC_LEFT_CTRL,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_ENTER,                                                                                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT_CTRL,
    KC_TRANSPARENT, KC_SPACE,       KC_RBRC,                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, TO(0),          TO(1),          TO(7),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0,     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(2),          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TO(6),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(5),          TO(4),          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, TO(2),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    TO(3),          KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, TO(6)
  ),
};
const uint16_t PROGMEM combo0[] = { MT(MOD_LALT, KC_S), KC_Q, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, LALT(KC_TAB)),
};
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LGUI, KC_A):
            return g_tapping_term + 50;
        case MT(MOD_LALT, KC_S):
            return g_tapping_term + 25;
        case MT(MOD_LSFT, KC_D):
            return g_tapping_term -10;
        case MT(MOD_LCTL, KC_F):
            return g_tapping_term + 15;
        case MT(MOD_RCTL, KC_J):
            return g_tapping_term + 15;
        case MT(MOD_RSFT, KC_K):
            return g_tapping_term -10;
        case MT(MOD_LALT, KC_L):
            return g_tapping_term + 25;
        case MT(MOD_RGUI, KC_SCLN):
            return g_tapping_term + 50;
        case LT(6,KC_SPACE):
            return g_tapping_term + 25;
        case MT(MOD_RGUI, KC_S):
            return g_tapping_term + 50;
        default:
            return g_tapping_term;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223}, {234,241,223} },

    [2] = { {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255}, {153,194,255} },

    [3] = { {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251}, {86,100,251} },

    [4] = { {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255} },

    [5] = { {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94}, {139,246,94} },

    [6] = { {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245}, {32,236,245} },

    [7] = { {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,255}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {0,245,245}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {0,245,245}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
    /*
  if (rawhid_state.rgb_control) {
      return false;
  }
  */
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_9) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_LBRC));
    }
    break;

    case RGB_SLD:
    /*
        if (rawhid_state.rgb_control) {
            return false;
        }
        */
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
    }
    if(state->count > 3) {
        tap_code16(KC_BSPC);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_BSPC); break;
        case SINGLE_HOLD: layer_on(3); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_BSPC)); break;
        case DOUBLE_HOLD: register_code16(KC_BSPC); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_BSPC); register_code16(KC_BSPC);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_BSPC); break;
        case SINGLE_HOLD: layer_off(3); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_BSPC)); break;
        case DOUBLE_HOLD: unregister_code16(KC_BSPC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_BSPC); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};

bool caps_word_press_user(uint16_t keycode) {
    // TODO: make this depend on dvorak/qwerty
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        case KC_SCLN:
        case KC_QUOT:
        case KC_DOT:
        case KC_COMM:
        case KC_MINS:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}
