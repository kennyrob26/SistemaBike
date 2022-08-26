/*
 *    Exemplo da bilbioteca SETA_bike
*/


#include <SETA_bike.h>

#define pinBTE 11 //pino do botão da esquerda
#define pinBTD 10 //pino do botão da direita
#define frequencia 500  // a frequência em que o led pisca
int setaE = 8;  //pino da seta (lampada) esquerda
int setaD = 9;  //pino da seta (lampada) direita

SETA_bike seta_bike(pinBTE, pinBTD, frequencia);  //Declaração do objeto 



void setup() {
  // put your setup code here, to run once:
  pinMode(setaE, OUTPUT);
  pinMode(setaD, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  seta_bike.seta(setaE, setaD); //apenas chama o método seta()
}
