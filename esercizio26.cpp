#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){int conta=0;
    string nomiPossibili[5] = {"Luca", "Anna", "Marco", "Sara", "Paolo"};
    string nomi[12];
    srand(time(NULL));
    for(int i=0;i<12;i++){
        nomi[i]=nomiPossibili[rand()%5];
    }
      for(int i=0;i<12;i++){
        if(nomi[i]=="Sara"){conta++;}
         }
        cout<<"il nome Sara è presente "<<conta<<" volte."<<endl;
         }