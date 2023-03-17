#include <iostream>
#include<Windows.h>
#include <algorithm>

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string phone_numbers[10] = { "380506120367","380667959054","380987543254","380987654654"
		,"380765467896","380987564354","380987676567","380667547689","380995654343","380954546589" };
	sort(phone_numbers, phone_numbers + 10);
	cout << "початковий список номерів-" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << phone_numbers[i] << endl;

	}
	cout << "кінцевий список номерів-" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << phone_numbers[i]<<endl;
	}
	



}
