#include "iostream"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int enterNumber = 0;

	cout << "������� ����� ����� (�� 1 �� 9999): ";
	cin >> enterNumber;

	if (enterNumber <= 0 || enterNumber > 9999)
		cout << "����� �� ������ � �������� �� 1 �� 9999!\n";
	else
	{
		cout << "\n�� �����: ";

		if ((enterNumber / 1000) % 10 == 1) cout << "���� ������ ";
		else if ((enterNumber / 1000) % 10 == 2) cout << "��� ������ ";
		else if ((enterNumber / 1000) % 10 == 3) cout << "��� ������ ";
		else if ((enterNumber / 1000) % 10 == 4) cout << "������ ������ ";
		else if ((enterNumber / 1000) % 10 == 5) cout << "���� ����� ";
		else if ((enterNumber / 1000) % 10 == 6) cout << "����� ����� ";
		else if ((enterNumber / 1000) % 10 == 7) cout << "���� ����� ";
		else if ((enterNumber / 1000) % 10 == 8) cout << "������ ����� ";
		else if ((enterNumber / 1000) % 10 == 9) cout << "������ ����� ";


		if ((enterNumber / 100) % 10 == 1) cout << "��� ";
		else if ((enterNumber / 100) % 10 == 2) cout << "������ ";
		else if ((enterNumber / 100) % 10 == 3) cout << "������ ";
		else if ((enterNumber / 100) % 10 == 4) cout << "��������� ";
		else if ((enterNumber / 100) % 10 == 5) cout << "������� ";
		else if ((enterNumber / 100) % 10 == 6) cout << "�������� ";
		else if ((enterNumber / 100) % 10 == 7) cout << "������� ";
		else if ((enterNumber / 100) % 10 == 8) cout << "��������� ";
		else if ((enterNumber / 100) % 10 == 9) cout << "��������� ";

		if ((enterNumber / 10) % 10 == 1)
		{
			if (enterNumber % 10 == 0) cout << "������ ������";
			else if (enterNumber % 10 == 1) cout << "���������� ������";
			else if (enterNumber % 10 == 2) cout << "���������� ������ ";
			else if (enterNumber % 10 == 3) cout << "���������� ������";
			else if (enterNumber % 10 == 4) cout << "������������ ������";
			else if (enterNumber % 10 == 5) cout << "���������� ������";
			else if (enterNumber % 10 == 6) cout << "����������� ������ ";
			else if (enterNumber % 10 == 7) cout << "���������� ������";
			else if (enterNumber % 10 == 8) cout << "������������ ������";
			else if (enterNumber % 10 == 9) cout << "������������ ������ ";
		}

		if ((enterNumber / 10) % 10 == 2) cout << "�������� ";
		else if ((enterNumber / 10) % 10 == 3) cout << "�������� ";
		else if ((enterNumber / 10) % 10 == 4) cout << "����� ";
		else if ((enterNumber / 10) % 10 == 5) cout << "��������� ";
		else if ((enterNumber / 10) % 10 == 6) cout << "���������� ";
		else if ((enterNumber / 10) % 10 == 7) cout << "��������� ";
		else if ((enterNumber / 10) % 10 == 8) cout << "����������� ";
		else if ((enterNumber / 10) % 10 == 9) cout << "��������� ";

		if ((enterNumber / 10) % 10 != 1)
		{
			if (enterNumber % 10 == 0) cout << "������";
			else if (enterNumber % 10 == 1) cout << "���� �����";
			else if (enterNumber % 10 == 2) cout << "���  �����";
			else if (enterNumber % 10 == 3) cout << "��� ����� ";
			else if (enterNumber % 10 == 4) cout << "������ ����� ";
			else if (enterNumber % 10 == 5) cout << "���� ������ ";
			else if (enterNumber % 10 == 6) cout << "����� ������ ";
			else if (enterNumber % 10 == 7) cout << "���� ������ ";
			else if (enterNumber % 10 == 8) cout << "������ ������ ";
			else cout << "������ ������ ";
		}
	}

	cout << endl << endl;
	return 0;
}
