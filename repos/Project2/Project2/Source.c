#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>


char* chanbufe_str(char *s1, char *s2)
{

	char *lastP, *p;
	int k=0;
	p = strstr(s1, s2);
	while (p!='\n')
	{
		lastP = p++;
		p = strstr(p, s1);
		k++;
	}
	lastP = p;
	if (lastP)
	{
		strcpy(lastP, lastP + strlen(s2));
	}
	return k;
}

int main()
{
	char *h;
	char *buf = NULL;
	char *h1;
	char *s2 = NULL;
	char m;
	char m1;
	int n1 = 0;
	int n = 0;

	do
	{
		scanf("%c", &m);
		
		n++;
		h = (char*)realloc(buf, sizeof(char)*n);

		if ((h != NULL))
		{
			buf = h;
			buf[n - 1] = m;                    
		}
	} while (m != '\n');
	
	do
	{
		scanf("%c", &m1);
		
		n1++;
		h1 = (char*)realloc(s2, sizeof(char)*n1);

		if ((h1 != NULL))
		{
			s2 = h1;
			s2[n1 - 1] = m1;
		}
	} while (m1 != '\n');
	getchar();
	
	int k = 0;
	 k = chanbufe_str(buf, s2);
		printf("\n%s", buf-k);
	
	

getchar();
	return 0;
}

