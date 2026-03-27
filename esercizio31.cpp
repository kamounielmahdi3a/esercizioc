#include <iostream>
#include <string> 
using namespace std;
int main(){int b=0;
    int n;
    cout<<"inserisci quanti numeri vuoi inserire: ";
    cin>>n;
    while(n%2==0)
    {
        cout<<"inserisci un numero dispari: ";
        cin>>n;
    }
    int x=(n/2)+1,c=1;
    int numeri[n];
    for(int i=0;i<n;i++){
        cout<<"inserisci il numero "<<i<<": ";
    cin>>numeri[i];}
    for(int i=0;i<n;i++){b=numeri[n-x];}
    for(int i=0;i<n;i++){if(numeri[i]>b){c=0;}}
    if(c==1){cout<<"il numero centrale e' il maggiore";}
    else{cout<<"il numero centrale non e' il maggiore";}}