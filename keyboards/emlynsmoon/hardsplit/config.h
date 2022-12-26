// Copyright 2022 Clark Dyck (@EmlynsMoon)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 7
#define USE_I2C
// wiring of each half

#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6, B5 }
#define MATRIX_ROW_PINS { B4, E6, D7, C6, D4 }

#define SPLIT_HAND_PIN F4


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW