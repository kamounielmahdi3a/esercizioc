#include <iostream>
#include <string> 
using namespace std;
int main(){
    double sconto,a;
    double prezzo=0;
    while(prezzo==prezzo){
    cout<<"inserisci il prezzo"<<endl;
    cin>>a;
    if(a==0){break;}
    cout<<"inserisci lo sconto"<<endl;
    cin>>sconto;
    prezzo=a*((100-sconto)/100);
    cout<<"il prezzo scontato è "<<prezzo<<endl;
    prezzo=0;} }
    