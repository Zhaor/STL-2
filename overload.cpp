#include <iostream>
using namespace std;

class Base
{
public:
	//f(int) and f(float) is overload function
	void f(int x)
	{
		cout << "Base::f(int)" << endl;
	}

	void f(float x)
	{
		cout << "Base::f(float)" << endl;
	}
	//virtual override
	virtual void g(void)
	{
		cout << "Base::g(void)" << endl;
	}
		
};

class Derived : public Base
{
public:
	virtual void g(void)
	{
		cout << "Derived::g(void)" << endl;
	}
};

int main()
{
	Derived d;
	Base *pb = &d;

	pb->f(42);		//Base::f(int)
	pb->f(3.14f);		//Base::f(float)
	pb->g();		//Derived::g();

	return 0;
}

