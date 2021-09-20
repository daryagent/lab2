#include "iostream"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int enterNumber = 0;

	cout << "¬ведите целое число (от 1 до 9999): ";
	cin >> enterNumber;

	if (enterNumber <= 0 || enterNumber > 9999)
		cout << "„исло не входит в диапазон от 1 до 9999!\n";
	else
	{
		cout << "\n¬ы ввели: ";

		if ((enterNumber / 1000) % 10 == 1) cout << "ќдна тыс€ча ";
		else if ((enterNumber / 1000) % 10 == 2) cout << "ƒве тыс€чи ";
		else if ((enterNumber / 1000) % 10 == 3) cout << "“ри тыс€чи ";
		else if ((enterNumber / 1000) % 10 == 4) cout << "„етыре тыс€чи ";
		else if ((enterNumber / 1000) % 10 == 5) cout << "ѕ€ть тыс€ч ";
		else if ((enterNumber / 1000) % 10 == 6) cout << "Ўесть тыс€ч ";
		else if ((enterNumber / 1000) % 10 == 7) cout << "—емь тыс€ч ";
		else if ((enterNumber / 1000) % 10 == 8) cout << "¬осемь тыс€ч ";
		else if ((enterNumber / 1000) % 10 == 9) cout << "ƒев€ть тыс€ч ";


		if ((enterNumber / 100) % 10 == 1) cout << "сто ";
		else if ((enterNumber / 100) % 10 == 2) cout << "двести ";
		else if ((enterNumber / 100) % 10 == 3) cout << "триста ";
		else if ((enterNumber / 100) % 10 == 4) cout << "четыреста ";
		else if ((enterNumber / 100) % 10 == 5) cout << "п€тьсот ";
		else if ((enterNumber / 100) % 10 == 6) cout << "шестьсот ";
		else if ((enterNumber / 100) % 10 == 7) cout << "семьсот ";
		else if ((enterNumber / 100) % 10 == 8) cout << "восемьсот ";
		else if ((enterNumber / 100) % 10 == 9) cout << "дев€тьсот ";

		if ((enterNumber / 10) % 10 == 1)
		{
			if (enterNumber % 10 == 0) cout << "дес€ть рублей";
			else if (enterNumber % 10 == 1) cout << "одинадцать рублей";
			else if (enterNumber % 10 == 2) cout << "двенадцать рублей ";
			else if (enterNumber % 10 == 3) cout << "тринадцать рублей";
			else if (enterNumber % 10 == 4) cout << "четырнадцать рублей";
			else if (enterNumber % 10 == 5) cout << "п€тнадцать рублей";
			else if (enterNumber % 10 == 6) cout << "шестнадцать рублей ";
			else if (enterNumber % 10 == 7) cout << "семнадцать рублей";
			else if (enterNumber % 10 == 8) cout << "восемнадцать рублей";
			else if (enterNumber % 10 == 9) cout << "дев€тнадцать рублей ";
		}

		if ((enterNumber / 10) % 10 == 2) cout << "двадцать ";
		else if ((enterNumber / 10) % 10 == 3) cout << "тридцать ";
		else if ((enterNumber / 10) % 10 == 4) cout << "сорок ";
		else if ((enterNumber / 10) % 10 == 5) cout << "п€тьдес€т ";
		else if ((enterNumber / 10) % 10 == 6) cout << "шестьдес€т ";
		else if ((enterNumber / 10) % 10 == 7) cout << "семьдес€т ";
		else if ((enterNumber / 10) % 10 == 8) cout << "восемьдес€т ";
		else if ((enterNumber / 10) % 10 == 9) cout << "дев€носто ";

		if ((enterNumber / 10) % 10 != 1)
		{
			if (enterNumber % 10 == 0) cout << "рублей";
			else if (enterNumber % 10 == 1) cout << "один рубл€";
			else if (enterNumber % 10 == 2) cout << "два  рубл€";
			else if (enterNumber % 10 == 3) cout << "три рубл€ ";
			else if (enterNumber % 10 == 4) cout << "четыре рубл€ ";
			else if (enterNumber % 10 == 5) cout << "п€ть рублей ";
			else if (enterNumber % 10 == 6) cout << "шесть рублей ";
			else if (enterNumber % 10 == 7) cout << "семь рублей ";
			else if (enterNumber % 10 == 8) cout << "восемь рублей ";
			else cout << "дев€ть рублей ";
		}
	}

	cout << endl << endl;
	return 0;
}
