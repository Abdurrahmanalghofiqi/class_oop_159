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
		cout << "\nMasukan kode MK= ";
		cin >> kode;
		cout << "\nMasukan Nama MK= ";
		cin >> namaMK;
	}

	void tampilMK() {
		cout << "\nJumlah sks= " << sks;
	}
};