#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
int main(){
    int n;
    int c=0;
    int b=1;
    cout<<"inserisci un numero maggiore di 1"<<endl;
    cin>>n;c=n;
    while(n<5000){
        n=c;
        n=pow(n, b);
        b++;
        cout<<n<<endl;
    }
    cout<<"il numero ha superato 5000"<<endl;}
