#include <iostream>
#include <string> 
using namespace std;
int main(){
    int n;
    cout<<" quanti numero vuoi inserire?"<<endl;
    cin>>n;
    double media=0,somma=0;
    int  numeri[n];
    for(int i=0;i<n;i++){
    cout<<"inserisci il numero "<<i+1<<": ";
    cin>>numeri[i];
    somma=numeri[i]+somma;
    }
    media=somma/n;
    cout<<"la media è: "<<media<<endl;
   
}