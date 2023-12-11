#include <iostream>
#include <string>
using namespace std;

// Класс прямоугольник
class Rectangle {
private:
	double lenght;
	double width;
public:
	string name;	
	double sq;
	double per;
	Rectangle();
	Rectangle(double, double, string);
	void setRectangle(double, double, string);
	void getRectangle();
	double perimetr();
	double square();
	void print();



	// Перегрузка Сложения
	Rectangle operator+ (const Rectangle & other) {
		Rectangle rez;
		rez.lenght = this->lenght + other.lenght;
		rez.width = this->width + other.width;
		return rez;
	}

	// Перегрузка вывода 
	friend ostream& operator<< (ostream & out, const Rectangle & v) {
		return out << "Lenght = " << v.lenght <<
			"\nWidth = " << v.width << endl;
	}

	// Перегрузка сравнения БОЛЬШЕ
	bool operator> (const Rectangle & other) {
		if ((this->lenght * this->width) > (other.lenght * other.width)) {
			return true;
		}
		else {
			return false;
		}
	}

	// Перегрузка сравнения МЕНЬШЕ
	bool operator< (const Rectangle & other) {
		if ((this->lenght * this->width) < (other.lenght * other.width)) {
			return true;
		}
		else {
			return false;
		}
	}
};



// Конструктор по умолчанию
Rectangle::Rectangle() {
	lenght = 1;
	width = 1;
	name = "None";
}

// Конструктор для ввода длины, ширины и имени прямоугольника
Rectangle::Rectangle(double l, double w, string n) {
	lenght = l;
	width = w;
	name = n;
}

// Функция сет
void Rectangle::setRectangle(double l, double w, string n) {
	lenght = (l < 0) ? (l * (-1)) : l;
	width = (w < 0) ? (w * (-1)) : w;
	name = n;
}

// Метод вычисления периметра
double Rectangle::perimetr() {
	per = 2 * (lenght + width);
	return per;
}

// Метод вычисления площади
double Rectangle::square() {
	sq = lenght * width;
	return sq;
}

// Метод вывода информации
void Rectangle::print() {
	cout << "Длина прямоугольника " << name << ": " << lenght << endl;
	cout << "Ширина прямоугольника " << name << ": " << width << endl;
	cout << "Периметр прямоугольника " << name << " равен: " << per << endl;
	cout << "Площадь прямоугольника " << name << " равна: " << sq << "\n \n";
}

// Функция сравнения периметров двух прямоугольников
double maxSquare(Rectangle a, Rectangle b) {

	// Перегружаем операторы сравнения
	if (a < b) {
		cout << "У прямоугольника " << b.name << " площадь БОЛЬШЕ, чем у прямоугольника " << a.name << endl;
	} 
	if(a > b) {
		cout << "У прямоугольника " << a.name << " площадь БОЛЬШЕ, чем у прямоугольника " << b.name << endl;
	}
	else cout << "Площадь прямоугольников: " << a.name << " и " << b.name << " - РАВНА!" << endl;

	return 0;
}

int main() {
	setlocale(LC_ALL, "rus"); // Русификатор
	
	//Rectangle r1;
	//r1.setRectangle(11.4, 5.6, "ABCD");

	Rectangle r1 = Rectangle(11.4, 5.6, "ABCD");
	
	r1.perimetr();
	r1.square();

	Rectangle r2 = Rectangle(12.1, 3.8, "XYZQ");
	r2.perimetr();
	r2.square();

	r1.print();
	r2.print();

	double maxQ = maxSquare(r1, r2);



	// Тестирование перегрузок
	cout << endl << "--- Перегрузки ---" << endl;

	Rectangle r3;
	r3 = r1 + r2; // Перегрузка сложения для объекта r3
	cout << r3; // Перегрузка вывода объекта

	return 0;
}