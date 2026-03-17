#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
int n=10,max=0,x=0;
int numeri[n];
srand(time(NULL));
for(int i=0;i<n;i++){
numeri[i]=rand()%50+1;}
for(int i=0;i<n;i++){
if(numeri[i]>max){max=numeri[i];x=i;}}
cout<<"il numero più grande è: "<<max<<" ed è in posizione "<<x+1<<endl;
}
