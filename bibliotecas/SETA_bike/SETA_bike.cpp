#include <SETA_bike.h>


SETA_bike::SETA_bike(int pinSetaEsq, int pinSetaDir int pinBTE, int pinBTD, int freq = 500){
    this->setaEsq = pinSetaEsq;
    this->setaDir = pinSetaDir;
    this->botaoSE = pinBTE;
    this->botaoSD = pinBTD;
    this->frequencia = freq;
    pinMode(setaEsq, OUTPUT);
    pinMode(setaDir, OUTPUT);
    pinMode(botaoSE, INPUT);
    pinMode(botaoSE, INPUT);

}

void SETA_bike::setFrequencia(int freq){
    this->frequencia = freq;
}

void SETA_bike::pisca(int direcao, int frequencia){
    digitalWrite(direcao, HIGH);
    delay(frequencia);
    digitalWrite(direcao, LOW);
    delay(frequencia);
}

void SETA_bike::seta(){
    int pressionadoE = digitalRead(botaoSE);
    int pressionadoD = digitalRead(botaoSD);

    if(pressionadoE == HIGH){
        pisca(setaEsq, frequencia);
    }else{
        digitalWrite(setaEsq, LOW);
    }

    if(pressionadoD == HIGH){
        pisca(setaDir, frequencia);
    }else{
        digitalWrite(setaDir, LOW);
    }
}
