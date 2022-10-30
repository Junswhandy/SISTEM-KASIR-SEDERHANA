#include <iostream>
using namespace std;

int main(){
		
	int total_belanja;
	float diskon;
	int total_akhir,jumlah_bayar,kembalian;
	char lagi;
	
		do {
	cout<<"					SELAMAT DATANG DI TOKO MAJU TERUS			"<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"Masukan Total Belanja Anda	: Rp. ";
	cin>>total_belanja;
	

	if(total_belanja < 100000){
		cout<<"Mohon Maaf Anda Tidak Mendapatkan diskon";
		
	}
	else if(total_belanja >= 100000 && total_belanja <=499999){
		diskon = 0.1*total_belanja;
		cout<<"Selamat Anda Mendapatkan Diskon 10% ";
	}
	else if(total_belanja >= 500000 && total_belanja <=999999){
		diskon = 0.2*total_belanja;
			cout<<"Selamat Anda Mendapatkan Diskon 20% ";
	}
	else if (total_belanja >= 1000000){
		diskon = 0.3*total_belanja;
		cout<<"Selamat Anda Mnendapatkan Diskon 30%";
	}
	
	cout<<endl<<endl;;

	cout<<"Total Diskon	: Rp. "<<diskon<<endl;
	total_akhir = total_belanja - diskon;
	cout<<"Total Belanja	: Rp. "<<total_akhir<<endl;

	cout<<endl<<endl;

	cout<<"Jumlah Uang Dibayar	: Rp. ";
	cin>>jumlah_bayar;
	kembalian = jumlah_bayar - total_akhir;	
	cout<<"Kembalian Anda		: Rp. "<<kembalian<<endl;
		cout<<"Masih Ada Lagi [Y/T] : ";
	cin>>lagi;
	
	system ("cls");
	}while (lagi=='y' || lagi=='Y');
	
	return 0;
}
