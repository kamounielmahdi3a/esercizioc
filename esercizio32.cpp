#include <iostream>
#include <string> 
using namespace std;
int main(){
int n;
cout<<"inserisci quanti numeri vuoi inserire: ";
cin>>n;
int numeri[n],molti=1;
for(int i=0;i<n;i++){cout<<"inserisci il numero "<<i<<": ";
 cin>>numeri[i];}
for(int i=0;i<n;i++){
if(i%2!=0){molti=molti*numeri[i];}}
cout<<"il prodotto dei numeri in posizione dispari e': "<<molti;}
