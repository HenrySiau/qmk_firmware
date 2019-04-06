#include "ergodox_ez.h"
#include "debug.h"
#include "action_layer.h"
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM,
  RGB_SLD,
  VIM_PASTE_FROM_CLIPBOARD,
  L_Z_Z,
  H_Z_Z,
  Z_T,
  Z_B,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox(
    // 1                2               3                   4                     5                 6                      7
    KC_GRAVE,           LGUI(KC_X),     LGUI(KC_C),         LGUI(KC_V),           LGUI(KC_X),       KC_TRANSPARENT,        KC_TRANSPARENT,
    KC_TAB,             KC_Q,           MT(MOD_MEH, KC_W),  MT(MOD_HYPR, KC_E),   KC_R,             KC_T,                  LGUI(KC_GRAVE),
    KC_ESCAPE,          LSFT_T(KC_A),   LALT_T(KC_S),       LGUI_T(KC_D),         LCTL_T(KC_F),     KC_G,
    MO(7),              KC_Z,           KC_X,               KC_C,                 KC_V,             KC_B,                  VIM_PASTE_FROM_CLIPBOARD,
    KC_TRANSPARENT,     KC_LCTRL,       KC_LALT,            KC_LGUI,              MO(1),
                                                                                                    KC_CAPSLOCK,           KC_SYSTEM_SLEEP,
                                                                                                                           TG(5),
                                                                                  KC_LSHIFT,        MO(4),                 KC_LGUI,


    // 1                  2                 3                   4                  5                   6                      7
    TG(7),              KC_TRANSPARENT, KC_TRANSPARENT,     LGUI(KC_1),           LGUI(KC_2),         LGUI(KC_3),           LGUI(KC_Z),
    LGUI(LSFT(KC_I)),   KC_Y,           LCTL_T(KC_U),       RGUI_T(KC_I),         LALT_T(KC_O),       LSFT_T(KC_P),         KC_BSPACE,
                        KC_H,           KC_J,               KC_K,                 KC_L,               LSFT_T(KC_SCOLON),    KC_QUOTE,
    KC_ENTER,           KC_N,           KC_M,               MT(MOD_HYPR, KC_COMMA),MT(MOD_MEH, KC_DOT),KC_SLASH,            MO(6),
    MO(2),              KC_LGUI,        KC_LALT,            KC_LCTRL,             KC_TRANSPARENT,
                                                                                                      KC_AUDIO_VOL_DOWN,    KC_AUDIO_VOL_UP,
                                                                                                                            KC_AUDIO_MUTE,
                                                                                  KC_GRAVE,           MO(3),                KC_SPACE),

  [1] = LAYOUT_ergodox(
    // 1                    2                     3                      4                          5                        6                        7
    KC_TRANSPARENT,         KC_TRANSPARENT,       KC_SPACE,              KC_ENTER,                  KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,
    KC_BSPACE,              LGUI(KC_L),           LALT(LSFT(KC_L)),      KC_UP,                     LALT(LSFT(KC_J)),        KC_TRANSPARENT,          KC_TRANSPARENT,
    KC_LSHIFT,              KC_LALT,              KC_LEFT,               KC_DOWN,                   KC_RIGHT,                LALT(LSFT(KC_K)),
    KC_TRANSPARENT,         LCTL(KC_EQUAL),       LCTL(KC_MINUS),        LGUI(LSFT(KC_BSLASH)),     LGUI(KC_BSLASH),         LGUI(LSFT(KC_ENTER)),    KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_LALT,              KC_LCTRL,              KC_LGUI,                   KC_TRANSPARENT,
                                                                                                                             KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                                                      KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,

    // 1                    2                     3                      4                          5                        6                        7
    KC_TRANSPARENT,         KC_TRANSPARENT,       KC_TRANSPARENT,        LCTL(KC_J),                LGUI(LSFT(KC_K)),        KC_TRANSPARENT,          KC_TRANSPARENT,
    KC_MINUS,               KC_SLASH,             KC_7,                  KC_8,                      KC_9,                    KC_PLUS,                 LALT(KC_BSPACE),
                            KC_DQUO,              LCTL_T(KC_4),          LALT_T(KC_5),              LSFT_T(KC_6),            KC_EQUAL,                KC_RABK,
    LGUI(KC_ENTER),         KC_0,                 KC_1,                  KC_2,                      KC_3,                    KC_ASTR,                 KC_TRANSPARENT,
                                                  KC_LGUI,               KC_LALT,                   KC_LCTRL,                KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                             KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                                                      KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT),

  [2] = LAYOUT_ergodox(
    // 1                2               3                   4                     5                 6                      7
    KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT,     LGUI(KC_H),           KC_TRANSPARENT,   KC_TRANSPARENT,        KC_TRANSPARENT,
    LGUI(KC_DELETE),    LGUI(KC_R),     LCTL(LSFT(KC_TAB)), KC_MS_UP,             LCTL(KC_TAB),     LGUI(KC_T),            KC_TRANSPARENT,
    LGUI(KC_B),         LGUI(KC_LEFT),  KC_MS_LEFT,         KC_MS_DOWN,           KC_MS_RIGHT,      LGUI(KC_RIGHT),
    KC_TRANSPARENT,     KC_PGDOWN,      KC_PGUP,            KC_MS_WH_DOWN,        KC_MS_WH_UP,      LGUI(LSFT(KC_J)),      KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_TRANSPARENT, KC_LCTRL,           KC_LALT,              KC_LGUI,
                                                                                                    KC_TRANSPARENT,        KC_TRANSPARENT,
                                                                                                                           KC_TRANSPARENT,
                                                                                  KC_MS_BTN1,       KC_MS_BTN2,            KC_TRANSPARENT,

    // 1                2               3                   4                     5                 6                      7
    KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT,     KC_TRANSPARENT,       KC_TRANSPARENT,   KC_TRANSPARENT,        KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_TRANSPARENT, LGUI(LSFT(KC_X)),   Z_T,                  LCTL(LGUI(KC_S)), KC_TRANSPARENT,        LGUI(KC_BSPACE),
                        LALT(LCTL(KC_BSPACE)),L_Z_Z,        H_Z_Z,                LALT(LCTL(KC_E)), LALT(LCTL(KC_T)),      LALT(LCTL(KC_ENTER)),
    KC_TRANSPARENT,     LGUI(LSFT(KC_E)),LCTL(LSFT(KC_G)),  Z_B,            LALT(LCTL(KC_LEFT)),LALT(LCTL(KC_RIGHT)),LGUI(LSFT(KC_F)),
    KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT,     KC_TRANSPARENT,       KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT,        KC_TRANSPARENT,
                                                                                                                           KC_TRANSPARENT,
                                                                                  KC_TRANSPARENT,   KC_TRANSPARENT,        KC_TRANSPARENT),

  [3] = LAYOUT_ergodox(
    // 1                    2                     3                      4                          5                        6                        7
    KC_TRANSPARENT,         KC_TRANSPARENT,       KC_TRANSPARENT,        KC_TRANSPARENT,            KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,       KC_TRANSPARENT,        KC_TRANSPARENT,            KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_LSHIFT,            KC_LALT,               KC_LGUI,                   KC_LCTRL,                KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,       KC_TRANSPARENT,        KC_TRANSPARENT,            KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,       KC_TRANSPARENT,        KC_TRANSPARENT,            KC_TRANSPARENT,
                                                                                                                             KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                                                      KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,

    // 1                    2                     3                      4                          5                        6                        7
    KC_TRANSPARENT,         KC_TRANSPARENT,       KC_TRANSPARENT,        KC_TRANSPARENT,            KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_F12,               KC_F7,                 KC_F8,                     KC_F9,                   KC_TRANSPARENT,          KC_TRANSPARENT,
                            KC_F11,               LCTL_T(KC_F4),         LGUI_T(KC_F5),             LALT_T(KC_F6),           KC_RSHIFT,               KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_F10,               KC_F1,                 MT(MOD_HYPR, KC_F2),       MT(MOD_MEH, KC_F3),      KC_TRANSPARENT,          KC_TRANSPARENT,
                                                  KC_TRANSPARENT,        KC_TRANSPARENT,            KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                             KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                                                      KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT),

  [4] = LAYOUT_ergodox(
    // 1                    2                     3                      4                          5                        6                        7
    KC_TRANSPARENT,         KC_TRANSPARENT,       KC_TRANSPARENT,        KC_TRANSPARENT,            KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,       KC_MEH,                KC_HYPR,                   KC_TRANSPARENT,          KC_TRANSPARENT,          LGUI(LSFT(KC_ENTER)),
    KC_TRANSPARENT,         KC_LSHIFT,            KC_LALT,               KC_LGUI,                   KC_LCTRL,                LCTL(KC_J),
    KC_TRANSPARENT,         KC_TRANSPARENT,       KC_TRANSPARENT,        KC_PGUP,                   KC_PGDOWN,               LGUI(LSFT(KC_K)),        LGUI(KC_ENTER),
    KC_TRANSPARENT,         KC_TRANSPARENT,       KC_TRANSPARENT,        KC_TRANSPARENT,            KC_TRANSPARENT,
                                                                                                                             KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                                                      KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,

    // 1                    2                     3                      4                          5                        6                        7
    KC_TRANSPARENT,         KC_TRANSPARENT,       KC_TRANSPARENT,        KC_LBRACKET,               KC_RBRACKET,             KC_TRANSPARENT,          KC_TRANSPARENT,
    KC_BSLASH,              KC_MINUS,             KC_7,                  KC_8,                      KC_9,                    KC_UP,                   KC_TRANSPARENT,
                            KC_EQUAL,             KC_4,                  KC_5,                      KC_6,                    KC_DOWN,                 KC_DELETE,
    KC_TRANSPARENT,         KC_0,                 KC_1,                  KC_2,                      KC_3,                    KC_GRAVE,                KC_TRANSPARENT,
                                                  KC_TRANSPARENT,        KC_TRANSPARENT,            KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                             KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                                                      KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT,          KC_LEFT,                 KC_RIGHT),

  [5] = LAYOUT_ergodox(
    // 1                    2                     3                      4                          5                        6                        7
    KC_TRANSPARENT,        KC_TRANSPARENT,       KC_TRANSPARENT,        KC_P,                      KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,
    KC_TAB,                KC_F2,                KC_F3,                 KC_F4,                     KC_F5,                   KC_T,                    KC_B,
    KC_SPACE,              KC_Q,                 KC_W,                  KC_E,                      KC_R,                    KC_2,
    KC_3,                  KC_1,                 KC_S,                  KC_D,                      KC_F,                    KC_4,                    KC_C,
    KC_TRANSPARENT,        KC_TRANSPARENT,       KC_TRANSPARENT,        KC_TRANSPARENT,            KC_LALT,
                                                                                                                            KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                                                     KC_TRANSPARENT,
                                                                                                   KC_A,                    KC_C,                    KC_P,
    // 1                    2                     3                      4                          5                        6                        7
    KC_TRANSPARENT,         KC_TRANSPARENT,       KC_TRANSPARENT,        KC_TRANSPARENT,            KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,       KC_TRANSPARENT,        KC_TRANSPARENT,            KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,
                            KC_TRANSPARENT,       KC_TRANSPARENT,        KC_TRANSPARENT,            KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,       KC_TRANSPARENT,        KC_TRANSPARENT,            KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,
                                                  KC_TRANSPARENT,        KC_TRANSPARENT,            KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                             KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                                                      KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT),

  [6] = LAYOUT_ergodox(
    // 1                    2                     3                      4                          5                        6                        7
    KC_TRANSPARENT,         KC_TRANSPARENT,       KC_HASH,               KC_AMPR,                   KC_CIRC,                 KC_TRANSPARENT,          KC_TRANSPARENT,
    KC_BSPACE,              KC_EXLM,              KC_MINUS,              KC_LCBR,                   KC_RCBR,                 KC_PIPE,                 KC_BSLASH,
    KC_TRANSPARENT,         KC_AT,                KC_DLR,                KC_LPRN,                   KC_RPRN,                 KC_GRAVE,
    KC_TRANSPARENT,         KC_PERC,              KC_UNDS,               KC_LBRACKET,               KC_RBRACKET,             KC_TILD,                 KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,       KC_TRANSPARENT,        KC_TRANSPARENT,            KC_TRANSPARENT,
                                                                                                                             KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                                                      KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,

    // 1                    2                     3                      4                          5                        6                        7
    KC_TRANSPARENT,         KC_TRANSPARENT,       KC_TRANSPARENT,        KC_TRANSPARENT,            KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,       KC_TRANSPARENT,        KC_TRANSPARENT,            KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,
                            KC_TRANSPARENT,       KC_TRANSPARENT,        KC_TRANSPARENT,            KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,       KC_TRANSPARENT,        KC_TRANSPARENT,            KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,
                                                  KC_LGUI,               KC_TRANSPARENT,            KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                             KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                                                      KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT),

  [7] = LAYOUT_ergodox(
    // 1                    2                     3                      4                          5                        6                        7
    KC_TRANSPARENT,         KC_TRANSPARENT,       KC_TRANSPARENT,        KC_TRANSPARENT,            KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,       KC_TRANSPARENT,        KC_TRANSPARENT,            KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,
    KC_LSHIFT,              KC_LALT,              KC_LCTRL,              KC_TRANSPARENT,            KC_TRANSPARENT,          KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,       KC_TRANSPARENT,        KC_TRANSPARENT,            KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,       KC_TRANSPARENT,        KC_TRANSPARENT,            KC_LGUI,
                                                                                                                             KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                                                      KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,

    // 1                    2                     3                      4                          5                        6                        7
    KC_TRANSPARENT,         KC_TRANSPARENT,       KC_TRANSPARENT,        KC_DOT,                    KC_HASH,                 KC_TRANSPARENT,          KC_TRANSPARENT,
    KC_MINUS,               KC_SLASH,             KC_7,                  KC_8,                      KC_9,                    KC_PLUS,                 KC_TRANSPARENT,
                            KC_DQUO,              KC_4,                  KC_5,                      KC_6,                    KC_EQUAL,                KC_RABK,
    KC_TRANSPARENT,         KC_0,                 KC_1,                  KC_2,                      KC_3,                    KC_KP_ASTERISK,          KC_TRANSPARENT,
                                                  KC_TRANSPARENT,        KC_TRANSPARENT,            KC_TRANSPARENT,          KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                             KC_TRANSPARENT,          KC_TRANSPARENT,
                                                                                                                                                      KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT,           KC_TRANSPARENT,         KC_TRANSPARENT),

};

bool suspended = false;
const uint16_t PROGMEM fn_actions[] = {
  [1] = ACTION_LAYER_TAP_TOGGLE(1)
};

// leaving this in place for compatibilty with old keymaps cloned and re-compiled.
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
      switch(id) {
        case 0:
        if (record->event.pressed) {
          SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
        }
        break;
      }
    return MACRO_NONE;
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // dynamically generate these.
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
      break;

    case VIM_PASTE_FROM_CLIPBOARD:
      if (record->event.pressed) {
                SEND_STRING("\"0p");
      }
      break;

    case L_Z_Z:
      if (record->event.pressed) {
                SEND_STRING("Lzz");
      }
      break;

    case H_Z_Z:
      if (record->event.pressed) {
                SEND_STRING("Hzz");
      }
      break;

    case Z_T:
      if (record->event.pressed) {
                SEND_STRING("zt");
      }
      break;

    case Z_B:
      if (record->event.pressed) {
                SEND_STRING("zb");
      }
      break;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

    uint8_t layer = biton32(state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      case 1:
        ergodox_right_led_1_on();
        break;
      case 2:
        ergodox_right_led_2_on();
        break;
      case 3:
        ergodox_right_led_3_on();
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      default:
        break;
    }
    return state;

};
