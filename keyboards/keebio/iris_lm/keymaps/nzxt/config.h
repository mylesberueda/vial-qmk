/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x97, 0xF0, 0xDF, 0xEC, 0x29, 0x72, 0x1E, 0x31}
#define VIAL_UNLOCK_COMBO_ROWS {0,9}
#define VIAL_UNLOCK_COMBO_COLS {0,5}

// Memory savings
#define DYNAMIC_KEYMAP_LAYER_COUNT 6
#define DYNAMIC_KEYMAP_MACRO_COUNT 4
#define VIAL_COMBO_ENTRIES 0
#define VIAL_TAP_DANCE_ENTRIES 8
#define NO_ALT_REPEAT_KEY

// Split keyboard sync
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_LAYER_STATE_ENABLE

// Default RGB settings (only apply after EEPROM clear)
#define RGB_MATRIX_DEFAULT_MODE 15
#define RGB_MATRIX_DEFAULT_HUE 0
#define RGB_MATRIX_DEFAULT_SAT 255
#define RGB_MATRIX_DEFAULT_VAL 120
