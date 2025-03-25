#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(0); // Initialize

  // Open Run dialog (Win + R)
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);

  // Type "chrome" and press Enter
  DigiKeyboard.print("chrome");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000); // Wait for Chrome to open

  // Type "cat" in search bar and press Enter
  DigiKeyboard.print("cat");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  // Stop execution by entering an infinite sleep mode
  for (;;); // Endless loop prevents further execution
}

void loop() {
  // Nothing happens here, the program only runs once
}
