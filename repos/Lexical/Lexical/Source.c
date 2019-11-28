#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	int i = 1;
	char mass[] = "1+2+3+4";

	if (mass != NULL)
	{
		int* token = (int*)malloc(1 * (sizeof(int)));
		for (int k = 0; k < strlen(mass); k++, i++)
		{
			token = (int*)realloc(token, i * sizeof(int));
			switch (mass[k])
			{
			case '0':
				token[k] = 0;
				break;
			case '1':
				token[k] = 1;
				break;
			case '2':
				token[k] = 2;
				break;
			case '3':
				token[k] = 3;
				break;
			case '4':
				token[k] = 4;
				break;
			case '5':
				token[k] = 5;
				break;
			case '6':
				token[k] = 6;
				break;
			case '7':
				token[k] = 7;
				break;
			case '8':
				token[k] = 8;
				break;
			case '9':
				token[k] = 9;
				break;

			case '+':
				token[k] = 20;
				break;
			case '-':
				token[k] = 21;
				break;
				;
			case ' ': token[k] = 99; break;
			default: printf("Ошибка в выражении на позиции %d", k);


				break;
			}

		}
		for (int j = 0; j < i-1; j++)
		{
			printf("    %d", token[j]);
			if (token[j] < 10)
			{
				printf("int");
			}
		}
		
	}
	else
	{
		printf("Ошибка выражение отсутсвует");
	}




	getchar();
	return 0;

}