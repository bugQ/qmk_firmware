/* Copyright 2020 foostan
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
     KC_LALT,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,     KC_I,    KC_O,   KC_P,  KC_RALT,
     KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,     KC_K,    KC_L, KC_SCLN, KC_RCTL,
     KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,  KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
     XXXXXXX, XXXXXXX, KC_LGUI,   MO(2),  KC_SPC,   MO(1),  KC_ENT, KC_BSPC,   KC_DEL, KC_RGUI, XXXXXXX, XXXXXXX
  ),

[1] = LAYOUT(
     _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5, KC_HOME, KC_PGDN, KC_PGUP,  KC_END,  KC_GRV, _______,
     _______,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, KC_QUOT, _______,
     _______,  KC_ESC, KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_VOLD, KC_VOLU, KC_BRID, KC_BRIU, KC_BSLS, _______,
      KC_ESC, _______, _______,   MO(3),  KC_INS, _______, KC_MUTE,  KC_DEL, _______, _______, _______, _______
  ),

[2] = LAYOUT(
     _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, KC_PSLS,   KC_P7,   KC_P8,   KC_P9, KC_PAST, _______,
     _______,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, KC_PMNS,   KC_P4,   KC_P5,   KC_P6, KC_PPLS, _______,
     _______,  KC_F11,  KC_F12,  KC_TAB, KC_PSCR, KC_PAUS, KC_PCMM,   KC_P1,   KC_P2,   KC_P3, KC_PDOT, _______,
      KC_PWR, _______, _______, _______,  KC_ENT,   MO(3), KC_PENT,   KC_P0, KC_PEQL, _______, _______,  KC_NUM
  ),

[3] = LAYOUT(
     _______, KC_ACL2, KC_BTN4, KC_MS_U, KC_BTN5, KC_WH_U, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     _______, KC_BTN2, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN3, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     _______, KC_ACL0, KC_WH_L, KC_SCRL, KC_WH_R, KC_WH_U, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     QK_BOOT, _______, _______, _______, KC_BTN1, _______, _______, KC_CAPS, XXXXXXX, _______, _______, _______
  ),
};
