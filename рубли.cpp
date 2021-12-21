#include "iostream"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int enterNumber = 0;

	cout << "Введите целое число (от 1 до 9999): ";
	cin >> enterNumber;

	if (enterNumber <= 0 || enterNumber > 9999)// проверяем входит ли введенное число в заданный диапазон
		cout << "Число не входит в диапазон от 1 до 9999!\n";
	
	else // если да - приступаем к выводу на экран
	{
		cout << "\nВы ввели: ";

		if ((enterNumber / 1000) % 10 == 1) cout << "Одна тысяча ";// чтобы добраться до первой цифры в введенном числе (если оно четырехзначное), надо это число поделить на 1000 и взять от него остаток от деления на 10
		else if ((enterNumber / 1000) % 10 == 2) cout << "Две тысячи ";
		else if ((enterNumber / 1000) % 10 == 3) cout << "Три тысячи ";
		else if ((enterNumber / 1000) % 10 == 4) cout << "Четыре тысячи ";
		else if ((enterNumber / 1000) % 10 == 5) cout << "Пять тысяч ";
		else if ((enterNumber / 1000) % 10 == 6) cout << "Шесть тысяч ";
		else if ((enterNumber / 1000) % 10 == 7) cout << "Семь тысяч ";
		else if ((enterNumber / 1000) % 10 == 8) cout << "Восемь тысяч ";
		else if ((enterNumber / 1000) % 10 == 9) cout << "Девять тысяч ";


		if ((enterNumber / 100) % 10 == 1) cout << "сто ";// чтобы добраться до второй цифры в введенном числе (если оно четырехзначное), надо это число поделить на 100 и взять от него остаток от деления на 10
		else if ((enterNumber / 100) % 10 == 2) cout << "двести ";
		else if ((enterNumber / 100) % 10 == 3) cout << "триста ";
		else if ((enterNumber / 100) % 10 == 4) cout << "четыреста ";
		else if ((enterNumber / 100) % 10 == 5) cout << "пятьсот ";
		else if ((enterNumber / 100) % 10 == 6) cout << "шестьсот ";
		else if ((enterNumber / 100) % 10 == 7) cout << "семьсот ";
		else if ((enterNumber / 100) % 10 == 8) cout << "восемьсот ";
		else if ((enterNumber / 100) % 10 == 9) cout << "девятьсот ";

		if ((enterNumber / 10) % 10 == 1)
		{
			if (enterNumber % 10 == 0) cout << "десять рублей";// Подсчёт от 10 до 20
			else if (enterNumber % 10 == 1) cout << "одинадцать рублей";
			else if (enterNumber % 10 == 2) cout << "двенадцать рублей ";
			else if (enterNumber % 10 == 3) cout << "тринадцать рублей";
			else if (enterNumber % 10 == 4) cout << "четырнадцать рублей";
			else if (enterNumber % 10 == 5) cout << "пятнадцать рублей";
			else if (enterNumber % 10 == 6) cout << "шестнадцать рублей ";
			else if (enterNumber % 10 == 7) cout << "семнадцать рублей";
			else if (enterNumber % 10 == 8) cout << "восемнадцать рублей";
			else if (enterNumber % 10 == 9) cout << "девятнадцать рублей ";
		}

		if ((enterNumber / 10) % 10 == 2) cout << "двадцать "; // Подсчёт десятков
		else if ((enterNumber / 10) % 10 == 3) cout << "тридцать ";
		else if ((enterNumber / 10) % 10 == 4) cout << "сорок ";
		else if ((enterNumber / 10) % 10 == 5) cout << "пятьдесят ";
		else if ((enterNumber / 10) % 10 == 6) cout << "шестьдесят ";
		else if ((enterNumber / 10) % 10 == 7) cout << "семьдесят ";
		else if ((enterNumber / 10) % 10 == 8) cout << "восемьдесят ";
		else if ((enterNumber / 10) % 10 == 9) cout << "девяносто ";

		if ((enterNumber / 10) % 10 != 1)
		{
			if (enterNumber % 10 == 0) cout << "рублей";
			else if (enterNumber % 10 == 1) cout << "один рубля";
			else if (enterNumber % 10 == 2) cout << "два  рубля";
			else if (enterNumber % 10 == 3) cout << "три рубля ";
			else if (enterNumber % 10 == 4) cout << "четыре рубля ";
			else if (enterNumber % 10 == 5) cout << "пять рублей ";
			else if (enterNumber % 10 == 6) cout << "шесть рублей ";
			else if (enterNumber % 10 == 7) cout << "семь рублей ";
			else if (enterNumber % 10 == 8) cout << "восемь рублей ";
			else cout << "девять рублей ";
		}
	}

	cout << endl << endl;
	return 0;
