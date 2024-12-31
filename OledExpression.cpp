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

void desenharOlhosBravo() {
  display.clearDisplay();
  display.drawCircle(32, 32, 20, SSD1306_WHITE); // olho esquerdo
  display.drawCircle(96, 32, 20, SSD1306_WHITE); // olho direito
  display.drawCircle(32, 32, 5, SSD1306_WHITE); // pupila esquerda
  display.drawCircle(96, 32, 5, SSD1306_WHITE); // pupila direita
  display.drawLine(22, 20, 42, 30, SSD1306_WHITE); // linha olho esquerdo bravo
  display.drawLine(86, 30, 106, 20, SSD1306_WHITE); // linha olho direito bravo
  display.display();
}

void desenharOlhosRosnar() {
  display.clearDisplay();
  display.drawCircle(32, 32, 20, SSD1306_WHITE); // olho esquerdo
  display.drawCircle(96, 32, 20, SSD1306_WHITE); // olho direito
  display.drawRect(25, 25, 15, 15, SSD1306_WHITE); // pupila esquerda quadrada
  display.drawRect(89, 25, 15, 15, SSD1306_WHITE); // pupila direita quadrada
  display.drawLine(22, 40, 42, 40, SSD1306_WHITE); // linha olho esquerdo rosnar
  display.drawLine(86, 40, 106, 40, SSD1306_WHITE); // linha olho direito rosnar
  display.display();
}

void desenharOlhosUivar() {
  display.clearDisplay();
  display.drawCircle(32, 32, 20, SSD1306_WHITE); // olho esquerdo
  display.drawCircle(96, 32, 20, SSD1306_WHITE); // olho direito
  display.drawCircle(32, 32, 5, SSD1306_WHITE); // pupila esquerda
  display.drawCircle(96, 32, 5, SSD1306_WHITE); // pupila direita
  display.drawLine(22, 44, 42, 44, SSD1306_WHITE); // linha olho esquerdo uivar
  display.drawLine(86, 44, 106, 44, SSD1306_WHITE); // linha olho direito uivar
  display.display();
}

void desenharOlhosChoro() {
  display.clearDisplay();
  display.drawCircle(32, 32, 20, SSD1306_WHITE); // olho esquerdo
  display.drawCircle(96, 32, 20, SSD1306_WHITE); // olho direito
  display.drawCircle(32, 40, 5, SSD1306_WHITE); // pupila esquerda
  display.drawCircle(96, 40, 5, SSD1306_WHITE); // pupila direita
  display.drawLine(27, 47, 37, 57, SSD1306_WHITE); // lágrima olho esquerdo
  display.drawLine(91, 47, 101, 57, SSD1306_WHITE); // lágrima olho direito
  display.display();
}
