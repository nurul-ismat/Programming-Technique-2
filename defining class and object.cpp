//the code demonstrates a simple class

#include<iostream>
using namespace std;

class Rectangle//rectangle class declaration
{
	private://class declaretion
		double width;//private members//class declaretion
		double length;//private members//class declaretion
		
		
	public:
		    void setWidth(double);//public members////class declaretion
			void setLength(double);//public members//class declaretion
			double getWidth () const;//public members//class declaretion
		    double getLength () const;//public members//class declaretion
		    double getArea() const;//public members//class declaretion
};

void Rectangle :: setWidth (double w)//setWidth assigns a value to the width member

{
	width = w;
}

void Rectangle :: setLength (double len)//setLengthth assigns a value to the width member

{ 
	length = len;
}

double Rectangle::getWidth()const//getWidth returns the value in the width member

{
	return width;
}

double Rectangle :: getLength() const//getLength returns the value in the length member

{
	return length;
}

double Rectangle :: getArea() const//getArea returns the product of width*length

{
	return width*length;
}

int main()//main fuction

{
	Rectangle box;//define instance of the Rectangle class
	double rectWidth;//local variable for width
	double rectLength;//local variable for length
	
	
	//get rectangle's width and length from the users
	cout << "this program will be calculate the area";
	cout << "rectangle.What is the width?";
	cin >> rectWidth;
	cout << "what is the length?";
	cin >> rectLength;
	
	//store the width & and length
	box.setWidth(rectWidth);
	box.setLength( rectLength);
	
	
	//display the rectangle data
	cout<< "here is the rectangle data";
	cout<< "width:" << box.getWidth()<<endl;
	cout<< "length:" << box.getLength()<<endl;
	cout<< "area:" << box.getArea()<<endl;
	
	return 0;
	
}



