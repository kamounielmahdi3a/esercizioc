#include <iostream>
#include <string> 
using namespace std;
int main(){
    string parole[10] = {"Luca", "Anna", "Marco", "Sara", "Paolo","Giulia", "Momo", "Federica", "Matteo", "Cane"};
    for(int i=0;i<10;i++){
        if(parole[i].length()>4){cout<<parole[i]<<endl;}
    }}