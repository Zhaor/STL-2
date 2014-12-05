#include <iostream>
#include <map>
#include <string>
#include <iterator>
using namespace std;

int main()
{
	typedef map<string, float> StringFloatMap;
	
	StringFloatMap stocks;
	
	stocks["BASF"] = 369.50;
	stocks["VM"] = 413.50;
	stocks["Daimler"] = 819.00;
	stocks["BMW"] = 834.20;
	stocks["Siemens"] = 842.00;

	StringFloatMap::iterator pos;
	for(pos = stocks.begin(); pos != stocks.end(); ++pos )
	{	
		cout << "stock: " << pos->first << "\t"
			<< "price: " << pos->second << endl;
	} 
	cout << endl;

	for(pos = stocks.begin(); pos != stocks.end(); ++pos )
	{
		pos->second *= 2;
	}	

	
	for(pos = stocks.begin(); pos != stocks.end(); ++pos )
	{
		cout << "stock: " << pos->first << "\t"
			<< "price: " << pos->second << endl;
	}
	cout << endl;

	stocks["Volkswagen"] = stocks["VW"];
	stocks.erase("VM");

	
	for(pos = stocks.begin(); pos != stocks.end(); ++pos )
	{
		cout << "stock: " << pos->first << "\t"
			<< "price: " << pos->second << endl;
	}
	cout << endl;
	
	return 0;
}
