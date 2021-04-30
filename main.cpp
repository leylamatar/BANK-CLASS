#include <iostream>
#include "Bank.h"
using namespace std;

class cariHesap :public Bank{
public:
void hesapAcma(){
  Bank b;
  b.islemMenu();
  
}
};

class vadeliHesap:public Bank{
  public:
  void HesapTuru(){
    int a;
cout<<"Bu hesap turu ikiye ayriliyor :"<<endl;
cout<<"1. Uzun Vadeli "<<endl;
cout<<"2. Kisa Vadeli "<<endl;
cout<<"Hangi Hesap Turu Acmak Istersiniz : ";
cin>>a;
 switch(a){
case 1 :  uzunVadeli();
break;
case 2 : kisaVadeli();
break;

 }
}

void uzunVadeli(){
  Bank b;
  b.islemMenu();
}

void kisaVadeli(){
  Bank b;
  b.islemMenu();
}


};
class vadesizHesap:public Bank{
public:
void HesapAcma(){
  Bank b;
  b.islemMenu();
}
};

int main() {

Bank b;
    cariHesap ch;
    vadeliHesap vh;
    vadesizHesap vs;
    

    
    int sec;
    do
    {
        cout << endl;
        cout << "\t \t \tMENU \n";
        cout << "Acmak Istediginiz Hesap Turunu Secin :";
        cout << "\n1) cari Hesap";
        cout << "\n2) Vadeli Hesap";
        cout << "\n3) Vadesiz Hesap";
        cout << "\n4) cikis\n";
        cout << "secin --> ";
        cin >> sec;

        switch (sec)
        {
        case 1: ch.hesapAcma();
            break;
        case 2:vh.HesapTuru();
            break;
        case 3: vs.HesapAcma();
            break;
        
        case 4: goto end;

        }
    
    } while (1);
end:
    return 0;
    
} 