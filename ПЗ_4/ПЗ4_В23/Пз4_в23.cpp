#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <typeinfo>
using namespace std;

class MinMultiply {
private:
	vector <int> values;
public:
	MinMultiply() {
		this->values.push_back(0);
	}
	MinMultiply(vector <int> values) {
		this->values = values;
	}

	// Умножение всех чисел на минимально число в списке
	void minMul() {
		int min = values[0];
		// Находим минимальное число из массива
		for (int i = 1; i < values.size(); i++) {
			if (values[i] < min && values[i] != 0) {
				min = values[i];
			}
		}
		// Умножаем каждое число массива на минимальное
		for (int i = 0; i < values.size(); i++) {
			values[i] *= min;
		}
	}

	// Запись в файл result.txt парных чисел от 1 до 100
	void inputValues() {
		ofstream inpVal;
		inpVal.open("result.txt");
		if (!inpVal.is_open()) {
			cout << "Ошибка открытия файла! (result.txt)";
		}
		else {
			for (int i = 0; i < values.size(); i++) {
				if (values[i] >= 1 && values[i] <= 100 && values[i] % 2 == 0) {
					inpVal << values[i] << " ";
				}
			}
		}
		inpVal.close();
	}
};

// Запись чисел в исходный файл data.txt
void inputData() {
	ofstream data;
	data.open("data.txt");
	if (!data.is_open()) {
		cout << "Ошибка открытия файла! (data.txt)";
	}
	else {
		cout << "Введите числа через пробел...\n";
		string a;
		getline(cin, a);
		data << a;
	}
	data.close();
}

// Вывод данных из файла в массив
void outputData(vector <int> &values) {
	string v;
	ifstream result;
	result.open("data.txt");
	if (!result.is_open()) {
		cout << "Ошибка открытия файла! (data.txt)";
	}
	else {
		while (!result.eof()) {
			v = "";
			result >> v;
			values.push_back(stoi(v));
		}
	}
	result.close();
}

int main() {
	setlocale(LC_ALL, "rus");
	
	vector <int> values;
	inputData();
	outputData(values);

	MinMultiply val = MinMultiply(values);
	val.minMul();
	val.inputValues();

	return 0;
}