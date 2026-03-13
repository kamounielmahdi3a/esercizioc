#include <iostream>
#include <string> 
using namespace std;
int main(){
    cout<<"inserisci numeri casuali";
    int a,cont=0;
    double somma=0,media;
    cin>>a;
    while(a!=-1){
        cont++;
        somma=somma+a;
        cin>>a;
    }
    media=somma/cont;
    cout<<"la media dei numeri inseriti è "<<media;
}