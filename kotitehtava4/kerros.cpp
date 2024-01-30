#include "kerros.h"
#include <iostream>
using namespace std;

kerros::kerros()
{

    cout << "kerros luotu"<<endl;
}

void kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan 4 kpl katutason asuntoja "<<endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    as3.maarita(2, 100);
    as4.maarita(2, 100);
}

double kerros::laskeKulutus(double h)
{
    double tulo = as1.laskeKulutus(h) +as2.laskeKulutus(h)+as3.laskeKulutus(h)+as4.laskeKulutus(h);
    //cout<<"kerrosten kulutus, kun "<<h<<" hinta =  "<<tulo<<endl;
    return tulo;
}
