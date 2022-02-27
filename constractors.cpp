//specification of the file

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
	private:
		double wight;
		double length;
	public://constractor in class definition
		Rectangle ();//constractor in class definition
		
		void setWidth (double);
		void setLength (double);
		
		double getWidth() const
		{
			return width;
		}
		double getLength() const
		{
			return Length;
		}
		double getArea() const
		{
			return Width*Length;
	    }	
		
};


