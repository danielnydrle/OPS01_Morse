#include "mbed.h"
#include "morse.h"

DigitalOut led(LED1);

int main() {
    while (1) {
        string str = "DANIEL";
        blick_word_morse(str, led);
    }
}
