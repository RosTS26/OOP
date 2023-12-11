#include <iostream>
#include <cmath>
using namespace std;

class Vect {
private:
	int x;
	int y;
	double len;
public:
	Vect();
	Vect(int, int);
	double length();

	//Перегрузка сложения
	Vect operator + (const Vect& other) {
		Vect rez;
		rez.x = this->x + other.x;
		rez.y = this->y + other.y;
		return rez;
	}
};

// Конструктор по умолчанию
Vect::Vect() {
	this->x = 0;
	this->y = 0;
}

// Конструктор с параметрами
Vect::Vect(int x, int y) {
	this-> x = x;
	this-> y = y;
}

double Vect::length() {
	len = sqrt(pow(x, 2) + pow(y, 2));
	return len;
}

int main() {

	Vect a(5, 10);
	Vect b(2, 8);
	Vect c;

	cout << a.length() << endl;
	cout << b.length() << endl;

	c = a + b;
	cout << c.length() << endl;

	return 0;
}