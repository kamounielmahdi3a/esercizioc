#include <iostream>
#include <string> 
using namespace std;
int main(){
    int n,min=0,max=0;
    cout<<" quanti numero vuoi inserire?"<<endl;
    cin>>n;
    int numeri[n];
    for(int i=0;i<n;i++){
    cout<<"inserisci il numero "<<i+1<<": ";
    cin>>numeri[i];
    if(numeri[i]>max){max=numeri[i];min=max;}
    }for(int i=0;i<n;i++){
        if(numeri[i]<min){min=numeri[i];}
    }
    cout<<"il numero più piccolo è: "<<min<<endl;
 

}