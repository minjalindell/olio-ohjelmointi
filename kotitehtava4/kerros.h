#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"

class kerros{

public:
    kerros();
    asunto as1;
    asunto as2;
    asunto as3;
    asunto as4;
    virtual void maaritaAsunnot();
    double laskeKulutus(double);
};


#endif // KERROS_H
