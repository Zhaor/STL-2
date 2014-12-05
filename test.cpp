#include <iostream>
using namespace std;

class Base
{
public:
	virtual ~Base()
	{
		cout << "~Base" << endl;
	}
};

class Derived : public Base
{
public:
	virtual  ~Derived()
	{
		cout << "~Deived" << endl;
	}
};

int main()
{
	Base *pb = new Derived;
	delete pb;
}

