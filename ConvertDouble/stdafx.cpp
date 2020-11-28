
#include "stdafx.h"


double Convert(const string & str)
{
	int i = 0;
	double num = 0;
	int dot = 0;
	const int N = 48;
	bool flag = false;
	bool flagDot = false;
	
	if (str[i] == '-')
	{
		flag = true;
		i++;
	}

	for (i ; i < str.length(); i++) 
	{
		if (str[i] == '.')
		{
			i++;
			flagDot = true;
		}
		num = num * 10 + str[i] - N;

		if (flagDot)
		{
			dot++;
		}
	}



	if (flagDot)
	{
		while (dot--)
		{
			num /= 10;
		}
	}
	


	if (flag)
	{
		num = -num;
	}

	
	
	return num;


}
