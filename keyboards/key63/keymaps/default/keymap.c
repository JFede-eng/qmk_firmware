#include "key63.h"
#include "keymap_spanish.h"

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _PB,
    _SFT

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_PB] = LAYOUT(
		KC_ESCAPE, ES_1, ES_2, ES_3, ES_4, ES_5, ES_6, ES_7, ES_8, ES_9, ES_0, ES_QUOT, ES_IQUE, KC_BSPC, KC_VOLUS, 
		KC_TAB, ES_Q, ES_W, ES_E, ES_R, ES_T, ES_Y, ES_U, ES_I, ES_O, ES_P, ES_ACUT, ES_PLUS, KC_ENT, 
		KC_CAPS, ES_A, ES_S, ES_D, ES_F, ES_G, ES_H, ES_J, ES_K, ES_L, ES_NTIL, ES_LCBR, ES_RCBR, 
		KC_LSFT, ES_LABK, ES_Z, ES_X, ES_C, ES_V, ES_B, ES_N, ES_M, ES_COMM, ES_DOT, ES_MINUS, KC_LSFT, KC_UP, KC_LEFT, 
		KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_NO, KC_NO, KC_NO, KC_DOWN, KC_RGHT),

	[_SFT] = LAYOUT(
		KC_NO, ES_EXLM S, ES_DQUO S, ES_HASH S, ES_DLR  S, ES_PERC S, ES_AMPR S, ES_SLSH S, ES_LPRN S, KES_RPRN S, ES_EQL  S, ES_QUES S, ES_IEXL, KC_NO, KC_NO, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, ES_DIAE S, ES_ASTR S, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, ES_LBRC S, KC_TRNS, 
		KC_TRNS, ES_RABK S, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, ES_SCLN S, ES_COLN S, ES_UNDS S, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

{ \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014 }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  KC_NO }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, KC_NO }, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  K312,  K313,  K314 }, \
	{ K400,  K401,  K402,  KC_NO, KC_NO, KC_NO, K406,  KC_NO, KC_NO, KC_NO, K410,  K411,  K412,  K413,  K414 }  \
}
;


const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	keyevent_t event = record->event;

	switch (id) {

	}
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}