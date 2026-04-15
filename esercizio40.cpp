#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
int n;
int x=0;
cout << "inserisce la dimensione dei vettori: " << endl;
cin >> n;
int numeri[n];
int ni[n];
for(int i=0; i<n; i++){cout << "inserisce il numero del primo vettore " << i << ": " << endl;
    cin >> numeri[i];
    cout << "inserisce il numero del secondo vettore " << i << ": " << endl;
    cin >> ni[i];
}
for(int i=0; i<n; i++){
if(numeri[i]!=ni[i]){cout << "i vettori sono diversi" << endl;x=1;break;}

    
}if(x==0){cout << "i vettori sono uguali" << endl;}
}
