#ifndef SERVOPOSITIONS_H
#define SERVOPOSITIONS_H

#include <Servo.h>

extern Servo servo_traseiro_esq;
extern Servo servo_traseiro_dir;
extern Servo servo_frente_esq;
extern Servo servo_frente_dir;
extern Servo servo_rabo;

void configurarPosicaoSentar();
void configurarPosicaoEmPe();
void configurarPosicaoFrente();
void configurarPosicaoTras();
void configurarPosicaoDireita();
void configurarPosicaoEsquerda();
void configurarPosicaoDarPata();
void configurarPosicaoDeitar();

void configurarPosicaoSentar() {
    servo_traseiro_esq.write(45);
    servo_traseiro_dir.write(45);
    servo_frente_esq.write(90);
    servo_frente_dir.write(90);
}

void configurarPosicaoEmPe() {
    servo_traseiro_esq.write(90);
    servo_traseiro_dir.write(90);
    servo_frente_esq.write(45);
    servo_frente_dir.write(45);
}

void configurarPosicaoFrente() {
    servo_traseiro_esq.write(60);
    servo_traseiro_dir.write(60);
    servo_frente_esq.write(60);
    servo_frente_dir.write(60);
}

#endif
