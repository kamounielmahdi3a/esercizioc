#include <iostream>
#include <string> 
using namespace std;
int main(){
   double a=0,costo=0;
   while(a==a){
    cout<<"hai moto o auto"<<endl;
    string c;
    cin>>c;
    if(c=="moto"){cout<<"va a benzina o elettrica"<<endl;
        string b;
        cin>>b;
        cout<<"quanti km hai fatto"<<endl;
        cin>>a;
        if(b=="benzina"){costo=a*0.07;cout<<"il costo è "<<costo<<" euro"<<endl;}
        else if(b=="elettrica"){costo=a*0.04;cout<<"il costo è "<<costo<<" euro"<<endl;}}
   if(c=="auto"){cout<<"va a benzina diesel o elettrica"<<endl;
        string b;
        cin>>b;
        cout<<"quanti km hai fatto"<<endl;
        cin>>a;
        if(b=="benzina"){costo=a*0.15;cout<<"il costo è "<<costo<<" euro"<<endl;}
        if(b=="diesel"){costo=a*0.13;cout<<"il costo è "<<costo<<" euro"<<endl;}
        else if(b=="elettrica"){costo=a*0.08;cout<<"il costo è "<<costo<<" euro"<<endl;}}
    cout<<"vuoi inserire un altro veicolo si o no"<<endl;
    string d;
    cin>>d;
    if(d=="no"){break;}}}

