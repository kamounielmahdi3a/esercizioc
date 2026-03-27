#include <iostream>
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
while(n==n){
    cout<<"1 per sommare tutti gli elementi, 2 per moltiplicarli, 3 per trovare il maggiore,4 per uscire"<<endl;
    int scelta;
    cin>>scelta;
    if(scelta==1){
    int somma=0;
    for(int i=0;i<n;i++){somma=somma+numeri[i];}
    cout<<"la somma di tutti gli elementi è: "<<somma<<endl;}
    else if(scelta==2){
    int prodotto=1;
    for(int i=0;i<n;i++){prodotto=prodotto*numeri[i];}
    cout<<"il prodotto di tutti gli elementi è: "<<prodotto<<endl;}
    else if(scelta==3){
    int max=numeri[0];
    for(int i=0;i<n;i++){
    if(numeri[i]>max){max=numeri[i];}}
    cout<<"il numero maggiore è: "<<max<<endl;}
    else if(scelta==4){break;}
}}

