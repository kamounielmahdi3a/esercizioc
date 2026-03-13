#include <iostream>
#include <string> 
using namespace std;
int main(){
   int cont=0;
   cout<<"inserisci dei numeri se vuoi fermarti digita stop ";
    while(cont==cont){
    string a;
    cin>>a;
    if(a=="stop"){break;}
    cont++;}
    cout<<"hai inserito "<<cont<<" numeri";}