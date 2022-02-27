//member function overloading

#include<iostream>
using namespace std;

class Rectangle 

	private : int height,width;
	public:
		Rectangle (int);
		Rectangle (int,int);
		int getSide ()
		{
			return height;
		}
		
		int getArea (int);
		int getArea (int,int);
	};
Rectangle :: Rectangle (int x)	
	{
		height x;
		width x;
	}
Rectangle :: Rectangle (int x,int y)		
	{
		height x;
		width x;
	}
int Rectangle :: getArea(int x)
{
	return (x*x);
}
int Rectangle :: getArea(int x,int x)	
{
	return (x*y);
}
	
	int main ( ){
		
		Rectangle c (5,6);//constractor overloding
		Rectangle d (6);//constractor overloding
		
		cout<<d.getArea()d.getSide())<<endl;//function overloding
		cout<<c.getArea(5,6);//function overloding
		
		return 0;
	}
		
