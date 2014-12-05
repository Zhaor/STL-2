#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool nocase_compare(char s1, char s2)
{
	return toupper(s1) == toupper(s2);
}
int main()
{
	string s1("This is a string");
	string s2("STRING");
		
	if(s1.size() == s2.size() &&
		equal(s1.begin(), s1.end(), s2.begin(), nocase_compare))
	{
		cout << "the string are euqal" << endl;
	}
	else
	{
		cout << "the strings are not euqal" << endl;
	}
	
	string::iterator pos;
	pos = search(s1.begin(), s1.end(),
			s2.begin(), s2.end(),
			nocase_compare);
	if(pos == s1.end())
	{
		cout << "s2 is not a substring of s1" << endl;
	}
	else
	{
		cout << '"' << s2 << "\" is a substring of \""
			<< s1 << "\" (at index "<< pos - s1.begin() << ")" << endl;
	}
	return 0;
}
