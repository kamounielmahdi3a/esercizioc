#include <iostream>
#include <string> 
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){srand(time(NULL));
int a=rand() % 50 + 1,b=0;
while(b==b){
    cout<<"indovina il numero da 1 a 50"<<endl;
    cin>>b;
    if(b==a){ cout<<"indovinato"<<endl;
    cout<<"vuoi continuare si o no?"<<endl;
 string b;cin>>b;if(b=="no"){break;}{srand(time(NULL));
int a=rand() % 50 + 1;}}
    else if(b>a){ cout<<"numero alto"<<endl;}
    else if(b<a){ cout<<"numero basso"<<endl;}
}}