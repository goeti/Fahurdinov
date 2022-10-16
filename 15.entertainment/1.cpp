#include <iostream>
#include <string>
#include <Windows.h>
#include <limits> 
#include <fstream>
#include <cctype>

using namespace std;

int sumnumber(int n) {
	int k = 0;
	while (n != 0) {
		k += n % 10;
		n /= 10;
	}
	return k;
}

void checkstr(string& name) {
	int f = 1;
	while (true) {
		f = 1;
		for (int i = 0; i < name.length(); i++) {
			if (isdigit(name[i])) {
				cout << "Некорректный данные, введите еще раз: ";
				cin >> name;
				f = 0;
				break;
			}
		}
		if (f) break;
	}
}


int main()
{
	string films[28] = { "Побег из Шоушенка", "Крёстный отец", "Тёмный рыцарь",
		"Крёстный отец 2", "12 разгневанных мужчин", "Список Шиндлера",
		"Властелин колец: Возвращение короля", "Криминальное чтиво", "Властелин колец: Братство Кольца",
		"Хороший, плохой, злой", "Форрест Гамп", "Бойцовский клуб",
		"Начало", "	Матрица", "Властелин колец: Две крепости", "Славные парни",
		"Пролетая над гнездом кукушки", "Семь", "Семь самураев", "Эта прекрасная жизнь",
		"Молчание ягнят", "Город Бога", "Спасти рядового Райана", "Жизнь прекрасна",
		"Зелёная миля", "Интерстеллар", "Терминатор 2: Судный день", "Назад в будущее" };
	string people[28] = { "А.С.Пушкин", "Л.Н.Толстой", "М.Горький", "А.П.Чехов", "А.Н.Толстой",
		"Н.В.Гоголь", "И.С.Тургенев", "М.Ю.Лермонтов", "Ф.М.Достоевский", "А.И.Куприн", "Н.А.Некрасов",
		"И.А.Бунин", "В.В.Маяковский", "Д.Н.Мамин - Сибиряк", "В.Г.Короленко", "А.А.Блок", "Н.С.Лесков",
		"А.Н.Островский", "В.Я.Брюсов", "Б.Л.Пастернак", "С.А.Есенин", "К.Д.Бальмонт", "Ф.И.Тютчев", "А.А.Фет",
		"И.А.Гончаров", "А.А.Ахматова", "В.А.Жуковский", "А.Белый" };
	string music[9] = { "«Gangsta’s Paradise» — Coolio", "«(Everything I Do) I Do It for You» — Bryan Adams",
		"«I Want to Hold Your Hand» — Beatles", "«Macarena» — Los Del Rio", "«Hey Jude» — Beatles",
		"«Candle in the Wind» — Elton John", "«I Will Always Love You» — Whitney Houston",
		"«You’re the One That I Want» — John Travolta & Olivia Newton-John", "«We Are the World» — USA for Africa" };
	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string name, surname;
	int year;
	char a[29] = "абвгдежзиклмнопрстуфхцчшщэюя";
	cout << "Введите ваше имя, фамилию и год рождения.\n";
	cout << "Имя: ";
	cin >> name;
	checkstr(name);
	cout << "Фамилия: ";
	cin >> surname;
	checkstr(surname);
	cout << "Год рождения: ";
	while (true) {
		cin.clear();
		cin.ignore(32767, '\n');
		//cout << "1\n";
		cin >> year;
		int q = cin.get();
		if (q != '\n' || year < 1900 || year>2022) {
			cout << "Некорректный год рождения, введите еще раз: ";
			continue;
		}
		break;
	}
	char w = tolower(name[0]);
	char e = tolower(surname[0]);
	for (int i = 0; i < 28; i++) {
		if (w == a[i]) cout << films[i] << endl;
		if (e == a[i]) cout << people[i] << endl;
	}
	while (year > 9) {
		year = sumnumber(year);
	}
	cout << music[year - 1] << endl;

	return 0;
}