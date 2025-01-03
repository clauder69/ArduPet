#include <Servo.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <DFRobotDFPlayerMini.h>
#include <SoftwareSerial.h>
#include <VoiceRecognitionV3.h>
#include "OledExpressions.h"
#include "ServoPositions.h"
#include "VoiceCommands.h"

// Configurando o display OLED
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET    -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// Configurando os servos
Servo servo_traseiro_esq;
Servo servo_traseiro_dir;
Servo servo_frente_esq;
Servo servo_frente_dir;
Servo servo_rabo;

// Configurando o módulo MP3
SoftwareSerial mySerial(10, 11); // RX, TX
DFRobotDFPlayerMini myDFPlayer;

// Configurando o reconhecimento de voz
VR myVR(12, 13); // Defina os pinos RX e TX do módulo de reconhecimento de voz
uint8_t vr_buf[64];

void setup() {
    // Inicializando o display OLED
    if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
        Serial.println(F("Falha ao inicializar o OLED"));
        for (;;) ;
    }
    display.clearDisplay();

    // Inicializando os servos
    servo_traseiro_esq.attach(2);
    servo_traseiro_dir.attach(3);
    servo_frente_esq.attach(4);
    servo_frente_dir.attach(5);
    servo_rabo.attach(6);

    // Inicializando o módulo MP3
    mySerial.begin(9600);
    if (!myDFPlayer.begin(mySerial)) {
        Serial.println(F("Falha ao inicializar o MP3"));
        for (;;) ;
    }

    // Inicializando o módulo de reconhecimento de voz
    myVR.begin(9600);

    // Configurando comandos de voz
    // Adicione seus comandos de voz aqui
}

void loop() {
    verificarComandosVoz();

    // Ocilação do rabo enquanto aguarda comandos
    static int pos = 0;
    static bool direcao = true; // true para aumentar, false para diminuir
    if (direcao) {
        pos += 1;
        if (pos >= 180) {
            direcao = false;
        }
    } else {
        pos -= 1;
        if (pos <= 0) {
            direcao = true;
        }
    }
    servo_rabo.write(pos);
    delay(15);
}
