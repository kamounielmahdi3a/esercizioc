#include <iostream>
#include <string> 
using namespace std;
int main(){
    int a;
    double somma=0,massimo=0,conta=0,minimo=0,media=0;
    cout<<"inserisci un numero"<<endl;
    
    while(somma==somma){cin>>a;
        if(a==0){break;}
        somma=somma+a;
        conta++;
        if(a>massimo){massimo=a;minimo=a;}
        else if(a<minimo){minimo=a;}
     
    }
    media=somma/conta;
    cout<<"la somma è "<<somma<<endl;
    cout<<"il numero massimo è "<<massimo<<endl;
    cout<<"il numero minimo è "<<minimo<<endl;
    cout<<"la media è "<<media<<endl;}