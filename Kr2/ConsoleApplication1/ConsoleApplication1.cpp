#include <iostream>
#include <string>
using namespace std;

class Locality {
public:
	string name;
	int numResidents;

	Locality() {
		name = "None";
		numResidents = 1;
	}

	Locality(string name, int nr) {
		this->name = name;
		this->numResidents = nr;
	}
};

class PublicTransport : public Locality{
private:
	int numOfRoutes;
	int numOfBuses;
public:
	PublicTransport(string name, int nr, int nor, int nob) : Locality(name, nr) {
		this->numOfRoutes = nor;
		this->numOfBuses = nob;
	}
	// Коэфициент загруженности транспорта в день
	void occupanceFactor() {
		cout << name << endl;
		int coef;
		int rouToBus;
		coef = (numResidents * 0.7) / numOfBuses;
		rouToBus = numOfBuses / numOfRoutes;
		if (coef < 400) cout << "Слишком много автобусов на кол-во населения!\n";
		else if (coef > 400 && coef < 1500) cout << "Нагрузка на транспортные сети умеренная!\n";
		else cout << "Слишком высокая нагрузка на траспортные сети!\n";
		cout << "Среднее количество автобусов на одном маршруте: " << rouToBus << "\n\n";
	}

};

class Village : public Locality {
private:
	int distanceToRiver;
	int distanceToForest;
public:
	Village(string name, int nr, int dtr, int dtf) : Locality(name, nr) {
		this->distanceToRiver = dtr;
		this->distanceToForest = dtf;
	}
	void setInfo() {
		cout << "Название села: " << name << endl;
		cout << "Кол-во жителей: " << numResidents << endl;
		cout << "Расстояние до ближайшей речки: " << distanceToRiver << " м\n";
		cout << "Расстояние до ближайшего леса: " << distanceToForest << " м\n\n";
	}
};

int main() {
	setlocale(LC_ALL, "ru");

	PublicTransport c1("Харьков", 1500000, 150, 1500);
	PublicTransport c2("Киев", 2000000, 200, 1000);
	Village c3("Тучка", 500, 1300, 500);
	c1.occupanceFactor();
	c2.occupanceFactor();
	c3.setInfo();
	return 0;
}