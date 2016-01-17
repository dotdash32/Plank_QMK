#include "ergodox_ez.h"
#include "debug.h"
#include "action_layer.h"

// TODO: Define layer names that make sense for the ErgoDox EZ.
#define BASE 0 // default layer
#define SYMB 1 // symbols
#define MDIA 2 // media keys

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
*/
  
// If it accepts an argument (i.e, is a function), it doesn't need KC_.
// Otherwise, it needs KC_*
[BASE] = KEYMAP(  // layer 0 : default
        // left hand
        KC_A,KC_A,KC_A,KC_A,KC_A,\
  		KC_B,KC_B,KC_B,KC_B,KC_B,\
  		KC_C,KC_C,KC_C,KC_C,KC_C,\
  		KC_D,KC_D,KC_D,KC_D, 	 \
 
        // right hand
        KC_E,KC_E,KC_E,KC_E,KC_E,\
  		KC_F,KC_F,KC_F,KC_F,KC_F,\
  		KC_G,KC_G,KC_G,KC_G,KC_G,\
  		KC_H,KC_H,KC_H,KC_H		 
    ),
  
[1] = KEYMAP(
  // left hand
        KC_A,KC_A,KC_A,KC_A,KC_A,\
  		KC_B,KC_B,KC_B,KC_B,KC_B,\
  		KC_C,KC_C,KC_C,KC_C,KC_C,\
  		KC_D,KC_D,KC_D,KC_D, 	 \
 
        // right hand
        KC_E,KC_E,KC_E,KC_E,KC_E,\
  		KC_F,KC_F,KC_F,KC_F,KC_F,\
  		KC_G,KC_G,KC_G,KC_G,KC_G,\
  		KC_H,KC_H,KC_H,KC_H		 \
),

};
/* Keymap 1: Symbol Layer
 *
 * 
// SYMBOLS
[SYMB] = KEYMAP(
       // left hand
       KC_GRV , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  	   KC_CAPS, KC_TRNS, KC_TRNS, KC_BSPC, KC_TRNS,
  	   KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY, KC_TRNS,
  	   			KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	   //right hand
	   KC_HOME, KC_PGUP, KC_UP,   KC_PGDN, KC_BSLS,
  	   KC_END,  KC_LEFT, KC_DOWN, KC_RGHT, KC_QUOT,
  	   KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_APP,
  	   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	   ),
[RAISE] = KEYMAP(
	   // left hand
	   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,
  	   KC_1,    KC_2,    KC_3,    KC_4,    KC_5, 
  	   KC_F11,  KC_F12,  KC_PSCR, KC_SLCK, KC_PAUS,
  				KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	   // right hand
	   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
  	   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  
  	   KC_F12,  KC_TRNS, KC_TRNS, KC_MINS, KC_EQL,
  	   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
},
	),
/* Keymap 2: Media and mouse keys
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      | MsUp |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |MsLeft|MsDown|MsRght|      |------|           |------|      |      |      |      |      |  Play  |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      | Prev | Next |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      | Lclk | Rclk |                                       |VolUp |VolDn | Mute |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |Brwser|
 *                                 |      |      |------|       |------|      |Back  |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 
// MEDIA AND MOUSE
KEYMAP(
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_U, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN3, KC_BTN2,
                                           KC_TRNS, KC_TRNS,
                                                    KC_TRNS,
                                  KC_TRNS, KC_TRNS, KC_TRNS,
    // right hand
       KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPLY,
       KC_TRNS,  KC_TRNS, KC_TRNS, KC_MPRV, KC_MNXT, KC_TRNS, KC_TRNS,
                          KC_VOLU, KC_VOLD, KC_MUTE, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS,
       KC_TRNS,
       KC_TRNS, KC_TRNS, KC_WBAK
),
*/


const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_TAP_TOGGLE(SYMB)                // FN1 - Momentary Layer 1 (Symbols)
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
};

// Runs just one time when the keyboard initializes.
void * matrix_init_user(void) {

};

// Runs constantly in the background, in a loop.
void * matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      // TODO: Make this relevant to the ErgoDox EZ.
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        default:
            // none
            break;
    }

};

        