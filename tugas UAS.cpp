# include <iostream.h>
# include <conio.h>
# include <stdlib.h>
  main()
{
int a,b,c,d,e;
float uts[50], tugas[50], uas[50];
int absen[50],G,H,I,J,K[50],L,M,N;
char f,mutu,nama[100];
awal:
clrscr();
cout<<"           SELAMAT DATANG DI PROGRAM PENILAIAN MAHASISWA     \n";
cout<<"===============================================================\n\n";
cout<<"Masukkan Standard Nilai Anda !!! (0-100%) \n";
cout<<"Masukkan Persentase Kehadiran : ";cin>>a;
cout<<"Masukkan Persentase TUGAS     : ";cin>>b;
cout<<"Masukkan Persentase UTS       : ";cin>>c;
cout<<"Masukkan Persentase UAS       : ";cin>>d;
e=a+b+c+d;


 if(e>100)
 {cout<<"Maaf,Standard Nilai Yang Anda Masukkan Lebih dari 100%\n";
 cout<<"Apakah Anda Ingin Mengulangi (Y/N) ??? ";cin>>f;
 if(f=='Y'||'y')
 goto awal;
 else exit;}
 {if (e<=100)
 cout<<"Standard Nilai Anda Sudah Mencapai "<<e<<" %"<<endl;}
cout<<"====================================================\n";
cout<<"Masukkan Total Pertemuan Dalam Satu Semester : ";cin>>L;
cout<<"====================================================\n";
cout<<"Masukkan Jumlah Mahasiswa yang Ingin Di Input : ";cin>>M;
cout<<endl;
cout<<"|====|===================|=======|=======|======|=====|=====|=======|\n";
cout<<"| No.|  Nama Mahasiswa   | Absen | Tugas | UTS  | UAS |  NA | Grade |\n";
cout<<"|====|===================|=======|=======|======|=====|=====|=======|\n";
for(N=1;N<=M;N++)
{
gotoxy(1,17+N);cout<<"|"<<N<<"   |"<<endl;
gotoxy(8,17+N);cin>>nama;cout<<endl;
gotoxy(28,17+N);cin>>absen[N];
gotoxy(36,17+N);cin>>tugas[N];
gotoxy(44,17+N);cin>>uts[N];
gotoxy(51,17+N);cin>>uas[N];


  G=(absen[N]/L)*a;
  H=(tugas[N]/100)*b;
  I=(uts[N]/100)*c;
  J=(uas[N]/100)*d;
  K[N]=G+H+I+J;
  {if(K[N]>=80)
  mutu='A';
  else if(K[N]>=67)
  mutu='B';
  else if(K[N]>=55)
  mutu='C';
  else if(K[N]>=45)
  mutu='D';
  else
 mutu='E';
 gotoxy(65,17+N);cout<<mutu<<"   |";}
gotoxy(57,17+N);cout<<K[N]<<endl;
}
cout<<"|====|===================|=======|=======|======|=====|=====|=======|\n";
getch();}