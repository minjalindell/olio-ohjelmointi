#include "katutaso.h"
#include <iostream>
using namespace std;

katutaso::katutaso()
{

    cout<< "katutaso luotu"<<endl;
}

void katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2 kpl katutason asuntoja "<<endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    cout<<"Maaritetaan katutason kerrokselta perittyja asuntoja "<<endl;
    this->kerros::maaritaAsunnot();
}

double katutaso::laskeKulutus(double h)
{
    double kulutus = as1.laskeKulutus(h) + as2.laskeKulutus(h)+this->kerros::laskeKulutus(1);
    cout<<"Katutason ja perityn kerroksen kulutus kun hinta = "<<h<<" on "<<kulutus<<endl;
    return kulutus;
}
