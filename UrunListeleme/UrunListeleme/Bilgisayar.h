#pragma once
#include "Urun.h"
class Bilgisayar : public Urun
{
public:
	Bilgisayar(string name, string no, double price, string brand, string type, string dType, int dCapacity, string rType, int rCapacity, string pType, float pSpeed, string sType, float sSize);
	~Bilgisayar(void);
	// Sýnýf içinde bulunan deðiþkenlerin çaðýrýlmasý ve/veya deðer atamasýný yapabildiðimiz fonksiyonlar
	string getDType() {
		return DType;
	}
	void setDType(string dtype) {
		DType = dtype;
	}
	int getDCapacity() {
		return DCapacity;
	}
	void setDCapacity(int dc) {
		DCapacity = dc;
	}
	string getRType() {
		return RType;
	}
	void setTech(string rtype) {
		RType = rtype;
	}
	int getRCapacity() {
		return RCapacity;
	}
	void setTech(int rc) {
		RCapacity = rc;
	}
	string getPType() {
		return PType;
	}
	void setPType(string ptype) {
		PType = ptype;
	}
	float getPSpeed() {
		return PSpeed;
	}
	void setPSpeed(float ps) {
		PSpeed = ps;
	}
	string getSType() {
		return SType;
	}
	void setSType(string st) {
		SType = st;
	}
	float getSSize() {
		return SSize;
	}
	void setTech(float ss) {
		SSize = ss;
	}

	//Oluþturulmuþ olan ürünün bilgilerinin konsola basan fonksiyon
	void KonsolaBas() {
		Urun::KonsolaBas();
		cout << "Sabit Disk Tipi: " << DType << endl;
		cout << "Sabit Disk Kapasitesi: " << DCapacity << endl;
		cout << "Ram Tipi: " << RType << endl;
		cout << "Ram Kapasitesi: " << RCapacity << endl;
		cout << "Islemci Tipi: " << PType << endl;
		cout << "Islemci Hizi: " << PSpeed << "GHZ" << endl;
		cout << "Ekran Tipi: " << SType << endl;
		cout << "Ekran Boyutu: " << SSize << '"' << endl;
	}

	// '>'(Büyüktür) iþlemini aþýrý yükleyen friend fonksiyon
	friend Bilgisayar& operator>(Bilgisayar& pc1, Bilgisayar& pc2) {
		if (pc1.getDCapacity() > pc2.getDCapacity())
			return pc1;
		return pc2;
	}

	//yeni bir bilgisayar objesi oluþturulup bilgisayar objesine referans dönen fonksiyon
	static Bilgisayar createRecord() {
		string Name, No, Brand, Type, DType, RType, PType, SType;
		double Price;
		float PSpeed, SSize;
		int DCapacity, RCapacity;
		cout << "Urun Adi:" << endl;
		cin >> Name;
		cout << "Urun Numarasi:" << endl;
		cin >> No;
		cout << "Urun Fiyati:" << endl;
		cin >> Price;
		cout << "Urun Markasi:" << endl;
		cin >> Brand;
		cout << "Urun Tipi:" << endl;
		cin >> Type;
		cout << "Disk Tipi:" << endl;
		cin >> DType;
		cout << "Disk Kapasitesi:" << endl;
		cin >> DCapacity;
		cout << "Ram Tipi:" << endl;
		cin >> RType;
		cout << "Ram Kapasitesi:" << endl;
		cin >> RCapacity;
		cout << "Islemci Tipi:" << endl;
		cin >> PType;
		cout << "Islemci Hizi:" << endl;
		cin >> PSpeed;
		cout << "Ekran Tipi:" << endl;
		cin >> SType;
		cout << "Ekran Boyutu:" << endl;
		cin >> SSize;
		Bilgisayar pc(Name, No, Price, Brand, Type, DType, DCapacity, RType, RCapacity, PType, PSpeed, SType, SSize);
		return pc;
	}
	friend ofstream& operator<<(ofstream& of, const Bilgisayar& pc)
	{
		of << "Urun Adi: " << pc.Name << endl;
		of << "Urun Numarasi: " << pc.No << endl;
		of << "Urun Fiyati: " << pc.Price << " tl" << endl;
		of << "Urun Markasi: " << pc.Brand << endl;
		of << "Urun Tipi: " << pc.Type << endl;
		of << "Sabit Disk Tipi: " << pc.DType << endl;
		of << "Sabit Disk Kapasitesi: " << pc.DCapacity << endl;
		of << "Ram Tipi: " << pc.RType << endl;
		of << "Ram Kapasitesi: " << pc.RCapacity << endl;
		of << "Islemci Tipi: " << pc.PType << endl;
		of << "Islemci Hizi: " << pc.PSpeed << "GHZ" << endl;
		of << "Ekran Tipi: " << pc.SType << endl;
		of << "Ekran Boyutu: " << pc.SSize << '"' << endl;
		return of;
	}
protected:
	string DType;
	int DCapacity;
	string RType;
	int RCapacity;
	string PType;
	float PSpeed;
	string SType;
	float SSize;
};