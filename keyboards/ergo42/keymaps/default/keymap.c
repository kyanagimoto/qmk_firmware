#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define BASE 0
#define META 1
#define SYMB 2
#define GAME 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* BASE
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | DEL  | ESC  |   Q  |   W  |   E  |   R  |  T   |   |  Y   |   U  |   I  |   O  |   P  |   [  |  `   |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | TAB  | LCtrl|   A  |   S  |   D  |   F  |  G   |   |  H   |   J  |   K  |   L  |   ;  |   ]  |  -   |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | SYMB | LSft |   Z  |   X  |   C  |   V  |  B   |   |  N   |   M  |   ,  |   .  |   /  | RSft |  =   |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * | META | LGUI |   '  |  \   | LAlt | BSpc | Space|   |Enter | RGUI | RAlt | LEFT | UP   | DOWN | RIGHT|
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [BASE] = LAYOUT( \
    KC_DELT,  KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_GRV, \
    KC_TAB,   KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_RBRC, KC_MINS, \
    MO(SYMB), KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_EQL, \
    MO(META), KC_LGUI, KC_QUOT, KC_BSLS, KC_LALT, KC_BSPC, KC_SPC, KC_ENT, KC_RGUI,  KC_RALT, KC_LEFT, KC_UP,  KC_DOWN, KC_RGHT \
  ),

  /* META
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | Reset| ESC  |   1  |   2  |   3  |   4  |  5   |   |  6   |   7  |   8  |   9  |   0  |      |      |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * |      | LCtrl|      |      |      |      |      |   |      |      |      |      |      |      | -    |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | SYMB |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   | F7   |  F8  |  F9  |  F10 | F11  | F12  | =    |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * | META | LGUI |      |      | LAlt | Space| BSpc |   |Enter |      |      | LEFT | UP   | DOWN | RIGHT|
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [META] = LAYOUT( \
    RESET,   _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX, XXXXXXX, \
    XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, \
    _______, _______, XXXXXXX, XXXXXXX, _______, _______, _______, _______, XXXXXXX, XXXXXXX, _______, _______, _______, _______ \
  ),

  /* SYMB
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | ESC  |   !  |   @  |   #  |   $  |   %  |  [   |   |  ]   |   ^  |   &  |   *  |   (  |   )  | `    |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | Del  | LCtrl|      |      |      |      |  (   |   |  )   |      |      |      |      |      | -    |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | SYMB |      |      |      |      |      |  {   |   |  }   |      |      |      |      |      | =    |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * | META | LGUI |   '  |   \  | LAlt | Space| BSpc |   |Enter | RGUI | RAlt | LEFT | UP   | DOWN | RIGHT|
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [SYMB] = LAYOUT( \
    KC_ESC,  S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), KC_LBRC,    KC_RBRC,    S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), _______, \
    KC_DEL,  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, S(KC_9),    S(KC_0),    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, S(KC_LBRC), S(KC_RBRC), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______,    _______,    _______, _______, _______, _______, _______, _______ \
  )

};
