#include <iostream>
using namespace std;
#include <string>

struct DetailAlamat {
	string desa;
	string kota;
};

struct mahasiswa {
	string nim;
	string nama;
	DetailAlamat alamat;
	int umur;
};

int main()
{
	mahasiswa mhs[3];
	for (int i = 0; i < 3; i++) {
		cout << "data ke-" << (i + 1) << ":" << endl;
		cout << "Nomor mahasiswa : ";
		getline(cin, mhs[i].nim);
		cout << "Nama Mahasiswa : ";
		getline(cin, mhs[i].nama);

		cout << "alamat mahasiswa : " << endl;
		cout << "\t nama Desa : ";
		cin >> mhs[i].alamat.desa;
		cout << "\t Nama kota : ";
		cin >> mhs[i].alamat.kota;
		cout << "Umur Mahasiswa : ";
		cin >> mhs[i].umur;
		cin.ignore(1, '\n');
		cout << endl;
	}
	for (int i = 0; i < 3; i++) {
		cout << endl;
		cout << "Data mahasiswa ke-" << (i + 1) << ":" << endl;
	cout << "\n Nim : " << mhs.nim;
	cout << "\n Nama : " << mhs.nama;
	cout << "\n alamat : ";
	cout << "\n Desa : " << mhs.alamat.desa;
	cout << "\n Kota : " << mhs.alamat.kota;
	cout << "\n Umur : " << mhs.umur;
}