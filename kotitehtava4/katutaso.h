#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"


class katutaso : public kerros
{
public:
    katutaso();
    asunto as1;
    asunto as2;
    void maaritaAsunnot();
    double laskeKulutus(double);

};

#endif // KATUTASO_H
