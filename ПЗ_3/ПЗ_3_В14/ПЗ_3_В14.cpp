#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Базовый класс "Водоемы"
class Water {
public:
	Water() {
		name = "None";
		square = 0;
		volume = 0;
		maxDepth = 0;
		midDepth = 0;
		salty = false;
	}

	Water(string name, int s, int v, int max, int mid, bool sal) {
		this->name = name;
		this->square = s;
		this->volume = v;
		this->maxDepth = max;
		this->midDepth = mid;
		this->salty = sal;
	}

	// ~Water();

	string name;			// Название
	int square;				// Площадь поверхности
	int volume;				// Объем воды
	int maxDepth;			// Максимальная глубина
	int midDepth;			// Средняя глубина
	bool salty;				// Соленый или престный

	virtual void sq() = 0;
};

// Производный класс "Океаны"
class Ocean : public Water {
public:
	double worldVolume;		// Процент объема воды из Мирового океана

	Ocean() {
		worldVolume = 0;
	}

	Ocean(string name, int s, int v, int max, int mid, bool sal, double w) : Water(name, s, v, max, mid, sal) {
		if (w > 100 || w < 0) {
			cout << "*ОШИБКА*\nЗначение должно иметь параметр от 0% до 100%" << endl;
			this->worldVolume = 0;
		}
		else { 
			this->worldVolume = w;
		}
	}
	// ~Ocean();

	void sq() override {
		cout << this->name << ". Площадь поверхности равна " << this->square << endl;
	}
};

// Производный класс "Моря"
class Sea : public Water {
public:
	Sea() {
		oceanClass = "None";
		borderCountry = "None";
		flowingRivers = "None";
		coastline = 0;
	}

	Sea(string name, int s, int v, int max, int mid, bool sal, string oc, string bo, string fl, int co) : Water(name, s, v, max, mid, sal) {
		this->oceanClass = oc;
		this->borderCountry = bo;
		this->flowingRivers = fl;
		this->coastline = co;
	}
	// ~Sea();

	string oceanClass;		// Пренадлежность к океану
	string borderCountry;	// Страны, которые омывает
	string flowingRivers;	// Впадающие реки
	int coastline;			// Длина береговой линии

	void sq() override {
		cout << this->name << ". Площадь поверхности равна " << this->square << endl;
	}
};

// Производный класс "Озера"
class Lake : public Water {
public:
	Lake() {
		origin = "None";
		country = "None";
		heightSea = 0;
	}

	Lake(string name, int s, int v, int max, int mid, bool sal, string ori, string co, int he) : 
	Water(name, s, v, max, mid, sal) {
		this->origin = ori;
		this->country = co;
		this->heightSea = he;
	}
	// ~Lake();

	string origin;			// Происхождение
	string country;			// Страна, где находится
	int heightSea;			// Высота над уровнем моря

	void sq() override {
		cout << this->name << ". Площадь поверхности равна " << this->square << endl;
	}
};

// Производный класс "Реки"
class River : public Water {
public:
	River() {
		supply = "None";
		source = "None";
		mouth = "None";
		heightSource = 0;
		lenght = 0;
	}

	River(string name, int s, int v, int max, int mid, bool sal, string su, string so, string mo, int he, int le) :
	Water(name, s, v, max, mid, sal) {
		this->supply = su;
		this->source = so;
		this->mouth = mo;
		this->heightSource = he;
		this->lenght = le;
	}
	// ~River();

	string supply;			// Питание
	string source;			// Исток
	string mouth;			// Устье
	int heightSource;		// Высота истока
	int lenght;				// Длина

	void sq() override {
		cout << this->name << ". Площадь бассейна равна " << this->square << endl;
	}
};

class Container {
public:
	Water** arrayWater;
	int waterCounter;

	Container() {
		arrayWater = new Water * [0];
		waterCounter = 0;
	}

	// Нахождения самого глубокого водоема
	void maxDepthWater() {
		Water* maxDep = arrayWater[0];
		for (int i = 0; i < waterCounter - 1; i++) {
			if (maxDep->maxDepth < arrayWater[i + 1]->maxDepth) {
				maxDep = arrayWater[i + 1];
			}
		}

		cout << maxDep->name << " имеет максимальную глубину: " << maxDep->maxDepth << " метров\n\n";
	}

	// Сортирорвка водоемов по площади поверхности
	void sortWaterSquare() {
		int max;

		for (int i = 0; i < waterCounter; i++) {
			max = i; // макс. эл. - первый

			for (int j = i + 1; j < waterCounter; j++) {
				if (arrayWater[max]->square < arrayWater[j]->square) { // Нахождние макс. эл
					max = j;
				}
			}
			
			if (max != i) { // Если элемент поменялся, делаем замену
				swap(arrayWater[i], arrayWater[max]);
			}
		}

		cout << "Перечень водоемов (в порядке убывания) по их площади поверхности:\n";
		for (int k = 0; k < waterCounter; k++) {
			cout << arrayWater[k]->name << " = " << arrayWater[k]->square << " км^2\n";
		}
		cout << endl;
	}

	// Сортировка водоемов на "соленые" и "престные"
	void sortSalinity() {
		string allsa, allfr;
		
		for (int i = 0; i < waterCounter; i++) {
			if (arrayWater[i]->salty == true) {
				allsa += "<" + arrayWater[i]->name + "> ";
			}
			else {
				allfr += "<" + arrayWater[i]->name + "> ";
			}
		}

		cout << "Соленые водоемы: " << allsa << endl;
		cout << "Пресные водоемы: " << allfr << endl << endl;
	}

	// Метод добавления нового водоема
	void addWater(Water* newWater) {
		waterCounter++;
		Water** allWater = new Water * [waterCounter];

		for (int i = 0; i < waterCounter - 1; i++) {
			allWater[i] = arrayWater[i];
		}

		allWater[waterCounter - 1] = newWater;
		delete[]arrayWater;
		arrayWater = allWater;
	}
};



int main() {
	setlocale(LC_ALL, "ru");

	Ocean tihiy = Ocean("Тихий океан", 178684000, 710360000, 11022, 3984, true, 53);
	Ocean indian = Ocean("Индийский океан", 76174000, 282650000, 7729, 3711, true, 20);
	Sea black = Sea("Черное море", 422000, 555000, 2210, 1240, true, "Атлантический океан", 
		"Россия, Украина, Румыния, Болгария, Турция, Грузия, Абхазия",
		"Дунай, Днепр, Днестр", 3400);
	Sea red = Sea("Красное море", 438000, 233000, 2211, 490, true, "Индийский океан",	
		"Египет, Судан, Джибути, Эритрей, Йемен, Израиль, Иордания",
		"None", 4600);
	Lake baikal = Lake("Озеро Байкал", 31722, 23615, 1642, 744, false, "Тектоническое",
		"Россия", 456);
	Lake vika = Lake("Озеро Виктория", 68000, 2760, 80, 40, false, "Тектоническое",
		"Танзания, Кения, Уганда", 1134);
	River nil = River("Река Нил", 3349000, NULL, 11, 7, false, "Дождевое питание", "Озеро Виктория",
		"Средиземное море", 1134, 6854);
	River amazon = River("Река Амазонка", 7180000, 7280, 100, 50, false, "Дождевое питание",
		"Реки Укаяли и Мараньон", "Атлантический океан", 110, 6500);
	
	Container con;

	con.addWater(&tihiy);
	con.addWater(&indian);
	con.addWater(&black);
	con.addWater(&red);
	con.addWater(&baikal);
	con.addWater(&vika);
	con.addWater(&nil);
	con.addWater(&amazon);
	
	con.maxDepthWater();		// Нахождение максимальной глубины
	con.sortWaterSquare();		// Сортировка по площади
	con.sortSalinity();			// Разбиение на "соленые" и "престные"

	cout << endl;
	for (int i = 0; i < con.waterCounter; i++) {
		string f = con.arrayWater[i]->name;
		cout << f << endl;
	}
	
	return 0;
}
