#include <string>
#include "mbed.h"

#define DOT 333ms
#define LINE 1000ms
#define WORD 2333ms

void dot(DigitalOut led) {
    led = 0;
    ThisThread::sleep_for(DOT);
    led = 1;
    ThisThread::sleep_for(DOT);
}

void dash(DigitalOut led) {
    led = 0;
    ThisThread::sleep_for(LINE);
    led = 1;
    ThisThread::sleep_for(DOT);
}

void pauseLetter() {
    ThisThread::sleep_for(LINE);
}

void pauseWord() {
    ThisThread::sleep_for(WORD);
}

void morseA(DigitalOut led) {
    dot(led);
    dash(led);
    pauseLetter();
}

void morseB(DigitalOut led) {
    dash(led);
    dot(led);
    dot(led);
    dot(led);
    pauseLetter();
}

void morseC(DigitalOut led) {
    dash(led);
    dot(led);
    dash(led);
    dot(led);
    pauseLetter();
}

void morseD(DigitalOut led) {
    dash(led);
    dot(led);
    dot(led);
    pauseLetter();
}

void morseE(DigitalOut led) {
    dot(led);
    pauseLetter();
}

void morseF(DigitalOut led) {
    dot(led);
    dot(led);
    dash(led);
    dot(led);
    pauseLetter();
}

void morseG(DigitalOut led) {
    dash(led);
    dash(led);
    dot(led);
    pauseLetter();
}

void morseH(DigitalOut led) {
    dot(led);
    dot(led);
    dot(led);
    dot(led);
    pauseLetter();
}

void morseI(DigitalOut led) {
    dot(led);
    dot(led);
    pauseLetter();
}

void morseJ(DigitalOut led) {
    dot(led);
    dash(led);
    dash(led);
    dash(led);
    pauseLetter();
}

void morseK(DigitalOut led) {
    dash(led);
    dot(led);
    dash(led);
    pauseLetter();
}

void morseL(DigitalOut led) {
    dot(led);
    dash(led);
    dot(led);
    dot(led);
    pauseLetter();
}

void morseM(DigitalOut led) {
    dash(led);
    dash(led);
    pauseLetter();
}

void morseN(DigitalOut led) {
    dash(led);
    dot(led);
    pauseLetter();
}

void morseO(DigitalOut led) {
    dash(led);
    dash(led);
    dash(led);
    pauseLetter();
}

void morseP(DigitalOut led) {
    dot(led);
    dash(led);
    dash(led);
    dot(led);
    pauseLetter();
}

void morseQ(DigitalOut led) {
    dash(led);
    dash(led);
    dot(led);
    dash(led);
    pauseLetter();
}

void morseR(DigitalOut led) {
    dot(led);
    dash(led);
    dot(led);
    pauseLetter();
}

void morseS(DigitalOut led) {
    dot(led);
    dot(led);
    dot(led);
    pauseLetter();
}

void morseT(DigitalOut led) {
    dash(led);
    pauseLetter();
}

void morseU(DigitalOut led) {
    dot(led);
    dot(led);
    dash(led);
    pauseLetter();
}

void morseV(DigitalOut led) {
    dot(led);
    dot(led);
    dot(led);
    dash(led);
    pauseLetter();
}

void morseW(DigitalOut led) {
    dot(led);
    dash(led);
    dash(led);
    pauseLetter();
}

void morseX(DigitalOut led) {
    dash(led);
    dot(led);
    dot(led);
    dash(led);
    pauseLetter();
}

void morseY(DigitalOut led) {
    dash(led);
    dot(led);
    dash(led);
    dash(led);
    pauseLetter();
}

void morseZ(DigitalOut led) {
    dash(led);
    dash(led);
    dot(led);
    dot(led);
    pauseLetter();
}

void blick_word_morse(string word, DigitalOut led) {
    for (char& c : word) {
        switch (c) {
            case 'A':
                morseA(led);
                break;
            case 'B':
                morseB(led);
                break;
            case 'C':
                morseC(led);
                break;
            case 'D':
                morseD(led);
                break;
            case 'E':
                morseE(led);
                break;
            case 'F':
                morseF(led);
                break;
            case 'G':
                morseG(led);
                break;
            case 'H':
                morseH(led);
                break;
            case 'I':
                morseI(led);
                break;
            case 'J':
                morseJ(led);
                break;
            case 'K':
                morseK(led);
                break;
            case 'L':
                morseL(led);
                break;
            case 'M':
                morseM(led);
                break;
            case 'N':
                morseN(led);
                break;
            case 'O':
                morseO(led);
                break;
            case 'P':
                morseP(led);
                break;
            case 'Q':
                morseQ(led);
                break;
            case 'R':
                morseR(led);
                break;
            case 'S':
                morseS(led);
                break;
            case 'T':
                morseT(led);
                break;
            case 'U':
                morseU(led);
                break;
            case 'V':
                morseV(led);
                break;
            case 'W':
                morseW(led);
                break;
            case 'X':
                morseX(led);
                break;
            case 'Y':
                morseY(led);
                break;
            case 'Z':
                morseZ(led);
                break;
            default:
                pauseLetter();
        }
    }
    pauseWord();
}