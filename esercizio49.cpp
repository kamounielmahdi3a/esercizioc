#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
int b=1;
int x=0;
cout << "inserisce la quantità di numeri da inserire: " << endl;
int n;
cin >> n;

int numeri[n];
for(int i=0; i<n; i++){cout << "inserisce il numero " << i << ": " << endl;
    cin >> numeri[i];}
    
    for(int i=0; i<n; i++){x=numeri[i];
        cout<< "i divisori di " << x << " sono: " << endl;
    for(int b=1; b<=x; b++){
    if(x%b==0){cout << b<<endl;}}
    }}
    
