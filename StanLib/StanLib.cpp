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
		return 
	}

	float _stdcall msin(float num)
	{
		return
	}

	float _stdcall mcos(float num)
	{
		return
	}

	float _stdcall mtan(float num)
	{
		return
	}

	float _stdcall mctan(float num)
	{
		return
	}

	float _stdcall mln(float num)
	{
		return
	}

	int _stdcall mabs(int num)
	{
		return
	}

	float _stdcall msqr(int num)
	{
		return
	}
}
// TODO: Установите ссылки на любые требующиеся дополнительные заголовки в файле STDAFX.H
// , а не в данном файле
