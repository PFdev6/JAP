// stdafx.cpp: исходный файл, содержащий только стандартные включаемые модули
// StanLib.pch будет использоваться в качестве предкомпилированного заголовка
// stdafx.obj будет содержать предварительно откомпилированные сведения о типе

#include "stdafx.h"
#include <iostream>
#include <math.h>

extern "C"
{
	char* _stdcall inputfpi(char * str)
	{
		std::cin >> str;
		return str;
	}

	void _stdcall outputstrfpi(char * str)
	{
		std::cout << str << std::endl;
	}

	void _stdcall outputflfpi(float flnum)
	{
		std::cout << flnum << std::endl;
	}

	void _stdcall outputintflfpi(int flnum)
	{
		std::cout << flnum << std::endl;
	}

	int _stdcall strlenfpi(char *string)
	{
		return sizeof(string) / sizeof(char);
	}

	int _stdcall strfindfpi(char *substring, char *string)
	{	
		char *ptrstrstr = strstr(string, substring);
		if (ptrstrstr == NULL) return -1;
		return strlen(string)-strlen(ptrstrstr)-1;
	}

	float _stdcall msinfpi(float num)
	{
		return sin(num);
	}

	float _stdcall mcosfpi(float num)
	{
		return cos(num);
	}

	float _stdcall mtanfpi(float num)
	{
		return tan(num);
	}

	float _stdcall mctanfpi(float num)
	{
		return 1 / tan(num);
	}

	float _stdcall mlnfpi(float num)
	{
		return log(num);
	}

	int _stdcall mabsfpi(int num)
	{
		if (num >= 0) return num;
		if (num < 0) return -num;
	}

	float _stdcall msqrfpi(int num)
	{
		return sqrt(num);
	}
}
// TODO: Установите ссылки на любые требующиеся дополнительные заголовки в файле STDAFX.H
// , а не в данном файле
