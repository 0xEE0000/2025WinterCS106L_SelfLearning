/*
template <typename T> class Shape {
	public:
		Shape();
		virtual void getInfo() const=0;
};

template <typename T> class Square{
	public:
		Square();
		Square(T len);
		void setLength(T len);
		T getLength() const;
		T getArea() const;
		void getInfo() const;
	private:
		T length;
		void print() const;

};

template <typename T> class Rectangle : public  virtual Shape<T> {
	public:
		Rectangle(T wei,T hei);
		void setWeight(T wei);
		T getWeight() const;
		void setHeight(T hei);
		T getHeight() const;
		T getArea() const;
		void getInfo() const;
	private:
		T weight;
		T height;
		void print() const;
};

#include "class.cpp"
*/

class Square{
public:
	Square();
	Square(int len);
	void setLength(int len);
	int getLength() const;
	int getArea() const;
	void getInfo() const;
	private:
		int length;
		void print() const;
};

