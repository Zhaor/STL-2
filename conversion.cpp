#include <iostream>
using namespace std;

class MyClass
{
private:
	static const int num = 100;
	int elems[num];
};

const int MyClass::num;

int main()
{
	float x = 3.88;
	cout << static_cast<int>(x) << endl;

	MyClass p;
		
	return 0;
}

