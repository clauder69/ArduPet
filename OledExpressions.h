#ifndef OLEDEXPRESSIONS_H
#define OLEDEXPRESSIONS_H

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

extern Adafruit_SSD1306 display;

void desenharOlhosTriste();
void desenharOlhosAlegre();
void desenharOlhosBravo();
void desenharOlhosRosnar();
void desenharOlhosUivar();
void desenharOlhosChoro();

void desenharOlhosTriste() {
    display.clearDisplay();
    display.drawCircle(32, 32, 20, SSD1306_WHITE); // olho esquerdo
    display.drawCircle(96, 32, 20, SSD1306_WHITE); // olho direito
    display.drawCircle(32, 40, 5, SSD1306_WHITE); // pupila esquerda
    display.drawCircle(96, 40, 5, SSD1306_WHITE); // pupila direita
    display.drawLine(22, 24, 42, 24, SSD1306_WHITE); // linha olho esquerdo triste
    display.drawLine(86, 24, 106, 24, SSD1306_WHITE); // linha olho direito triste
    display.display();
}

void desenharOlhosAlegre() {
    display.clearDisplay();
    display.drawCircle(32, 32, 20, SSD1306_WHITE); // olho esquerdo
    display.drawCircle(96, 32, 20, SSD1306_WHITE); // olho direito
    display.drawCircle(32, 24, 5, SSD1306_WHITE); // pupila esquerda
    display.drawCircle(96, 24, 5, SSD1306_WHITE); // pupila direita
    display.drawLine(22, 40, 42, 40, SSD1306_WHITE); // linha olho esquerdo alegre
    display.drawLine(86, 40, 106, 40, SSD1306_WHITE); // linha olho direito alegre
    display.display();
}

#endif
