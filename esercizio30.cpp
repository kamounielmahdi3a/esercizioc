#include <iostream>
#include <string> 
using namespace std;
int main(){int x=0;
    int n;
    cout<<"inserisci quanti numeri vuoi inserire: ";
    cin>>n;
    int numeri[n];
    for(int i=0;i<n;i++){
        cout<<"inserisci il numero "<<i<<": ";
    cin>>numeri[i];}
    for(int i=0;i<n;i++){x=numeri[n-1];
        numeri[n-1]=numeri[0];
        numeri[0]=x;}
        for(int i=0;i<n;i++){
        cout<<"il numero "<<i<<" è: "<<numeri[i]<<endl;}}
