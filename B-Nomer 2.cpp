#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int i;
float x,n,jum,rata;
Cout<<"MASUKAN BANYAK DATA :";
Cin>>n;
jum=0;
i=1;
while(i<=n){
Cout<<"MASUKAN NILAI KE-"<<i<<":";
Cin>>x;
jum+=x;
i++;
}
rata=jum/n;
Cout<<"JUMLAH SEMUA :"<<jum<<endl;
Cout<<"RATA-RATA :"<<rata<<endl;
getch();

}
