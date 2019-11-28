#include "pch.h"
#include "stdlib.h"
#include <iostream>

using namespace std;
int car[3] = { 0,0,0 };
int Kr = 0, Kl = 0;
int dor[] = { Kl,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,Kr };
int b0[3];
int b1[3];
int b2[3];
int b3[3];
int b4[3];
int b5[3];
int b6[3];
int b7[3];
int DV1 = 0;
int DV2 = 0;
int DV3 = 0;
int O1=0, O2=0, O3=0;
int ang = 0; // угол 
int zz = 5;
int nn = 1;

int timer()
{
	int Ko = 0;
	for (int i = 0; i < 4000000; i++)
	{

	}
	return Ko;
} 

int STOP(int z)
{
	cout << "Program terminated, problem on DP" << z << endl;
	cout << "Restart system" << endl;
	return 99;
}


int move_left (int z, int *dor)
{
	int zs = z;
	while (((dor[z] != 1) & (z != 0))| (zs == z))
	{
		cout << "ML   ";
		z--;
	};
	if ((zs - z == 5)&(z != 99))
		return z;
	else
		STOP(z);
	
}

int move_right (int z,int *dor)
{
	int zs = z;
	while (((dor[z] != 1) & (z != 26)) | (zs==z))
	{
		cout << "MR   ";
		z++;
	};
	if ((z - zs == 5)&(z!=99))
		return z;
	else
		STOP(z);
}



int angle_mid()
{
	cout << "DN"<<endl;
	int k = 0;
	return k;
}

int load(int z)
{
	angle_mid();
	if (z == 10)
	{
		cout << "DV1 - Open" << endl;
		DV1 = 1;
		timer();
		DV2 = 0;
		cout << "DV1 - Close" << endl;
	}
	if (z == 15)
	{	
		cout << "DV2 - Open" << endl;
		DV2 = 1;
		timer();
		DV2 = 0;
		cout << "DV2 - Close" << endl;
	}
	if (z == 20)
	{
		cout << "DV3 - Open" << endl;
		DV3 = 1;
		timer();
		DV3 = 0;
		cout << "DV3 - Close" << endl;
	}
	return 1;
}

int angle_right()
{
	cout << "DCL"<<endl;
	int k = 1;
	return k;
}

int angle_left()
{
	cout << "DCCL"<<endl;
	int k = 2;
	return k;
}









int main()
{
	// Вей дем анН ики
	// 101 101 011 010
	// R3,R1=B5 x2 
	// R1,R2 = B3 
	// R2 = B2


	int gg = 0;
	int probe[3] = {0,0,0};
	int z=0; // номер позиции
	int ch = 0; // реакция датчика
	

	char put[3];
	int put2;
	while (gg!=4)
	{
		cout << "Enter binary code for work >> ";
		cin >> put[0] >> put[1] >> put[2];
		switch (put[0])
		{
		case '0':switch (put[1])
		{
		case '0':switch (put[2])
		{
		case '0': put2 = 0; break;
		case '1': put2 = 1; break;
		default: STOP(z);
			break;
		}break;
		case '1':switch (put[2])
		{
		case '0': put2 = 2; break;
		case '1': put2 = 3; break;
		default: STOP(z);
			break;
		}break;
		default: STOP(z);
			break;
		}break;
		case '1':switch (put[1])
		{
		case '0':switch (put[2])
		{
		case '0': put2 = 4; break;
		case '1': put2 = 5; break;
		default: STOP(z);
			break;
		}break;
		case '1':switch (put[2])
		{
		case '0': put2 = 6; break;
		case '1': put2 = 7; break;
		default: STOP(z);
			break;
		}break;
		default: STOP(z);
			break;
		}break;
		default: STOP(z);
			break;
		}
		switch (put[0])
		{
		case '1': 
		while (z != 20)
		{
			
			z = move_right(z,dor);
			if (dor[z] == 1)
			{
				dor[z] = 5;
			}
			else
			{

				goto END;
			}
			if (dor[z - zz] == 0)
			{
				dor[z - zz] = 0;
			}
			else
			{
				dor[z - zz] = nn;
			}
			
		}
		probe[0] = 1;
		load(z);
		break;
		default:
			break;
		}
		cout << endl;
		switch (put[1])
		{
		case '1': 
		
			
				while (z < 15)
				{
					z = move_right(z, dor);

					if (dor[z] == 1)
					{
						dor[z] = 5;
					}
					else
					{

						goto END;
					}
					if (dor[z - zz] == 0)
					{
						dor[z - zz] = 0;
					}
					else
					{
						dor[z - zz] = nn;
					}


				}
				while (z > 15)
				{
					z = move_left(z, dor);

					if (dor[z] == 1)
					{
						dor[z] = 5;
					}
					else
					{

						goto END;
					}
					if (dor[z - zz] == 0)
					{
						dor[z - zz] = 0;
					}
					else
					{
						dor[z + zz] = nn;
					}

				}
			
			probe[1] = 1;
			load(z);
			
			
		}
		cout << endl;

		switch (put[2])
		{
		case '1': 
			
				while (z < 10)

				{
					z = move_right(z, dor);

					if (dor[z] == 1)
					{
						dor[z] = 5;
					}
					else
					{

						goto END;
					}
					if (dor[z - zz] == 0)
					{
						dor[z - zz] = 0;
					}
					else
					{
						dor[z - zz] = nn;
					}


				}

				while (z > 10)
				{
					z = move_left(z, dor);

					if (dor[z] == 1)
					{
						dor[z] = 5;
					}
					else
					{

						goto END;
					}
					if (dor[z - zz] == 0)
					{
						dor[z - zz] = 0;
					}
					else
					{
						dor[z + zz] = nn;
					}

				}
			
			probe[2] = 1;
			load(z);
			
		}
		switch (put2)
		{
		case 0:cout << endl << "Unload in B0      " << endl; while (z > 5) z = move_left(z, dor); ang = angle_left(); if (ang == 2) while ((car[0] != 0)&(car[1] != 0)&(car[2] != 0)) { car[0]--; car[1]--; car[2]--; } ang = angle_mid(); break;
		case 1:cout << endl << "Unload in B1      " << endl; while (z > 10)  z = move_left(z, dor); while (z < 10) move_right(z, dor);  ang = angle_left(); if (ang == 2) while ((car[0] != 0)&(car[1] != 0)&(car[2] != 0)) { car[0]--; car[1]--; car[2]--; } ang = angle_mid(); break;
		case 2:cout << endl << "Unload in B2      " << endl; while (z > 15)  z = move_left(z, dor); while (z < 15) move_right(z, dor); ang = angle_left(); if (ang == 2) while ((car[0] != 0)&(car[1] != 0)&(car[2] != 0)) { car[0]--; car[1]--; car[2]--; } ang = angle_mid(); break;
		case 3:cout << endl << "Unload in B3      " << endl; while (z < 20) z = move_right(z, dor); ang = angle_left(); if (ang == 2) while ((car[0] != 0)&(car[1] != 0)&(car[2] != 0)) { car[0]--; car[1]--; car[2]--; } ang = angle_mid(); break;
		case 4:cout << endl << "Unload in B4      " << endl; while (z > 5) z = move_left(z, dor); ang = angle_right(); if (ang == 1) while ((car[0] != 0)&(car[1] != 0)&(car[2] != 0)) { car[0]--; car[1]--; car[2]--; } ang = angle_mid(); break;
		case 5:cout << endl << "Unload in B5      " << endl; while (z > 10)  z = move_left(z, dor); while(z<10) move_right(z, dor); ang = angle_right(); if (ang == 1) while ((car[0] != 0)&(car[1] != 0)&(car[2] != 0)) { car[0]--; car[1]--; car[2]--; } ang = angle_mid(); break;
		case 6:cout << endl << "Unload in B6      " << endl; while (z > 15)  z = move_left(z, dor); while (z < 15) move_right(z, dor); ang = angle_right(); if (ang == 1) while ((car[0] != 0)&(car[1] != 0)&(car[2] != 0)) { car[0]--; car[1]--; car[2]--; } ang = angle_mid(); break;
		case 7:cout << endl << "Unload in B7      " << endl; while (z < 20)  z = move_right(z, dor); ang = angle_right(); if (ang == 1) while ((car[0] != 0)&(car[1] != 0)&(car[2] != 0)) { car[0]--; car[1]--; car[2]--; } ang = angle_mid(); break;
		}
		gg++;
		cout << endl;
	}
	cout << "End of the programm" << endl;
	END:
	system("Pause");
	return 1;
}

