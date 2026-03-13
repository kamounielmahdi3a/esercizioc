#include <iostream>
#include <string> 
using namespace std;
int main(){
   int n=0;
   double stipendio=1000,tot=0;
   cout<<"quanti dipendenti tempo pieno?"<<endl;
   cin>>n;
   tot=(stipendio*1.15)*n;stipendio=1000*1.15;
   cout<<"stipendio per dipendenti a tempo pieno "<<stipendio<<endl;
   cout<<"quanti dipendenti tempo part-time?"<<endl;
   n=0;
    cin>>n;
    tot=((stipendio*1.1)*n)+tot;
    stipendio=1000*1.1;
  cout<<"stipendio per dipendenti part-time "<<stipendio<<endl;
     cout<<"quanti dipendenti in stage?"<<endl;
    n=0;
    cin>>n;
     tot=((stipendio*1.05)*n)+tot;stipendio=1000*1.05;
     cout<<"stipendio per dipendenti in stage "<<stipendio<<endl;
     cout<<"stipendi totali "<<tot<<endl;
}