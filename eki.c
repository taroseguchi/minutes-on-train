#include <stdio.h>
#include <string.h>

char eki[101][20] = {"Shibuya","Daikanyama","Nakameguro","Yutenji",
	"Gakugeidaigaku","Toritsudaigaku","jiyugaoka","Denentyofu",
	"Tamagawa","Sinmaruko","Musasikosugi","motosumiyoshi","Hiyoshi",
	"Tsunashima","Ookurayama","Kikuna","Myorenji","Hakuraku",
	"Higashihakuraku","Tammachi","Yokohama","Shintakashima",
	"Minatomirai","Bashamichi","Nihonodori","MotomachiChukagai","Meguro",
	"fudomae","Musashikoyama","Nishikoyama","Senzoku","Ookayama",
	"Okusawa","Ikejiriohashi","Sangenjaya","Komazawadaigaku",
	"Sakurashimmachi","Yoga","Futakotamagawa","Futakoshinchi","Takatsu",
	"Mizonokuchi","Kajigaya","Miyazakidai","Miyamaedaira","Saginuma",
	"Tamaplaza","Azamino","Eda","Ichigao","Fujigaoka","Aobadai","Tana",
	"Nagatsuta","Tsukushino","Suzukakedai","Minamimachida","Tsukimino",
	"Chuorinkan","Onda","Kodomonokuni","kaminoge","Todoroki","Oyamadai",
	"Kuhombutsu","Midorigaoka","Kitasenzoku","Hatanodai","Ebaramachi",
	"Nakagnobu","Togoshikoen","Shimoshimmei","Oimachi","Gotanda",
	"Osakihirokoji","Togoshiginza","Ebaranakanobu","Nagahara","Senzokuike",
	"Ishikawadai","Yukigayaotsuka","Ontakesan","Kugahara","Chidoricho",
	"Ikegami","Hasunuma","Kamata","yaguchinowatashi","Musashinitta",
	"Simomaruko","Unoki","Numabe","NIshitaishido","Wakabayashi",
	"Syoinjinjamae","Setagaya","Kamimachi","Miyanosaka","Yamashita",
	"Matsubara","Shimotakaido"};

int readeki(char* name)
{
	int i;

	for (i = 0; i < 101; i++){
		if (strcmp(name, eki[i]) == 0) 
			return i;
	}
	return -1;
}
