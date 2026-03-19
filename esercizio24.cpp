#include <iostream>
#include <string> 
using namespace std;
int main(){
    int n=10;
    int somma=0;
    int numeri[n];
    for(int i=0;i<n;i++){
    cout<<"inserisci il numero "<<i<<": ";
    cin>>numeri[i];
    if(numeri[i]%2==0){somma=numeri[i]+somma;}
    }
    cout<<"la somma dei numeri pari è: "<<somma<<endl;}