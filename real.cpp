#include "stdafx.h"
#include "real.h"
#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

char* real::perevod10vN(int a, int P) { // перевод из 10 в P-ичную
	int p = 0;
	int max = 1;
	if (a == 0) {
		p = 1;
	}
	else {
		while (max - 1 < a) {
			max *= P;
			p += 1;
		}
	}
	int length = p;
	auto number = new char[length + 1];
	for (unsigned int i = 0; i < length; i++) {
		number[i] = a % P + '0';
		a /= P;
	}
	for (int i = length - 1; i >= 0; i--) {
		cout << number[i];
	}
	return number;
}
real::real(int a, int b) // конструктор с 2 параметрами
{
	int n = a;
	int ss = b;

}
