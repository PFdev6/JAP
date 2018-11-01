// stdafx.cpp: исходный файл, содержащий только стандартные включаемые модули
// StanLib.pch будет использоваться в качестве предкомпилированного заголовка
// stdafx.obj будет содержать предварительно откомпилированные сведения о типе

#include "stdafx.h"
#include <iostream>
#include <math.h>

extern "C"
{
	int _stdcall strlen(char *string)
	{
		return sizeof(string) / sizeof(char);
	}

	int _stdcall strfind(char *substring, char *string)
	{	
		char *ptrstrstr = strstr(string, substring);
		if (ptrstrstr == NULL) return -1;
		return strlen(string)-strlen(ptrstrstr)-1;
	}

	float _stdcall msin(float num)
	{
		return sin(num);
	}

	float _stdcall mcos(float num)
	{
		return cos(num);
	}

	float _stdcall mtan(float num)
	{
		return tan(num);
	}

	float _stdcall mctan(float num)
	{
		return 1 / tan(num);
	}

	float _stdcall mln(float num)
	{
		return log(num);
	}

	int _stdcall mabs(int num)
	{
		if (num >= 0) return num;
		if (num < 0) return -num;
	}

	float _stdcall msqr(int num)
	{
		return sqrt(num);
	}
}
// TODO: Установите ссылки на любые требующиеся дополнительные заголовки в файле STDAFX.H
// , а не в данном файле
