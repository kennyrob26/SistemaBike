#include <SETA_bike.h>


SETA_bike::SETA_bike(int pinBTE, int pinBTD, int freq = 500){
    this->botaoSE = pinBTE;
    this->botaoSD = pinBTD;
    this->frequencia = freq;
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

void SETA_bike::seta(int setaEsquerda, int setaDireita){
    int pressionadoE = digitalRead(botaoSE);
    int pressionadoD = digitalRead(botaoSD);

    if(pressionadoE == HIGH){
        pisca(setaEsquerda, frequencia);
    }else{
        digitalWrite(setaEsquerda, LOW);
    }

    if(pressionadoD == HIGH){
        pisca(setaDireita, frequencia);
    }else{
        digitalWrite(setaDireita, LOW);
    }
}