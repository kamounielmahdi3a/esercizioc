#include <iostream>
#include <string> 
using namespace std;
int main(){
int a,b=2,cont=0;
cout<<"inserisci un numero ";
cin>>a;
cout<<"ecco i numeri pari da 2 a "<<a<<": ";
while(b<a){if(b%2==0){cout<<b<<" ";}b++;}
}
