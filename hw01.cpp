/* RAHİME ÖKSÜZ
 * 18120205018
 * yıldızlardan oluşan düz üçgen ,ters üçgen ve elmas şekillerini ekrana yazdıran program
 */

#include <iostream>

 /*Bu fonksiyon ekrana yıldızlardan oluşan bir üçgen yazar.
 Fonksiyon sadece [3, 15] aralığındaki tek sayılarda çalışır.
 Uygun parametre 3 kere gönderilmezse ekrana hiçbir şey yazdırmadan çıkar.*/
void duzUcgen(int deger)
{
	int yildiz = (deger + 1) / 2;
	for (int i = 0; i < yildiz; i++)
	{
		for (int j = i; j < yildiz - 1; j++)
			std::cout << " " << " ";

		for (int j = 0; j <= 2 * i; j++)
			std::cout << "*" << " ";

		std::cout << std::endl;
	}
}



/*Bu fonksiyon ekrana yıldızlardan oluşan ters bir üçgen yazar.
Fonksiyon sadece[3, 15] aralığındaki tek sayılarda çalışır.
Uygun parametre gönderilmezse ekrana hiçbir şey yazdırmadan çıkar.*/
void tersUcgen(int deger)
{
	int bosluk = (deger + 1) / 2;
	int i = 0, j = 1, r = 0;
	while (i < bosluk)
	{
		while (j <= r)
		{
			std::cout << " " << " ";
			++j;
		}
		j = 1;
		++r;

		while (j <= 2 * (bosluk - i) - 1)
		{
			std::cout << "*" << " ";
			++j;
		}
		j = 1;
		++i;
		std::cout << std::endl;
	}
	i = 0;
}


/*Bu fonksiyon ekrana yıldızlardan oluşan bir elmas şekli yazar.
Fonksiyon sadece [5, 15] aralığındaki tek sayılarda çalışır.
Uygun parametre gönderilmezse ekrana hiçbir şey yazdırmadan çıkar.*/
void elmas(int deger)
{
	duzUcgen(deger);
	tersUcgen(deger);

}
int main() {

	int islem = 0;
	int deger = 0;
	std::cout << "Yapmak istediğiniz işlemi seçiniz! \n1: Düz Üçgen, 2: Ters Üçgen, 3: Elmas, 0: Çıkış";
	std::cout << std::endl;
	std::cin >> islem;

	if (islem < 0 || islem > 3)      //3 deneme şansı verir
	{		
		for (int i = 0; i < 3; i++) 
		{
			if (islem >= 0 && islem <= 3)
				break;
			else if (i == 2)
				return -1;

			std::cout << "Lutfen gecerli bir sayi giriniz!!!\n" << 2 - i << " deneme hakkınız kaldı" << std::endl;
			std::cin >> islem;
		}
	}
	if (islem == 0)
		return 0;

	std::cout << "Lutfen gecerli bir sayi giriniz!!!" << std::endl;
	std::cin >> deger;

	if (islem == 1 || islem == 2) 
	{
		if (deger < 3 || deger > 15 || deger % 2 != 1)   //3 deneme şansı verir
		{		
			for (int i = 0; i < 3; i++) 
			{
				if (deger >= 3 && deger <= 15 && deger % 2 == 1)
					break;
				else if (i == 2)
					return -1;

				std::cout << "Lutfen gecerli bir sayi giriniz!!!\n" << 2 - i << " deneme hakkınız kaldı" << std::endl;
				std::cin >> deger;

			}
		}
		if (islem == 1)
			duzUcgen(deger);
		else
			tersUcgen(deger);
	}
	else
	{
		if (deger < 5 || deger > 15 || deger % 2 != 1) 
		{
			for (int i = 0; i < 3; i++)
			{
				if (deger >= 5 && deger <= 15 && deger % 2 == 1)
					break;
				else if (i == 2)
					return -1;

				std::cout << "Lutfen gecerli bir sayi giriniz!!!\n" << 2 - i << " deneme hakkınız kaldı" << std::endl;
				std::cin >> deger;
			}
		}
		elmas(deger);
	}

	return 0;
}
