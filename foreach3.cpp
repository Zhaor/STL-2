#include <iostream>
#include <algorithm>
#include <vector>
#include "print.cpp"
using namespace std;

class MeanValue
{
public:
	MeanValue():num(0), sum(0){}
	//function call
	void operator() (int elem)
	{
		num++;
		sum += elem;
	}
	
	operator double ()
	{
	return static_cast<double>(sum) / static_cast<double>(num);
	}
private:
	long num;
	long sum;
};

int main()
{
	vector<int> coll;
	
	for(int i=1; i<=9; ++i)
	{
		coll.push_back(i);
	}
	PRINT_ELEMENTS(coll);
	
	double mv = for_each(coll.begin(), coll.end(), MeanValue());
	cout << "mean value: " << mv << endl;
		
	return 0;
}
