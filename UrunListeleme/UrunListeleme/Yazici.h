#pragma once
#include "Urun.h"

class Yazici :public Urun
{
public:
	Yazici(string name, string no, double price, string brand, string type, string tech, float pSpeed, string Resolution, int rCapacity, bool isColor);

	~Yazici();

	// Sýnýf içinde bulunan deðiþkenlerin çaðýrýlmasý ve/veya deðer atamasýný yapabildiðimiz fonksiyonlar
	string getTech() {
		return Tech;
	}
	void setTech(string tech) {
		Tech = tech;
	}
	float getPSpeed() {
		return PSpeed;
	}
	void setPSpeed(float speed) {
		PSpeed = speed;
	}
	string getResolution() {
		return Resolution;
	}
	void setResolution(string r) {
		Resolution = r;
	}
	int getRamCapasity() {
		return RCapacity;
	}
	void setRamCapasity(int rc) {
		RCapacity = rc;
	}
	bool getIsColor() {
		return IsColor;
	}
	void setIsColor(bool c) {
		IsColor = c;
	}


	//Oluþturulmuþ olan ürünün bilgilerinin konsola basan fonksiyon
	void KonsolaBas() {
		Urun::KonsolaBas();
		cout << "Yazici Teknolojisi: " << Tech << endl;
		cout << "Baski Hizi: " << PSpeed << "Sayfa/Dakika" << endl;
		cout << "Baski Cozunurlugu: " << Resolution << endl;
		cout << "Ram Kapasitesi: " << RCapacity << "GB" << endl;
		cout << "Renki Baski Ozelligi: " << IsColor << endl;
	}

	friend ofstream& operator<<(ofstream& of, const Yazici& p)
	{
		of << "Urun Adi: " << p.Name << endl;
		of << "Urun Numarasi: " << p.No << endl;
		of << "Urun Fiyati: " << p.Price << " tl" << endl;
		of << "Urun Markasi: " << p.Brand << endl;
		of << "Urun Tipi: " << p.Type << endl;
		of << "Yazici Teknolojisi: " << p.Tech << endl;
		of << "Baski Hizi: " << p.PSpeed << "Sayfa/Dakika" << endl;
		of << "Baski Cozunurlugu: " << p.Resolution << endl;
		of << "Ram Kapasitesi: " << p.RCapacity << "GB" << endl;
		of << "Renki Baski Ozelligi: " << p.IsColor << endl;
		return of;
	}

	// '>'(Büyüktür) iþlemini aþýrý yükleyen friend fonksiyon
	friend Yazici& operator>(Yazici& p1, Yazici& p2) {
		if (p1.getPSpeed() > p2.getPSpeed())
			return p1;
		return p2;
	}

private:
	string Tech;
	float PSpeed;
	string Resolution;
	int RCapacity;
	bool IsColor;

};
