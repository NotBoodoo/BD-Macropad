
#include "quantum.h"

#ifdef OLED_ENABLE

bool oled_task_kb(void) {

    if (!oled_task_user()) {
        return false;
    }

    // Host Keyboard Layer Status
    oled_write_ln_P(PSTR("BD_Macropad"), false);
    oled_write_ln_P(PSTR("Keymap: Default"), false);

    return true;
}
#endif
