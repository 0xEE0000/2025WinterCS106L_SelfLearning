/*
 * CS106L Assignment 3: Make a Class
 * Created by Fabio Ibanez with modifications by Jacob Roberts-Baca.
 */
#include "class.h"
void sandbox() {
  // STUDENT TODO: Construct an instance of your class!
/*
	Square<int> square1(1);
	Square<double> square2(3.4);
	square1.getInfo();
	square2.getInfo();
	square1.setLength(2);
	square1.getInfo();

	Rectangle<int> rectangle1(1,2);
	Rectangle<double> rectangle2(2.5,2.5);
	rectangle1.getInfo();
	rectangle2.getInfo();
	rectangle1.setWeight(3);
	rectangle2.setHeight(4);
	rectangle1.getInfo();
*/
	int a1=1;
	Square s1(a1);
	s1.getInfo();
	a1=5;
	s1.setLength(a1);
	s1.getInfo();
}

