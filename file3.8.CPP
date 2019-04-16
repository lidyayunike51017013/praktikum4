#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
main ()
{
int a,b,mod;
float hasil;
cout<<"Contoh Penggunaan / dan %\n\n";
cout<<"Masukkan angka pertama (a) = ";cin>>a;
cout<<"Masukkan angka kedua (b) = ";cin>>b;
hasil=float(a)/b;
mod=a%b;
cout<<"\nHasil pembagian        = "<<setprecision(3)<<hasil;
cout<<"\nSisa hasil bagi        = "<<mod;
getch();
}