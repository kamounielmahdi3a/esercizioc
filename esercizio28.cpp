#include <iostream>
#include <string> 
using namespace std;
int main(){int x=0,b=0;
    int n;
    cout<<"inserisci quanti numeri vuoi inserire: ";
    cin>>n;
    int numeri[n];
    for(int i=0;i<n;i++){
    cout<<"inserisci il numero "<<i<<": ";
    cin>>numeri[i];
    if(i==9){x=numeri[i];}}
     for(int i=0;i<n;i++){
        if(numeri[i]<x){b=1;break;}
        
    }
    if(b==1){cout<<"ultimo numero è maggiore di tutti gli altri."<<endl;}
    else{cout<<"ultimo numero non è maggiore di tutti gli altri."<<endl;}
}
