#include <iostream>
#include <string> 
using namespace std;
int main(){
string parola;
cout<<"inserisci una parola ";
cin>>parola;
int contatore=0;
for(int i=0; i<parola.length();i++){
if(parola[i]=='a' || parola[i]=='e' || parola[i]=='i' || parola[i]=='o' || parola[i]=='u'){contatore++;}}
cout<<"la parola contiene "<<contatore<<" vocali";}