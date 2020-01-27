#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void razgruz(bool *a) {
	bool status1 = false;
	bool status2 = false;
	bool status3 = false;

	bool flag = true;

	if (a[0] == true && status2 == false && flag == true) {
		flag = false;
		status1 = true;
		a[0] = false;
		a[1] = true;
		printf("Погрузка на разупаковку");
	}

	if (a[1] == true && status2 == false && status1 == true && status3 == false && flag == true) {
		flag = false;
		status2 = true;
		status1 = false;
		a[1] = false;
		a[2] = true;
		printf("разупаковка");
	}

	if (a[2] == true && status3 == false && status2 == true && flag == true) {
		flag = false;
		status3 = true;
		status2 = false;
		a[2] = false;
		a[3] = true;
		printf("разгрузка с разупаковки");
	}

	flag = true;

}

void pokras(int *a) {
	bool status1 = false;
	bool status2 = false;
	bool status3 = false;



}

void pogruz(int *a) {
	bool status1 = false;
	bool status2 = false;
	bool status3 = false;

}

int main() {
	bool arr[9] = { true, false, false, false, false, false, false, false, false };

	int time = 1;
	while (time >= 0) {
		razgruz(arr);



		arr[0] = true;
		time++;
	}
	system("pause");
	return 0;
}