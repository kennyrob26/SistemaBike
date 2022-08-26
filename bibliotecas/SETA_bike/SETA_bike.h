#ifndef SETA_BIKE_INCLUDED
#define SETA_BIKE_INCLUDED
#include <Arduino.h>

class SETA_bike{
    public:
        SETA_bike(int pinSetaEsq, int pinSetaDir, int pinBTE, int pinBTD, int frequencia);
        void seta();
        void setFrequencia(int freq);


    private:
        int setaEsq;
        int setaDir;
        int botaoSE;
        int botaoSD;
        int pressionadoE;
        int pressionadoD;
        int frequencia;

        void pisca(int direcao, int frequencia);
};


#endif