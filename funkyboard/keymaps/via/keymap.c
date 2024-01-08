#include QMK_KEYBOARD_H

enum layer_names {
    _BASE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_mp10(
        KC_A   , KC_B   , KC_C   , KC_D   , KC_E   , KC_F   , KC_G   , KC_H   ,
        KC_I   , KC_J   , KC_K   , KC_L   , KC_M   , KC_N   , HF_TOGG   , KC_P   ,
        KC_Q   , KC_R   , KC_S   , KC_T   , KC_U   , KC_V   , KC_W   , KC_X   ,
        KC_A   , KC_B   , KC_C   , KC_D   , KC_E   , KC_F   , KC_G   , KC_H   ,
        KC_I   , KC_J   , KC_K   , KC_L   , KC_M   , KC_N   , KC_O   , KC_P   ,
        KC_Q   , KC_R   , KC_S   , KC_T   , KC_U   , KC_V   , KC_W   , KC_X   ,
        KC_A   , KC_B   , KC_C   , KC_D   , KC_1   , KC_2   , KC_3   , RGB_TOG   
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] =   { ENCODER_CCW_CW(KC_LEFT, KC_RIGHT), ENCODER_CCW_CW(KC_LEFT, KC_RIGHT), ENCODER_CCW_CW(KC_LEFT, KC_RIGHT), ENCODER_CCW_CW(KC_RIGHT, KC_LEFT), ENCODER_CCW_CW(RGB_RMOD, RGB_MOD), ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) }
};
#endif

// bool encoder_update_user(uint8_t index, bool clockwise) {
//     if (index == 0) { /* First encoder */
//         if (clockwise) {
//             rgblight_step();
//         } else {
//             rgblight_step_reverse();
//         }
//     }
//     return false;
// }

// enum custom_keycodes {
//   SRL = QK_USER_0,
//   SBL = QK_USER_1
// };

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   switch (keycode) {
//     case SRL:
//       if (record->event.pressed) {
//         // Do something when pressed
//         rgblight_setrgb_at(255, 0, 0, 1);
//       } else {
//         // Do something else when release
//       }
//       return false; // Skip all further processing of this key
//     case SBL:
//       if (record->event.pressed) {
//         // Do something when pressed
//         rgblight_setrgb_at(0, 0, 255, 2);
//       } else {
//         // Do something else when release
//       }
//       return false; // Skip all further processing of this key
//     default:
//       return true; // Process all other keycodes normally
//   }
// }
