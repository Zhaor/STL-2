#include <iostream>
using namespace std;

void output(int x);
void output(float x);

void output(int x)
{
	cout << "output int " << x << endl;
}

void output(float x)
{
	cout << "output int " << x << endl;
}

int main()
{
	int x = 1;
	float y = 1.0;
	
	output(x);
	output(y);
	output(1);
//	output(0.5);
	output(int(0.5));
	output(float(0.5));
}
