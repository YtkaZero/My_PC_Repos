#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define A_0 0
#define A_1 'a'
#define A_2 'b'

#define Q_0 0
#define Q_1 1
#define Q_2 2
#define Q_3 3
#define Q_4 4

//char mass[] = { A_0,A_1,A_2,A_1,A_2,A_2,A_2,A_1,A_1,A_1,A_2,A_1,A_1,A_1,A_1,A_1,A_1,A_1,A_2,A_0 };
char mass[] = { A_0,A_2,A_2,A_2,A_1,A_1,A_0 };

int mass_mass = (sizeof(mass) / sizeof(mass[0]));

void work()
{
	int status = Q_1;
	int i = mass_mass / 2;


	for (;;)
	{
		if (status == Q_0)
		{
			break;
		}

		if (status == Q_1)
		{
			switch (mass[i])
			{
			case A_0:
				status = Q_0;
				break;
			
			case A_1:
				status = Q_1;
				i++;
				break;
			
			case A_2:
				status = Q_2;
				i++;
				break;
			}


		}

		if (status == Q_2)
		{
			switch (mass[i])
			{
			case A_0:
				status = Q_0;
				break;

			case A_1:
				status = Q_3;
				mass[i] = A_2;
				i--;
				break;

			case A_2:
				status = Q_2;
				i++;;
				break;
			}


		}

		if (status == Q_3)
		{
			switch (mass[i])
			{
			case A_0:
				status = Q_4;
				i++;
				break;

			case A_1:
				status = Q_4;
				i++;
				break;

			case A_2:
				status = Q_3;
				i--;
				break;
			}


		}

		if (status == Q_4)
		{
			switch (mass[i])
			{
			case A_2:
				status = Q_1;
				mass[i] = A_1;
				i++;
				break;
			}


		}

	}

}

void print_type() {

	int i;



	for (i = 0; i < mass_mass; ++i) {

		if (mass[i] == A_0)

			continue;

		fprintf(stdout, "%c", mass[i]);

	}

	fprintf(stdout, "\n");

	fflush(stdout);

}

int main()
{
	print_type();

	work();

	print_type();

	system("PAUSE");
	return 0;

}