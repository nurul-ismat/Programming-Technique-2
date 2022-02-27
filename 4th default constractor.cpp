//default constractor



#include <iostream> // Cpp program to illustrate the // concept of Constructors 

using namespace std; 
  
class construct { 
public: 
    int a, b; 
  
    
    construct() // Default Constructor 
    { 
        a = 10; 
        b = 20; 
    } 
}; 
  
int main() 
{ 
    construct c; // Default constructor called automatically // when the object is created 
    cout << "a: " << c.a << endl 
         << "b: " << c.b; 
    return 1; 
} 

