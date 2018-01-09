  #include <iostream.h>
#include <conio.h>
#include <iomanip.h>
#include <stdio.h>

garis()
{
cout<<"================================================================"<<endl;
}
nilai(float uts,float uas,float *hasil,char **huruf)
{
*hasil=(uas*0.4)+(uts*0.6) ;
if (*hasil>=80)
{
*huruf="GOOD LUCK";
}
else
if (*hasil>=70)
{
*huruf="GOOD LUCK";
}
else
if (*hasil>=56)
{
*huruf="GAGAL";
}
else
if (*hasil>=47)
{
*huruf="GAGAL";
}
else
{
*huruf="GAGAL";
}

}
main()
{
int i, j;

struct
{
float hasil,uas,uts;
char nama[50], *huruf;
}mhs[5];

clrscr();

cout<<"\t\tPROGRAM HITUNG NILAI AKHIR MATERI PEMROGRAMAN C++"<<endl;
cout<<"\t\t================================================="<<endl;
cout<<endl;
cout<<"Masukkan jumlah mahasiswa : ";cin>>j;
cout<<endl;

for(i=1;i<=j;i++)

{
cout<<"Mahasiswa ke- "<<i<<endl;
cout<<"NIM  : ";cin>>mhs[i].nama;
cout<<"Nama Mahasiswa  : ";cin>>mhs[i].nama;
cout<<"Nilai UTS       : ";cin>>mhs[i].uts;
cout<<"Nilai UAS       : ";cin>>mhs[i].uas;
nilai(mhs[i].uts,mhs[i].uas,&mhs[i].hasil,&mhs[i].huruf);


cout<<endl;
}


garis();
cout<<"No    Nama               Nilai           Nilai           Nilai   "<<endl;
cout<<"      Mahasiswa      UTS       UAS       Akhir           Huruf   "<<endl;
garis();
for(i=1;i<=j;i++)

{
cout<<setiosflags(ios::left)<<setw(6)<<i;
cout<<setiosflags(ios::left)<<setw(15)<<mhs[i].nama;
cout<<setiosflags(ios::left)<<setw(10)<<mhs[i].uts;
cout<<setiosflags(ios::left)<<setw(11)<<mhs[i].uas;
nilai(mhs[i].uts,mhs[i].uas,&mhs[i].hasil,&mhs[i].huruf);
cout<<setiosflags(ios::left)<<setw(17)<<mhs[i].hasil;
cout<<setiosflags(ios::left)<<setw(13)<<mhs[i].huruf<<endl;


}

garis();
getch();
}

