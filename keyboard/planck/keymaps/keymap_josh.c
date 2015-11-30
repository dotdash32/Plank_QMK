// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// this is the style you want to emulate.

#include "planck.h"
#include "backlight.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QW 0
#define _FN 1
#define _NM 2
#define _NL 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QW] = { /* Qwerty */
  {KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC},
  {KC_RCTL,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT},
  {KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, FUNC(3)},
  {KC_RCTL,  KC_RGUI, FUNC(4), KC_RALT, KC_LSFT, FUNC(1), FUNC(1),  FUNC(2), MO(_FN), KC_HOME, KC_END, KC_ESC }
},
[_FN] = { /* Function */
  {KC_GRV,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_UP,   KC_PGDN, KC_BSLS, KC_BSPC },
  {KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSPC, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_QUOT, KC_ENT },
  {KC_TRNS, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY, KC_TRNS, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_APP, KC_RSFT },
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET,   KC_TRNS, KC_TRNS}
},
[_NM] = { /* NUMBERS */
  {KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_BSPC},
  {KC_TRNS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSLS},
  {KC_TRNS, KC_F11,  KC_F12,  KC_PSCR, KC_SLCK, KC_PAUS, KC_F12,  KC_TRNS, KC_TRNS, KC_MINS, KC_EQL,  KC_TRNS},
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS}
},
[_NL] = { /* Numpad layer */
  {KC_ESC,  KC_ESC,  KC_P7,   KC_P8,   KC_P9,   KC_P0,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS},
  {KC_PSLS, KC_PAST, KC_P4,   KC_P5,   KC_P6,   KC_PDOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS},
  {KC_PPLS, KC_PMNS, KC_P1,   KC_P2,   KC_P3,   KC_PENT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS},
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_LCTL, KC_LSFT, FUNC(5), FUNC(5), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS}
},
[5] = { /* Numpad function layer */
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_UP,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS},
  {KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS},
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS},
  {KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS}
},
};

const uint16_t PROGMEM fn_actions[] = {
   [1] = ACTION_LAYER_TAP_KEY(_NM, KC_BSPC),
   [2] = ACTION_LAYER_TAP_KEY(_FN, KC_SPC),
   [3] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_ENT),
   
   [4] = ACTION_LAYER_TOGGLE(_NL),
   [5] = ACTION_LAYER_TAP_KEY(5, KC_BSPC)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
}
        
        
        