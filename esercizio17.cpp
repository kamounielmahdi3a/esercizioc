#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
srand(time(NULL));
int cont=0;
while(cont < 10) {
int numero=rand()%100+1;
if(numero%2==0){
cout<<numero<<endl;}
cont++;
}}
