﻿/*Lesson 3.1 - Задача №4.
Дано: длина и глубина порта, длина и глубина корабля.
Условие: Если корабль не может быть принят в порту вывести - No.
Если может быть принят только в первом порту - 1;
Если только во втором порту - 2;
Если корабль может быть принят в в первом и втором - 3.*/

#include <iostream>
using namespace std;

int main()
{
	int l1, l2, h1, h2, l, h;
	cout << "Вводим дано: l1, l2, h1, h2, l, h:";
	cin >> l1 >> l2 >> h1 >> h2 >> l >> h;
	
	if ((l <= l1 && h <= h1) && (l <= l2 && h <= h2)) {
		cout << "3";
	}
	else 
		if (l <= l2 && h <= h2) {
			cout << "2";
		}
		else
			if (l <= l1 && h <= h1) {
				cout << "1";
			}
			else 
				cout << "No";
}

