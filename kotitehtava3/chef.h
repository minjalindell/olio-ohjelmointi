#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;

class Chef
{
public:
    Chef(string);
    void makeSalad();
    void makeSoup();
    ~Chef();


protected:
    string name;
};

#endif // CFHEF_H
