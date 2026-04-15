#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){int x=0,conta=0,b=0,max=0;
int n=10;
int numeri[n];
for(int i=0; i<n; i++){cout << "inserisce il numero " << i << ": " << endl;
    cin >> numeri[i];
}
for(int i=0; i<n; i++){x=numeri[i];conta=0;
    for(int i=0; i<n; i++){
        if(x==numeri[i]){conta++;}
        
}if(conta>max){max=conta;b=x;}}
cout<< "il numero che si ripete di più è: " << b << endl;

}

