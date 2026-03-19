#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
int n=10;
int numeri[n];
int numeriinverso[n];
srand(time(NULL));
for(int i=0;i<n;i++){
numeri[i]=rand()%50+1;}
for(int i=0;i<n;i++){
numeriinverso[i]=numeri[n-1-i];
}
for(int i=0;i<n;i++){
cout<<"il numero "<<i<<" è: "<<numeriinverso[i]<<endl;}}