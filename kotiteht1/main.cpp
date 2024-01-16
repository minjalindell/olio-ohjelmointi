#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int arvaus;
int oikealuku;


int main(){
    srand(time(0));
    oikealuku=rand()%20;
    while(arvaus != oikealuku){
        cout<<"Arvaa luku 1-20 valilta"<<endl;
        cin>>arvaus;
        if(arvaus==oikealuku){
            cout<<"Oikea vastaus"<<endl;
        }
        else if(arvaus<oikealuku){
            cout<<"Luku on suurempi"<<endl;
        }
        else if(arvaus>oikealuku){
            cout<<"Luku on pienempi"<<endl;
        }
    }
    cout<<"Oikea luku on siis "<<oikealuku<<endl;
    return 0;
}
