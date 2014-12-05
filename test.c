#include <stdio.h>
#include <stdlib.h>

/*void Func(char a[100])
{
	printf("%d\n", sizeof(a));
}

void GetMemory(char *p, int num)
{
	p = (char*)malloc(sizeof(char) * num);	
}

void Test(void)
{
	char *str = NULL;
	GetMemory(str, 100);
	strcpy(str, "hello");
	printf("%s\n", str);
}

void GetMemory2(char **p, int num)
{
	*p = (char*)malloc(sizeof(char) * num);
}

void Test2(void)
{
	char *str = NULL;
	GetMemory2(&str, 100);
	strcpy(str, "hello");
	printf("%s\n", str);
	free(str);	
}*/

char *Getstring(void)
{
	char p[] = "hello world";
	return p;//complier warning!!
}

void Test4(void)
{
	char *str = NULL;
	str = GetString();
	printf("%s\n", str);
}

int main()
{
	/*char a[] = "hello";
	a[0] = 'X';
	printf("%s\n", a);
	char *p = "world";  //p pointer const value
	p[0] = 'X';
	printf("%s\n", p);*/

	/*char a[] = "hello";
	char b[10];
	strcpy(b, a);
	printf("%s\n", b);
	if (strcmp(b, a) == 0)
	{
		printf("SUCCESSED");
	}*/

	/*char a[] = "hello world";
	char *p = a;
	printf("%d\n", sizeof(a));//12
	printf("%d\n", sizeof(p));//4
	Func(a);*/


//	Test();
//	Test2();
	Test4();		

	return 0;
}
