#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
int n;
cout<<"inserisci quanti numeri vuoi inserire: ";
cin>>n;
int numeri[n];

for(int i=0;i<n;i++){
    cout<<"inserisci il numero "<<i<<": ";
    cin>>numeri[i];
}

while(n==n){cout<<"1 Conta elementi pari,2 Conta elementi dispari,3 Somma elementi pari,4 Somma elementi dispari,5 Esci"<<endl;
int scelta;
cin>>scelta;
if(scelta==1){
    int pari=0;
    for(int i=0;i<n;i++){if(numeri[i]%2==0){pari++;}}
    cout<<"gli elementi pari sono: "<<pari<<endl;}
else if(scelta==2){
    int dispari=0;
    for(int i=0;i<n;i++){if(numeri[i]%2!=0){dispari++;}}
    cout<<"gli elementi dispari sono: "<<dispari<<endl;}
else if(scelta==3){
    int sommapari=0;
    for(int i=0;i<n;i++){if(numeri[i]%2==0){sommapari=sommapari+numeri[i];}}
    cout<<"la somma degli elementi pari è: "<<sommapari<<endl;}
else if(scelta==4){
    int sommadispari=0;
    for(int i=0;i<n;i++){if(numeri[i]%2!=0){sommadispari=sommadispari+numeri[i];}}
    cout<<"la somma degli elementi dispari è: "<<sommadispari<<endl;}
else if(scelta==5){break;}
}}