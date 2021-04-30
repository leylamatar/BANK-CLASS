class Bank{
protected:
char name[10];
char surname[10];
int TC_no;
int AccNo;
int balance =0;

public:
Bank();
virtual void openAcc();
virtual void deposit();
virtual void withdraw();
virtual void customerinfo();
virtual void islemMenu();
virtual void UzunVadeliFaiz();
virtual void kisaVadeliFaiz();
//virtual void closeAcc();
void operator=(Bank b1);
};