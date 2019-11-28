#include "iostream"
#include "regex"
#include "string.h"
#include "stdlib.h"


#define Q0 0
#define Q1 1
#define Q2 2
#define Q3 3
#define QE 99

using namespace std;




int main()
{
	int state = Q1;
	char str[] = { "sjjklassdsdjssskd@mail.ru" };
	int i = 0, j = 0;
	for (;;)
	{
		

		if (state == QE)
		{
			cout << "Email erorr" << endl;
			break;
		}
		switch (state)
		{
		case 1:
		{
			while (((str[i] != '@') || ((str[i] >= 'a') && (str[i] <= 'z')) || ((str[i] >= '0') && (str[i] <= '9'))) && (i<17))
			{
				i++;
			}
			if ((str[i] != '@')||(i<1))
				state = QE;
			else
			{
				cout << "fine S1" << endl;
				state = Q2;
				i++;
			}
		}break;
		case 2:
		{
			while ((str[i] != '.') || ((str[i] >= 'a') && (str[i] <= 'z')) || ((str[i] >= '0') && (str[i] <= '9')) && (j < 11))
			{
				i++;
				j++;
			}
			if ((str[i] != '.') || (i < 1))
				state = QE;
			else
			{
				cout << "fine S2" << endl;
				state = Q3;
				i++;
			}
		}break;
		case 3:
		{
			j = 0;
			while ((str[i] != '\0') || ((str[i] >= 'a') && (str[i] <= 'z')) && (j < 7))
			{
				i++;
				j++;
			}
			if ((str[i] != '\0') || (i < 2))
				state = QE;
			else
			{
				cout << "fine S3" << endl;
				state = Q0;
				i++;
			}
		}break;
		}
		
		if (state == Q0)
		{
			cout << "All fine u can use this email adress;" << endl;
			break;
		}


	}
	system("pause");
	return 0;
}