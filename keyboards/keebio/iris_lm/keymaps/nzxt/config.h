/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x97, 0xF0, 0xDF, 0xEC, 0x29, 0x72, 0x1E, 0x31}
#define VIAL_UNLOCK_COMBO_ROWS {0,9}
#define VIAL_UNLOCK_COMBO_COLS {0,5}

// Tri-layer configuration (FN layers are 3, 4, 5)
#define TRI_LAYER_LOWER_LAYER 3
#define TRI_LAYER_UPPER_LAYER 4
#define TRI_LAYER_ADJUST_LAYER 5

// Home-row mods configuration
#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY
#define PERMISSIVE_HOLD_PER_KEY
#define QUICK_TAP_TERM 300
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

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
