#include <iostream>
#define max 50
using namespace std;

int main() {
   
    int baris,kolom;
    cout<<"Masukkan Jumlah Kolom    : ";cin>>kolom;
    cout<<"Masukkan Jumlah Baris    : ";cin>>baris;
   
    string matriks[baris][kolom];
        for(int i=0;i<baris;i++){
            for(int j=0;j<kolom;j++){
                cout<<"Masukkan Baris ke - "<<i<<" Masukkan Kolom ke - "<<j<<" :";cin>>matriks[i][j];
            }
            cout<<endl;
        }
    cout<<"\n\nTABEL :"<<endl<<endl;
    for(int i=0;i<baris;i++){
        for(int j=0;j<kolom;j++){
            cout<<"    |  "<<matriks[i][j]<<"   |";
        }
        cout<<endl;
    }
   
       
    return 0;
}
