#include <iostream>

using namespace std;

int main()
{
    float galon = 3.78;
    float litar = 0.26;
    float liq;
    float conv;
    char unit;
    int opt;
    int x=0;


    while (x=0){

    cout<<"Unesite kolicinu zatim mjernu jedinicu!"<<endl;
    cin>>liq>>unit;

    if (unit='l'){
        conv=liq*galon;
        cout<<liq<<" litara je "<<conv<<" galona."<<endl<<endl;
    }
    if (unit='g'){
        conv=liq*litar;
        cout<<liq<<" galona je "<<conv<<" litara."<<endl<<endl;
    }
    else{
        cout<<"GRESKA!!!"<<endl;
    }

    char yn;
    cout<<"Da li zelite zavrsiti y/n"<<endl;
    cin>>yn;

    if (yn=='y'){
        opt=1;
        cout<<"<<KRAJ>>"<<endl;
    }
    else {
        opt=0;
    }
    }



}
