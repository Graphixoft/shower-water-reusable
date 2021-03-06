/*
 * Buttons.h
 *
 *  Created on: 21 sept. 2020
 *      Author: Alan
 */

#ifndef INC_BUTTONS_H_
#define INC_BUTTONS_H_

#include <stdio.h>

extern uint32_t lastButtonTime;

typedef enum ButtonState_t {
	BUTTON_NONE = 0, /* No buttons pressed / < filter time*/
	BUTTON_SHORT = 1, /* User has pressed the button*/
	BUTTON_LONG = 2, /* User is holding the button*/
	BUTTON_DOUBLE = 4, /* User is double click the button*/

/*
 * Note:
 * Pressed means press + release, we trigger on a full \__/ pulse
 * holding means it has gone low, and been low for longer than filter time
 */
}ButtonState;

//Returns what buttons are pressed (if any)
ButtonState getButtonState();

#endif /* INC_BUTTONS_H_ */
