#ifndef DESTROY_H
#define DESTROY_H

#include <iostream>
#include <cstring>
	
class String
{
public:	
	String(const char *str = NULL);		//Constructor function
	String(const String &other);		//copy constructor function
	~String(void); 				//destructor function
	String& operator=(const String &other);  //assign function
private:
	char *m_data;   			//save char
};

#endif DESTROY_H
