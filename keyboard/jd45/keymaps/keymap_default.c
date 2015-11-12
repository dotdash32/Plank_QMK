#include "jd45.h"
//#include "backlight.h"

/* this keymap is to provide a basic keyboard layout for testing the matrix
 * for more practical and complicated keymap refer to other keymaps in the same folder
 */
/* JD45 keymap definition macro
 */
#define KEYMAP( \
        K01, K02, K03, K04, K05, K06, K07, K08, K09, K10, K11, K12, \
	   K13, K14, K15, K16, K17, K18, K19, K20, K21, K22, K23, \
	K24, K25, K26, K27, K28, K29, K30, K31, K32, K33, K34, K35, \
	K36, K37, K38, K39,      K40,           K41, K42, K43, K44 \
) { \
    { K01, K02, K03, K04, K05,   K06, K07,   K08,   K09, K10, K11,   K12 }, \
    { K13, K14, K15, K16, K17,   K18, K19,   K20,   K21, K22, KC_NO, K23 }, \
    { K24, K25, K26, K27, K28,   K29, K30,   K31,   K32, K33, K34,   K35 }, \
    { K36, K37, K38, K39, KC_NO, K40, KC_NO, KC_NO, K41, K42, K43,   K44 }  \
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = KEYMAP(
  KC_ESC,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_BSPC,
  KC_TAB,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,       KC_ENT,
  KC_CAPS, KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_RSFT,
  KC_LCTL, KC_LALT, KC_LGUI,  KC_FN1, KC_SPC,  KC_FN2,  KC_SCOLON, KC_QUOTE,   KC_SLSH ),
[1] = KEYMAP(
  KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL,
  KC_TRNS, KC_HOME, KC_PGUP, KC_TRNS, KC_TRNS, KC_TRNS, KC_EQL, KC_MINS, KC_LBRACKET, KC_RBRACKET, KC_BSLS
  KC_TRNS, KC_TRNS, KC_END, KC_PGDN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ),
[2] = KEYMAP( 
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT ),
};

const uint16_t PROGMEM fn_actions[] = {
	[0] = ACTION_LAYER_MOMENTARY(1),
	[1] = ACTION_LAYER_MOMENTARY(2),
};
