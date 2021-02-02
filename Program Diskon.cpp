#include<iostream>
using namespace std;
int main ()
{
	system ("COLOR F0");
	float disc0, disc1, disc2, disc3;
	int totalbelanja, totalbayar, diskon;
	disc0 = 0;
	disc1 = 0.1;
	disc2 = 0.125;
	disc3 = 0.15;
	
	cout << "=========== TUGAS KE SEPULUH =========== \n";
	cout << "      PROGRAM DISKON WARUNG CEU YOYOH    \n";
	cout << "~~~~~~~~~~ OLEH FAUZY RAMADAN ~~~~~~~~~~ \n"<< endl;
	
	cout << "Masukan Total Belanja : Rp. ";
	cin >> totalbelanja;
	cout <<endl;
	
	if (totalbelanja <= 25000){
		diskon = totalbelanja * disc0;
		totalbayar = totalbelanja - diskon;
		cout << "Diskon 0%			: Rp. " << diskon <<endl;
		cout << "Total Pembayaran anda adalah	: Rp. " << totalbayar <<endl<<endl;
		cout << "Terima kasih, selalu jaga kesehatan yaa";
			
	} else if (totalbelanja <= 50000){
		diskon = totalbelanja * disc1;
		totalbayar = totalbelanja - diskon;
		cout << "Diskon 10%			: Rp. " << diskon <<endl;
		cout << "Total Pembayaran anda adalah	: Rp. " << totalbayar <<endl<<endl;
		cout << "Terima kasih, selalu jaga kesehatan yaa";
		
	} else if (totalbelanja <= 100000){
		diskon = totalbelanja * disc2;
		totalbayar = totalbelanja - diskon;
		cout << "Diskon 12.5%			: Rp. " << diskon <<endl;
		cout << "Total Pembayaran anda adalah	: Rp. " << totalbayar <<endl<<endl;
		cout << "Terima kasih, selalu jaga kesehatan yaa";
		
	} else if (totalbelanja > 100000){
		diskon = totalbelanja * disc3;
		totalbayar = totalbelanja - diskon;
		cout << "Diskon 15%			: Rp. " << diskon <<endl;
		cout << "Total Pembayaran anda adalah	: Rp. " << totalbayar <<endl<<endl;
		cout << "Terima kasih, selalu jaga kesehatan yaa";
 	}
	return 0;
}
