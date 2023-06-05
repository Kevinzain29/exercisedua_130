
#include <iostream>
#include <vector>
using namespace std;

class Penerbit;
class Pengarang {
public:
	string nama_penarang;
	vector<Penerbit*> daftar_penerbit;
	vector<string> daftar_buku;

};
class Penerbit {
public:
	string nama;
	vector<Pengarang*> daftar_pengarang;

	Penerbit(string pNama) :nama(pNama) {
		cout << "Penerbit \"" << nama << "\" ada\n";
	}
	~Penerbit() {
		cout << "Penerbit \"" << nama << "\" tidak ada\n";
	}
	void tambahPengarang(Pengarang*);
	void cetakPengarang();
};
void ::tambahPenerbit(Penerbit* pPenerbit) {
	Penerbit.push_back(pPenerbit);
}
void Pengarang::cetakPenerbit() {
	cout << "Daftar Dokter yang menangani pasien \"" << this->nama << "\":\n";
	for (auto& a : Penerbit) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
void Penerbit::tambahPengarang(Pengarang* pPengarang) {
	Pengarang.push_back(pPengarang);
	pPasien->tambahDokter(this);
}
void Penerbit::cetakPengarang() {
	cout << " \"" << this->nama << "\":\n";
	for (auto& a : daftar_pengarang) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

int main() {
	Penerbit* varPenerbit1 = new Penerbit("");
	Pengarang* varPengarang1 = new Pengarang("");
	

	varDokter1->tambahPasien(varPasien1);
	varDokter1->tambahPasien(varPasien2);
	varDokter2->tambahPasien(varPasien1);

	varDokter1->cetakPasien();
	varDokter2->cetakPasien();
	varPasien1->cetakDokter();
	varPasien2->cetakDokter();

	delete varPasien1;
	delete varPasien2;
	delete varDokter1;
	delete varDokter2;

	return 0;

}
