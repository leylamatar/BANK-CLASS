#include <iostream>
#include <stdio.h>
#include "Bank.h"
#include<cstdlib>
#include<string.h>
using namespace std;

Bank::Bank(){  
}

void Bank::openAcc(){
cout<<"Adinizi girin: ";
cin>>name;
cout<<"Soyadinizi girin :";
cin>>surname;
cout<<"TC kimlik numaranizi girin :";
cin>>TC_no;
cout<<"\n\t\t\t**Hesabiniz Basariyla olusturuldu**"<<endl<<endl;
int randomNumber;
randomNumber = rand();
AccNo=randomNumber;
  cout <<"Hesap Numaraniz : " <<randomNumber << endl;
  }

void Bank::customerinfo(){
  cout<<"\n TC kimlik numarasi : "<<TC_no;
  cout<<"\n Isim : "<<name;
  cout<<"\n Soyisim : "<<surname;
  cout <<"\n Hesap numarasi : "<<AccNo;
  cout<<"\n bakiye :"<<balance;
  cout<<endl;
}

void Bank::operator=(Bank b1)
{
        TC_no = b1.TC_no;
        strcpy(name,b1.name);
        strcpy(surname,b1.surname);
        AccNo = b1.AccNo;
        balance = b1.balance;
        
}

void Bank::deposit() {
        cout << "\nYatirmak Istediginiz Miktari Giriniz :";
        double yatirilanP;
        cin >> yatirilanP;
            balance += yatirilanP;
            cout << "\nToplam Hesaptaki Para = " << balance << endl;
        
 }
 
void Bank ::withdraw(){
 int cek;
        cout << "\nHesabinizda  = " << balance << " Lira vardir.";
        cout << "\n\ncekmek istediginiz degeri giriniz :";
        cin >> cek;
        cout << endl;
        if (cek > balance)
        {
            cout << "hesabinizda Yeterli Para Yok!\n\n";
        }
        else
        {
            balance = balance - cek;
            cout << "bakiye : " << balance;
            cout << endl;
        }
}
void Bank::kisaVadeliFaiz(){
   
 float anaPara, faizOrani = 8, payda = 100, faizTutari = 0;
cout<<endl;
        cout << "Faizini Hesaplamak Istediginiz Miktari Girin: ";
        cin >> anaPara;
        payda = 100;
        cout << "Faiz Orani (%x): " << "% "<<faizOrani;
        faizTutari = (anaPara * faizOrani) / payda;
        cout << "\nFaiz Tutari: " << faizTutari << "TL" << endl;


}


void Bank::UzunVadeliFaiz(){
float anaPara, faizOrani = 14, payda = 100, faizTutari = 0;
cout<<endl;
        cout << "Faizini Hesaplamak Istediginiz Miktari Girin: ";
        cin >> anaPara;
        payda = 100;
        cout << "Faiz Orani (%x): " << "% "<<faizOrani;
        faizTutari = (anaPara * faizOrani) / payda;
        cout << "\nFaiz Tutari: " << faizTutari << "TL" << endl;
        

}
void Bank::islemMenu(){
  Bank secim1;
    int sec;
        do
        {
            cout << endl;
            cout << "\t \t MENU \n";
            cout<< "1) Hesap Olustur\n";
            cout << "2) Para yatirmak\n";
            cout << "3) Para Cekmek\n";
            cout << "4) Hesap Bilgileri\n";
            cout<< "5) Faizi Hesapla\n";
            cout << "6) Islemleri sonlandir ve Ana Menuya git\n\n";
            cout << "yapmak istediginiz islemi seciniz : ";
            cin >> sec;

            switch (sec)
            {
              case 1:secim1.openAcc();
              break;
            case 2: secim1.deposit();
                break;
            case 3: secim1.withdraw();
                break;
            case 4: secim1.customerinfo();
                break;
              case 5: 
              int a;
              cout<<"1-UzunVadeli Faiz Hesapla\n";
              cout<<"2-kisaVadeli Faiz Hesapla\n";
              cin>>a;
if(a==1){
  secim1.UzunVadeliFaiz();
  islemMenu();
}
else if(a==2){
  secim1.kisaVadeliFaiz();
 islemMenu();
}
      
            }
        } 
        while (sec != 6);
      
  }