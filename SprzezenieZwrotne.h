#pragma once

#include "ModelARX.h"
#include "RegulatorPID.h"
#include "Generator.h"

class SprzezenieZwrotne {
private:
    ModelARX* model;
    RegulatorPID* regulator;
    Generator* generator;

    double poprzedniaWartosc; // Dodane do przechowywania wartości z poprzedniego kroku

public:
    SprzezenieZwrotne(ModelARX* model, RegulatorPID* regulator, Generator* generator);
    double symuluj(int krok);
    void reset(); // Resetowanie wartości początkowej
};
