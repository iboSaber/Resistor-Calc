#include <stdio.h>
#include <math.h>


int main() {
	
		char interface[][30]= 
{
"\n        Renkler        ",
"\n*--------------------*",    
"\n|1        KAHVERANGI|",
"\n|0             SIYAH|",   
"\n|2           KIRMIZI|",
"\n|3           TURUNCU|", 
"\n|4              SARI|", 
"\n|5             YESIL|",
"\n|6              MAVI|",
"\n|7               MOR|",
"\n|8               GRI|",
"\n|9             BEYAZ|",
"\n*--------------------*",
};

	char interface1[][30] = 
{
"\n          Carpan         ",
"\n*-----------------------*",    
"\n|10^0            0-SIYAH|",   
"\n|10^1       1-KAHVERANGI|",
"\n|10^2          2-KIRMIZI|",
"\n|10^3          3-TURUNCU|", 
"\n|10^4             4-SARI|", 
"\n|10^5            5-YESIL|",
"\n|10^6             6-MAVI|",
"\n|10^7              7-MOR|",
"\n|10^8              8-GRI|",
"\n|10^9            9-BEYAZ|",
"\n|0.1            10-ALTIN|",
"\n|0.01           11-GUMUS|",
"\n*-----------------------*",
};

	char interface2[][30] = 
{
"\n 	Tolerans       ",
"\n*-------------------*",    
"\n|0          0-SIYAH|",   
"\n|1%    1-KAHVERANGI|",
"\n|2%       2-KIRMIZI|",
"\n|3%       3-TURUNCU|", 
"\n|4%          4-SARI|", 
"\n|0.5%       5-YESIL|",
"\n|0.25%       6-MAVI|",
"\n|0.10%        7-MOR|",
"\n|0.05%        8-GRI|",
"\n|5%         9-ALTIN|",
"\n|10%       10-GUMUS|",
"\n*-------------------* ",
};

	char interface3[][30]= 
{
"\n  Sicaklik katsayisi   ",
"\n*-----------------------*",       
"\n|100        0-KAHVERANGI|",
"\n|50            1-KIRMIZI|",
"\n|15            2-TURUNCU|", 
"\n|25               3-SARI|", 
"\n|10               4-MAVI|",
"\n|5                 5-MOR|",
"\n*-----------------------*",
};


	int a, b, e, c, d, num, SicKat;
	char answer;
	double result, ToleransAra, DirDegis;
	double Colors[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	double Carpan[] = {1, 10, 100, 1000, 10000, 100000, 1000000,10000000, 100000000, 1000000000, 0.1, 0.01};
	double Tolerans[]= {0, 1, 2, 3, 4, 0.5, 0.25, 0.10, 0.05, 5, 10};
	double Sicaklik[] = {100, 50, 15, 25, 10, 5};
	
	printf("\nMerhaba, Kullanici!\n\nBu program, 4, 5 ve 6 bantli direnclerin omik (Ohm) degerini hesaplar"); 
	
	start:

	printf("\n\nBand sayisi giriniz 4, 5 veya 6..:");  scanf("%d", &num);
	
	while((num != 4) && (num != 5) && (num != 6)) // Yanlış durumu giriş için
	{
		printf("Yanlis giris yaptiniz\nLutfen Band sayisi giriniz 4, 5 veya 6..:");  scanf("%d", &num);
	}
	
	printf("\n\n\n\t\t\t<< Tablo da Renklerin yaninda yazilan sayilari giriniz >>");
	
//	interface Tablosu yazdırmak için	
	for(int i = 0; i < 12; i++)
    {
  		printf("%s", interface[i]);
    } 
	
//	Band 1 
	printf("\n\nBirinci Bandi giriniz..:");  scanf("%d", &a);
	
		while( a < 1 || a > 9  ) //Yanlış giriş durumu için, Birinci Band 0 olamaz
	{
		printf("\nDIKKAT!!   Birinci Band bu degeri alamaz, Lutfen tekrardan Birinci Bandi giriniz..:");  scanf("%d", &a);
	}
	
	//	Band 2
	printf("\n\nikinci Bandi giriniz..:");  scanf("%d", &b);
	
	while( b < 0 || b > 9)
	{
		printf("\nDIKKAT!!   ikinci Band bu degeri alamaz, Lutfen tekrardan ikinci Bandi giriniz..:");  scanf("%d", &b);
	}
	
	//	Band 3
	if(num != 4)
	{
		printf("\n\nUcuncu bandi giriniz..:"); scanf("%d", &e);
		
		while(e < 0 || e > 9)
		{
			printf("\nDIKKAT!!   Ucuncu Birinci Band bu degeri alamaz, Lutfen tekrardan Ucuncu bandi giriniz..:"); scanf("%d", &e);	
		}
	}

	system("cls"); // Clear screen
	
//	interface Tablosu yazdırmak için	
	for(int i = 0; i < 15; i++)
    {
  		printf("%s", interface1[i]);
    } 
    
//	Carpan  
	printf("\n\nCarpan rengi giriniz..:");	scanf("%d", &c); 
	
	while( c < 0 || c > 11)
	{
		printf("\n\nDIKKAT!!   Carpan bu degeri alamaz, Lutfen tekrardan Carpan giriniz..:"); scanf("%d", &c);
	}
	system("cls"); // Clear screen

//	interface Tablosu yazdırmak için
	for(int i = 0; i < 14; i++)
    {
  		printf("%s", interface2[i]);
    } 
    
//	Tolerans
	printf("\n\nTolerans rengi giriniz..:"); scanf("%d", &d);   
	
		while( d < 0 || d > 10)
	{
		printf("\n\nDIKKAT!!   Tolerans bu degeri alamaz, Lutfen tekrardan Tolerans giriniz..:"); scanf("%d", &d);
	}
	system("cls"); // Clear screen 
	
//	5 ve 6 bantlı olunca Direnc değeri hesaplama 

	if(c == 10)
	{
		result = (100 * Colors[a] + 10 * Colors[b] + Colors[e]) / 10; // carpan rengi Altin olunca
	}
	else if(c == 11)
	{
		result = (100 * Colors[a] + 10 * Colors[b] + Colors[e]) / 100; // carpan rengi Gumus olunca
	}	
	else
	{
		result = (100 * Colors[a] + 10 * Colors[b] + Colors[e]) * pow(10, c); // carapn rengi diger renkler olunca
	}
// 4 banltı olunca Direnc değeri hesaplama 
	if(num == 4 )
	{
		result = result /10;
	}	

//	Tolerans değeri hesaplama
	ToleransAra = (result * Tolerans[d]) / 100;	
	
// Sıcaklık katsayısı ve Direnç Değişimi hesaplama	
	if (num == 6)
	{
		for(int i = 0; i < 9; i++)
    	{
  			printf("%s", interface3[i]);
    	} 
//	Sıcaklık katsayısı
		printf("\n\nSicaklik katsayisi rengi giriniz..:"); scanf("%d", &SicKat);
		
		while( SicKat < 0 || SicKat > 5)
		{
			printf("\n\nDIKKAT!!   Sicaklik katsayisi bu degeri alamaz, Lutfen tekrardan Sicaklik katsayisi giriniz..:"); scanf("%d", &SicKat);
		}

//	Direnç Değişimi	
		DirDegis = Sicaklik[SicKat] * result / 1000000;
	}
	
	system("cls");
	
	//	Girilen değerler
	printf("\nGirilen değerler..:\t Band1: %.0lf\tBand2: %.0lf\t", Colors[a], Colors[b]);

	if (num != 4)
	{
		printf("Band3: %.0lf\t", Colors[e]);
	}
	
	printf("Carpan: %.2lf\t Tolerans: %.2lf\t\n\n Direnc degeri = %.2lf  +- %.2lf%%\n Tolerans Aralığı..: %.4lf (ohm) -- %.4lf(ohm)\n", Carpan[c], Tolerans[d], result, Tolerans[d], result - ToleransAra, result + ToleransAra);

	if(num == 6)
	{
		printf(" Sicaklik katsayisi..: %.0lf ppm/C\n Direnc Degisimi..: %lf ohm", Sicaklik[SicKat], DirDegis);
	}
	
	printf("\n\nBaska islem yapmak ister misiniz?\n y/n ile cevaplayiniz..:\t"); scanf("%s", &answer);

	if(answer == 'y')
	{
		system ("cls");
		goto start;
	}
	
	return 0;
}