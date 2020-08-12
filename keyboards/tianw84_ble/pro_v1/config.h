#ifndef MASTER_CONFIG_H_
#define MASTER_CONFIG_H_

#include "custom_board.h"

#define THIS_DEVICE_ROWS 6
#define THIS_DEVICE_COLS 16

/* key matrix pins */
#define MATRIX_ROW_PINS { B0, B1, B2, B3, D0, D1 }
#define MATRIX_COL_PINS { F7, F6, F5, F4, F1, F0, D2, D3, D5, D4, D6, D7, B4, B5, B6, C6 }

#ifdef ENCODER_ENABLE
	#define ENCODERS_PAD_A { PIN7 }
	#define ENCODERS_PAD_B { PIN22 }
#endif

#define TAP_CODE_DELAY 50
#define IS_LEFT_HAND  true
#define ENABLE_STARTUP_ADV_NOLIST

#endif /* MASTER_CONFIG_H_ */
