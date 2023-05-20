#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <ctime>
#include <windows.h>
#include <math.h>
#include <iostream>




void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	char s[50], s1[10], s2[10];
	int i, k;

	printf("Введите строку s \n");
	gets_s(s);
	printf("Введите строку s1 \n");//isxodв
	gets_s(s1);
	printf("Введите строку s2 \n");//zamenaывыв
	gets_s(s2);

	char* p = strstr(s, s1);//asdsad
	char a[70];
	while (p)
	{
		i = strlen(s);
		k = i - strlen(p);
		strcpy(a, p + strlen(s1));
		s[k] = '\0';
		strcat_s(s, s2);
		strcat_s(s, a);
		p = strstr(s, s1);
	}
	printf("%s", s);

	getchar(); getchar();
}
