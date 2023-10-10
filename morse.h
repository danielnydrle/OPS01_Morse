#include <string>
#include "mbed.h"

void blick_word_morse(string in_word, DigitalOut bspLed);
void dot();
void dash();
void pauseLetter();
void pauseWord();