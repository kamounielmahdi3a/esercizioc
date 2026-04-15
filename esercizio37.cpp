#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
int n=10000;
string parole[n];
for(int i=0;i<n;i++){
    cout<<"inserisci la parola "<<i<<": ";cin>>parole[i];
    cout<<"se puoi continuare digita si altrimenti digita stop"<<endl;
    string scelta;
    cin>>scelta;
    if(scelta=="stop"){break;}
    }
    int numero;
    cout<<"inserisci un numero: ";cin>>numero;
    for(int i=0;i<n;i++){
        if(parole[i].length()>numero){cout<<parole[i]<<endl;}}
    }