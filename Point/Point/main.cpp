//#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
//#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 

#include <iostream>
#include <vector>
#include <iomanip> 
#include <fstream>
#include <array>
#include <list>

#include "Point.h"

template<class T>
auto cout_point(T &p) {
	for (int i = 0; i < p.size(); ++i) {
		std::cout << p[i] << ' ';
	}
	std::cout << '\n';
}

int main() {
	//--------------------------------
	setlocale(LC_ALL, "Russian");
	system("color F2");
	std::ios_base::sync_with_stdio(false);
	std::ifstream fin("input.txt");
	std::ofstream fout("output.txt");
	std::cout << std::fixed << std::setprecision(4);
	//--------------------------------

	
	auto point1 = make_point(1, 100, 3, 4, 5);
	Point<5> point2 = make_point(0, 20, 2, 3, 4);
	Point<5> point3({ 1.0 ,2.0, 3.0, 4.0, 5.0 });
	Point<5> point4 = { 1.0 ,2.0, 3.0, 4.0, 5.0, 6.0 };

	cout_point(point3);
	cout_point(point4);

	cout_point(point1 + point2);

	point2 *= 2;
	cout_point(point2);

	point1 = point2;


	Point<5> c_point1 = { 3.0, 5.0, 1.0 };
	std::cout << std::get<1>(c_point1) << '\n';
	std::get<1>(c_point1) = -1;
	std::cout << std::get<1>(c_point1) << '\n';

	auto arr = getArray(point2);

	for (size_t i = 0; i < arr.size(); ++i) {
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';


	system("pause");
	return 0;
}

