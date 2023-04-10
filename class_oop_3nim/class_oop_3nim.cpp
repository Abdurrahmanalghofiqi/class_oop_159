#include <iostream>
using namespace std;

class Mahasiswa { 
public:
	int nim;
	string nama;
	void tampil() {
		cout << "NIM= " << nim;
		cout << "\nNama= " << nama;
	}
};

class Matakuliah {
private:
	int sks;
	string kode; 
	string namaMK;
public:
	void inputMK() {

		cout << "\nMasukan jumlah sks= ";
		cin >> sks;
		cout << "\nMasukan Kode MK= ";
		cin >> kode;
		cout << "\nMasukan Nama MK= ";
		cin >> namaMK;
	}

	void tampilMK() {
		cout << "\nJumlah sks= " << sks;
		cout << "\nKode MK= " << kode;
		cout << "\nNama MK= " << namaMK;
	}
};

	int main()
{
		Mahasiswa mhs;
		Matakuliah mk;

		cout << "Nim mahasiswa = ";
		cin >> mhs.nim;
		cout << "Nama mahasiswa + ";
		cin >> mhs.nama;

		mk.inputMK();
		mhs.tampil();
		mk.tampilMK();


	}