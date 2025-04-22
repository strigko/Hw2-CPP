#include <iostream>
using namespace std;
int main() {
	{
		/*1. Розв’язати систему рівнянь(дробові коефіцієнти a і b вводяться з клавіатури) :*/
		// - b - 5 * a, якщо a > b
		// - X = (5 - b) / a, якщо a = b
		// - (a - 5) / b, якщо a < b
		 //double a;
		 //cout << "Enter a" << endl;
		 //cin >> a;
		 //double b;
		 //cout << "Enter b" << endl;
		 //cin >> b;
		 //double x;
		 //if (a > b) {
		 // x = b - 5 * a;
		 //}
		 //else if (a < b) {
		 // x = (a - 5) / b;
		 //}
		 //else {
		 // x = (5 - b) / a;
		 //}
		 //cout << "Result: " << x << endl;
	}
	{
		/*2. Визначити, чи паралельна пряма осі ординат або осі абсцис.*/
		 //double x1, x2, y1, y2;
		 //cout << "Enter x1, y1" << endl;
		 //cin >> x1 >> y1;
		 //cout << "Enter x2, y2" << endl;
		 //cin >> x2 >> y2;
		 //if (x1 == x2) {
		 // cout << "The line is parallel by axis x";
		 //}
		 //else if (y1 = y2) {
		 // cout << "The line is parallel by axis y";
		 //}
	}
	{
		/*3. Програма розрахунку знижок.Вводиться кількість товару та вартість за штуку.Визначити суму знижки :
		 -якщо загальна вартість 100 грн, знижка складає 3 %
		 -якщо 200 грн – 5 %
		 -якщо 300 грн і більше – 7 %
		 Виконати розрахунок, використовуючи оператори if та switch.*/
		 //double StuffAmount;
		 //cout << "Enter amount of stuff u want to buy:";
		 //cin >> StuffAmount;
		 //double PriceForOne;
		 //cout << "Enter price for each product u want to buy:";
		 //cin >> PriceForOne;
		 //double total = StuffAmount * PriceForOne;
		 //if (total <= 100) {
		 //	cout << "Final price: " << total - (total / 100 * 3) << endl;
		 //	cout << "Discount: " << (total / 100 * 3) << endl;
		 //}
		 //else if (total <= 200) {
		 //	cout << "Final price: " << total - (total / 100 * 5) << endl;
		 //	cout << "Discount: " << (total / 100 * 5) << endl;
		 //}
		 //else if (total <= 300) {
		 //	cout << "Final price: " << total - (total / 100 * 7) << endl;
		 //	cout << "Discount: " << (total / 100 * 7) << endl;
		 //}
	}
	{
		/*4. Перевірити, чи має введене дробове число десяткову частину, тобто чи рівна вона нулю.*/
		//double number;
		//cout << "Enter fractional number: ";
		//cin >> number;

		//if ((int)number == number) {
		//	cout << "Fractional part equals 0" << endl;
		//}
		//else {
		//	cout << "Number has fractional part" << endl;
		//}
	}
	{
		/*5. Написати програму, яка пропонує користувачу ввести номер дня тижня і виводить назву цього дня.Використати switch.*/
		//int number;
		//cout << "Enter number of the day" << endl;
		//cin >> number;
		//switch (number) {
		//	case 1:
		//		cout << "Its monday!" << endl;
		//		break;
		//	case 2:
		//		cout << "Its tuesday!" << endl;
		//		break;
		//	case 3:
		//		cout << "Its wednesday!" << endl;
		//		break;
		//	case 4:
		//		cout << "Its thursday!" << endl;
		//		break;
		//	case 5:
		//		cout << "Its friday!" << endl;
		//		break;
		//	case 6:
		//		cout << "Its saturday!" << endl;
		//		break;
		//	case 7:
		//		cout << "Its sunday!" << endl;
		//		break;
		//}
	}
	{
		/*6.
		*Ввести координати точки(x, y) і визначити номер чверті, в якій
		знаходиться точка.Також передбачити випадок, коли точка лежить на осях
		або в початку координат.*/
		//int x, y;
		//cout << "Enter x: ";
		//cin >> x;
		//cout << "Enter y: ";
		//cin >> y;
		//if (x > 0 && y > 0) {
		//	cout << "The point is in the first quadrant" << endl;
		//}
		//else if (x < 0 && y > 0) {
		//	cout << "The point is in the second quadrant" << endl;
		//}
		//else if (x < 0 && y < 0) {
		//	cout << "The point is in the third quadrant" << endl;
		//}
		//else if (x > 0 && y < 0) {
		//	cout << "The point is in the fourth quadrant" << endl;
		//}
		//else if (x == 0 && y == 0) {
		//	cout << "The dot is on the origin" << endl;
		//}
		//else if (x == 0 || y == 0) {
		//	cout << "The dot is on the axe" << endl;
		//}
	}
	{
		/*7. Написати програму для конвертації грошової суми з гривень у євро, долари або російські рублі.Використати if та switch.*/
		//int UAH;
		//cout << "Enter amount of UAH that u have: ";
		//cin >> UAH;
		//int Currency;
		//cout << "Enter name of currency for what u`r exchanging for (EURO - 1, USD - 2, RUB - 3): ";
		//cin >> Currency;
		//int option = 0;
		//if (Currency == 1) {
		//	option = 1;
		//}
		//else if (Currency == 2) {
		//	option = 2;
		//}
		//else if (Currency == 3) {
		//	option = 3;
		//}
		//switch (option) {
		//case 1: 
		//	cout << "U can convert ur amount of UAH to: " << UAH / 46 << " EURO" << endl;
		//	break;
		//case 2:
		//	cout << "U can convert ur amount of UAH to: " << UAH / 41 << " USD" << endl;
		//	break;
		//case 3:
		//	cout << "U can convert ur amount of UAH to: " << UAH * 2.5 << " RUB" << endl;
		//	break;
	}
	{
		/*8. Ввести дату та час(кожен компонент вводиться окремо) і перевірити коректність введених значень.*/
		//bool Valid = true;
		//int year, month, day;
		//cout << "Enter date (year month day): ";
		//cin >> year >> month >> day;
		//int hour, min, sec;
		//cout << "Enter time (hour min sec): ";
		//cin >> hour >> min >> sec;
		//if (hour < 0 || hour > 23 || min < 0 || min > 59 || sec < 0 || sec > 59) {
		//	Valid = false;
		//}
		//if (month < 1 || month > 12) {
		//	Valid = false;
		//}
		//bool leapYear = false;
		//if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		//	leapYear = true;
		//}
		//int maxDay = 0;
		//if (month == 1 || month == 3 || month == 5 || month == 7 ||
		//	month == 8 || month == 10 || month == 12) {
		//	maxDay = 31;
		//}
		//else if (month == 4 || month == 6 || month == 9 || month == 11) {
		//	maxDay = 30;
		//}
		//else if (month == 2) {
		//	maxDay = leapYear ? 29 : 28;
		//}
		//if (day < 1 || day > maxDay) {
		//	Valid = false;
		//}
		//if (Valid) {
		//	cout << "Everything entered correctly!" << endl;
		//}
		//else {
		//	cout << "Invalid data entered!" << endl;
		//}
	}
	{
		/*9. Ввести з клавіатури номер трамвайного(тролейбусного) квитка і визначити, чи є він щасливим.*/
		//int number;
		//cout << "Enter number of ur ticket: ";
		//cin >> number;
		//if (number == 777 || number == 77) {
		//	cout << "U have lucky ticket!" << endl;
		//}
		//else {
		//	cout << "U have default ticket" << endl;
		//}
	}
	{
		/*10. Ввести вік людини і визначити, чи пора їй на пенсію.*/
		//int age;
		//cout << "Enter ur age: ";
		//cin >> age;
		//int sex;
		//cout << "Enter ur gender (Male - 1, Female - 2): ";
		//cin >> sex;
		//if (sex == 1 && age > 52) {
		//	cout << "U need to be retired" << endl;
		//}
		//else if (sex == 2 && age > 50) {
		//	cout << "U need to be retired" << endl;
		//}
		//else {
		//	cout << "Get down to work!" << endl;
		//}
	}
	{
		/*11. Ввести порядковий номер карти(від 0 до 35) і визначити її масть та гідність.*/
		//int cardNumber;
		//cout << "Enter card number (0-35): ";
		//cin >> cardNumber;
		//if (cardNumber < 0 || cardNumber > 35) {
		//	cout << "Invalid card number" << endl;
		//}
		//int suit = cardNumber / 9;
		//int rank = cardNumber % 9;
		//cout << "Its: ";
		//switch (rank) {
		//case 0: cout << "6 "; break;
		//case 1: cout << "7 "; break;
		//case 2: cout << "8 "; break;
		//case 3: cout << "9 "; break;
		//case 4: cout << "10 "; break;
		//case 5: cout << "Jack "; break;
		//case 6: cout << "Queen "; break;
		//case 7: cout << "King "; break;
		//case 8: cout << "Ace "; break;
		//}
		//switch (suit) {
		//case 0: cout << "Peaks"; break;
		//case 1: cout << "Clubs"; break;
		//case 2: cout << "Tambourines"; break;
		//case 3: cout << "Hearts"; break;
		//}
	}
	{
		/*12. Ввести час(години та хвилини) — програма виводить привітання, відповідне введеному часу(наприклад, ввели 15 годин 6 хвилин — виводиться привітання «Добрий день»).*/
		//int hours, mins;
		//cout << "Enter time (hours mins): ";
		//cin >> hours >> mins;
		//if (hours < 0 || hours > 24) {
		//	cout << "Invalid hours number";
		//}
		//else if (mins < 0 || mins > 59) {
		//	cout << "Invalid mins number";
		//}
		//else if (hours >= 23 || hours >= 0 && hours <= 3) {
		//	cout << "Good night!" << endl;
		//}
		//else if (hours >= 4 && hours <= 11) {
		//	cout << "Good morning!" << endl;
		//}
		//else if (hours >= 12 && hours <= 16) {
		//	cout << "Good afternoon!" << endl;
		//}
		//else if (hours >= 17 && hours <= 22) {
		//	cout << "Good evening!" << endl;
		//}
	}
	{
		/*13. Програма розрахунку ідеальної ваги за ростом. Ввести ріст і вагу, вивести повідомлення про те, скільки кг необхідно набрати або скинути(ідеальна вага = ріст - 110).*/
		//int height;
		//double weight;
		//cout << "Enter ur height: ";
		//cin >> height;
		//cout << "Enter ur weight: ";
		//cin >> weight;
		//const int perfectWeight = height - 110;
		//if (weight == perfectWeight) {
		//	cout << "U have perfect weight!";
		//}
		//else {
		//	cout << "U don`t have perfect weight. ";
		//}
		//double extraWeight = weight - perfectWeight;
		//if (extraWeight > 0) {
		//	cout << "U have extra weight " << extraWeight << " kg" << endl;
		//}
		//else if (extraWeight < 0) {
		//	cout << "U have not enough weight " << -extraWeight << " kg" << endl;
		//}
	}
	{
		/*14. Ввести будь - яку дату(день, місяць, рік вводяться окремо) і вивести наступну за нею дату.*/
		//int day, month, year;
		//cout << "Enter year month day: ";
		//cin >> year >> month >> day;
		//bool leapYear = false;
		//if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		//	leapYear = true;
		//}
		//int maxDay = 0;
		//if (month == 1 || month == 3 || month == 5 || month == 7 ||
		//	month == 8 || month == 10 || month == 12) {
		//	maxDay = 31;
		//}
		//else if (month == 4 || month == 6 || month == 9 || month == 11) {
		//	maxDay = 30;
		//}
		//else if (month == 2) {
		//	maxDay = leapYear ? 29 : 28;
		//}
		//day++;
		//if (day > maxDay) {
		//	day = 1;
		//	month++;
		//	if (month > 12) {
		//		month = 1;
		//		year++;
		//	}
		//}
		//cout << "Next date: " << year << "." << month << "." << day << endl;
	}
	{
		/*15. Ввести п’ятизначне число.Перевірити, чи складається воно з цифр, які є простими числами, і повідомити результат перевірки.*/
		//int number;
		//cout << "Enter five-digit number :";
		//cin >> number;
		//if (number < 10000 || number > 99999) {
		//	cout << "It`s not a five-digit number!" << endl;
		//}
		//int temp = number;
		//bool allPrime = true;
		//while (temp > 0) {
		//	int digit = temp % 10;
		//	if (digit != 2 && digit != 3 && digit != 5 && digit != 7) {
		//		allPrime = false;
		//		break;
		//	}
		//	temp /= 10;
		//}
		//if (allPrime) {
		//	cout << "Number consists of only prime numbers" << endl;
		//}
		//else {
		//	cout << "Number have not prime numbers" << endl;
		//}
	}
	{
		/*16. Ввести рік і перевірити, чи є він високосним. (Високосний рік обов’язково кратний 4, а якщо рік закінчується на два нулі, то він також має бути кратним 400. Наприклад, 8, 16, 800, 1600, 2000, 2008 — високосні роки, а 15, 1700, 1800, 2007 — не високосні.)*/
		//int year;
		//cout << "Enter year: ";
		//cin >> year;
		//if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		//	cout << year << " - leap year" << endl;
		//}
		//else {
		//	cout << year << " - not leap year" << endl;
		//}
	}
}