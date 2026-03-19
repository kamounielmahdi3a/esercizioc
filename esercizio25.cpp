#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    string nomiPossibili[5] = {"Luca", "Anna", "Marco", "Sara", "Paolo"};
    string nomi[10];
    srand(time(NULL));
    for(int i=0;i<10;i++){
        nomi[i]=nomiPossibili[rand()%5];
    }
      for(int i=0;i<10;i++){
        if(nomi[i]=="Anna"){cout<<"il nome Anna è presente ed è in posizione "<<i<<endl;}
         }}