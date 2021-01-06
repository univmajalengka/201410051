#include<iostream>
using namespace std;
 
int jam(int j, int m, int d){
 	int td;
 	td=(j*3600)+(m*60)+d;
 	return td;
 }
void hasil(int td){
	int j,sj,m,d;
	j=td/3600;
 	sj=td%3600;
 	m=sj/60;
 	d=sj%60;
 	cout<<"Waktu Pertama : "<<j<<":"<<m<<":"<<d<<endl;; 	
}
 int main(){
 	int j1,j2,m1,m2,d1,d2,total_detik;
	cout << "=========== PROGRAM BILLING =========== \n";
	cout << "TUGAS TERAKHIR ALGORITMA DAN PEMROGRAMAN \n";
	cout << "~~~~~~~~~~ OLEH FAUZY RAMADAN ~~~~~~~~~~ \n"<< endl;
for(int i=1; i<=2; i++){
	if(i==1){cout<<"Masukan Waktu Pertama " << endl;
	}
	else{
		cout<<"Masukan Waktu Akhir " << endl;
	}
	cout<<"Jam     :";
	cin>>j1;
	cout<<"Menit   :";
	cin>>m1;
	cout<<"Detik   :";
	cin>>d1;
	cout<< endl;
	total_detik = jam(j1,m1,d1) - total_detik;
}
 	 hasil(total_detik);
 	 
 	 
 	
 }
