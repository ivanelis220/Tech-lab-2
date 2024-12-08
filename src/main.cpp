#include <iostream>
#include <fstream>
#include "Interface.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	Interface Table;
	char menu;
	int iCount;
	do
	{
		system("cls");
		cout << "----------| ���� |----------" << endl;
		cout << "1. �������� �����" << endl
			<< "2. ������� �����" << endl
			<< "3. ����������� ������ �� ��������" << endl
			<< "4. ������� ������ �������" << endl
			<< "5. ����� ������� �� �������" << endl
			<< "6. ��������� ���-�� ���� � �����" << endl
			<< "0. �����" << endl
			<< "�����: ";
		cin >> menu;
		if (!(cin.peek() == '\n' || cin.peek() == EOF))
		{
			cin.ignore(INT_MAX, '\n');
			cout << "[Error] ������� ����� ���� � �������� [0-4]" << endl;
			system("pause");
			continue;
		}
		cin.ignore(INT_MAX, '\n');
		switch (menu)
		{
		case '1':
			Table.add();
			break;
		case '2':
			Table.del();
			break;
		case '3':
			Table.sort();
			break;
		case '4':
			Table.print();
			break;
		case '5':
			Table.search();
			break;
		case '6':
			iCount = getWords();
			if(!(iCount == -1))
				cout << "����� ���� : " << iCount << endl;
			break;
		case '0':
			return 0;
		default:
			cout << "[Error] ������� ����� ���� � �������� [0-4]" << endl;
			break;
		}
		system("pause");
	} while (true);
	system("pause");
	return 0;
}