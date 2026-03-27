#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
int n=10;
int numeri[n];
srand(time(NULL));
for(int i=0;i<n;i++){ 
    numeri[i]=rand()%1000000;
}
for(int i=0;i<n;i++){
    if(i%2==0){numeri[i]=0;}
}
for(int i=0;i<n;i++){
    cout<<"numero in posizione "<<i<<": "<<numeri[i]<<endl;
}
}
