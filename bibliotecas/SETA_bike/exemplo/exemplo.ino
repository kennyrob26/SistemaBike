/*
 *    Exemplo da bilbioteca SETA_bike
*/


#include <SETA_bike.h>

#define pinBTE 11 //pino do botão da esquerda
#define pinBTD 10 //pino do botão da direita
#define frequencia 500  // a frequência em que o led pisca
#define setaE 8  //pino da seta (lampada) esquerda
#define setaD 9  //pino da seta (lampada) direita

SETA_bike seta_bike(setaE, setaD, pinBTE, pinBTD, frequencia);  //Declaração do objeto 



void setup() {
  // put your setup code here, to run once:
  
}
void loop() {
  // put your main code here, to run repeatedly:
  seta_bike.seta(); //apenas chama o método seta()
}
