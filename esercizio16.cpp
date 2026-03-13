#include <iostream>
#include <string> 
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){srand(time(NULL));
int a=rand() % 100 + 1,b=0,cont=5;
while(cont>0){cont--;   
    cout<<"indovina il numero da 1 a 100"<<endl;
    cin>>b;
     if(b==a){ cout<<"hai vinto"<<endl;return 0;}
     else if(cont!=0){cout<<"hai ancora "<<cont<<" tentativi"<<endl;}
     

}
cout<<"hai perso il numero era "<<a<<endl;}