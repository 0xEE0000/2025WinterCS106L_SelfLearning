/*#include<iostream>
template<typename T> Square<T>::Square(){}
template<typename T> Square<T>::Square(T len){
	length=len;
}
template<typename T> void Square<T>::setLength(T len){
	length=len;
}
template<typename T> T Square<T>::getLength() const{
	return length;
}
template<typename T> T Square<T>::getArea() const{
	return length*length;
}
template<typename T> void Square<T>::print() const{
	std::cout<<"Square Length: "<<getLength()<<"\n";
	std::cout<<"Square Area: "<<getArea()<<"\n";
}
template<typename T> void Square<T>::getInfo() const{
	print();
}

template<typename T> Rectangle<T>::Rectangle(T wei,T hei){
	weight=wei;
	height=hei;
}
template<typename T> void Rectangle<T>::setWeight(T wei){
	weight=wei;
}
template<typename T> T Rectangle<T>::getWeight() const{
	return weight;
}
template<typename T> void Rectangle<T>::setHeight(T hei){
	height=hei;
}
template<typename T> T Rectangle<T>::getHeight() const{
	return height;
}
template<typename T> T Rectangle<T>::getArea() const{
	return weight*height;
}
template<typename T> void Rectangle<T>::print() const{
	std::cout<<"Rectangle Weight: "<<getWeight()<<"\n";
	std::cout<<"Rectangle Height: "<<getHeight()<<"\n";
	std::cout<<"Rectangle Area: "<<getArea()<<"\n";
}
template<typename T> void Rectangle<T>::getInfo() const{
	print();
}
*/

#include <iostream>
#include "class.h"

Square::Square(int len){
	length=len;
}
Square::Square(){}

void Square::setLength(int len){
	length=len;
}
int Square::getLength() const{
	return length;
}
int Square::getArea() const{
	return length*length;
}
void Square::print() const{
	std::cout<<"Square Length: "<<getLength()<<"\n";
	std::cout<<"Square Area: "<<getArea()<<"\n";
}
void Square::getInfo() const{
	print();
}
