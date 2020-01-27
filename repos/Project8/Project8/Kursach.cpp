#include "stdio.h"
#include "stdlib.h"
#include "locale.h"
#include "ctime"
#include "windows.h"



//enum {Q0,Q1,Q2,Q3,Q4,Q5,Q6,Q12,Q22,Q32,Q42,Q52,Q62,Q13,Q23,Q33,Q43,Q53,Q63,QE};

struct polojenie
{
	int DP1, DP2, DP3, DP4;
	int eject=0;
};

struct collor 
{
	int DC1=1, DC2=1, DC3=0;
	int Red,Green,Blue;
	int rotorG = 0;
	int rotorV = 0;
	int painting;
	int fullpainted = 0;
};

void QEj()
{
	polojenie P;
	P.eject = 1;
	printf("Part ejected, bad part\n");
	P.eject = 0;
	system("pause");
}


void QEnd(collor C)
{
	printf("Painting full done, releasing");
	Sleep(10000);
	system("cls");
	C.fullpainted = 0;

}

void QP(int i, collor C)
{
	C.painting = 1;
	for (int j = 0; j < 3; j++)
	{
		printf("Side #%d", i);
		printf("  painting at ");
		if (C.Red == 1)
		{
			printf("Red\n");
		}
		else if (C.Blue == 1)
		{
			printf("Blue\n");
		}
		else if (C.Green == 1)
		{
			printf("Green\n");
		}
		Sleep(2000);
	}
	printf("Side #%d", i);
	printf("  painted at ");
	if (C.Red == 1)
	{
		printf("Red\n");
	}
	else if (C.Blue == 1)
	{
		printf("Blue\n");
	}
	else if (C.Green == 1)
	{
		printf("Green\n");
	}
	C.painting = 0;
}

void QPG(collor C)
{
	C.rotorG = 1;
	for (int i = 0; i < 101; i += 10)
	{
		Sleep(1000);
		printf("Rotating = %d", i);
		putchar('%');
		printf("\n");
	}
	C.rotorG = 0;
}

void QPV(collor C)
{
	
	C.rotorV = 1;
	for (int i = 0; i < 101; i += 10)
	{
		Sleep(1000);
		printf("Rotating = %d", i);
		putchar('%');
		printf("\n");
	}
	C.rotorV = 0;
}

void QD11(collor C)
{
	int i = 1;
	while ( i < 5)
	{
		QP(i,C);
		QPG(C);
		i++;
	}
	while (i < 7)
	{
		QPV(C);
		QP(i,C);
		i++;
	}
	C.fullpainted = 1;
	QEnd(C);
}

void QD1()
{
	collor C;
	C.Red = 1;
	C.Green = 0;
	C.Blue = 0;
	printf("Selected RED\n");
	QD11(C);
}

void QD2()
{
	collor C;
	C.Red = 0;
	C.Green = 0;
	C.Blue = 1;
	printf("Selected BLUE\n");
	QD11(C);
}

void QD3()
{
	collor C;
	C.Red = 0;
	C.Green = 1;
	C.Blue = 0;
	printf("Selected GREEN\n");
	QD11(C);
}


void QD0(collor C, polojenie P)
{
	

	if ((C.DC2 == 1)&(P.DP1 == 1)&(P.DP2 == 1)&(P.DP3 == 1)&(P.DP4 == 1)&(C.DC1 == 1))
	{
		QD1();
	}
	else if ((P.DP1 == 1)&(P.DP2 == 1)&(P.DP3 == 1)&(P.DP4 == 1)&(C.DC1 == 1)&(C.DC3 == 1))
	{
		QD2();
	}
	else if ((P.DP1 == 1)&(P.DP2 == 1)&(P.DP3 == 1)&(P.DP4 == 1)&(C.DC2 == 1)&(C.DC3 == 1))
	{
		QD3();
	}
	else
	{
		QEj();
	}
}


int states(polojenie P, collor C, int *mm, int k)
{
	if ((P.DP1 == 1)&(P.DP2 == 1)&(P.DP3 == 1)&(P.DP4 == 1))
	{
		if ((C.DC1 == 1)&(C.DC2 == 1)&(C.DC3==0))
		{
			
		if (((C.Green == 0)&(C.Blue == 0)&(mm[k-1]== 0)))
		{
			printf("Current state QD1");
			return 11;
		}
		else if((mm[k-1]==mm[k-2])|((mm[k-2]==0)&(mm[k-1]!=11))&((mm[k - 2] == 11)&(mm[k-1] != 44))&((mm[k - 2] == 44)&((mm[k-1] != 55)|((mm[k-1] != 66)) | ((mm[k-1] != 77)))))
		{
			printf("Bad code");
			return 99;
		}
			if ((C.Red == 1)&((mm[k-1]== 66) | (mm[k-1]== 77) | (mm[k-1]== 55) | (mm[k-1]== 11)|(mm[k-1]==44)))
			{
				if ((C.rotorG == 1)&(mm[k-1]== 44))
				{
					if (C.rotorV == 0)
					{
						if (C.painting == 0)
						{
							if (C.fullpainted == 0)
							{
								printf("Current state QPG");
								return 55;
							}
						}
					}
				}
				else if ((C.rotorV == 1)&(mm[k-1]== 44))
				{
					if (C.painting == 0)
					{
						if (C.fullpainted == 0)
						{
							printf("Current state QPV");
							return 66;
						}
					}
				}
				else if ((C.painting == 1)&(mm[k-1]== 44))
				{
					if (C.fullpainted == 0)
					{
						printf("Current state QP");
						return 77;
					}
				}
				else if ((C.fullpainted == 1)&(mm[k-1]== 44))
				{
					printf("Current state QEnd");
					return 88;
				}
				else if ((mm[k-1]== 66) | (mm[k-1]== 77) | (mm[k-1]== 55)|(mm[k-1]==11))
				{
					printf("Current state QD11");
					return 44;
				}
			}
			
		}
		else if ((C.DC1 == 1)&(C.DC3 == 1))
		{
			if ((C.Green == 1)&((mm[k-1]== 22) | (mm[k-1]== 66) | (mm[k-1]== 77) | (mm[k-1]== 55) | (mm[k-1]= 44)))
			{
				if ((C.rotorG == 1)&(mm[k-1]== 44))
				{
					if (C.rotorV == 0)
					{
						if (C.painting == 0)
						{
							if (C.fullpainted == 0)
							{
								printf("Current state QPG");
								return 55;
							}
						}
					}
				}
				else if ((C.rotorV == 1)&(mm[k-1]== 44))
				{
					if (C.painting == 0)
					{
						if (C.fullpainted == 0)
						{
							printf("Current state QPV");
							return 66;
						}
					}
				}
				else if ((C.painting == 1)&(mm[k-1]== 44))
				{
					if (C.fullpainted == 0)
					{
						printf("Current state QP");
						return 77;
					}
				}
				else if ((C.fullpainted == 1)&(mm[k-1]== 44))
				{
					printf("Current state QEnd");
					return 88;
				}
				else if ((mm[k-1]== 66) | (mm[k-1]== 77) | (mm[k-1]== 55)|(mm[k-1]==22))
				{
					printf("Current state QD11");
					return 44;
				}
			}
			else if((C.Red==0)&(C.Green==0)&(mm[k-1]== 0))
			{
				printf("Current state QD2");
				return 22;
			}
			else if((mm[k - 1] == mm[k - 2]) | ((mm[k - 2] == 0)&(mm[k - 1] != 11))&((mm[k - 2] == 11)&(mm[k - 1] != 44))&((mm[k - 2] == 44)&((mm[k - 1] != 55) | ((mm[k - 1] != 66)) | ((mm[k - 1] != 77)))))
			{
				printf("Bad code");
				return 99;
			}
		}
		else if ((C.DC2 == 1)&(C.DC3 == 1))
		{
			if ((C.Blue == 1)&& ((mm[k-1]== 33)|(mm[k-1]== 66) | (mm[k-1]== 77) | (mm[k-1]== 55) | (mm[k-1]= 44)))
			{
				if ((C.rotorG == 1)&(mm[k-1]== 44))
				{
					if (C.rotorV == 0)
					{
						if (C.painting == 0)
						{
							if (C.fullpainted == 0)
							{
								printf("Current state QPG");
								return 55;
							}
						}
					}
				}
				else if ((C.rotorV == 1)&(mm[k-1]== 44))
				{
					if (C.painting == 0)
					{
						if (C.fullpainted == 0)
						{
							printf("Current state QPV");
							return 66;
						}
					}
				}
				else if ((C.painting == 1)&(mm[k-1]==44))
				{
					if (C.fullpainted == 0)
					{
						printf("Current state QP");
						return 77;
					}
				}
				else if ((C.fullpainted == 1)&(mm[k-1]== 44))
				{
					printf("Current state QEnd");
					return 88;
				}
				else if((mm[k-1]==66)|(mm[k-1]==77)|(mm[k-1]==55)|(mm[k-1]=33))
				{
					printf("Current state QD11");
					return 44;
				}
			}
			else if ((C.Red == 0)&(C.Blue == 0)&(mm[k-1]== 0))
			{
				printf("Current state QD3");
				return 33;
			}
			else if((mm[k - 1] == mm[k - 2]) | ((mm[k - 2] == 0)&(mm[k - 1] != 11))&((mm[k - 2] == 11)&(mm[k - 1] != 44))&((mm[k - 2] == 44)&((mm[k - 1] != 55) | ((mm[k - 1] != 66)) | ((mm[k - 1] != 77)))))
			{
				printf("Bad code");
				return 99;
			}
		}
		else 
		{
			printf("Current state Q0");
			return 0;
		}
	}
	else
	{
		printf("Current state QEj");
		return 95;
	}
}


int main()
{
	polojenie P;
	collor C;
	int rejim = 0;
	char dat[17];
	int mm[30];
	int k = 0;
	scanf_s("%d", &rejim);
	
		FILE *fl;
		char filename[] = "Datchiki.txt";
		if (filename != NULL)
		{
			fl = fopen(filename, "r");
			while (fgets(dat, 17, fl))
			{
				Sleep(1000);
				for (int i = 0; i < 16; i++)
				{
					switch (dat[i])
					{
					case '0': dat[i] = 0;
						break;
					case '1': dat[i] = 1;
						break;
					}
				}
				P.DP1 = dat[0];
				P.DP2 = dat[1];
				P.DP3 = dat[2];
				P.DP4 = dat[3];
				P.eject = dat[4];
				C.DC1 = dat[5];
				C.DC2 = dat[6];
				C.DC3 = dat[7];
				C.Red = dat[8];
				C.Green = dat[9];
				C.Blue = dat[10];
				C.rotorG = dat[11];
				C.rotorV = dat[12];
				C.painting = dat[13];
				C.fullpainted = dat[14];
				if (rejim == 1)
					QD0(C, P);
				else if (rejim == 0)
				{
					mm[k] = states(P, C, mm,k);
					if (mm[k]!=99)
						printf("\n");
					else
					{
						printf("\n");
						system("pause");
						fclose(fl);
						return 0;
					}
				}
				k++;
			}
			if (k == 0)
			{
				printf("Empty file, or incorrect file name");
				system("pause");
				return 0;
			}
		}
		else
		{
			printf("No file");
		}
	system("pause");
	return 0;
}