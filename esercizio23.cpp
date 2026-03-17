#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
int n=12;
int numeri[n];
srand(time(NULL));
for(int i=0;i<n;i++){
numeri[i]=rand()%50+1;}
int a;
cout<<"inserisci un numero da 1 a 50"<<endl;
cin>>a;
for(int i=0;i<n;i++){
    if(numeri[i]==a){cout<<"il numero è presente ed è in posizione "<<i<<endl;return 0;}
}
cout<<"il numero non è presente"<<endl;
}