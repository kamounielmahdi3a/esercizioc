#include <iostream>
#include <string> 
using namespace std;
int main()
{int a,b;
cout<<"inserisce base e altezza ";
cin>>a>>b;
if(a>0 && b>0){int area=a*b;cout<<"l'area del rettangolo è: "<<area<<endl;}
else{cout<<"inserisci numeri positivi"<<endl;}
}