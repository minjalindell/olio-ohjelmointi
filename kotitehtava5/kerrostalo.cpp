#include "kerrostalo.h"
#include <iostream>
using namespace std;

kerrostalo::kerrostalo()
{
    cout<<"kerrostalo luotu"<<endl;
    cout<< "Maaritellaan koko kerrostalon asunnot"<<endl;
    eka = new katutaso;
    toka = new kerros;
    kolmas = new kerros;

    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}
double kerrostalo::laskeKulutus(double h)
{
    double tulo = eka->laskeKulutus(h) +toka->laskeKulutus(h)+kolmas->laskeKulutus(h);
    //cout<<"kerrostalon kulutus, kun "<<h<<" hinta =  "<<tulo<<endl;
    return tulo;
}
kerrostalo::~kerrostalo()
{
    cout<<"kerrostalo tuhottu"<<endl;
    delete eka;
    delete toka;
    delete kolmas;

}
