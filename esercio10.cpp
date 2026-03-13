#include <iostream>
#include <string> 
using namespace std;
int main(){
   int cont=0;
   cout<<"inserisci un codice ";
    while(cont==cont){
        string a;
        cin>>a;
        if(a=="400"){cout<<"bad request"<<endl;cont++;}
        else if(a=="401"){cout<<"unauthorized"<<endl;cont++;}
        else if(a=="403"){cout<<"forbidden"<<endl;cont++;}
        else if(a=="404"){cout<<"not found"<<endl;cont++;}
        else if(a=="200"){cout<<"corretto"<<endl;cont++;break;}
        else{cout<<"errore sconosciuto"<<endl;cont++;}
        if(cont==3){cout<<"hai finito i tenativi"<<endl;break;}
        cout<<"hai usato "<<cont<< " tentativi puoi arrivare massimo a 3"<<endl;}}