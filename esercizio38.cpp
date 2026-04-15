#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
int n=10;
int numeri[n];
int conta=0;
for(int i=0;i<n;i++){
    cout<<"inserisce il numero "<<i<<": "<<endl;
    cin>>numeri[i];}
for(int i=0;i<n;i++){
    if(numeri[i]%2==0){conta++;}
}
if(conta>=3){cout<<"ci sono almeno 3 numeri pari"<<endl;}
}
