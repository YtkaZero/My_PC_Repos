#include "stdio.h"
#include "stdlib.h"
#include "locale.h"
#include "ctime"
#include "windows.h"

#define Q1 11
#define Q2 21
#define Q3 31
#define Q4 41
#define Q5 51
#define Q6 61
#define QE 99

#define D1 1
#define D2 1
#define D3 1
#define D4 1
#define D5 1
#define D6 1
#define D7 1

int conv_speed;
int State;
int Dat;
int rotor = 0;
int side[6];

int main()
{

	for (;;)
	{
		rotor = 0;
		srand(time(NULL) + 1);
		Dat = rand() % 2;
		if (Dat == 1)
		{
			if (D1 == 1)
			{
				printf("cube found, starting painting\n\n");
				State = Q1;

				while (State != 0)
				{
					switch (State)
					{

					case Q1:
						conv_speed = 0;

						while (side[0] != 1)
						{
							Sleep(5000);
							srand(time(NULL) + 1);
							Dat = rand() % 2;
							if (Dat == 1)
							{
								if (D2 == 1)
								{
									side[0] = 1;

									break;
								}
								else
								{
									State = QE;
								}
							}
							else
							{
								side[0] = 2;
							}
						}
						printf("Firts side painted,rotating\n");
						rotor = 1;
						for (int i = 0; i < 101; i += 10)
						{
							Sleep(1000);
							printf("Rotating = %d", i);
							putchar('%');
							printf("\n");
						}
						State = Q2;
						break;
					case Q2:
						while (side[1] != 1)
						{
							Sleep(5000);
							srand(time(NULL) + 1);
							Dat = rand() % 2;
							if (Dat == 1)
							{
								if (D3 == 1)
								{
									side[1] = 1;

									break;
								}
								else
								{
									State = QE;
								}
							}
							else
							{
								side[1] = 2;
							}
						}
						printf("Second side painted,rotating\n");
						rotor = 1;
						for (int i = 0; i < 101; i += 10)
						{
							Sleep(1000);
							printf("Rotating = %d", i);
							putchar('%');
							printf("\n");
						}
						State = Q3;
						break;
					case Q3:
						while (side[2] != 1)
						{
							Sleep(5000);
							srand(time(NULL) + 1);
							Dat = rand() % 2;
							if (Dat == 1)
							{
								if (D4 == 1)
								{
									side[2] = 1;

									break;
								}
								else
								{
									State = QE;
								}
							}
							else
							{
								side[2] = 2;
							}
						}
						printf("Third side painted,rotating\n");
						rotor = 1;
						for (int i = 0; i < 101; i += 10)
						{
							Sleep(1000);
							printf("Rotating = %d", i);
							putchar('%');
							printf("\n");
						}
						State = Q4;
						break;
					case Q4:
						while (side[3] != 1)
						{
							Sleep(5000);
							srand(time(NULL) + 1);
							Dat = rand() % 2;
							if (Dat == 1)
							{
								if (D5 == 1)
								{
									side[3] = 1;

									break;
								}
								else
								{
									State = QE;
								}
							}
							else
							{
								side[3] = 2;
							}
						}
						printf("4-th side painted,rotating\n");
						rotor = 2;
						for (int i = 0; i < 101; i += 10)
						{
							Sleep(1000);
							printf("Rotating = %d", i);
							putchar('%');
							printf("\n");
						}
						State = Q5;
						break;
					case Q5:
						while (side[4] != 1)
						{
							Sleep(5000);
							srand(time(NULL) + 1);
							Dat = rand() % 2;
							if (Dat == 1)
							{
								if (D6 == 1)
								{
									side[4] = 1;

									break;
								}
								else
								{
									State = QE;
								}
							}
							else
							{
								side[4] = 2;
							}
						}
						printf("5-th side painted,rotating\n");
						rotor = 2;
						for (int i = 0; i < 101; i += 10)
						{
							Sleep(1000);
							printf("Rotating = %d", i);
							putchar('%');
							printf("\n");
						}
						rotor = 2;
						for (int i = 0; i < 101; i += 10)
						{
							Sleep(1000);
							printf("Rotating = %d", i);
							putchar('%');
							printf("\n");

						}
						State = Q6;
						break;
					case Q6:
						while (side[5] != 1)
						{
							Sleep(5000);
							srand(time(NULL) + 1);
							Dat = rand() % 2;
							if (Dat == 1)
							{
								if (D7 == 1)
								{
									State = 99;
									side[5] = 1;

									break;
								}
								else
								{
									State = QE;
								}
							}
							else
							{
								side[5] = 2;
							}
						}
						printf("6-th side painted\n");
						conv_speed = 1;
						State = 0;;
						break;
					case QE:
						break;
					default:
						printf("Painting ended, releasing cube\n");
						break;
					}
				}
			}
		}
		else
		{
		
			printf("cube not found, waiting\n");
			Sleep(30000);
			printf("repeating\n\n");
		}




	}



	return 0;
}