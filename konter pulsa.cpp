#include <iostream.h> //--------------------------
#include <conio.h>    //Created By XCode.++plus
#include <stdio.h>    //www.xcodeplus.net
#include <iomanip.h>  //Program Celluler (Array of structure)
                             //--------------------------
main()
{
 struct{
        char login,
        code[10],
        name[10],
        voucher[10],
        date[10],
        nominal[10];}xcode[20];
 
int a,data,lagi;
 
 struct{
        long amount,
        price,
        total,
        subtotal,
        ppn,cash,change;}plus[30];
 
login1:
 
cout << "\t\t\t ---------------------"<< endl;
cout << "\t\t\t SELAMAT DATANG "<< endl;
cout << "\n\t\tProgram Celluler (Array of structure)" << endl;
cout << "\n\n\n\n\tDO YOU WANT GO TO MENU, MASTER ? [Tekan Sembarang] : "; cin>>xcode[a].login;
first:
clrscr();
cout << "\t\t    GALLERY CELLULER INDONESIA   " << endl;
cout << "\t\t----------------------------------" << endl;
cout << "\t\t[1].TELKOMSEL [10] [25] [50] [100]" << endl;
cout << "\t\t[2].INDOSAT   [10] [25] [50] [100]" << endl;
cout << "\t\t[3].3THREE    [10] [25] [50] [100]" << endl;
cout << "\t\t----------------------------------" << endl;
cout << "\n\t\tMasukan Banyak Data : "; cin>>data;
plus[data].total=0;
if(data<=0){
    goto login1;
}
else{
      for(a=1; a<=data; a++){
     cout << "\nData Ke- "<<a;
     cout << "\nTanggal Transaksi          : "; gets(xcode[a].date);
     cout << "Nama Panggilan             : "; gets(xcode[a].name);
     cout << "Masukan Kode [SMT/IM3/TRI] : "; cin>>xcode[a].code;
     cout << "Jumlah Beli                : "; cin>>plus[a].amount;
     cout << "Nilai Nominal              : "; cin>>xcode[a].nominal;
     cout << "--------------------------------"<< endl;
     if(!strcmp(xcode[a].code,"SMT")||!strcmp(xcode[a].code,"smt"))
     {strcpy(xcode[a].voucher,"TELKOMSEL");
            if(!strcmp(xcode[a].nominal,"10000"))
                plus[a].price=12000;
         else if(!strcmp(xcode[a].nominal,"25000"))
                plus[a].price=27000;
         else if(!strcmp(xcode[a].nominal,"50000"))
                plus[a].price=52000;
         else
                plus[a].price=102000;}
     if(!strcmp(xcode[a].code,"IM3")||!strcmp(xcode[a].code,"im3"))
     {strcpy(xcode[a].voucher,"INDOSAT");
            if(!strcmp(xcode[a].nominal,"10000"))
                plus[a].price=12000;
         else if(!strcmp(xcode[a].nominal,"25000"))
                plus[a].price=27000;
         else if(!strcmp(xcode[a].nominal,"50000"))
                plus[a].price=52000;
         else
                plus[a].price=102000;}
     if(!strcmp(xcode[a].code,"TRI")||!strcmp(xcode[a].code,"tri"))
     {strcpy(xcode[a].voucher,"3THREE");
            if(!strcmp(xcode[a].nominal,"10000"))
                plus[a].price=12000;
         else if(!strcmp(xcode[a].nominal,"25000"))
                plus[a].price=27000;
         else if(!strcmp(xcode[a].nominal,"50000"))
                plus[a].price=52000;
         else
                plus[a].price=102000;}
 
 
plus[a].subtotal=plus[a].price*plus[a].amount;
plus[a].total=plus[a].total+plus[a].price*plus[a].amount;
        if(plus[data].total == 0){
            plus[data].ppn = 0;
         plus[data].total=0;}
      else
        {
           plus[data].ppn=plus[data].total*0.1;
           plus[data].total=plus[data].subtotal+plus[data].ppn;}
  }
}
 
clrscr();
cout << "\t\tGALLERIA CELLULER INDONESIA\n\n";
cout << "------------------------------------------------------------------------\n";
cout << "No.| KODE |    VOUCHER    | NOMINAL | HARGA | Qty |   NAMA   | TANGGAL |\n";
cout << "------------------------------------------------------------------------\n";
for(a=1;a<=data;a++){
cout <<setiosflags(ios::left)<<setw(4)<<a
<<setiosflags(ios::left)<<setw(2)<<" "<<xcode[a].code
<<setiosflags(ios::left)<<setw(5)<<" "<<xcode[a].voucher
<<setiosflags(ios::left)<<setw(6)<<" "<<xcode[a].nominal
<<setiosflags(ios::left)<<setw(4)<<" "<<plus[a].price
<<setiosflags(ios::left)<<setw(4)<<" "<<plus[a].amount
<<setiosflags(ios::left)<<setw(6)<<" "<<xcode[a].name
<<setiosflags(ios::left)<<setw(4)<<" "<<xcode[a].date<<endl;}
cout << "------------------------------------------------------------------------\n\n";
 
cout<<"\t\t\tSubtotal      Rp. "<<plus[data].subtotal<<endl;
cout<<"\t\t\tPPN 10%       Rp. "<<plus[data].ppn<<endl;
cout<<"\t\t\tTotal Price   Rp. "<<plus[data].total<<endl;
cout<<"\t\t\tCash          Rp. "; cin>>plus[data].cash;
plus[data].change=plus[data].cash-plus[data].total;
cout<<"\t\t\tChange        Rp. "<<plus[data].change;
cout<<"\n\n\tAnda Ingin Memesan Lagi? [Y/T] = ";lagi=getche();
    if (lagi == 'Y' || lagi == 'y')
       goto first;
   else{
       cout<<"\n\n\t\tTerima Kasih, Selamat Datang Kembali"<< endl;
       cout<<"\n\n\t\-------------------------------------"<< endl;}
getch();
}