

#include <stdlib.h>

#include <stdio.h>


#define A_0 0

#define A_1 '+'

#define Q_S  0

#define Q_1  1

#define Q_2  2

#define Q_3  3


int type[] = { A_0, A_1, A_1,A_1,A_1,A_1,A_1,A_1,A_1,A_1,A_1,A_1,A_1,A_1, A_0 };

#define TYPE_SIZE ( sizeof(type)/sizeof(type[0]) )



void print_type();

void machine();





int main() {

	print_type();

	machine();

	print_type();

	system("PAUSE");
	return 0;

}



void machine() {

	int current_state = Q_1;

	int type_i = TYPE_SIZE / 2;



	for (;;) {

		if (current_state == Q_S) {

			break;

		}



		if (current_state == Q_1) {

			switch (type[type_i]) {


			case A_1:
			{

				++type_i;

				break;

			}

			case A_0: {

				current_state = Q_2;

				--type_i;

				break;

			}

			default:break;

			}

		}

		if (current_state == Q_2) {

			switch (type[type_i]) {

			case A_1:{

				current_state = Q_3;
				--type_i;
				break;
			}
			

			case A_0: {

				current_state = Q_S;

				break;

			}

			default:break;

			}

		}

		if (current_state == Q_3) {

			switch (type[type_i]) {

			case A_1: {

				current_state = Q_2;
				type[type_i] = '-';
				--type_i;
				break;
			}


			case A_0: {

				current_state = Q_S;

				break;

			}

			default:break;

			}

		}

	}

}



void print_type() {

	int i;



	for (i = 0; i < TYPE_SIZE; ++i) {

		if (type[i] == A_0)

			continue;

		fprintf(stdout, "%c", type[i]);

	}

	fprintf(stdout, "\n");

	fflush(stdout);

}