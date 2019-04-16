#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
main ()
{
int a,b,mod;
float bagi;
cout<<"Contoh Penggunaan / dan %\n\n";
cout<<"Masukkan angka pertama (a) = ";cin>>a;
cout<<"Masukkan angka kedua (b) = ";cin>>b;
bagi=float(a)/b;
mod=a%b;
cout<<"\nHasil pembagian        = "<<setiosflags(ios::fixed)
											<<setprecision(3)
                                 <<bagi;
cout<<"\nSisa hasil bagi        = "<<mod;
getch();
}