# BD_Macropad
Source code for the Firmware. 
Use QMK MSYS (https://msys.qmk.fm/) for Compiling and Flashing. 

# Guide for Compiling
Open QMK MSYS
write "qmk setup" and enter
clone qmk firmware
After cloning qmk_firmware 
Drop the "bd_macropad" folder into "C:\Users\"user"\qmk_firmware\keyboards" folder.
Open QMK MSYS, paste  "qmk compile -kb bd_macropad -km default" and enter.
The Compiled "bd_macropad_default.uf2" file is inside the "qmk_firmware" folder.

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the top left key on the left half, or top right key on the right half, and then plug in the USB cable on that keyboard half.
* **Physical reset button**: Double tap the reset button on the XIAO RP2040.
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available.
