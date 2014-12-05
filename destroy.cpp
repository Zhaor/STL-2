#include "destroy.h"

//String Constructor function
String::String(const char* str)
{
	if(str == NULL)
	{
		m_data = new char[1];
		*m_data = '\0';
	}
	else
	{
		int length = strlen(str);
		m_data = new char[length + 1];
		strcpy(m_data, str);
	}
}

//Copy constructor function
String::String(const String &other)
{
	int length = strlen(other.m_data);	
	m_data = new char[length + 1];
	strcpy(m_data, other.m_data);		
}

//destructor function
String::~String(void)
{
	delete [] m_data;
}

//operator function
String& String::operator=(const String &other)
{
	//check self assign
	if(this == &other)
		return *this;
	
	//delete source resource
	delete [] m_data;

	//alloc new memery resource and copy context
	int length = strlen(other.m_data);
	m_data = new char[length + 1];
	strcpy(m_data, other.m_data);

	return *this;	
}

int main()
{
	String s;

	return 0;
}
