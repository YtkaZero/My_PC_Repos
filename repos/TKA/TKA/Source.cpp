#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "iostream"

using namespace std;

#define S1 1
#define S2 2
#define S3 3
#define S4 4 
#define Se 5
#define End 6



int s1(char st)
{
	if (st == 'x')
	{
		return S2;
	}
	if (st == 'z')
	{
		return S3;
	}
	if (st == '\n')
	{
		return Se;
	}
}

int s3(char y)
{
	if (y == 'y')
	{
		return End;
	}
	else
		return Se;
}

int s2(char y)
{
	if (y == 'y')
	{
		return S4;
	}
	if (y == '\n')
		return End;
	if ((y != 'y') | (y != '\n'))
		return Se;
}


void end()
{
	cout << "Complete" << endl;
}

void se()
{
	cout << "Error" << endl;
}

int s4(char y)
{
	if (y == 'y')
	{
		return S4;
	}
	if (y == '\n')
		return End;
	if ((y != 'y') | (y != '\n'))
		return Se;
}


int main()
{
	
	int res;
	char st;
	char y;

	scanf("%c", &st);
	getchar();
	res = s1(st);

	switch (res)
	{
	case 2: scanf("%c", &y);
		getchar();
		switch (s2(y))
		{
		case 4:
			goto case4; break;
		case 5: se(); break;
		case 6: end(); break;
		}break;
	case 3:  scanf("%c", &y);
		getchar(); 
		switch (s3(y))
		{
		case 5: se(); break;
		case 6: end(); break;
		}break;
		break;
	case 4: 
	case4:
		scanf("%c", &y);
		getchar();
		switch (s4(y))
		{
		case 4:
			goto case4; break;
		case 5: se(); break;
		case 6: end(); break;
		} break;
	case 5: break;
	case 6: break;
	default:
		break;
	}

	system("PAUSE");


	return 1;
}