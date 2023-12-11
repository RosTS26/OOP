using namespace System;

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
			this->worldVolume = 0;
		}
		else {
			this->worldVolume = w;
		}
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

private:
	string oceanClass;		// Пренадлежность к океану
	string borderCountry;	// Страны, которые омывает
	string flowingRivers;	// Впадающие реки
	int coastline;			// Длина береговой линии
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

private:
	string origin;			// Происхождение
	string country;			// Страна, где находится
	int heightSea;			// Высота над уровнем моря
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

private:
	string supply;			// Питание
	string source;			// Исток
	string mouth;			// Устье
	int heightSource;		// Высота истока
	int lenght;				// Длина
};

class Containers {
public:
	Water** arrayWater;
	int waterCounter;

	Containers() {
		arrayWater = new Water * [0];
		waterCounter = 0;
	}

	// Нахождения самого глубокого водоема
	void maxDepthWater(string& maxDep) {
		Water* max = arrayWater[0];
		for (int i = 0; i < waterCounter - 1; i++) {
			if (max->maxDepth < arrayWater[i + 1]->maxDepth) {
				max = arrayWater[i + 1];
			}
		}
		maxDep = max->name + ": " + to_string(max->maxDepth) + " m";
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
	}

	// Сортировка водоемов на "соленые" и "престные"
	void sortSalinity(vector <string>& allsa, vector <string>& allfr) {

		for (int i = 0; i < waterCounter; i++) {
			if (arrayWater[i]->salty == true) {
				allsa.push_back(arrayWater[i]->name);
			}
			else {
				allfr.push_back(arrayWater[i]->name);
			}
		}
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