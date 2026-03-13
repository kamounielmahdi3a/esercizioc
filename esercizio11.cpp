#include <iostream>
#include <string> 
using namespace std;
int main(){
   int n=0;
   double prezzo=5,tot=0;
   cout<<"quanti studenti?"<<endl;
   cin>>n;
   tot=(prezzo+0.7)*n;
    cout<<"quanti adulti?"<<endl;
    n=0;
    cin>>n;
     tot=((prezzo*0.95)*n)+tot;
     cout<<"quanti over 65?"<<endl;
    n=0;
    cin>>n;
     tot=((prezzo*0.6)*n)+tot;
     cout<<"costo totale "<<tot<<endl;
}