/*
Here we are trying to add two objects “a1” and “a2”, which are of user-defined type 
i.e. of type “class A” using the “+” operator. This is not allowed, because 
the addition operator “+” is predefined to operate only on built-in data types.
*/

// class A {
// 	//statements;
// };

// int main()
// {
// 	A a1, a2, a3;

// 	a3 = a1 + a2;

// 	return 0;
// }



// code with operator overloading -

#include <iostream>
using namespace std;

class Complex {
private:
	int real, imag;

public:
	Complex(int r = 0, int i = 0)
	{
		real = r;
		imag = i;
	}

	// This is automatically called when '+' is used with
	// between two Complex objects
	// if i comment this function complex 
    Complex operator+(Complex const& obj)
	{
		Complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}
	void print() { cout << real << " + i" << imag << '\n'; }
};

int main()
{
	Complex c1(6, 1), c2(2, 4);
	Complex c3 = c1 + c2;
	c3.print();
}


//output
//8 + i5