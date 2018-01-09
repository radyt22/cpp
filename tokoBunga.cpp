#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <iomanip.h>
#include <string.h>

main( )
{
int x ,a ,ulangi;
char jenis[2] = {'BG','AG'} ,*ket[6];
long bapot[6], jumhar[6] = {0}, hasat[6] = {50000 ,30000 };
long jumbar[6]= {0}, pajak[6], totba[6];
char nama[5][20];
pesan:
clrscr( );
cout<<"\tToko Bunga\n";
cout<<"\t---------------------\n";
cout<<"\t Kode Jenis Harga\n";
cout<<"\t---------------------\n";
cout<<"\t [BG] Bougenvile  Rp. 50000\n";
cout<<"\t [AG] Anggrek  Rp. 30000\n";
cout<<"\t \n";
cout<<"\t---------------------\n\n";
cout<<"\tMasukan Jumlah data : ";cin>>x;
jumbar[x] = 0;
    if (x <= 0)
   {
   cout<<"\n\t\tBanyak Jenis Tidak Boleh Null";
   goto akhir;
   }
   else
   {
        for(a = 1 ; a <= x; ++a)                         
       {
      cout<<"\tData Ke - "<<a;
      cout<<"\n\tNama Pembeli : ";cin>>nama[a];
        //cout<<"\n\tPilih Kode Bungan [BG/AG] : ";cin>>jenis[a];
        cout<<"\tPilih Kode Bungan [B/A] : ";cin>>jenis[a];
        cout<<"\tJumlah Beli : ";cin>>bapot[a];
      cout<<"\t------------------------\n";
      //cout<<jenis[a];
			 if (jenis[a] == 'AG' || jenis[a] == 'ag' || jenis[a] == 'A'|| jenis[a] == 'a')
             {
               ket[a] = "Anggrek";
               hasat[a] = 30000;
            }
           else if (jenis[a] == 'BG' || jenis[a] == 'ag'|| jenis[a] == 'b'|| jenis[a] == 'B')
             {
            ket[a] = "Bougenvile";
               hasat[a] = 50000;
            }
           else
               {
              cout<<"\nAnda Salah Masukan Kode Bunga.";
              hasat[a] = 0;
              }
      jumhar[a] = hasat[a] * bapot[a];
      jumbar [x] = jumbar[x] + hasat[a] * bapot[a];
      }
   }

cout<<"\n\n\tTOKO BUNGA\n";
for (a = 1; a <= x; ++a)
   {
    cout<<"Nama Pembeli  "<<nama[a]<<endl;
   }
cout<<"------------------------------------------------\n";
cout<<"No.|  Kode  |  Jenis    | Harga     | Banyak | Jumlah\n";
cout<<"   | Bunga  |  Bunga    | Satuan    | Beli   | Harga\n";
cout<<"================================================\n";
    for (a = 1; a <= x; ++a)
   {
    cout<<" "<<a<<" | "<<jenis[a]<<" | "<<ket[a]<<"     | "<<hasat[a];
   cout<<"      | "<<bapot[a]<<"      | Rp. "<<jumhar[a]<<endl;
    }
cout<<"------------------------------------------------\n";
cout<<"\n\n\tAnda Ingin Memesan Lagi? [Y/T] = ";
ulangi = getche();
    if (ulangi == 'Y' || ulangi == 'y')
       goto pesan;
   else
       cout<<"\n\n\t\tTerima Kasih";
akhir:
getch( );
}