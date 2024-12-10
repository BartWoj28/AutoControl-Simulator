#include "RegulatorPID.h"
#include <iostream>

RegulatorPID::RegulatorPID(double kp, double ti, double td)
    : kp(kp), ti(ti), td(td), integralna(0.0), poprzedniaBladaTime(0.0), poprzedniaBladaWart(0.0) {}

double RegulatorPID::symuluj(double wejscie) {
    double blad = wejscie;
    double czasDelta = 1; // przyjmujemy, �e pr�bkowanie odbywa si� z cz�stotliwo�ci� 1 Hz

    // Cz�on proporcjonalny
    double wyj_p = kp * blad;

    // Cz�on ca�kuj�cy
    double wyj_i = 0.0;
    if (ti != 0.0) {
        integralna += blad * czasDelta;
        wyj_i = integralna * kp / ti;
    }

    // Cz�on r�niczkuj�cy
    double wyj_d = 0.0;
    if (td != 0.0) {
        wyj_d = kp * td * (blad - poprzedniaBladaWart) / (czasDelta + poprzedniaBladaTime);
        poprzedniaBladaWart = blad;
        poprzedniaBladaTime = czasDelta;
    }

    // Wynik sumaryczny
    double wyj = wyj_p + wyj_i + wyj_d;

    // Logowanie warto�ci do debugowania
   /* std::cout << "blad: " << blad
        << ", wyj_p: " << wyj_p
        << ", wyj_i: " << wyj_i
        << ", wyj_d: " << wyj_d
        << ", wyj: " << wyj << std::endl;*/

    return wyj;
}