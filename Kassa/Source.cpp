#include <iostream>
#include <time.h>
#include <conio.h>
#include <ctime>
#include <string>
using namespace std;

string nazva[88] = { "������","����","�����","���","������","������","�����","����","������","���","������","��������","�����","������","�����","��������","������","�������","���������","���������","�������","�������","������","��������","������","�����","���������","�������","������","�����","�����","���������","����","������","�����","�����","��������","����","�����","�����","�����","���������","������","�����","��������","�������","���������","������","�����","��������","�����","�������","������","�������","����","������","��������","�������","��������","���������","�����","������� ������","������","����� 12��","����� 24��","����� ��� 12��","����� ��� 24��","�����������","���","��� �","�����","�������","׳������","�����","�����","��� ���� �","��� ���� �","����� ����","�����","��� ������","��� �����","��� ����","��� �� ���","��� �� ����","��� ���������","������ Sweet","��� �������", };
double cina[88] = { 32,3.50,18,56,17,19,34,58,40,15,42,33,44,8,13,14,18,19,21,23,22,34,43,52,23,21,34,43,32,42,56,44,56,62,66,78,35,54,83,43,21,54,55,43,31,35,33,74,23,75,44,54,32,54,45,75,54,32,66,73,49.9,59.9,2.9,1.7,1.9,1.8,72.9,12,12.50,12,20,13,15.30,22,10,15,15,13.25,5,8.75,50,50,20,21.35,21.35,90,115,135.25 };
/*int nomer[88] = {101008,2121008,301008,0401008,0501008,0601008,0701028,0801028,0901028,1031028,1101028,1201028,1361028,1401028,1501028,1601028,1701028,1801028,1901028,2001028,2101028,2201028,2331028,2401028,2561028,2661028,2771028,2841028,2951028,3061028,3121028,3251028,3301028,3401028,3501028,3641028,3751028,3841028,3971028,4031028,4171028,4201028,4331028,4461028,4551028,4651028,4771028,4891028,4931028,5041028,5191028,5251028,5301028,5401028,5501028,5601028,5701028,5801028,5901028,6001028,6101028,6200008,6300408,6406708,6504508,6607608,6708608,6807508,6900008,7000008,7100008,7200008,7305008,7400608,7506008,7600008,7700008,7804018,79000018,82550018,8102018,82089018,83076018,84056018,85430018,86033018,8704518,88086028};*/
bool ohr_swch = 0;

int chek[50];
int countt = 0;


void Peredbachennya();
int Znugka(int suma);
void Chek();
void mnu_towar();
void menu();


int main()
{
	setlocale(LC_ALL, "UKR");
	menu();
	system("PAUSE");
	return 0;
}


void Peredbachennya()
{

	srand(time(NULL));
	const char *mas[] = { "��� ��i�� ��������!!!","��� ���� �������!!!","�� �����i���� �������� �����!!!", "��� �i�'� ������!!!","��� ��i�� ������ ��i���!!!" };
	int y = rand() % 5;
	cout << mas[y] << endl;
	system("pause");
}
int Znugka(int suma)
{
	double zn = .0, total_suma = .0;
	cout << "������";
	cout << "����i�� ����� ������\n 1- Gold(10%)\n 2-Platinum(20%) ";
	cin >> zn;
	if (zn < 0 && zn>2)
	{
		cout << "�� ����� ����";
	}
	if (zn == 1)
	{
		total_suma = suma - (suma*0.1);
	}
	if (zn == 2)
	{
		total_suma = suma - (suma*0.2);
	}

	return total_suma;
}
void Chek() {
	double kod_tovaru, suma = .0;

	system("CLS");

	cout << "\t�I����" << endl;
	cout << " �. �����, ���. ������������ 9 " << endl << endl;
	/*cin >> kod_tovaru;
	cout << kod_tovaru;*/

	//���� ������ ��� ������
	cout << "���� ������ ��� ������ " << suma << endl;
	//���� ������ � �������
	cout << "���� ������ � ������� " << Znugka(suma) << endl << endl;

	cout << "������ �� ������ ��� :)" << endl;
	//���
	time_t t;
	time(&t);
	//	cout << " Time : " << ctime(&t) << endl << endl;
	cout << "������������: ";
	Peredbachennya();


	system("pause");
}
void mnu_towar() {
	int x, y;
	cout << "Vvedit nmr tovaru" << endl;
	cin >> x;
	while (1) {
		if (x > 999999 && x < 10000000)
		{
			x /= 100000;

			if (x > 0 && x < 89) {
				cout << "Enter" << endl;
				cin >> y;

				x *= 100;
				x += y;

				cout << x;

				chek[countt] = x;
				countt++;
			}
			else {
				cout << "nep kod" << endl;
			}
		}
		else {
			cout << "nep kod" << endl;
		}
		cout << "vvedit 0? iaksho vy zavershyly" << endl;
		if (_getch() == 0) {
			break;
		}
	}

}
void menu()
{
	int z = 1, x;
	int login, password;
	cout << "[�����]" << endl;
	cout << "��.�����" << endl;
	cout << "Exit" << endl;

	while (1)
	{
		x = _getch();
		system("CLS");
		if (x == 13 && z == 1)
		{
			cout << "������� ����� � ������" << endl;
			cout << "�����:";
			cin >> login;
			cout << "������:";
			cin >> password;
			if (login == 123 && password == 123)
			{
				int z = 1, x;
				cout << "\t�� �����\t" << endl;
				cout << "[������]" << endl;
				cout << "���" << endl;
				cout << "������" << endl;
				cout << "�������" << endl;
				cout << "���i�" << endl;
				while (1)
				{
					x = _getch();
					system("CLS");
					if (x == 13 && z == 1)
					{
						system("CLS");
						mnu_towar();
						system("pause");
					}
					if (x == 13 && z == 2)
					{
						Chek();
					}
					if (x == 13 && z == 3)
					{

					}
					if (x == 13 && z == 4)
					{
						cout << "�����" << endl;
						cin >> login;
						cout << "������" << endl;
						cin >> password;
						if (login == 1111 && password == 1111)
						{
							cout << "CANCEL" << endl;
							system("pause");
						}
					}
					if (x == 13 && z == 5)
					{
						exit(0);
					}
					switch (x)
					{
					case 72: z--;
						break;
					case 80: z++;
						break;
					}
					if (z < 1)
						z = 5;
					if (z > 5)
						z = 1;
					switch (z)
					{
					case 1:cout << "[������]" << endl;
						cout << "���" << endl;
						cout << "������" << endl;
						cout << "�������" << endl;
						cout << "���i�" << endl;
						break;
					case 2:cout << "������" << endl;
						cout << "[���]" << endl;
						cout << "������" << endl;
						cout << "�������" << endl;
						cout << "���i�" << endl;
						break;
					case 3:cout << "������" << endl;
						cout << "���" << endl;
						cout << "[������]" << endl;
						cout << "�������" << endl;
						cout << "���i�" << endl;
						break;
					case 4:cout << "������" << endl;
						cout << "���" << endl;
						cout << "������" << endl;
						cout << "[�������]" << endl;
						cout << "���i�" << endl;
						break;
					case 5:cout << "������" << endl;
						cout << "���" << endl;
						cout << "������" << endl;
						cout << "�������" << endl;
						cout << "[���i�]" << endl;
						break;
					}
				}

			}
			else cout << "ERROR\n";
		}
		if (x == 13 && z == 2)
		{
			cout << "������� ����� � ������" << endl;
			cout << "�����:";
			cin >> login;
			cout << "������:";
			cin >> password;
			if (login == 1234 && password == 1234)
			{


				cout << "\t�� ������� �����\t" << endl;
				cout << "[������]" << endl;
				cout << "���" << endl;
				cout << "������" << endl;
				cout << "�������" << endl;
				cout << "���i�" << endl;
				int z = 1, x;
				while (1)
				{
					x = _getch();
					system("CLS");
					if (x == 13 && z == 1)
					{
						system("CLS");
						mnu_towar();
						system("pause");
					}
					if (x == 13 && z == 2)
					{
						Chek();
					}
					if (x == 13 && z == 3)
					{

					}
					if (x == 13 && z == 4)
					{
						cout << "�����" << endl;
						cin >> login;
						cout << "������" << endl;
						cin >> password;
						if (login == 1111 && password == 1111)
						{
							cout << "CANCEL" << endl;
							system("pause");
						}
					}
					if (x == 13 && z == 5)
					{
						exit(0);
					}
					switch (x)
					{
					case 72: z--;
						break;
					case 80: z++;
						break;
					}
					if (z < 1)
						z = 5;
					if (z > 5)
						z = 1;
					switch (z)
					{
					case 1:cout << "[������]" << endl;
						cout << "���" << endl;
						cout << "������" << endl;
						cout << "�������" << endl;
						cout << "���i�" << endl;
						break;
					case 2:cout << "������" << endl;
						cout << "[���]" << endl;
						cout << "������" << endl;
						cout << "�������" << endl;
						cout << "���i�" << endl;
						break;
					case 3:cout << "������" << endl;
						cout << "���" << endl;
						cout << "[������]" << endl;
						cout << "�������" << endl;
						cout << "���i�" << endl;
						break;
					case 4:cout << "������" << endl;
						cout << "���" << endl;
						cout << "������" << endl;
						cout << "[�������]" << endl;
						cout << "���i�" << endl;
						break;
					case 5:cout << "������" << endl;
						cout << "���" << endl;
						cout << "������" << endl;
						cout << "�������" << endl;
						cout << "[���i�]" << endl;
						break;
					}
				}

			}
			else cout << "ERROR\n";
		}
		if (x == 13 && z == 3)
			exit(0);
		switch (x)
		{
		case 72: z--;
			break;
		case 80: z++;
			break;
		}
		if (z < 1)
			z = 3;
		if (z > 3)
			z = 1;
		switch (z)
		{
		case 1:cout << "[�����]" << endl;
			cout << "��.�����" << endl;
			cout << "Exit" << endl;
			break;
		case 2:cout << "�����" << endl;
			cout << "[��.�����]" << endl;
			cout << "Exit" << endl;
			break;
		case 3:cout << "�����" << endl;
			cout << "��.�����" << endl;
			cout << "[Exit]" << endl;
			break;
		}
	}
}