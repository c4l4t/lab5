#include <iostream>
#include <string.h>
#include <fstream>
#include <stdio.h>
#include <cctype>

using namespace std;

int main()

{
	setlocale(LC_ALL, "");
	ifstream fin("kvar.txt");
	int n = 0, i = 0, j = 0; int choose;
	char exit[50];
	struct kvar
	{
		int ploshad;
		char familia[50];
		char imia[50];
		char otchestvo[50];
		char ray[50];
		int mon;
		char nomer[50];
	};

	while (exit[0] != '!')
	{
		n++;
		fin.getline(exit, 50);

	}

	n--;
	kvar* arr_kvar = new kvar[n];
	fin.seekg(0, ios_base::beg);

	for (i = 0; i < n; i++)
	{
		fin >> arr_kvar[i].ploshad;
		fin >> arr_kvar[i].familia;
		fin >> arr_kvar[i].imia;
		fin >> arr_kvar[i].otchestvo;
		fin >> arr_kvar[i].ray;
		fin >> arr_kvar[i].mon;
		fin.getline(arr_kvar[i].nomer, 50);
		cout << "Квартира: " << arr_kvar[i].nomer << endl;
		cout << "Площадь: " << arr_kvar[i].ploshad << endl;
		cout << "Фамилия: " << arr_kvar[i].familia << endl;
		cout << "Имя: " << arr_kvar[i].imia << endl;
		cout << "Отчество: " << arr_kvar[i].otchestvo << endl;
		cout << "Район, в котором находится квартира: " << arr_kvar[i].ray << endl;
		cout << "Стоимость квартиры в тысячах рублей: " << arr_kvar[i].mon << endl << endl;
	}
	cout << "Введите номер задания-"; cin >> choose;

	if (choose == 1) {
		char ray[50];
		char t[50];
		cout << "Введите район для поиска в базе:";
		cin >> ray;

		for (i = 0; i < n; i++)


		{

			if (strcmp(arr_kvar[i].ray, ray) == 0) {
				cout << "____________Ваша квартира_________" << endl;
				cout << "Квартира: " << arr_kvar[i].nomer << endl;
				cout << "Площадь: " << arr_kvar[i].ploshad << endl;
				cout << "Фамилия: " << arr_kvar[i].familia << endl;
				cout << "Имя: " << arr_kvar[i].imia << endl;
				cout << "Отчество: " << arr_kvar[i].otchestvo << endl;
				cout << "Район, в котором находится квартира: " << arr_kvar[i].ray << endl;
				cout << "Стоимость квартиры в тысячах рублей: " << arr_kvar[i].mon << endl << endl;
			}
		}

	}

	if (choose == 2) {
		cout << "____Более миллиона рублей____" << endl;
		int t = 1000;

		for (i = 0; i < n; i++)
		
		{
			if (arr_kvar[i].mon > t) {
				cout << "Квартира: " << arr_kvar[i].nomer << endl;
				cout << "Площадь: " << arr_kvar[i].ploshad << endl;
				cout << "Фамилия: " << arr_kvar[i].familia << endl;
				cout << "Имя: " << arr_kvar[i].imia << endl;
				cout << "Отчество: " << arr_kvar[i].otchestvo << endl;
				cout << "Район, в котором находится квартира: " << arr_kvar[i].ray << endl;
				cout << "Стоимость квартиры в тысячах рублей: " << arr_kvar[i].mon << endl << endl;
			}
		}

		system("pause");

		return 0;

	}

}
