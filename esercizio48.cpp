#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
int b=2,x=1;
int n=8;
int numeri[n];
for(int i=0; i<n; i++){cout << "inserisce il numero " << i << ": " << endl;
    cin >> numeri[i];
}
for(int i=0; i<n; i++){
    while(b<numeri[i]){if(numeri[i]%b==0){x=0;};b++;}
  if(numeri[i]>1){  if(x==1){cout << "il numero " << numeri[i] << " è primo" << endl;}}
    b=2;x=1;}}