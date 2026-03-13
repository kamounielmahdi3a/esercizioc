#include <iostream>
#include <string> 
using namespace std;
int main()
{int a,b=1;
cout<<"inserisci un numero ";
cin>>a;
while(a!=1){b=a*b;a=a-1;}
cout<<"il fattoriale "<<b;}