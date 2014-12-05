#include <iostream>
using namespace std;

class Base
{
public:
	virtual void f(float x)
	{
		cout << "Base::f(float) " << x << endl;
	}
	
	void g(float x)
	{
		cout << "Base::g(float) " << x << endl;
	}
	
	void h(float x)
	{
		cout << "Base::h(float) " << x << endl;
	}
};

class Derived : public Base
{
public:
	//override
	virtual void f(float x)
	{
		cout << "Derived::f(flaot) " << x << endl;
	}
	
	//hidden
	void g(int x)
	{
		cout << "Derived::g(int) " << x << endl;
	}
	
	//hidden
	void h(float x)
	{
		cout << "Derived::h(float) " << x << endl;
	}
};
int main()
{
	Derived d;
	Base *pb = &d;
	Derived *pd = &d;

	pb->f(3.14f);	//Derived::f(float)
	pd->f(3.14f);	//Derived::f(float)
	

	pb->g(3.14f);	//Base::g(float)
	pd->g(3.14f);	//Derived::g(int)

	pb->h(3.14f);	//Base::h(float)
	pd->h(3.14f);	//Derived::h(float)
	return 0;
}
