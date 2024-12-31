#ifndef VOICECOMMANDS_H
#define VOICECOMMANDS_H

#include <VoiceRecognitionV3.h>

#define CMD_SIT 0x01
#define CMD_STAND 0x02
#define CMD_FRONT 0x03
#define CMD_BACK 0x04
#define CMD_LEFT 0x05
#define CMD_RIGHT 0x06
#define CMD_SHAKE 0x07
#define CMD_LIE_DOWN 0x08

extern VR myVR;
extern uint8_t vr_buf[64];

void verificarComandosVoz();

#include "VoiceCommands.h"
#include "OledExpressions.h"
#include "ServoPositions.h"
#include <DFRobotDFPlayerMini.h>

extern DFRobotDFPlayerMini myDFPlayer;

void verificarComandosVoz() {
    if (myVR.recognize(vr_buf, 50) > 0) {
        switch (vr_buf[1]) {
            case CMD_SIT:
                configurarPosicaoSentar();
                desenharOlhosAlegre();
                myDFPlayer.play(2); // Latido alegre
                break;
            case CMD_STAND:
                configurarPosicaoEmPe();
                desenharOlhosTriste();
                myDFPlayer.play(1); // Latido bravo
                break;
            case CMD_FRONT:
                configurarPosicaoFrente();
                desenharOlhosBravo();
                myDFPlayer.play(3); // Rosnar
                break;
            case CMD_BACK:
                configurarPosicaoTras();
                desenharOlhosUivar();
                myDFPlayer.play(4); // Uivar
                break;
            case CMD_LEFT:
                configurarPosicaoEsquerda();
                desenharOlhosRosnar();
                myDFPlayer.play(5); // Latido rápido
                break;
            case CMD_RIGHT:
                configurarPosicaoDireita();
                desenharOlhosChoro();
                myDFPlayer.play(6); // Choro
                break;
            case CMD_SHAKE:
                configurarPosicaoDarPata();
                desenharOlhosAlegre();
                myDFPlayer.play(2); // Latido alegre
                break;
            case CMD_LIE_DOWN:
                configurarPosicaoDeitar();
                desenharOlhosTriste();
                myDFPlayer.play(6); // Choro
                break;
        }
    }
}

#endif