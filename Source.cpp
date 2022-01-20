
#include <iostream>

#include <chrono>

#include <iostream>

#include <ctime>

using namespace std;

void Sort(int* x, int size) { // собсна расчёска

	auto begin = std::chrono::steady_clock::now();

	constexpr double factor = 1.2473309;

	int step = size - 1;

	while (step >= 1) {

		for (int i = 0; i + step < size; i++) {

			if (x[i] > x[i + step]) {

				std::swap(x[i], x[i + step]);

			}

		}

		step /= factor;

	}

	auto end = std::chrono::steady_clock::now();

	auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);

	std::cout << elapsed_ms.count() << " ";

}

int main() {

	for (int SIZE = 1000; SIZE <= 100000; SIZE += 100) {

		int* x = new int[SIZE];

		for (int i = 0; i < SIZE; i++) { //заполнение массива

			x[i] = rand() % 100;

			//cout << x[i];

		}

		Sort(x, SIZE);

	}

}
