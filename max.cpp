#include <iostream>
using namespace std;

template<class T>
inline const T& max(const T& a, const T& b)
{
	return a < b? b : a;
}
	
int main()
{
	cout <<::max(1, 2) << endl;
	return 0;
}
