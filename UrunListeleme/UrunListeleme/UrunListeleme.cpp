#include "pch.h"
#include "Bilgisayar.h"
#include "Yazici.h"
#include <fstream>
#include <typeinfo>
#include <iostream>


int main() {

	//Bilgisayar tipinde bir obje oluþturulmasý
	Bilgisayar pc("OMEN BY HP 17-AN101NT", "XXXX567", 11998, "HP", "Notebook", "SSD", 256, "DDR4", 16, "CORE I7 8750H", 2, "Full HD", 17);

	//Yazici tipinde bir obje oluþturulmasý
	Yazici printer("CANON PIXMA G4411", "G4411XX", 1449, "CANON", "Cok Fonksiyonlu Yazici", "Kartus&Toner", 8, "600x1200 dpi", 2, true);

	//Bilgisayar ve Yazici sýnýflarýna ait KonsolaBas fonksiyonunun çaðýrýlmasý
	pc.KonsolaBas();
	printer.KonsolaBas();

	//Dönüþ tipi Bilgisayar olan bir fonksiyonun çaðýrýlmasý ve bu tipin bir objeye eþitlenmesi
	Bilgisayar bilgisayar = Bilgisayar::createRecord();
	bilgisayar.KonsolaBas();

	//Bilgisayar tipinde bir dizi oluþturup içine Bilgisayar objelerinin atanmasý
	Bilgisayar computers[] = { pc,bilgisayar };

	//Yazici tipinde bir dizi oluþturup içine Yazici objelerinin atanmasý
	Yazici printers[] = { printer };

	//Dosya yazma iþlemi gerçekleþtirme
	ofstream file;
	file.open("urunler.txt");
	for (int i = 0; i < (sizeof(computers) / sizeof(computers[0])); i++)
	{
		file << computers[i] << endl;
	}
	for (int i = 0; i < (sizeof(printers) / sizeof(printers[0])); i++)
	{
		file << printers[i] << endl;
	}
	file.close();


	system("PAUSE");

}