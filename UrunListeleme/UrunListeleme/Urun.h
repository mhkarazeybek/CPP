#pragma once
#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
using namespace std;

class Urun
{
public:
	Urun(void);
	Urun(string name, string no, double price, string marka, string type);
	~Urun(void);
	//Oluþturulmuþ olan ürünün bilgilerinin konsola basan fonksiyon
	void KonsolaBas() {
		cout << "Urun Adi: " << Name << endl;
		cout << "Urun Numarasi: " << No << endl;
		cout << "Urun Fiyati: " << Price << " tl" << endl;
		cout << "Urun Markasi: " << Brand << endl;
		cout << "Urun Tipi: " << Type << endl;

	}

	// Sýnýf içinde bulunan deðiþkenlerin çaðýrýlmasý ve/veya deðer atamasýný yapabildiðimiz fonksiyonlar
	string getName() {
		return Name;
	}
	void setName(string name) {
		Name = name;
	}
	string getNo() {
		return No;
	}
	void setNo(string no) {
		No = no;
	}
	double getPrice() {
		return Price;
	}
	void setPrice(double price) {
		Price = price;
	}
	string getBrand() {
		return Brand;
	}
	void setBrand(string brand) {
		Brand = brand;
	}
	string getType() {
		return Type;
	}
	void setType(string type) {
		Type = type;
	}

	// '>'(Büyüktür) iþlemini aþýrý yükleyen friend fonksiyon
	friend Urun& operator>(Urun& u1, Urun& u2) {
		if (u1.getPrice() > u2.getPrice())
			return u1;
		return u2;
	}

protected:
	string Name;
	string No;
	double Price;
	string Brand;
	string Type;
};