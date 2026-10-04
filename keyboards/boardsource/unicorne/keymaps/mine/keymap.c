#include QMK_KEYBOARD_H

enum Layer {
 BASE = 0,
 DVORAK = 1,
 GAME = 2,

 NUM,
 NAV,
 FUN,
 MOUSE,
 MACRO,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_split_3x6_3(
      KC_ESC,  LALT_T(KC_Q), LGUI_T(KC_W), LCTL_T(KC_E), LSFT_T(KC_R), KC_T, KC_Y, RSFT_T(KC_U), RCTL_T(KC_I), RGUI_T(KC_O), LALT_T(KC_P),    KC_LBRC,
      KC_TAB,  LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G, KC_H, RCTL_T(KC_J), RSFT_T(KC_K), LALT_T(KC_L), RGUI_T(KC_SCLN), KC_QUOT,
      KC_LSFT, KC_Z,         KC_X,         KC_C,         KC_V,         KC_B, KC_N, KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,         KC_RSFT,
      LT(MACRO,KC_TAB), LT(FUN,KC_ESC), LT(NUM,KC_BSPC),
      LT(MOUSE,KC_SPC), LT(NAV,KC_ENT), LT(MACRO,KC_DEL)),
  // num/sym
  [NUM] = LAYOUT_split_3x6_3(
      KC_GRV,  KC_EXLM,      KC_AT,        KC_HASH,      KC_DLR,       KC_PERC, KC_CIRC,   KC_AMPR,      KC_ASTR,      KC_LPRN,      KC_RPRN,      KC_EQL,
      KC_TILD, LGUI_T(KC_1), LALT_T(KC_2), LSFT_T(KC_3), LCTL_T(KC_4), KC_5,    KC_6,      RCTL_T(KC_7), RSFT_T(KC_8), LALT_T(KC_9), RGUI_T(KC_0), KC_MINS,
      KC_TRNS, KC_GRV,       KC_TILD,      KC_E,         KC_UNDS,      KC_PLUS, LSFT(KC_Z),KC_RBRC,      KC_RCBR,      KC_PIPE,      KC_BSLS,      KC_TRNS,
      KC_TRNS, KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS),
  // nav
  [NAV] = LAYOUT_split_3x6_3(
      LALT(KC_TAB), LALT(KC_TAB), LALT(KC_TAB), KC_TRNS, KC_MPLY, KC_TRNS, KC_PGUP,      KC_HOME,     KC_UP,        KC_END,       KC_PSCR, KC_F12,
      EE_CLR,       KC_TRNS,      KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_PGDN,      KC_LEFT,     KC_DOWN,      KC_UP,        KC_RGHT, KC_ENT,
      KC_TRNS,      KC_MPRV,      KC_MNXT,      KC_VOLD, KC_VOLU, KC_MPLY, LCTL(KC_TAB), RCS(KC_TAB), LCTL(KC_TAB), LSFT(KC_INS), KC_TRNS, KC_TRNS,
      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS),
  // fun
  [FUN] = LAYOUT_split_3x6_3(
      KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F12,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PAUS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
  // mouse
  [MOUSE] = LAYOUT_split_3x6_3(
      KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN3, KC_BTN2, KC_TRNS, KC_WH_U, KC_BTN1, KC_BTN3, KC_BTN2,      KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_U,      KC_MS_R, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_WH_L, KC_WH_R, LSFT(KC_INS), KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
  // macro
  [MACRO] = LAYOUT_split_3x6_3(
      QK_BOOT,   TO(BASE),TO(DVORAK), TO(GAME), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      EE_CLR,    KC_TRNS, KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      DB_TOGG,   KC_TRNS, KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS,   TO(FUN), TO(NUM),
      TO(MOUSE), TO(NAV), KC_TRNS),
  // dvorak
  [DVORAK] = LAYOUT_split_3x6_3(
      KC_ESC,  KC_QUOT,      KC_COMM,      KC_DOT,       KC_P,         KC_Y, KC_F, KC_G,         RCTL_T(KC_C), KC_R,         KC_L,         KC_SLSH,
      KC_TAB,  LGUI_T(KC_A), LALT_T(KC_O), LSFT_T(KC_E), LCTL_T(KC_U), KC_I, KC_D, RCTL_T(KC_H), RSFT_T(KC_T), LALT_T(KC_N), RGUI_T(KC_S), KC_MINS,
      KC_LSFT, KC_SCLN,      KC_Q,         KC_J,         KC_K,         KC_X, KC_B, KC_M,         KC_W,         KC_V,         KC_Z,         KC_RSFT,
      KC_TRNS, KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS),
  // gaming
  [GAME] = LAYOUT_split_3x6_3(
      KC_ESC,  KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I,    KC_O,   KC_P,    KC_LBRC,
      KC_TAB,  KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K,    KC_L,   KC_SCLN, KC_QUOT,
      KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
      MOD_LCTL, LT(FUN,KC_ESC), LT(NUM,KC_SPC),
      KC_SPC, LT(NAV,KC_ENT), LT(MACRO,KC_DEL)),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    if(keycode & QK_MOD_TAP) {
        const uint16_t mod = (keycode >> 8) & 0x1F;
        switch(mod) {
            // gui
            case MOD_LGUI:
            case MOD_RGUI:
                return TAPPING_TERM + 50;

            // alt
            case MOD_LALT:
            case MOD_RALT:
            // ctl
            case MOD_LCTL:
            case MOD_RCTL:
                return TAPPING_TERM + 15;

            // fast shift
            case MOD_LSFT:
            case MOD_RSFT:
                return TAPPING_TERM - 25;
        }
    }
    else if (keycode & QK_LAYER_TAP) {
        const uint16_t layer = (keycode >> 8) & 0xF;
        // slower mouse
        if (layer == MOUSE)
            return TAPPING_TERM + 25;
    }
    return TAPPING_TERM;
}

void keyboard_post_init_user(void) {
    //set_auto_mouse_layer(MOUSE);
    //set_auto_mouse_enable(true);
    //rgb_matrix_enable();
}

/*
bool led_update_user(led_t led_state) {
    //rgblight_set_layer_state(0, led_state.caps_lock);
    return true;
}
*/


void set_rgblight_to_hsv(uint8_t h, uint8_t s, uint8_t v) {
    HSV hsv = {h, s, v};

    if (hsv.v > RGB_MATRIX_MAXIMUM_BRIGHTNESS ) {
        hsv.v = RGB_MATRIX_MAXIMUM_BRIGHTNESS;
    }

    RGB rgb = hsv_to_rgb(hsv);
    rgb_matrix_set_color_all(rgb.r, rgb.g, rgb.b);

}

void set_rgblight_by_layer(uint32_t layer) {
    switch(layer) {
        case BASE:
            set_rgblight_to_hsv(HSV_PINK);
            break;
        case NUM:
            set_rgblight_to_hsv(HSV_RED);
            break;
        case FUN:
            set_rgblight_to_hsv(HSV_PURPLE);
            break;
        case NAV:
            set_rgblight_to_hsv(HSV_BLUE);
            break;
        case MOUSE:
            set_rgblight_to_hsv(HSV_ORANGE);
            break;
        case MACRO:
            set_rgblight_to_hsv(HSV_SPRINGGREEN);
            break;
        case DVORAK:
            set_rgblight_to_hsv(HSV_MAGENTA);
            break;
        case GAME:
            set_rgblight_to_hsv(HSV_GREEN);
            break;
        default:
            set_rgblight_to_hsv(HSV_PINK);
            break;
    }
}

layer_state_t layer_state_set_user(layer_state_t state) {
    //rgblight_set_layer_state(1, layer_state_cmp(state, _DVORAK));
    set_rgblight_by_layer(get_highest_layer(state));
    return state;
}

bool rgb_matrix_indicators_user(void) {
    set_rgblight_by_layer(get_highest_layer(layer_state | default_layer_state));
    return false;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        switch (get_highest_layer(layer_state)) {
            case BASE:
                oled_write_raw(wine, sizeof(wine));
                break;
            case NUM:
                oled_write_raw(num, sizeof(num));
                break;
            case NAV:
                oled_write_raw(arrows, sizeof(arrows));
                break;
            case MACRO:
                oled_write_raw(gears, sizeof(gears));
                break;
            case MOUSE:
                oled_write_raw(mouse, sizeof(mouse));
                break;
            case FUN:
                oled_write_raw(copland, sizeof(copland));
                break;
            case DVORAK:
                oled_write_raw(aoeu, sizeof(aoeu));
                break;
            case GAME:
                oled_write_raw(game, sizeof(game));
                break;
        }
    } else {
        oled_write_raw(death_sensei, sizeof(death_sensei));
    }
    return false;
}


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
        case KC_SLSH:
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

void suspend_power_down_keymap(void) { rgb_matrix_set_suspend_state(true); }
void suspend_wakeup_init_keymap(void) { rgb_matrix_set_suspend_state(false); }
