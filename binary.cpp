#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int jd, cari,no, kiri,kanan,tengah,data[50];

    cout<<"\n\t\t *********************************** \n";
    cout<<"\t\t | \t\t\t\t       | \n";
    cout<<"\t\t | \t     Proses Pencarian \t       | \n";
    cout<<"\t\t | Menggunakan Algoritma Binary Search | \n";
    cout<<"\t\t | \t\t\t\t       | \n";
    cout<<"\t\t ********************************** \n\n\n";

    cout<<" Input Jumlah Data  : ";
    cin>>jd;

    cout<<endl;
     for (no=0;no<jd;no++)
     {
          cout<<" Input Data Ke-"<<(no+1)<<"    : ";
         cin>>data[no];
     }

    cout<<endl;
     cout<<" Input Nilai Dicari : ";
     cin>>cari;

     kiri=0;
     kanan=jd-1;
     tengah=(kanan-kiri)/2;

     while ((data[tengah]!=cari) && (kiri>=0)&& (kanan<jd) && (kanan>=kiri))
     {
          if (cari>data[tengah])
         {
              kiri=tengah+1;
         }
         else if (cari<data[tengah])
         {
              kanan=tengah-1;
         }
         tengah=kiri+(kanan-kiri)/2;
     }

    cout<<endl;
    if (data[tengah]==cari)
     {
          cout<<" Keterangan         : Data Ditemukan";
     }
     else
     {
          cout<<" Keterangan         : Data Tidak Ditemukan";
     }
    getch();
}
        

