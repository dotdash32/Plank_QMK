#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP_ANSI(
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   BSLS, BSPC, \
        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT, ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,      RSFT, \
        LCTL,LGUI,FN1,LSFT,        SPC,               FN0, APP, RCTL,ESC),
    /* 1: colemak */
    KEYMAP_ANSI(
        TAB, Q,   W,   F,   P,   G,   J,   L,   U,   Y,   SCLN,BSLS, BSPC, \
        BSPC,A,   R,   S,   T,   D,   H,   N,   E,   I,   O,   QUOT, ENT,  \
        LSFT,Z,   X,   C,   V,   B,   K,   M,   COMM,DOT, SLSH,      RSFT, \
        LCTL,LGUI,FN1,LSFT,        SPC,               FN0, APP, RCTL,ESC),
    /* 2: dvorak */
    KEYMAP_ANSI(
        TAB, QUOT,COMM,DOT, P,   Y,   F,   G,   C,   R,   L,   BSLS, BSPC, \
        LCTL,A,   O,   E,   U,   I,   D,   H,   T,   N,   S,   MINS, ENT,  \
        LSFT,SCLN,Q,   J,   K,   X,   B,   M,   W,   V,   Z,         RSFT, \
        LCTL,LGUI,FN1,LSFT,        SPC,               FN0, APP, RCTL,ESC),
    /* 3: workman */
    KEYMAP_ANSI(
        TAB, Q,   D,   R,   W,   B,   J,   F,   U,   P,   SCLN,BSLS, BSPC, \
        BSPC,A,   S,   H,   T,   G,   Y,   N,   E,   O,   I,   QUOT, ENT, \
        LSFT,Z,   X,   M,   C,   V,   K,   L,   COMM,DOT, SLSH,      RSFT, \
        LCTL,LGUI,FN1,LSFT,        SPC,               FN0, APP, RCTL,ESC),


    /* 4: Poker Fn
     * ,------------------------------------------------------.
     * |FN4  |   | Up|INS|DEL |   |End|PgU| Up|PgD|Hom|Bls|   |
     * |------------------------------------------------------|
     * | Caps |Lef|Dow|Rig|BSPC|   |HOM|Lef|Dow|Rig|Tsk|End|  |
     * |------------------------------------------------------|
     * |        |Psc|Slk|Pau|Mut|VoU|VoD|   |PgU|PgD|App|     |
     * |------------------------------------------------------|
     * |    |    |    |                        |    |    |    |
     * `------------------------------------------------------'
     * Fn:  to Fn overlay
     * FnL: to Layout selector overaly
     */
    KEYMAP_ANSI(
        FN4 ,TRNS,  UP,INS ,DEL ,TRNS, END,PGUP,  UP,PGDN,HOME,TRNS, TRNS, \
        CAPS,LEFT,DOWN,RGHT,BSPC,TRNS,HOME,LEFT,DOWN,RGHT,FN3 , END, TRNS, \
        TRNS,PSCR,SLCK,PAUS,MUTE,VOLU,VOLD,TRNS,PGUP,PGDN, APP,      TRNS, \
        TRNS,TRNS,TRNS,TRNS,     TRNS,              TRNS,TRNS,TRNS,TRNS),
    /* 5: Layout selector
     * ,-------------------------------------------------------.
     * |     |Lq |Lw |   |   |   |   |   |   |   |   |   |     |
     * |-------------------------------------------------------|
     * |      |   |   |Ld |   |   |   |   |   |   |   |        |
     * |-------------------------------------------------------|
     * |        |   |   |Lc |   |   |   |   |   |   |          |
     * |-------------------------------------------------------|
     * |    |    |    |                    |    |    |    |    |
     * `-------------------------------------------------------'
     * Lq: set Qwerty layout
     * Lc: set Colemak layout
     * Ld: set Dvorak layout
     * Lw: set Workman layout
     */
    KEYMAP_ANSI(
        TRNS,FN5, FN8, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS, \
        TRNS,TRNS,TRNS,FN7, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS, \
        TRNS,TRNS,TRNS,FN6, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      TRNS, \
        TRNS,TRNS,TRNS,TRNS,      TRNS,              TRNS,TRNS,TRNS,TRNS),
    /* 6: Numbers
	 * ,-------------------------------------------------------.
     * |     |F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10 |F11|F12 |
     * |-------------------------------------------------------|
     * |      |1  |2  |3  |4  |5  |6  |7  |8  |9  |0  |        |
     * |-------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |          |
     * |-------------------------------------------------------|
     * |    |    |    |                    |    |    |    |    |
     * `-------------------------------------------------------'
	*/
    KEYMAP_ANSI(
      	TRNS,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12, \
      	TRNS,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,TRNS,TRNS, \
      	TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
      	TRNS,TRNS,TRNS,TRNS,     TRNS,              TRNS,TRNS,TRNS,TRNS)
      	
};
const uint16_t PROGMEM fn_actions[] = {
    /* Poker Layout */
    [0] = ACTION_LAYER_MOMENTARY(4),  // to Fn overlay
    [1] = ACTION_LAYER_MOMENTARY(6),  // to Numbers
    [3] = ACTION_MODS_KEY(MOD_RCTL|MOD_RSFT, KC_ESC), // Task(RControl,RShift+Esc)
    [4] = ACTION_LAYER_MOMENTARY(5),  // to Layout selector
    [5] = ACTION_DEFAULT_LAYER_SET(0),  // set qwerty layout
    [6] = ACTION_DEFAULT_LAYER_SET(1),  // set colemak layout
    [7] = ACTION_DEFAULT_LAYER_SET(2),  // set dvorak layout
    [8] = ACTION_DEFAULT_LAYER_SET(3),  // set workman layout
};

        
        
        
        