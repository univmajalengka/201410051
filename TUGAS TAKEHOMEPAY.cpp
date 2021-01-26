//Menghitung Gaji Bersih Karyawan
#include <iostream>
#include <string>
using namespace std;
const float persentunjangan = 0.2;
const float persenpajak = 0.15;
int main ()
{
	system ("COLOR F0");
	string namakaryawan;
	int gajibersih, gajipokok, tunjangan, pajak;
	cout<<endl;
	
	cout << "=========== TUGAS KE DELAPAN =========== \n";
	cout << "     KALKULASI TAKE-HOME-PAY KARYAWAN    \n";
	cout << "~~~~~~~~~~ OLEH FAUZY RAMADAN ~~~~~~~~~~ \n"<< endl;
	
	cout<<"Nama Karyawan	: ";
	getline (cin, namakaryawan);
	cout<<"Gaji Pokok	: Rp.";
	cin>>gajipokok;
	cout<<endl;
	
	tunjangan = persentunjangan * gajipokok;
	pajak = persenpajak * gajipokok;
	gajibersih = gajipokok + tunjangan - pajak;
	
	cout<<"Gaji Bersih Bapak/Ibu "<<namakaryawan<<" adalah Rp."<<gajibersih<<endl;
	
	return 0;
}
