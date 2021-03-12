#include<iostream>
#include"saves.h"
#include <Windows.h>
#include <stdio.h>
void saveDES(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int chapter)
{
	FILE* savedata;
	if (fopen_s(&savedata, "save.txt", "w+") != 0)
	{
		printf("File error!\n");
	}
	else
	{
		fprintf(savedata, "%i\n%i\n%i\n", Beda_Bashka, medal, fireresist);
		fprintf(savedata, "%i\n%i\n%i\n%i\n", Bible, choose, krek, chapter);
		fclose(savedata);
	}

}

void callsave(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int chapter)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
	printf_s("\n___Сохранение, пожалуйста подождите___\n\n");
	saveDES(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
}

void loadDES(int& Beda_Bashka, int& medal, int& fireresist, int& Bible, int& choose, int& krek, int& chapter)
{
	FILE* savedata;
	if (fopen_s(&savedata, "save.txt", "rt") != 0)
	{
		printf("File error!\n");
	}
	else
	{
		fscanf_s(savedata, "%i%i%i", &Beda_Bashka, &medal, &fireresist);
		fscanf_s(savedata, "%i%i%i%i", &Bible, &choose, &krek, &chapter);
		fclose(savedata);
	}

	switch (chapter)
	{
	case 1:
		First(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		break;
	case 2:
		Second(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		break;
	case 3:
		Third(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		break;
	case 4:
		Fourht(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		break;
	case 5:
		Fifth(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		break;
	case 6:
		Six(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		break;
	case 7:
		Seven(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		break;
	case 8:
		Eight(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		break;
	case 9:
		Ningt(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		break;
	case 10:
		Ten(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		break;
	case 11:
		Eleven(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		break;
	case 12:
		Sekret(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		break;
	default:
		printf_s("Странно, в файле сохранения нету номера главы. Начните новую игру.");
		Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		break;
	}
}

//int main()
//{
//	system("chcp 1251");
//
//	printf_s("Сейчас откроется файл для работы. В него внесут данные. Потом обнулят их и выведут.\n");
//
//	int chapter = 1;
//	int Beda_Bashka = 8;
//	int medal = 4;
//	int fireresist = 1;
//	int Bible = 15;
//	int choose = 9;
//	int Rezult_you = 2;
//	int Rezult_Hit = 2;
//	int krek = 1;
//
//	saveDES(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
//
//	Beda_Bashka = 0;
//	medal = 0;
//	fireresist = 0;
//	Bible = 0;
//	choose = 0;
//	Rezult_you = 0;
//	Rezult_Hit = 0;
//	krek = 0;
//	chapter = 0;
//
//	printf_s("Обнуляем значения....\n");
//	printf_s("%i %i %i %i %i %i %i", Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
//	printf_s("\n\nТеперь загрузим их из файла и выведем:\n");
//
//	loadDES(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
//
//	printf_s("%i %i %i %i %i %i %i\n\n", Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
//
//
//
//	printf_s("Как видите, всё работает. Проверено дважды.\n");
//
//
//	return(0);
//}