#include <iostream>
#include <string> 
using namespace std;
int main(){
    cout<<"inserisci numeri casuali";
    int a,somma=0;
    
    while(somma==somma){
         cin>>a;
        if(a%2!=0){somma=somma+a;}
        if(a==0){break;}
   
        
    }

    cout<<"la somma dei numeri dispari è "<<somma;
}