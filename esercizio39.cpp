#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
int n=5;
int numeri[n];
int conta=0;
for(int i=0;i<n;i++){
    cout<<"inserisce il numero "<<i<<": "<<endl;
    cin>>numeri[i];
if(numeri[i]%2==0){conta++;}
}
if(conta>=5){cout<<"tutti i numeri sono pari"<<endl;}
else{cout<<"non tutti i numeri sono pari"<<endl;}}