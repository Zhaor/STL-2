#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
	vector<string> sentence;
	
	sentence.reserve(5);
	
	sentence.push_back("hello,");
	sentence.push_back("how");
	sentence.push_back("are");
	sentence.push_back("you");
	sentence.push_back("?");
	
	copy(sentence.begin(), sentence.end(),
		ostream_iterator<string>(cout, " "));
	cout << endl;
	
	cout << "max_size():" << sentence.max_size() << endl;
	cout << "size(): " <<  sentence.size() << endl;
	cout << "capacity(): "  << sentence.capacity() << endl;

	swap(sentence[1], sentence[3]);
	
	sentence.insert(find(sentence.begin(), sentence.end(), "?"), "always");

	sentence.back() = "!";
	
	copy(sentence.begin(), sentence.end(), 
		ostream_iterator<string>(cout, " "));
	cout << endl;

	cout << "max_size():" << sentence.max_size() << endl;
	cout << "size(): " <<  sentence.size() << endl;
	cout << "capacity(): "  << sentence.capacity() << endl;

	return 0;	
}
