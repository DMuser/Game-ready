#include <iostream>
#include <stdio.h>
#include<locale.h>
#include <Windows.h>
#include<time.h>
#include"saves.h"



void Menu(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int &chapter);


void First(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int& chapter);

void Second(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int& chapter);


int Third(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int& chapter);


void Fourht(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int& chapter);


void Fifth(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int& chapter);


void Six(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int& chapter);


void Seven(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int& chapter);
void Game(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int& chapter);
void Eight(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int& chapter);
void Ningt(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int& chapter);
void Ten(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int& chapter);
void Eleven(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int& chapter);
void Sekret(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int& chapter);
void TEXTDEVIL();
void TEXTITALIANSTRANGER();
void TEXTBENITO();
void TEXTAUSTRIANSTRANGER();
void TEXTHAPPYH();
void TEXTBORIS();
void TEXTLENIN();
void TEXTDARWIN();

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int chapter = 1;
	int Beda_Bashka = 0;
	int medal = 0;
	int fireresist = 0;
	int Bible = 0;
	int choose = 0;
	int Rezult_you = 0;
	int Rezult_Hit = 0;
	int krek = 0;

	Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
	First(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
	Second(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
	Third(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
	printf("%d ", Beda_Bashka);
	Fourht(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
	Fifth(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
	Six(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
	Seven(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
	Game(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
	Seven(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
	Eight(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
	Ningt(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
	Ten(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
	Eleven(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
	Sekret(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);

}
enum ConsoleColor {
	Console = 0,
	Albert = 1,
	Hitler = 2,
	Yeltsin = 3,
	Devil = 4,
	Benito = 5,
	Author = 6,
	LightGray = 7,
	DarkGray = 8,
	Option = 9,
	dsdsds = 10,
	LightCyan = 11,
	Lenin = 12,
	LightMagenta = 13,
	Win = 14,
	White = 15
};

void Menu(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int &chapter)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
	printf("�������� ������� �� ����\n 1-����� ����\n 2-��������� ����\n 3-����� �� ����\n");
	scanf_s("%d", &choose);

	switch (choose)
	{
	case 1:
		printf("\n");
		Beda_Bashka = 0;
		chapter = 1;
		medal = 0;
		fireresist = 0;
		Bible = 0;
		choose = 0;
		First(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		break;
	case 2:
		loadDES(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		break;
	case 3:
		exit(0);
		break;
	default:printf("No correct ");


	}
}

void First(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int &chapter)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (chapter == 1)
	{
		SetConsoleTextAttribute(hConsole, (WORD)((7 << 4) | Console));
		TEXTDEVIL();
		scanf_s("%d", &choose);

		switch (choose)
		{
		case 1:
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | Win));
			printf("������ ��������� ��������� ����� � ������ �� ��� �����. ��� ������� ��������� � ���������� �� ��������.\n");
			system("pause");
			Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
			printf("\n");
			break;
		case 2:
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | Devil));
			printf("� �� ������. �� ��� ��, ��� �����. ���� ����� ��� ��� ���- �� ������ ������-�� ��������� �������- ���� ����� ����.\n");
			chapter++;
			Second(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
			printf("\n");
			break;
		default:
			printf("No correct \n");
			break;
		}
	}
}

void Second(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int& chapter)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if(chapter==2)
	{
		callsave(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		SetConsoleTextAttribute(hConsole, (WORD)((7 << 4) | Console));
	TEXTITALIANSTRANGER();
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:
		chapter++;
		Third(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		printf("\n");
		break;
	case 2:
		chapter++;
		Third(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		printf("\n");
		break;
	default:printf("No correct ");
	}
	}
}

int Third(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int& chapter)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (chapter == 3)
	{
		callsave(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		SetConsoleTextAttribute(hConsole, (WORD)((7 << 4) | Console));
		TEXTBENITO();
		scanf_s("%d", &choose);
		switch (choose)
		{
		case 1:
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | Benito));
			Beda_Bashka = Beda_Bashka + 1;
			chapter++;
			printf_s("�� ��� ���- �������� ������- � ���� ������� ��� ���� ������ ������ ��� , � ���������� ����� �����-��! �� ������ ����� ������ ?????\n�������, �������, ��� ������ �������� ��� ��� �� �������� ��������� ����� �� �����.\n���� ������� ��������� � ������ ���������� %d\n", Beda_Bashka);
			Fourht(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
			break;
		case 2:
			medal = medal + 1;
			chapter++;
			printf_s("������ ��������� � ���-�� ��������� ��� ������� ������ ��������������� � ��������.\n- � ���������� ���, ������� ���������� ������ � ������ ��� ��� ��� ������!\n������ ����� ��������� ������ ������� � ��� ��������!\n� ������ ��� � ���� ���� ���� !\n������� ������������ ������� �� ������� � ������������� �� ��������.");
			Fourht(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
			break;
		case 3:
			Beda_Bashka = Beda_Bashka + 1;
			chapter++;
			printf_s("�� ��� ���- �������� ������- � ���� ������� ��� ���� ������ ������ ��� , � ���������� ����� �����-��! �� ������ ����� ������ ?????\n�������, �������, ��� ������ �������� ��� ��� �� �������� ��������� ����� �� �����.\n���� ������� ��������� � ������ ���������� %d\n", Beda_Bashka);
			Fourht(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		default:printf("No correct ");
		}
		return (Beda_Bashka);
	}
}

void Fourht(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int& chapter)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (chapter == 4)
	{
		void callsave(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int chapter);
		SetConsoleTextAttribute(hConsole, (WORD)((7 << 4) | Console));
		TEXTAUSTRIANSTRANGER();
		scanf_s("%d", &choose);
		switch (choose)
		{
		case 1:
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | Option));
			Beda_Bashka = Beda_Bashka + 1;
			chapter++;
			printf_s("������� � ���� ������� ������� ������ �� ���������, � ����� ��� �������� ������� ����. �� ��������� ���� ���������� � ��������.\n����� �� �����, ������� ��������� �� �������.\n���� ������� ��������� � ������ ���������� %d\n", Beda_Bashka);
			Fifth(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
			break;
		case 2:
			chapter++;
			printf_s("��, �������, � ��������� ������ ���� ��� ��� ��� �� ����� ��� ��� ���� �����, ������, �����.\n�� ��� ��� ����� �� ������� - �� �������� ��������, ��������� ��������!");
			Fifth(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
			break;
		default:printf("No correct ");
		}
	}
}
void Fifth(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int& chapter)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (chapter == 5)
	{
		callsave(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		SetConsoleTextAttribute(hConsole, (WORD)((7 << 4) | Console));
		TEXTHAPPYH();
		scanf_s("%d", &choose);
		switch (choose)
		{
		case 1:
			chapter++;
			Beda_Bashka = Beda_Bashka + 1;
			printf_s("���� ������� % d", Beda_Bashka);
			Six(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
			break;
		case 2:
			chapter += 2;
			Beda_Bashka = Beda_Bashka + 1;
			printf_s("���� ������� % d", Beda_Bashka);
			Seven(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
			break;
		default:printf("No correct ");
		}
	}
}

void Six(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int& chapter)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (chapter == 6)
	{
		callsave(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		SetConsoleTextAttribute(hConsole, (WORD)((7 << 4) | Console));
		TEXTBORIS();
		scanf_s("%d", &choose);
		switch (choose)
		{
		case 1:
		{
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | Author));
			if (medal == 1) printf(" �� ������� ������\n");
			else
			{
				printf(" �� �� ������ ��������� ������ ����� �� ����������\n");
				break;
			}
			SetConsoleTextAttribute(hConsole, (WORD)((7 << 4) | Console));
			printf_s("������� ����� ������ �������� �� ���� ��������, �� ���������� ����� ���������,\n���� �������� ���� ��������� � ��������� ������� ����� �����, �������� ��� ������\n����� ��� ��� ����� - �� ���������� � ������ �� ����, ������� ����� �������.");
			chapter++;
			Beda_Bashka = Beda_Bashka + 1;
			printf_s("���� ������� % d", Beda_Bashka);
			Seven(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		}
		break;
		case 2:
			chapter++;
			Beda_Bashka = Beda_Bashka + 1;
			printf_s("���� ������� % d", Beda_Bashka);
			Seven(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
			break;
		default:printf("No correct ");
		}
	}
}

void Seven(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int& chapter)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (chapter == 7)
	{
		callsave(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		SetConsoleTextAttribute(hConsole, (WORD)((7 << 4) | Albert));
		printf_s("������ ��������� �� �������� ��� � ������� ������� , �� ������.\n- � ����� ������� � �����? ���� ��������, ����� ��� �����!\n1) - �������\n2) - �� �� ��� ������� ��� �����. �� ����� �� ������ ����� �� ?");
		scanf_s("%d", &choose);
		switch (choose)
		{
		case 1:
			Beda_Bashka = Beda_Bashka + 1;
			printf_s("���� ������� % d", Beda_Bashka);
			Game(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
			break;
		case 2:
			Beda_Bashka = Beda_Bashka + 1;
			printf_s("���� ������� % d", Beda_Bashka);
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | Yeltsin));
			printf_s("����, �� �����. ����� �� �����.");
			Game(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
			break;
		default:printf("No correct ");
		}
	}
}

void Game(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int& chapter)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (chapter == 7)
	{
		SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | Win));
		choose = rand() % 7;
		krek = rand() % 7;
		if (choose == krek)
		{
			printf(" % d", choose);
			printf(" % d", krek);
			krek = 0;
			printf(" �����\n");
			Game(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		}
		else
		{
			if (choose > krek)
			{

				printf(" % d", choose);
				printf(" % d", krek);
				krek = 0;
				printf(" ������! ����������.�� ���� ���������.���� ���� ������ ������ �������� ������ - �� ������ ������� � �� �����, ������� � ���������, �� ��� ���� ����� ������� �� ����������� ����� ����.����� ��� � ������� �� �� �����.\n");
				chapter++;
				Eight(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);

			}
			else
			{
				printf(" % d", choose);
				printf(" % d", krek);
				krek = 0;
				printf(" ���������\n");
				Beda_Bashka = Beda_Bashka + 1;
				printf_s("���� ������� % d", Beda_Bashka);
				chapter++;
				Eight(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
			}


		}
	}
}

void Eight(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int& chapter)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (chapter == 8)
	{
		callsave(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		SetConsoleTextAttribute(hConsole, (WORD)((7 << 4) | Console));
		TEXTLENIN();
		scanf_s("%d", &choose);
		switch (choose)
		{
		case 1:
		{
			if (medal == 1)
			{
				SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | Author));
				printf(" �� ����������� ������\n");
				SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | Yeltsin));
				printf_s("- ������� ����! ���� ��� ���� ����, �� ���� ����������.\n� � ����� �� ������� �������, ������ ��� ������������ ��� ���������� .");
				Ningt(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
				krek = 1;
				chapter++;
			}
			else
			{
				SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | Author));
				printf(" �� �� ������� �������� ������\n");
				Eight(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
			}


		}
		break;
		case 2:
		{
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | Yeltsin));
			printf_s("- ������� ����! ���� ��� ���� ����, �� ���� ����������.\n� � ����� �� ������� �������, ������ ��� ������������ ��� ���������� .");
			Ningt(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
			krek = 1;
			chapter++;
		}
		break;
		default:printf("No correct ");
		}
	}
}

void Ningt(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int& chapter)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (chapter == 9)
	{
		callsave(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		SetConsoleTextAttribute(hConsole, (WORD)((7 << 4) | Console));
		printf_s("\n1) -  ����� � �����.\n2) -  ��������� �� ���, ���������� ��� �����.\n");
		if (Beda_Bashka > 3)
		{
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | Albert));
			printf(" ����������������������-������� �������- � ������ ������.\n");
			Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		}
		scanf_s("%d", &choose);
		switch (choose)
		{
		case 1:
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | Author));
			printf_s("��������� ��� ������� �������� �� ������ �� ����� �����, � ������� �����.\n�� ������ �������, ������� �������� � ������������ �� ������ ����� � ���������.\n- �������� , �������, ����.");
			printf_s("���� ������� % d", Beda_Bashka);
			Beda_Bashka = Beda_Bashka + 1;
			printf_s("���� ������� % d", Beda_Bashka);
			Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
			break;
		case 2:
			chapter++;
			Beda_Bashka = Beda_Bashka + 1;
			printf_s("���� ������� % d", Beda_Bashka);
			Ten(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
			break;
		default:printf("No correct ");
		}
	}
}

void Ten(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int& chapter)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (chapter == 10)
	{
		callsave(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		SetConsoleTextAttribute(hConsole, (WORD)((7 << 4) | Console));
		if (Beda_Bashka > 3)
		{
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | Albert));
			printf(" ����������������������-������� �������- � ������ ������.\n");
			Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		}
		TEXTDARWIN();
		scanf_s("%d", &choose);
		switch (choose)
		{
		case 1:
			chapter++;
			Beda_Bashka = Beda_Bashka + 1;
			printf_s("���� ������� % d", Beda_Bashka);
			Eleven(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
			break;
		case 2:
			Beda_Bashka = Beda_Bashka + 1;
			chapter++;
			Beda_Bashka = Beda_Bashka + 1;
			printf_s("���� ������� % d", Beda_Bashka);
			Eleven(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
			break;
		case 3:
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | Win));
			printf_s("����������!- ������, ������������, ��� ��������, ����, ������� ����������� �������� ����� - ��� ������, ��� ������.����� ����������.");
			chapter++;
			Beda_Bashka = Beda_Bashka + 1;
			printf_s("���� ������� % d", Beda_Bashka);
			Eleven(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
			Bible = Bible + 1;
			break;
		default:printf("No correct ");
		}
	}
}

void Eleven(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int& chapter)
{
	printf_s("���� ������� % d", Beda_Bashka);
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (chapter == 11)
	{
		callsave(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		SetConsoleTextAttribute(hConsole, (WORD)((7 << 4) | Console));
		if (Beda_Bashka > 1)
		{
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | Albert));
			printf(" ����������������������-������� �������- � ������ ������.\n");
			Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		}
		SetConsoleTextAttribute(hConsole, (WORD)((7 << 4) | Author));
		printf_s("������ �� ������� �� ������ ��� ��� �� ����������� ������ ������� ���, ��� �� ������� ���������.\n�� ������ ������� ������ , ��� ���� ����� ��� �����.\n1) - �������� ���� ������.\n2) -  ���� � �����.\n3) - ������ � ������� �������� �������.");
		scanf_s("%d", &choose);
		switch (choose)
		{
		case 1:
			
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | Win));
			printf_s("�� ������ �������, ������� �������� � ������������ �� ������ ����� � ���������.\n- �������� , �������, ����.\n");
			printf_s("���� ������� % d", Beda_Bashka);
			Beda_Bashka = Beda_Bashka + 1;
			printf_s("���� ������� % d", Beda_Bashka);
			Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
			printf("\n");
			break;
		case 2:
		{
			
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | Win));
			printf_s("�� ������ �������, ������� �������� � ������������ �� ������ ����� � ���������.\n- �������� , �������, ����.\n");
			printf_s("���� ������� % d", Beda_Bashka);
			Beda_Bashka = Beda_Bashka + 1;
			printf_s("���� ������� % d", Beda_Bashka);
			Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
			printf("\n");
		}
		break;
		case 3:
			
			
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | Author));
			printf_s("�� ���������� � ������� � �������� ��� �� ���� . ����� �������-�� �������� ���� � ������������ ��� ����.\n- �� ��� ������� ! ����� �� ���� ����� ����� ! ������ ���� �� ����� ������ , ���. � �� � ���� ��� ���� ������� �� ������ �������� � ��� ������� ����������.\n- ����� �����.\n- � ����� �������� �� ������ .\n");
			printf_s("������� ����� ������� � ������������� ���������.\n- �������! -�������� �������� �����.-������� � ��� ����� ������� �����! � ������ ����� ����� ���������. ���� �� ��������!\n");
			printf_s("���� ������� % d", Beda_Bashka );
			Beda_Bashka = Beda_Bashka + 1;
			printf_s("���� ������� % d", Beda_Bashka);
			Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
			printf("\n");
			break;
		default:printf("No correct ");
		}
	}
}

void Sekret(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek, int& chapter)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (chapter == 12)
	{
		callsave(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | Win));
		printf_s("������� ����� ������� � ������������� ���������.\n- �������! -�������� �������� �����.-������� � ��� ����� ������� �����! � ������ ����� ����� ���������. ���� �� ��������!");
		Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek, chapter);
		printf("\n");
	}
}

void TEXTDEVIL()
{
	FILE* ft;
	if (fopen_s(&ft, "DEVIL.txt", "rt") != 0)
	{
		printf("������!\n");
	}
	else
	{
		char cor[700] = { 0 };
		fread(cor, sizeof(char), 699, ft);
		fclose(ft);

		printf("%s\n", cor);
	}
}
void TEXTITALIANSTRANGER()
{
	FILE* ft;
	if (fopen_s(&ft, "ITALIAN.txt", "rt") != 0)
	{
		printf("������!\n");
	}
	else
	{
		char cor[650] = { 0 };
		fread(cor, sizeof(char), 649, ft);
		fclose(ft);

		printf("%s\n", cor);
	}
}
void TEXTBENITO()
{
	FILE* ft;
	if (fopen_s(&ft, "BENITO.txt", "rt") != 0)
	{
		printf("������!\n");
	}
	else
	{
		char cor[1000] = { 0 };
		fread(cor, sizeof(char), 999, ft);
		fclose(ft);

		printf("%s", cor);
		printf("\n");
	}
}
void TEXTAUSTRIANSTRANGER()
{
	FILE* ft;
	if (fopen_s(&ft, "AUSTRIAN.txt", "rt") != 0)
	{
		printf("������!\n");
	}
	else
	{
		char cor[600] = { 0 };
		fread(cor, sizeof(char), 600, ft);
		fclose(ft);

		printf("%s", cor);
		printf("\n");
	}
}
void TEXTHAPPYH()
{
	FILE* ft;
	if (fopen_s(&ft, "HAPPYH.txt", "rt") != 0)
	{
		printf("������!\n");
	}
	else
	{
		char cor[440] = { 0 };
		fread(cor, sizeof(char), 439, ft);
		fclose(ft);

		printf("%s", cor);
		printf("\n");
	}
}
void TEXTBORIS()
{
	FILE* ft;
	if (fopen_s(&ft, "BORIS.txt", "rt") != 0)
	{
		printf("������!\n");
	}
	else
	{
		char cor[340] = { 0 };
		fread(cor, sizeof(char), 339, ft);
		fclose(ft);

		printf("%s", cor);
		printf("\n");
	}
}
void TEXTLENIN()
{
	FILE* ft;
	if (fopen_s(&ft, "LENIN.txt", "rt") != 0)
	{
		printf("������!\n");
	}
	else
	{
		char cor[420] = { 0 };
		fread(cor, sizeof(char), 419, ft);
		fclose(ft);

		printf("%s", cor);
		printf("\n");
	}
}
void TEXTDARWIN()
{
	FILE* ft;
	if (fopen_s(&ft, "DARWIN.txt", "rt") != 0)
	{
		printf("������!\n");
	}
	else
	{
		char cor[440] = { 0 };
		fread(cor, sizeof(char), 439, ft);
		fclose(ft);

		printf("%s", cor);
		printf("\n");
	}
}