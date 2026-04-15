#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int conta=0;
    int conta1=0;
int n=10000;
int numeri[n];
int ni[n];
for(int i=0; i<n; i++){cout << "inserisce il numero " << i << ": " << endl;
    cin >> numeri[i];
    if(numeri[i]>0){conta++;}
    else{conta1++;}
    if(conta1>conta){cout << "i numeri negativi sono maggiori di quelli positivi" << endl;break;}}}