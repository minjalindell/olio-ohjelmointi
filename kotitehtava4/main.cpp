#include<iostream>
#include "asunto.h"
#include "katutaso.h"
#include "kerrostalo.h"
using namespace std;

int main()
{
    asunto asukas1;
    katutaso asukas2;
    kerros asukas3;
    kerrostalo asukas4;


    asukas1.maarita(2,100);
    asukas1.laskeKulutus(1);

    asukas2.maaritaAsunnot();
    asukas2.laskeKulutus(1);
    asukas3.maaritaAsunnot();
    asukas3.laskeKulutus(1);

    asukas4.laskeKulutus(1);

    return 0;
}
