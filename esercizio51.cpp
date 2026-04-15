#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
int x=0,b=0,insu=0,tot=0,tot1=0;
double media=0,somma=0;
int n=10;
int numeri[n];
for(int i=0; i<n; i++){numeri[i]=x++;}
x=0;

    
for(int i=0; i<n; i++){x=0;media=0;somma=0;insu=0;
cout<< "quanti voti hai"<< endl;
cin>>x;
cout<<"inserisci i voti"<<endl;
for(int i=0; i<x; i++){
        cin>>b;
        somma=somma+b;
        if(b<6){insu++;tot++;}}
    media=somma/x;
    if(media<6){tot1++;}
    cout<<"la media è: " << media << endl;
    cout<<"i voti insufficienti sono: " << insu << endl;}
    cout<<"i voti insufficienti totali sono: " << tot << endl;
    cout<<"alunni con media insufficiente sono: " << tot1 << endl;}