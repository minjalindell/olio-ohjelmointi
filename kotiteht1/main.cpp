#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int arvaus;
int oikealuku;


int main(){
    srand(time(0)); //asetetaan siemenluku kellonajan avulla
    oikealuku=rand()%20+1; // jakojäännös jaettaessa 20:lla + 1
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
    cout<<"Oikea luku on siis "<<oikealuku<<endl; // näyttää oikean arvauksen jälkeen sen oikean vastauksen
    return 0;
}
