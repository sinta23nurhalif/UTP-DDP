#include <iostream>
#include <conio.h>

using namespace std;

//functions
 void header (){
 	            cout<<"\n\t\t   ==============================================================================";
                cout<<"\n\t\t   |                   SELAMAT DATANG DI HOTEL NOVOTEL                          |";
                cout<<"\n\t\t   |             JL. Gatot subroto, no 136, kota Bandar lampung                 |";                            
                cout<<"\n\t\t   ==============================================================================";
            }
            
  void peraturan(){  
   cout << "\n\t\t Peraturan di Hotel:\n";
   cout << "\n\t\t \t1. Dilarang bawa hewan\n";
   cout << "\n\t\t \t2. Dilarang merokok di sekitar hotel\n";
   cout << "\n\t\t \t3. Dilarang membakar hotel\n\n";
}

int main(){
	//declarasi variable
	string jwb,tp , jk, hp, checkin, checkout, fixkam;
	char customer[30], alamat[50], back;
	int jumlah, kamar, no_kamar, harga_kamar, ranjang, total, bayar, kurang, kembalian, lama,saldo;
	float diskon;


back:
	header();
	cout<<endl;
	
	peraturan();
		
  
             
                cout<<"\n\n\n\n\t\t             Silahkan Isi Identitas anda di bawah  ini";
                cout<<"\n\n\n\n\t\t =================================================================================";cout<<endl;
                cout<<"\t\t Nama Pemesan                   : "; cin>>customer;
                cout<<"\t\t Jumlah kamar                   : "; cin>>jk;
                cout<<"\t\t Nomor Telepon/HP               : "; cin>>hp;
                cout<<"\t\t Alamat Email                   : "; cin>>alamat;
                cout<<"\t\t Total yang menginap            : "; cin>>tp;  
				cout<<"\n\n\n\n\t\t =================================================================================";                    
                cout<<endl;
               
 
 
		cout<<endl;
		cout<<"\n\n\n\n\t\tSilahkan Pilih Tipe Kamar Yang Anda Inginkan"<<endl;
		cout<<"\n\n\n\n\t\t**************************************************************************"   <<endl;
		cout<<"\n\t\t  * 	[1] Standart                                                "   <<endl;
		cout<<"\n\t\t  *	[2] junior suite                                            "   <<endl;
		cout<<"\n\t\t  *	[3] Suite                 						            "   <<endl;
		cout<<"\n\t\t  *	[4] premium                           				        "   <<endl;
		cout<<"\n\t\t  *	[5] superior                              				    "   <<endl;
		cout<<"\n\t\t  *	[6] Presidential                             		        "   <<endl;
		cout<<"\n\n\n\n\t\t**************************************************************************"   <<endl;
		
		
		
		//Percabangan
                cout<<"\n\t\t Masukan Pilihan : ";cin>>kamar;
               
                cout<<"\n\n\t\t Silahkan Pilih Tipe Bed Yang Anda Inginkan";
  cout<<"\n\t\t=================================================================================";
                cout<<"\n\t\t1. Single";
                cout<<"\n\t\t2. Double";
  cout<<"\n\t\t=================================================================================";
                cout<<"\n\t\t Masukan Pilihan : ";cin>>ranjang;
				
				cout<<endl;
               
                if(kamar==1 && ranjang==1)
                {
                                cout<<"\n\t\tAnda Memilih Kamar Tipe Standart Dengan Ranjang Single";
                                fixkam="Standart Dengan Single Bed";
                                harga_kamar=200000;
                }
                else if(kamar==1 && ranjang==2)
                {
                    cout<<"\n\t\tAnda Memilih Kamar Tipe Standart Dengan Ranjang Double";
                    fixkam="Standart Dengan Double Bed";
                                harga_kamar=250000;                  
                }
                else if(kamar==2 && ranjang==1)
                {
                    cout<<"\n\t\tAnda Memilih Kamar Tipe junior suite Dengan Ranjang single";
                    fixkam="junior suite Dengan Single Bed";
                                harga_kamar=400000;                  
                }
                else if(kamar==2 && ranjang==2)
                {
                    cout<<"\n\t\tAnda Memilih Kamar Tipe Premium Dengan Ranjang Double";
                    fixkam="junior suite Dengan Double Bed";
                                harga_kamar=450000;                  
                }
                 else if(kamar==3 && ranjang==1)
                {
                    cout<<"\n\t\tAnda Memilih Kamar Tipe suite Dengan Ranjang single";
                    fixkam="suite Dengan Single Bed";
                                harga_kamar=800000;                  
                }
                else if(kamar==3 && ranjang==2)
                {
                    cout<<"\n\t\tAnda Memilih Kamar Tipe suite Dengan Ranjang Double";
                    fixkam="suite Dengan Double Bed";
                                harga_kamar=900000;                  
                }
                else if(kamar==4 && ranjang==1)
                {
                    cout<<"\n\t\tAnda Memilih Kamar Tipe premium Dengan Ranjang single";
                    fixkam="premium Dengan Single Bed";
                                harga_kamar=1500000;                
                }
                else if(kamar==4 && ranjang==2)
                {
                    cout<<"\n\t\tAnda Memilih Kamar Tipe premium Dengan Ranjang Double";
                    fixkam="premium Dengan Double Bed";
                                harga_kamar=1800000;                
                }
                else if(kamar==5 && ranjang==1)
                {
                    cout<<"\n\t\t Anda Memilih Kamar Tipe superior Dengan Ranjang single";
                    fixkam="superior Dengan Single Bed";
                                harga_kamar=2500000;                
                }
                else if(kamar==5 && ranjang==2)
                {
                    cout<<"\n\t\t Anda Memilih Kamar Tipe superior Dengan Ranjang Double";
                    fixkam="superior Dengan Double Bed";
                                harga_kamar=4000000;                
                }
                 else if(kamar==6 && ranjang==1)
                {
                    cout<<"\n\t\t Anda Memilih Kamar Tipe Presidential Dengan Ranjang single";
                    fixkam="Presidential Dengan Single Bed";
                                harga_kamar=500000;                
                }
                else if(kamar==6 && ranjang==2)
                {
                    cout<<"\n\t\t Anda Memilih Kamar Tipe Presidential Dengan Ranjang Double";
                    fixkam="Presidential Dengan Double Bed";
                                harga_kamar=5500000;                
                }
                else
                {
                                cout<<"\n\t\tMaaf Pilihan Anda TIDAK Tersedia";
                                cout<<"\n\t\tUntuk Kenyamanan Bersama, Silahkan Isi Data Dari Awal\n\t\tKetik Apa Saja Untuk Kembali";cin>>jwb;
                                if(jwb=="Y" || "y")
                                {
                                                goto back;
                                } 
                }
		cout<<"\n\n\n\t\t Silahkan Mengisi data dibawah ini";
  cout<<"\n\t\t=================================================================================";
                cout<<"\n\t\t Pilih No. Kamar [1-100]\t:";cin>>no_kamar;
                 if(no_kamar >= 1 && no_kamar <= 100)
                {
                                cout<<"\t\t Anda Memilih Kamar No\t\t:"<< no_kamar;
                }
                else
                {
                                cout<<"\n\t\tMaaf Nomor Kamar Belum Tersedia";
                                cout<<"\n\t\tUntuk Kenyamanan Bersama, Silahkan Isi Data Dari Awal\n\t\tKetik Apa Saja Untuk Kembali";cin>>jwb;
                                if(jwb=="Y" || "y")
                                {
                                                goto back;
                                } 
							
                }
                cout<<"\n\t\t Menginap Lebih Dari 7 Hari diskon 4% perhari";
                cout<<"\n\t\t Lama Menginap               : "; cin>>lama;
               
                if(lama>=7)
                {
                                diskon=0.4;
                }
                else
                {
                                diskon=0;
                }
                cout<<"\n\t\t Tanggal Check In [DDMMYY]   : ";cin>>checkin;
                cout<<"\n\t\t Tanggal Check Out [DDMMYY]  : ";cin>>checkout;
      cout<<"\t\t=================================================================================";
               
                cout<<"\n\n\n\n\t\tData Pemesanan Kamar"<<endl;
      cout<<"\t\t=================================================================================";
                cout<<"\n\t\t Nama Pemesan     : "<< customer;
                cout<<"\n\t\t Alamat  Email    : "<< alamat;
                cout<<"\n\t\t No Telp/HP       : "<< hp;
                cout<<"\n\t\t Tipe Kamar       : "<< fixkam;
                cout<<"\n\t\t no_kamar         : "<< no_kamar;  
                cout<<endl;
      cout<<"\t\t=================================================================================";  
	    
                cout<<"\n\t\t Lama Menginap    : "<<lama<<" Hari";
                cout<<"\n\t\t Tanggal Check in : "<<checkin;
                cout<<"\n\t\t Tanggal Check out: "<<checkout;
                cout<<"\n\t\t Harga Perhari    : Rp. "<<harga_kamar;
                cout<<"\n\t\t Harga Kamar Total: Rp. "<<lama*harga_kamar;
                cout<<"\n\t\t Diskon           : Rp. "<<diskon*harga_kamar<<endl;
                total=harga_kamar*lama-(diskon*harga_kamar);
                cout<<"\t\t=================================================================================";
                cout<<"\n\n\t\t Biaya Total              :Rp. " <<total<<endl;
             
		//Perulangan
	
				cout << "\n\n\t\t Uang yang anda bayar   :Rp. "; cin>>bayar;cout<<endl;
				while (saldo=bayar<total){cout <<"\n\t\t Saldo Anda Kurang, Silahkan Bayar Lagi:Rp.";cin>>kurang;
				bayar +=kurang;
				}
				kembalian=bayar-total;
				cout << "\n\t\t Uang Anda Bayar    :Rp."<<bayar<<endl;
				cout << "\n\t\t Uang Kembalian     :Rp."<<kembalian<<endl;
		       
				cout << "			[Y = ya / T = tidak]"<<endl;
				cout << "		Apakah anda ingin memesan lagi ? [Y/T]  =  "; cin>>back;
				 if (back=='Y'||back=='y'){
                                goto back;
                }
                else
                {
                               
							    cout<<"\n\n\t\tTerima Kasih Telah Memilih Hotel Novotel\n\t\tSebagai Tempat Istirahat Kalian";
                }
			
			
				
				
		getch ();
		return 0;
	}
