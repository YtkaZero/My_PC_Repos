

#include "pch.h"
#include <iostream>

using namespace std;

int perevod(char m)
{
	switch (m)
	{
	case '0': return 0; break;
	case '1': return 1; break;
	case '2': return 2; break;
	case '3': return 3; break;
	case '4': return 4; break;
	case '5': return 5; break;
	case '6': return 6; break;
	case '7': return 7; break;
	case '8': return 8; break;
	case '9': return 9; break;

	default: return 11; break;
	}
}


int main()
{

	int p1[12][12];
	int p2[12][12];
	char z1[2];
	char z2[3];
	int dl;
	int vl;
	
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			p1[i][j] = 0;
			p2[i][j] = 0;
		}
	}

	
	for (int i = 0; i < 4; i++)
	{
		int k = 0;
		for (int i = 1; i < 11; i++)
		{

			for (int j = 1; j < 11; j++)
			{
				cout << p1[i][j];
			}
			cout << "		";
			for (int j = 1; j < 11; j++)
			{
				cout << p2[i][j];
			}
			cout << endl;
		}
		cout << endl;
		cout << "Install ship size 1" << endl;
		cout << "Posittion >>" << endl;
		cout << "Hight >>";
		cin >> z1[0];
		cout << "Long >>";
		cin >> z1[1];


		vl = perevod(z1[0])+1;
		dl = perevod(z1[1])+1;
		i--;
			if (((dl < 9)&(dl > 0))&(vl < 9)&(vl > 0))
			{
				if ((p1[vl][dl] == 0)&(p1[vl][dl + 1] == 0)&(p1[vl][dl - 1] == 0)&(p1[vl + 1][dl] == 0)&(p1[vl - 1][dl] == 0)&(p1[vl + 1][dl + 1] == 0)&(p1[vl - 1][dl + 1] == 0)&(p1[vl - 1][dl - 1] == 0)&(p1[vl + 1][dl - 1] == 0))
				{
					 p1[vl][dl] = 1; i++; k++;
				}
				else
				{
					cout << "Wrong position, repeat" << endl; 
				}
				if (k == 0)
				{
					cout << "Wrong position, repeat" << endl;
				}
			}
			else
			{
				
				if ((dl == 10)&((vl < 10)&(vl > 1)))
				{
					if ((p1[vl][dl] == 0)&(p1[vl - 1][dl] == 0)&(p1[vl - 1][dl - 1] == 0)&(p1[vl][dl - 1] == 0)&(p1[vl + 1][dl - 1] == 0)&(p1[vl + 1][dl] == 0)) { p1[vl][dl] = 1; i++; k++; }
					else
					{
						cout << "Wrong position, repeat" << endl; 
					}
				}
				if ((dl == 10)&((vl == 10)))
				{
					if ((p1[vl][dl] == 0)&(p1[vl - 1][dl] == 0)&(p1[vl - 1][dl - 1] == 0)&(p1[vl][dl - 1] == 0)) { p1[vl][dl] = 1; i++; k++; }
					else
					{
						cout << "Wrong position, repeat" << endl; 
					}
				}

				if ((dl == 10)&((vl == 1)))
				{
					if ((p1[vl][dl] == 0)&(p1[vl + 1][dl] == 0)&(p1[vl][dl - 1] == 0)&(p1[vl + 1][dl - 1] == 0)) { p1[vl][dl] = 1; i++; k++; }
					else
					{
						cout << "Wrong position, repeat" << endl; 
					}
				}
				if (((dl > 1)&(dl < 10))&(vl == 1))
				{
					if ((p1[vl][dl] == 0)&(p1[vl][dl + 1] == 0)&(p1[vl][dl - 1] == 0)&(p1[vl + 1][dl] == 0)&(p1[vl + 1][dl + 1] == 0)&(p1[vl + 1][dl - 1] == 0)) { p1[vl][dl] = 1; i++; k++; }
					else
					{
						cout << "Wrong position, repeat" << endl; 
					}
				}
				if ((dl == 1)&(vl == 1))
				{
					if ((p1[vl][dl] == 0)&(p1[vl + 1][dl] == 0)&(p1[vl + 1][dl + 1] == 0)&(p1[vl][dl + 1] == 0)) { p1[vl][dl] = 1; i++; k++; }
					else
					{
						cout << "Wrong position, repeat" << endl; 
					}
				}
				if ((dl == 1)&((vl < 10)&(vl > 1)))
				{
					if ((p1[vl][dl] == 0)&(p1[vl - 1][dl] == 0)&(p1[vl - 1][dl + 1] == 0)&(p1[vl][dl + 1] == 0)&(p1[vl + 1][dl + 1] == 0)&(p1[vl + 1][dl] == 0)) {  p1[vl][dl] = 1; i++; k++; 	}
					else
					{
						cout << "Wrong position, repeat" << endl; 
					}
				}
				if ((dl == 1)&(vl == 10))
				{
					if ((p1[vl][dl] == 0)&(p1[vl - 1][dl] == 0)&(p1[vl - 1][dl + 1] == 0)&(p1[vl][dl + 1] == 0)) { p1[vl][dl] = 1; i++; k++; }
					else
					{
						cout << "Wrong position, repeat" << endl; 
					}
				}

				if (((dl > 1)&(dl < 10))&(vl == 10))
				{
					if ((p1[vl][dl] == 0)&(p1[vl][dl + 1] == 0)&(p1[vl][dl - 1] == 0)&(p1[vl - 1][dl] == 0)&(p1[vl - 1][dl + 1] == 0)&(p1[vl - 1][dl - 1] == 0)) { p1[vl][dl] = 1; i++; k++; }
					else
					{
						cout << "Wrong position, repeat" << endl; 
					}
				}
				if (k == 0)
				{
					cout << "Wrong position, repeat" << endl;
				}
			}
			system("pause");
			system("CLS");
	}
	cout << endl << endl;
	for (int i = 0; i < 3; i++)
	{
		int k = 0;
		for (int i = 1; i < 11; i++)
		{

			for (int j = 1; j < 11; j++)
			{
				cout << p1[i][j];
			}
			cout << "		";
			for (int j = 1; j < 11; j++)
			{
				cout << p2[i][j];
			}
			cout << endl;
		}
		cout << endl;
		cout << "Install ship size 2" << endl;
		cout << "Posittion >>" << endl;
		cout << "Hight >>";
		cin >> z2[0];
		cout << "Long >>";
		cin >> z2[1];
		vl = perevod(z2[0]) + 1;
		dl = perevod(z2[1]) + 1;
		i--;
		if (((dl < 10)&(dl > 1))&(vl < 10)&(vl > 1))
		{
			cout << "Direction:" << endl << "1) Up" << endl << "2) Down" << endl << "3) Right" << endl << "4) Left" << endl << ">>";
			cin >> z2[2];
			switch (z2[2])
			{
			case '1': if ((p1[vl][dl] == 0) &(p1[vl+1][dl] == 0) & (p1[vl-1][dl] == 0) & (p1[vl-2][dl] == 0) &(p1[vl][dl-1] == 0) &(p1[vl+1][dl-1] == 0) & (p1[vl - 1][dl-1] == 0) & (p1[vl - 2][dl-1] == 0) &(p1[vl][dl+1] == 0) &(p1[vl+1][dl+1] == 0) & (p1[vl - 1][dl+1] == 0) & (p1[vl - 2][dl+1] == 0)) { p1[vl][dl] = 2; p1[vl - 1][dl] = 2; i++; k++;
			}
					  else { cout << "Wrong direction, repeat full";  } break;
			case '2': if ((p1[vl][dl] == 0) & (p1[vl+1][dl] == 0) &(p1[vl+2][dl] == 0) &(p1[vl-1][dl] == 0) &(p1[vl][dl-1] == 0) & (p1[vl + 1][dl-1] == 0) &(p1[vl + 2][dl-1] == 0) &(p1[vl - 1][dl-1] == 0)&(p1[vl][dl+1] == 0) & (p1[vl + 1][dl+1] == 0) &(p1[vl + 2][dl+1] == 0) &(p1[vl - 1][dl+1] == 0)) {p1[vl][dl] = 2; p1[vl + 1][dl] = 2; i++; k++;
			}
					  else { cout << "Wrong direction, repeat full";  } break;
			case '3': if ((p1[vl - 1][dl] == 0) & (p1[vl][dl] == 0) &(p1[vl - 1][dl - 1] == 0) & (p1[vl][dl - 1] == 0) & (p1[vl + 1][dl - 1] == 0) & (p1[vl + 1][dl] == 0) & (p1[vl + 1][dl + 1] == 0) & (p1[vl][dl + 1] == 0) & (p1[vl - 1][dl + 1] == 0)& (p1[vl - 1][dl + 2] == 0) & (p1[vl][dl+2] == 0)) { p1[vl][dl] = 2; p1[vl][dl + 1] = 2; i++; k++;
			}
					  else { cout << "Wrong direction, repeat full";  }break;
			case '4': if ((p1[vl - 1][dl] == 0) & (p1[vl][dl] == 0) &(p1[vl - 1][dl - 1] == 0) & (p1[vl][dl - 1] == 0) & (p1[vl + 1][dl - 1] == 0) & (p1[vl + 1][dl] == 0) & (p1[vl + 1][dl + 1] == 0) & (p1[vl][dl + 1] == 0) & (p1[vl - 1][dl + 1] == 0)& (p1[vl - 1][dl - 2] == 0) & (p1[vl][dl-2] == 0)) { p1[vl][dl] = 2; p1[vl][dl - 1] = 2; i++; k++;
			}
					  else { cout << "Wrong direction, repeat full";  }break;
			default: cout << "Wrong number, repeat full" << endl; 
				break;
			}
			if (k == 0)
			{
				cout << "Wrong position, repeat" << endl;
			}
		}
		else
		{
			if ((dl == 10)&((vl < 10)&(vl > 1)))
			{
				cout << "Direction:" << endl << "1) Up" << endl << "2) Down" << endl << "3) Left" << endl << ">>";
				cin >> z2[2];
				switch (z2[2])
				{
				case '1': if ((p1[vl - 1][dl] == 0) & (p1[vl][dl] == 0) &(p1[vl - 1][dl - 1] == 0) & (p1[vl][dl - 1] == 0) & (p1[vl + 1][dl - 1] == 0) & (p1[vl + 1][dl] == 0) & (p1[vl + 1][dl + 1] == 0) & (p1[vl][dl + 1] == 0) & (p1[vl - 1][dl + 1] == 0)& (p1[vl - 2][dl + 1] == 0) & (p1[vl - 2][dl] == 0) & (p1[vl - 2][dl - 1]) == 0) { p1[vl][dl] = 2; p1[vl - 1][dl] = 2; i++; k++;
				}
						  else { cout << "Wrong direction, repeat full";  } break;
				case '2': if ((p1[vl - 1][dl] == 0) & (p1[vl][dl] == 0) &(p1[vl - 1][dl - 1] == 0) & (p1[vl][dl - 1] == 0) & (p1[vl + 1][dl - 1] == 0) & (p1[vl + 1][dl] == 0) & (p1[vl + 1][dl + 1] == 0) & (p1[vl][dl + 1] == 0) & (p1[vl - 1][dl + 1] == 0)& (p1[vl + 2][dl + 1] == 0) & (p1[vl + 2][dl] == 0) & (p1[vl + 2][dl - 1]) == 0)
				{
					p1[vl][dl] = 2; p1[vl + 1][dl] = 2; i++; k++;
				}
						  else { cout << "Wrong direction, repeat full";  } break;
				case '3': if ((p1[vl - 1][dl] == 0) & (p1[vl][dl] == 0) &(p1[vl - 1][dl - 1] == 0) & (p1[vl][dl - 1] == 0) & (p1[vl + 1][dl - 1] == 0) & (p1[vl + 1][dl] == 0) & (p1[vl + 1][dl + 1] == 0) & (p1[vl][dl + 1] == 0) & (p1[vl - 1][dl + 1] == 0)& (p1[vl - 1][dl - 2] == 0) & (p1[vl][dl - 2] == 0) & (p1[vl - 2][dl - 1]) == 0)
				{
					p1[vl][dl] = 2; p1[vl][dl - 1] = 2; i++; k++;
				}
						  else { cout << "Wrong direction, repeat full";  }break;
				default: cout << "Wrong number, repeat full" << endl; 
					break;
				}
			}
			if ((dl == 10)&((vl == 10)))
			{
				cout << "Direction:" << endl << "1) Up" << endl << "2) Left" << endl << ">>";
				cin >> z2[2];
				switch (z2[2])
				{
				case '1': if ((p1[vl - 1][dl] == 0) & (p1[vl][dl] == 0) &(p1[vl - 1][dl - 1] == 0) & (p1[vl][dl - 1] == 0)  & (p1[vl - 2][dl] == 0) & (p1[vl - 2][dl - 1] == 0))
				{
					p1[vl][dl] = 2; p1[vl - 1][dl] = 2; i++; k++;
				}
						  else { cout << "Wrong direction, repeat full";  } break;
				case '2': if ((p1[vl][dl] == 0)& (p1[vl][dl - 1] == 0)& (p1[vl][dl - 2] == 0)& (p1[vl - 1][dl] == 0)& (p1[vl - 1][dl - 1] == 0)& (p1[vl - 1][dl - 2] == 0)) { p1[vl][dl] = 2; p1[vl][dl - 1] = 2; i++; k++;
				}
						  else { cout << "Wrong direction, repeat full";  }break;
				default: cout << "Wrong number, repeat full" << endl; 
					break;
				}
			}

			if ((dl == 10)&((vl == 1)))
			{
				cout << "Direction:" << endl << "1) Down" << endl << "2) Left" << endl << ">>";
				cin >> z2[2];
				switch (z2[2])
				{
				case '1': if ((p1[vl][dl] == 0) & (p1[vl + 1][dl] == 0) & (p1[vl + 2][vl] == 0) & (p1[vl][dl - 1] == 0) & (p1[vl + 1][dl - 1] == 0) & (p1[vl + 2][dl - 1] == 0)) { p1[vl][dl] = 2; p1[vl + 1][dl] = 2; i++; k++;
				}
						  else { cout << "Wrong direction, repeat full";  } break;
				case '2': if ((p1[vl][dl] == 0) & (p1[vl][dl - 1] == 0) & (p1[vl][dl - 2] == 0)& (p1[vl + 1][dl] == 0)& (p1[vl + 1][dl - 1] == 0)& (p1[vl + 1][dl - 2] == 0)) { p1[vl][dl] = 2; p1[vl][dl - 1] = 2; i++; k++;
				}
						  else { cout << "Wrong direction, repeat full";  }break;
				default: cout << "Wrong number, repeat full" << endl; 
					break;
				}
			}
			if (((dl > 1)&(dl < 10))&(vl == 1))
			{
				cout << "Direction:" << endl << "1) Down" << endl << "2) Right" << endl << "3) Left" << endl << ">>";
				cin >> z2[2];
				switch (z2[2])
				{
				case '1': if ((p1[vl][dl] == 0)&(p1[vl + 1][dl] == 0)&(p1[vl + 2][dl] == 0)&(p1[vl][dl - 1] == 0)&(p1[vl + 1][dl - 1] == 0)&(p1[vl + 2][dl - 1] == 0)&(p1[vl][dl + 1] == 0)&(p1[vl + 1][dl + 1] == 0)&(p1[vl + 2][dl + 1] == 0)) { p1[vl][dl] = 2; p1[vl + 1][dl] = 2; i++; k++;
				}
						  else { cout << "Wrong direction, repeat full";  } break;
				case '2': if ((p1[vl][dl] == 0)&(p1[vl][dl + 1] == 0)&(p1[vl][dl - 1] == 0)&(p1[vl + 1][dl] == 0)&(p1[vl + 1][dl + 1] == 0)&(p1[vl + 1][dl - 1] == 0)&(p1[vl][dl + 2] == 0)&(p1[vl + 1][dl + 2] == 0)) { p1[vl][dl] = 2; p1[vl][dl + 1] = 2; i++; k++;
				}
						  else { cout << "Wrong direction, repeat full";  }break;
				case '3': if ((p1[vl][dl] == 0)&(p1[vl][dl - 1] == 0)&(p1[vl][dl - 2] == 0)&(p1[vl + 1][dl] == 0)&(p1[vl + 1][dl - 1] == 0)&(p1[vl + 1][dl - 2] == 0)&(p1[vl][dl + 1] == 0)&(p1[vl + 1][dl + 1] == 0)) { p1[vl][dl] = 2; p1[vl][dl - 1] = 2; i++; k++;
				}
						  else { cout << "Wrong direction, repeat full";  }break;
				default: cout << "Wrong number, repeat full" << endl; 
					break;
				}
			}
			if ((dl == 1)&(vl == 1))
			{
				cout << "Direction:" << endl << "1) Down" << endl << "2) Right" << endl << ">>";
				cin >> z2[2];
				switch (z2[2])
				{
				case '1': if ((p1[vl - 1][dl] == 0) & (p1[vl][dl] == 0) & (p1[vl + 1][dl] == 0) & (p1[vl + 1][dl + 1] == 0) & (p1[vl][dl + 1] == 0) & (p1[vl - 1][dl + 1] == 0)) { p1[vl][dl] = 2; p1[vl + 1][dl] = 2; i++; k++;
				}
						  else { cout << "Wrong direction, repeat full";  } break;
				case '2': if ((p1[vl][dl] == 0)&(p1[vl][dl + 1] == 0)&(p1[vl][dl + 2] == 0)&(p1[vl + 1][dl] == 0)&(p1[vl + 1][dl + 1] == 0)&(p1[vl + 1][dl + 2] == 0)) { p1[vl][dl] = 2; p1[vl][dl + 1] = 2; i++; k++;
				}
						  else { cout << "Wrong direction, repeat full";  }break;
				default: cout << "Wrong number, repeat full" << endl; 
					break;
				}
			}
			if ((dl == 1)&((vl < 10)&(vl > 1)))
			{
				cout << "Direction:" << endl << "1) Up" << endl << "2) Down" << endl << "3) Right" << endl << ">>";
				cin >> z2[2];
				switch (z2[2])
				{
				case '1': if ((p1[vl - 1][dl - 1] == 0) & (p1[vl][dl - 1] == 0) & (p1[vl + 1][dl - 1] == 0) & (p1[vl + 1][dl] == 0) & (p1[vl + 1][dl + 1] == 0) & (p1[vl][dl + 1] == 0) & (p1[vl - 1][dl + 1] == 0)& (p1[vl - 2][dl + 1] == 0)  & (p1[vl - 2][dl - 1]) == 0) { p1[vl][dl] = 2; p1[vl - 1][dl] = 2; i++; k++;
				}
						  else { cout << "Wrong direction, repeat full";  } break;
				case '2': if ((p1[vl - 1][dl - 1] == 0) & (p1[vl][dl - 1] == 0) & (p1[vl + 1][dl - 1] == 0) & (p1[vl + 1][dl] == 0) & (p1[vl + 1][dl + 1] == 0) & (p1[vl][dl + 1] == 0) & (p1[vl - 1][dl + 1] == 0)& (p1[vl + 2][dl + 1] == 0)  & (p1[vl + 2][dl - 1]) == 0) { p1[vl][dl] = 2; p1[vl + 1][dl] = 2; i++; k++;
				}
						  else { cout << "Wrong direction, repeat full";  } break;
				case '3': if ((p1[vl - 1][dl - 1] == 0) & (p1[vl][dl - 1] == 0) & (p1[vl + 1][dl - 1] == 0) & (p1[vl + 1][dl] == 0) & (p1[vl + 1][dl + 1] == 0) & (p1[vl][dl + 1] == 0) & (p1[vl - 1][dl + 1] == 0)& (p1[vl - 1][dl + 2] == 0)  & (p1[vl - 2][dl - 1]) == 0) { p1[vl][dl] = 2; p1[vl][dl + 1] = 2; i++; k++;
				}
						  else { cout << "Wrong direction, repeat full";  }break;
				default: cout << "Wrong number, repeat full" << endl; 
					break;
				}
			}
			if ((dl == 1)&(vl == 10))
			{
				cout << "Direction:" << endl << "1) Up" << endl << "2) Right" << endl << ">>";
				cin >> z2[2];
				switch (z2[2])
				{
				case '1': if ((p1[vl][dl] == 0)&(p1[vl - 1][dl] == 0)&(p1[vl - 2][dl] == 0)&(p1[vl][dl + 1] == 0)&(p1[vl - 1][dl + 1] == 0)&(p1[vl - 2][dl + 1] == 0)) { p1[vl][dl] = 2; p1[vl - 1][dl] = 2; i++; k++;
				}
						  else { cout << "Wrong direction, repeat full";  } break;
				case '2': if ((p1[vl][dl] == 0)&(p1[vl][dl + 1] == 0)&(p1[vl][dl + 2] == 0)&(p1[vl - 1][dl] == 0)&(p1[vl - 1][dl + 1] == 0)&(p1[vl - 1][dl + 2] == 0)) { p1[vl][dl] = 2; p1[vl][dl + 1] = 2; i++; k++;
				}
						  else { cout << "Wrong direction, repeat full";  }break;
				default: cout << "Wrong number, repeat full" << endl; 
					break;
				}
			}
			if (((dl > 1)&(dl < 10))&(vl == 10))
			{
				cout << "Direction:" << endl << "1) Up" << endl << "2) Right" << endl << "3) Left" << endl << ">>";
				cin >> z2[2];
				switch (z2[2])
				{
				case '1': if ((p1[vl][dl] == 0)&(p1[vl - 1][dl] == 0)&(p1[vl - 2][dl] == 0)&(p1[vl][dl + 1] == 0)&(p1[vl - 1][dl + 1] == 0)&(p1[vl - 2][dl + 1] == 0)&(p1[vl][dl - 1] == 0)&(p1[vl - 1][dl - 1] == 0)&(p1[vl - 2][dl - 1] == 0)) { p1[vl][dl] = 2; p1[vl - 1][dl] = 2; i++; k++;
				}
						  else { cout << "Wrong direction, repeat full";  } break;
				case '2': if ((p1[vl][dl] == 0)&(p1[vl][dl + 1] == 0)&(p1[vl][dl + 2] == 0)&(p1[vl - 1][dl] == 0)&(p1[vl - 1][dl + 1] == 0)&(p1[vl - 1][dl + 2] == 0)&(p1[vl][dl - 1] == 0)&(p1[vl - 1][dl - 1] == 0)) { p1[vl][dl] = 2; p1[vl][dl + 1] = 2; i++; k++;
				}
						  else { cout << "Wrong direction, repeat full";  }break;
				case '3': if ((p1[vl][dl] == 0)&(p1[vl][dl - 1] == 0)&(p1[vl][dl - 2] == 0)&(p1[vl - 1][dl] == 0)&(p1[vl - 1][dl - 1] == 0)&(p1[vl - 1][dl - 2] == 0)&(p1[vl][dl + 1] == 0)&(p1[vl - 1][dl + 1] == 0)) { p1[vl][dl] = 2; p1[vl][dl - 1] = 2; i++; k++;
				}
						  else { cout << "Wrong direction, repeat full";  }break;
				default: cout << "Wrong number, repeat full" << endl; 
					break;
				}
			}
			if (k == 0)
			{
				cout << "Wrong position, repeat" << endl;
			}
		}
		system("pause");
		system("CLS");
	}
	
	for (int i = 0; i < 2; i++)
	{
		int k = 0;
		for (int i = 1; i < 11; i++)
		{

			for (int j = 1; j < 11; j++)
			{
				cout << p1[i][j];
			}
			cout << "		";
			for (int j = 1; j < 11; j++)
			{
				cout << p2[i][j];
			}
			cout << endl;
		}
		cout << endl;
		cout << endl << "Install ship size 3" << endl;
		cout << "Posittion >>" << endl;
		cout << "Hight >>";
		cin >> z2[0];
		cout << "Long >>";
		cin >> z2[1];
		vl = perevod(z2[0])+1;
		dl = perevod(z2[1])+1;
		i--;
		if (((dl < 9)&(dl > 2))&(vl < 9)&(vl > 2))
		{
			cout << "Direction:" << endl << "1) Up" << endl << "2) Down" << endl << "3) Right" << endl << "4) Left" << endl << ">>";
			cin >> z2[2];

			switch (z2[2])
			{
			case '1': if ((p1[vl][dl] == 0) &(p1[vl+1][dl] == 0) & (p1[vl-1][dl] == 0) & (p1[vl-2][dl] == 0) &(p1[vl-3][dl] == 0) &(p1[vl][dl-1] == 0) &(p1[vl + 1][dl-1] == 0) & (p1[vl - 1][dl-1] == 0) & (p1[vl - 2][dl-1] == 0) &(p1[vl - 3][dl-1] == 0) &(p1[vl][dl+1] == 0) &(p1[vl + 1][dl+1] == 0) & (p1[vl - 1][dl+1] == 0) & (p1[vl - 2][dl+1] == 0) &(p1[vl - 3][dl+1] == 0) ) { p1[vl][dl] = 3; p1[vl - 1][dl] = 3; p1[vl - 2][dl] = 3; i++; k++;
			}
					  else { cout << "Wrong direction, repeat installing";  } break;
			case '2': if ((p1[vl][dl] == 0) &(p1[vl-1][dl] == 0) &(p1[vl+1][dl] == 0) &(p1[vl+2][dl] == 0) &(p1[vl+3][dl] == 0) & (p1[vl][dl-1] == 0) &(p1[vl - 1][dl-1] == 0) &(p1[vl + 1][dl-1] == 0) &(p1[vl + 2][dl-1] == 0) &(p1[vl + 3][dl-1] == 0) &(p1[vl][dl+1] == 0) &(p1[vl - 1][dl+1] == 0) &(p1[vl + 1][dl+1] == 0) &(p1[vl + 2][dl+1] == 0) &(p1[vl + 3][dl+1] == 0) ) { p1[vl][dl] = 3; p1[vl + 1][dl] = 3; p1[vl + 2][dl] = 3; i++; k++;
			}
					  else { cout << "Wrong direction, repeat installing";  } break;
			case '3': if ((p1[vl][dl] == 0) & (p1[vl][dl-1] == 0) &(p1[vl][dl+1] == 0) & (p1[vl][dl+2] == 0) &(p1[vl][dl+3] == 0) &(p1[vl-1][dl] == 0) & (p1[vl-1][dl - 1] == 0) &(p1[vl-1][dl + 1] == 0) &(p1[vl-1][dl + 2] == 0) &(p1[vl-1][dl + 3] == 0) &(p1[vl+1][dl] == 0) & (p1[vl+1][dl - 1] == 0) &(p1[vl+1][dl + 1] == 0) &(p1[vl+1][dl + 2] == 0) &(p1[vl+1][dl + 3] == 0)) { p1[vl][dl] = 3; p1[vl][dl + 1] = 3; p1[vl][dl + 2] = 3; i++; k++;
			}
					  else { cout << "Wrong direction, repeat installing";  }break;
			case '4': if ((p1[vl][dl] == 0) & (p1[vl][dl + 1] == 0) &(p1[vl][dl - 1] == 0) & (p1[vl][dl - 2] == 0) & (p1[vl][dl - 3] == 0) &(p1[vl-1][dl] == 0) & (p1[vl-1][dl + 1] == 0) &(p1[vl-1][dl - 1] == 0) & (p1[vl-1][dl - 2] == 0) &(p1[vl-1][dl - 3] == 0) &(p1[vl+1][dl] == 0) & (p1[vl+1][dl + 1] == 0) &(p1[vl+1][dl - 1] == 0) & (p1[vl+1][dl - 2] == 0) &(p1[vl+1][dl - 3] == 0) ) { p1[vl][dl] = 3; p1[vl][dl - 1] = 3; p1[vl][dl - 2] = 3; i++; k++;
			}
					  else { cout << "Wrong direction, repeat installing";  }break;
			default: cout << "Wrong number, repeat installing" << endl; 
				break;
			}
			if (k == 0)
			{
				cout << "Wrong position, repeat" << endl;
			}
		}
		else
		{

			if ((dl >= 9)&((vl < 9)&(vl > 2)))
			{
				cout << "Direction:" << endl << "1) Up" << endl << "2) Down" << endl << "3) Left" << endl << ">>";
				cin >> z2[2];
				switch (z2[2])
				{
				case '1': if ((p1[vl][dl] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl - 1][dl] == 0) & (p1[vl - 2][dl] == 0) &(p1[vl - 3][dl] == 0) &(p1[vl][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) & (p1[vl - 1][dl - 1] == 0) & (p1[vl - 2][dl - 1] == 0) &(p1[vl - 3][dl - 1] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) & (p1[vl - 1][dl + 1] == 0) & (p1[vl - 2][dl + 1] == 0) &(p1[vl - 3][dl + 1] == 0)) {
					p1[vl][dl] = 3; p1[vl - 1][dl] = 3; p1[vl - 2][dl] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing"; } break;
				case '2': if ((p1[vl][dl] == 0) &(p1[vl - 1][dl] == 0) &(p1[vl + 1][dl] == 0) &(p1[vl + 2][dl] == 0) &(p1[vl + 3][dl] == 0) & (p1[vl][dl - 1] == 0) &(p1[vl - 1][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) &(p1[vl + 2][dl - 1] == 0) &(p1[vl + 3][dl - 1] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl + 2][dl + 1] == 0) &(p1[vl + 3][dl + 1] == 0)) {
					p1[vl][dl] = 3; p1[vl + 1][dl] = 3; p1[vl + 2][dl] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing"; } break;
				case '3': if ((p1[vl][dl] == 0) & (p1[vl][dl + 1] == 0) &(p1[vl][dl - 1] == 0) & (p1[vl][dl - 2] == 0) & (p1[vl][dl - 3] == 0) &(p1[vl - 1][dl] == 0) & (p1[vl - 1][dl + 1] == 0) &(p1[vl - 1][dl - 1] == 0) & (p1[vl - 1][dl - 2] == 0) &(p1[vl - 1][dl - 3] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl + 1] == 0) &(p1[vl + 1][dl - 1] == 0) & (p1[vl + 1][dl - 2] == 0) &(p1[vl + 1][dl - 3] == 0)) {
					p1[vl][dl] = 3; p1[vl][dl - 1] = 3; p1[vl][dl - 2] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing"; }break;
				default: cout << "Wrong number, repeat full" << endl; 
					break;
				}
			}
			if ((dl >= 9)&((vl >= 9)))
			{
				cout << "Direction:" << endl << "1) Up" << endl << "2) Left" << endl << ">>";
				cin >> z2[2];
				switch (z2[2])
				{
				case '1': if ((p1[vl][dl] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl - 1][dl] == 0) & (p1[vl - 2][dl] == 0) &(p1[vl - 3][dl] == 0) &(p1[vl][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) & (p1[vl - 1][dl - 1] == 0) & (p1[vl - 2][dl - 1] == 0) &(p1[vl - 3][dl - 1] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) & (p1[vl - 1][dl + 1] == 0) & (p1[vl - 2][dl + 1] == 0) &(p1[vl - 3][dl + 1] == 0)) { p1[vl][dl] = 3; p1[vl - 1][dl] = 3; p1[vl - 2][dl] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing";  } break;
				case '2': if ((p1[vl][dl] == 0) & (p1[vl][dl + 1] == 0) &(p1[vl][dl - 1] == 0) & (p1[vl][dl - 2] == 0) & (p1[vl][dl - 3] == 0) &(p1[vl - 1][dl] == 0) & (p1[vl - 1][dl + 1] == 0) &(p1[vl - 1][dl - 1] == 0) & (p1[vl - 1][dl - 2] == 0) &(p1[vl - 1][dl - 3] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl + 1] == 0) &(p1[vl + 1][dl - 1] == 0) & (p1[vl + 1][dl - 2] == 0) &(p1[vl + 1][dl - 3] == 0)) { p1[vl][dl] = 3; p1[vl][dl - 1] = 3; p1[vl][dl - 2] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing";  }break;
				default: cout << "Wrong number, repeat full" << endl; 
					break;
				}
			}

			if ((dl >= 9)&((vl <= 2)))
			{
				cout << "Direction:" << endl << "1) Down" << endl << "2) Left" << endl << ">>";
				cin >> z2[2];
				switch (z2[2])
				{
				case '1': if ((p1[vl][dl] == 0) &(p1[vl - 1][dl] == 0) &(p1[vl + 1][dl] == 0) &(p1[vl + 2][dl] == 0) &(p1[vl + 3][dl] == 0) & (p1[vl][dl - 1] == 0) &(p1[vl - 1][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) &(p1[vl + 2][dl - 1] == 0) &(p1[vl + 3][dl - 1] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl + 2][dl + 1] == 0) &(p1[vl + 3][dl + 1] == 0)) { p1[vl][dl] = 3; p1[vl + 1][dl] = 3; p1[vl + 2][dl] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing";  } break;
				case '2': if ((p1[vl][dl] == 0) & (p1[vl][dl + 1] == 0) &(p1[vl][dl - 1] == 0) & (p1[vl][dl - 2] == 0) & (p1[vl][dl - 3] == 0) &(p1[vl - 1][dl] == 0) & (p1[vl - 1][dl + 1] == 0) &(p1[vl - 1][dl - 1] == 0) & (p1[vl - 1][dl - 2] == 0) &(p1[vl - 1][dl - 3] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl + 1] == 0) &(p1[vl + 1][dl - 1] == 0) & (p1[vl + 1][dl - 2] == 0) &(p1[vl + 1][dl - 3] == 0)) { p1[vl][dl] = 3; p1[vl][dl - 1] = 3; p1[vl][dl - 2] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing";  }break;
				default: cout << "Wrong number, repeat full" << endl; 
					break;
				}
			}
			if (((dl > 2)&(dl < 9))&(vl <= 2))
			{
				cout << "Direction:" << endl << "1) Down" << endl << "2) Right" << endl << "3) Left" << endl << ">>";
				cin >> z2[2];
				switch (z2[2])
				{
				case '1': if ((p1[vl][dl] == 0) &(p1[vl - 1][dl] == 0) &(p1[vl + 1][dl] == 0) &(p1[vl + 2][dl] == 0) &(p1[vl + 3][dl] == 0) & (p1[vl][dl - 1] == 0) &(p1[vl - 1][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) &(p1[vl + 2][dl - 1] == 0) &(p1[vl + 3][dl - 1] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl + 2][dl + 1] == 0) &(p1[vl + 3][dl + 1] == 0)) { p1[vl][dl] = 3; p1[vl + 1][dl] = 3; p1[vl + 2][dl] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing";  } break;
				case '2': if ((p1[vl][dl] == 0) & (p1[vl][dl - 1] == 0) &(p1[vl][dl + 1] == 0) & (p1[vl][dl + 2] == 0) &(p1[vl][dl + 3] == 0) &(p1[vl - 1][dl] == 0) & (p1[vl - 1][dl - 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl - 1][dl + 2] == 0) &(p1[vl - 1][dl + 3] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl - 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl + 1][dl + 2] == 0) &(p1[vl + 1][dl + 3] == 0)) { p1[vl][dl] = 3; p1[vl][dl + 1] = 3; p1[vl][dl + 2] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing";  }break;
				case '3': if ((p1[vl][dl] == 0) & (p1[vl][dl + 1] == 0) &(p1[vl][dl - 1] == 0) & (p1[vl][dl - 2] == 0) & (p1[vl][dl - 3] == 0) &(p1[vl - 1][dl] == 0) & (p1[vl - 1][dl + 1] == 0) &(p1[vl - 1][dl - 1] == 0) & (p1[vl - 1][dl - 2] == 0) &(p1[vl - 1][dl - 3] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl + 1] == 0) &(p1[vl + 1][dl - 1] == 0) & (p1[vl + 1][dl - 2] == 0) &(p1[vl + 1][dl - 3] == 0)) { p1[vl][dl] = 3; p1[vl][dl - 1] = 3; p1[vl][dl - 2] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing";  }break;
				default: cout << "Wrong number, repeat full" << endl; 
					break;
				}
			}
			if ((dl >= 9)&(vl <= 2))
			{
				cout << "Direction:" << endl << "1) Down" << endl << "2) Right" << endl << "3) Left" << endl << ">>";
				cin >> z2[2];
				switch (z2[2])
				{
				case '1': if ((p1[vl][dl] == 0) &(p1[vl - 1][dl] == 0) &(p1[vl + 1][dl] == 0) &(p1[vl + 2][dl] == 0) &(p1[vl + 3][dl] == 0) & (p1[vl][dl - 1] == 0) &(p1[vl - 1][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) &(p1[vl + 2][dl - 1] == 0) &(p1[vl + 3][dl - 1] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl + 2][dl + 1] == 0) &(p1[vl + 3][dl + 1] == 0)) {
					p1[vl][dl] = 3; p1[vl + 1][dl] = 3; p1[vl + 2][dl] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing"; } break;
				case '3': if ((p1[vl][dl] == 0) & (p1[vl][dl + 1] == 0) &(p1[vl][dl - 1] == 0) & (p1[vl][dl - 2] == 0) & (p1[vl][dl - 3] == 0) &(p1[vl - 1][dl] == 0) & (p1[vl - 1][dl + 1] == 0) &(p1[vl - 1][dl - 1] == 0) & (p1[vl - 1][dl - 2] == 0) &(p1[vl - 1][dl - 3] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl + 1] == 0) &(p1[vl + 1][dl - 1] == 0) & (p1[vl + 1][dl - 2] == 0) &(p1[vl + 1][dl - 3] == 0)) {
					p1[vl][dl] = 3; p1[vl][dl - 1] = 3; p1[vl][dl - 2] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing"; }break;
				default: cout << "Wrong number, repeat full" << endl;
					break;
				}
			}
			if ((dl<=2)&(vl <= 2))
			{
				cout << "Direction:" << endl << "1) Down" << endl << "2) Left" << endl << ">>";
				cin >> z2[2];
				switch (z2[2])
				{
				case '1': if ((p1[vl][dl] == 0) &(p1[vl - 1][dl] == 0) &(p1[vl + 1][dl] == 0) &(p1[vl + 2][dl] == 0) &(p1[vl + 3][dl] == 0) & (p1[vl][dl - 1] == 0) &(p1[vl - 1][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) &(p1[vl + 2][dl - 1] == 0) &(p1[vl + 3][dl - 1] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl + 2][dl + 1] == 0) &(p1[vl + 3][dl + 1] == 0)) {
					p1[vl][dl] = 3; p1[vl + 1][dl] = 3; p1[vl + 2][dl] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing"; } break;
				case '2': if ((p1[vl][dl] == 0) & (p1[vl][dl - 1] == 0) &(p1[vl][dl + 1] == 0) & (p1[vl][dl + 2] == 0) &(p1[vl][dl + 3] == 0) &(p1[vl - 1][dl] == 0) & (p1[vl - 1][dl - 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl - 1][dl + 2] == 0) &(p1[vl - 1][dl + 3] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl - 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl + 1][dl + 2] == 0) &(p1[vl + 1][dl + 3] == 0)) {
					p1[vl][dl] = 3; p1[vl][dl + 1] = 3; p1[vl][dl + 2] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing"; }break;
				default: cout << "Wrong number, repeat full" << endl;
					break;
				}
			}
			if ((dl <= 2)&((vl < 9)&(vl > 2)))
			{
				cout << "Direction:" << endl << "1) Up" << endl << "2) Down" << endl << "3) Right" << endl << ">>";
				cin >> z2[2];
				switch (z2[2])
				{
				case '1': if ((p1[vl][dl] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl - 1][dl] == 0) & (p1[vl - 2][dl] == 0) &(p1[vl - 3][dl] == 0) &(p1[vl][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) & (p1[vl - 1][dl - 1] == 0) & (p1[vl - 2][dl - 1] == 0) &(p1[vl - 3][dl - 1] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) & (p1[vl - 1][dl + 1] == 0) & (p1[vl - 2][dl + 1] == 0) &(p1[vl - 3][dl + 1] == 0)) { p1[vl][dl] = 3; p1[vl - 1][dl] = 3; p1[vl - 2][dl] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing";  } break;
				case '2': if ((p1[vl][dl] == 0) &(p1[vl - 1][dl] == 0) &(p1[vl + 1][dl] == 0) &(p1[vl + 2][dl] == 0) &(p1[vl + 3][dl] == 0) & (p1[vl][dl - 1] == 0) &(p1[vl - 1][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) &(p1[vl + 2][dl - 1] == 0) &(p1[vl + 3][dl - 1] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl + 2][dl + 1] == 0) &(p1[vl + 3][dl + 1] == 0)) { p1[vl][dl] = 3; p1[vl + 1][dl] = 3; p1[vl + 2][dl] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing";  } break;
				case '3': if ((p1[vl][dl] == 0) & (p1[vl][dl - 1] == 0) &(p1[vl][dl + 1] == 0) & (p1[vl][dl + 2] == 0) &(p1[vl][dl + 3] == 0) &(p1[vl - 1][dl] == 0) & (p1[vl - 1][dl - 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl - 1][dl + 2] == 0) &(p1[vl - 1][dl + 3] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl - 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl + 1][dl + 2] == 0) &(p1[vl + 1][dl + 3] == 0)) { p1[vl][dl] = 3; p1[vl][dl + 1] = 3; p1[vl][dl + 2] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing";  }break;
				default: cout << "Wrong number, repeat full" << endl; 
					break;
				}
			}
			if ((dl <= 2)&(vl <= 2))
			{
				cout << "Direction:" << endl << "1) Down" << endl << "2) Right" << endl << ">>";
				cin >> z2[2];
				switch (z2[2])
				{
				case '2': if ((p1[vl][dl] == 0) &(p1[vl - 1][dl] == 0) &(p1[vl + 1][dl] == 0) &(p1[vl + 2][dl] == 0) &(p1[vl + 3][dl] == 0) & (p1[vl][dl - 1] == 0) &(p1[vl - 1][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) &(p1[vl + 2][dl - 1] == 0) &(p1[vl + 3][dl - 1] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl + 2][dl + 1] == 0) &(p1[vl + 3][dl + 1] == 0)) {
					p1[vl][dl] = 3; p1[vl + 1][dl] = 3; p1[vl + 2][dl] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing"; } break;
				case '3': if ((p1[vl][dl] == 0) & (p1[vl][dl - 1] == 0) &(p1[vl][dl + 1] == 0) & (p1[vl][dl + 2] == 0) &(p1[vl][dl + 3] == 0) &(p1[vl - 1][dl] == 0) & (p1[vl - 1][dl - 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl - 1][dl + 2] == 0) &(p1[vl - 1][dl + 3] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl - 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl + 1][dl + 2] == 0) &(p1[vl + 1][dl + 3] == 0)) {
					p1[vl][dl] = 3; p1[vl][dl + 1] = 3; p1[vl][dl + 2] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing"; }break;
				default: cout << "Wrong number, repeat full" << endl;
					break;
				}
			}
			if ((dl <= 2)&(vl >= 9))
			{
				cout << "Direction:" << endl << "1) Up" << endl << "2) Right" << endl << ">>";
				cin >> z2[2];
				switch (z2[2])
				{
				case '1': if ((p1[vl][dl] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl - 1][dl] == 0) & (p1[vl - 2][dl] == 0) &(p1[vl - 3][dl] == 0) &(p1[vl][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) & (p1[vl - 1][dl - 1] == 0) & (p1[vl - 2][dl - 1] == 0) &(p1[vl - 3][dl - 1] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) & (p1[vl - 1][dl + 1] == 0) & (p1[vl - 2][dl + 1] == 0) &(p1[vl - 3][dl + 1] == 0)) {
					p1[vl][dl] = 3; p1[vl - 1][dl] = 3; p1[vl - 2][dl] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing"; } break;
				case '2': if ((p1[vl][dl] == 0) & (p1[vl][dl - 1] == 0) &(p1[vl][dl + 1] == 0) & (p1[vl][dl + 2] == 0) &(p1[vl][dl + 3] == 0) &(p1[vl - 1][dl] == 0) & (p1[vl - 1][dl - 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl - 1][dl + 2] == 0) &(p1[vl - 1][dl + 3] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl - 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl + 1][dl + 2] == 0) &(p1[vl + 1][dl + 3] == 0)) {
					p1[vl][dl] = 3; p1[vl][dl + 1] = 3; p1[vl][dl + 2] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing"; }break;
				default: cout << "Wrong number, repeat full" << endl;
					break;
				}
			}
			if ((dl <= 2)&(vl >= 9))
			{
				cout << "Direction:" << endl << "1) Up" << endl << "2) Right" << endl << ">>";
				cin >> z2[2];
				switch (z2[2])
				{
				case '1': if ((p1[vl][dl] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl - 1][dl] == 0) & (p1[vl - 2][dl] == 0) &(p1[vl - 3][dl] == 0) &(p1[vl][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) & (p1[vl - 1][dl - 1] == 0) & (p1[vl - 2][dl - 1] == 0) &(p1[vl - 3][dl - 1] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) & (p1[vl - 1][dl + 1] == 0) & (p1[vl - 2][dl + 1] == 0) &(p1[vl - 3][dl + 1] == 0)) { p1[vl][dl] = 3; p1[vl - 1][dl] = 3; p1[vl - 2][dl] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing";  } break;
				case '2': if ((p1[vl][dl] == 0) & (p1[vl][dl - 1] == 0) &(p1[vl][dl + 1] == 0) & (p1[vl][dl + 2] == 0) &(p1[vl][dl + 3] == 0) &(p1[vl - 1][dl] == 0) & (p1[vl - 1][dl - 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl - 1][dl + 2] == 0) &(p1[vl - 1][dl + 3] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl - 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl + 1][dl + 2] == 0) &(p1[vl + 1][dl + 3] == 0)) { p1[vl][dl] = 3; p1[vl][dl + 1] = 3; p1[vl][dl + 2] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing";  }break;
				default: cout << "Wrong number, repeat full" << endl; 
					break;
				}
			}
			if (((dl > 2)&(dl < 9))&(vl >= 9))
			{
				cout << "Direction:" << endl << "1) Up" << endl << "2) Right" << endl << "3) Left" << endl << ">>";
				cin >> z2[2];
				switch (z2[2])
				{
				case '1': if ((p1[vl][dl] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl - 1][dl] == 0) & (p1[vl - 2][dl] == 0) &(p1[vl - 3][dl] == 0) &(p1[vl][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) & (p1[vl - 1][dl - 1] == 0) & (p1[vl - 2][dl - 1] == 0) &(p1[vl - 3][dl - 1] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) & (p1[vl - 1][dl + 1] == 0) & (p1[vl - 2][dl + 1] == 0) &(p1[vl - 3][dl + 1] == 0)) { p1[vl][dl] = 3; p1[vl - 1][dl] = 3; p1[vl - 2][dl] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing";  } break;
				case '2': if ((p1[vl][dl] == 0) & (p1[vl][dl - 1] == 0) &(p1[vl][dl + 1] == 0) & (p1[vl][dl + 2] == 0) &(p1[vl][dl + 3] == 0) &(p1[vl - 1][dl] == 0) & (p1[vl - 1][dl - 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl - 1][dl + 2] == 0) &(p1[vl - 1][dl + 3] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl - 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl + 1][dl + 2] == 0) &(p1[vl + 1][dl + 3] == 0)) { p1[vl][dl] = 3; p1[vl][dl + 1] = 3; p1[vl][dl + 2] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing";  }break;
				case '3': if ((p1[vl][dl] == 0) & (p1[vl][dl + 1] == 0) &(p1[vl][dl - 1] == 0) & (p1[vl][dl - 2] == 0) & (p1[vl][dl - 3] == 0) &(p1[vl - 1][dl] == 0) & (p1[vl - 1][dl + 1] == 0) &(p1[vl - 1][dl - 1] == 0) & (p1[vl - 1][dl - 2] == 0) &(p1[vl - 1][dl - 3] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl + 1] == 0) &(p1[vl + 1][dl - 1] == 0) & (p1[vl + 1][dl - 2] == 0) &(p1[vl + 1][dl - 3] == 0)) { p1[vl][dl] = 3; p1[vl][dl - 1] = 3; p1[vl][dl - 2] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing";  }break;
				default: cout << "Wrong number, repeat full" << endl; 
					break;
				}
			}
			if ((dl<=2)&(vl >= 9))
			{
				cout << "Direction:" << endl << "1) Up" << endl << "2) Right" << endl << ">>";
				cin >> z2[2];
				switch (z2[2])
				{
				case '1': if ((p1[vl][dl] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl - 1][dl] == 0) & (p1[vl - 2][dl] == 0) &(p1[vl - 3][dl] == 0) &(p1[vl][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) & (p1[vl - 1][dl - 1] == 0) & (p1[vl - 2][dl - 1] == 0) &(p1[vl - 3][dl - 1] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) & (p1[vl - 1][dl + 1] == 0) & (p1[vl - 2][dl + 1] == 0) &(p1[vl - 3][dl + 1] == 0)) {
					p1[vl][dl] = 3; p1[vl - 1][dl] = 3; p1[vl - 2][dl] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing"; } break;
				case '2': if ((p1[vl][dl] == 0) & (p1[vl][dl - 1] == 0) &(p1[vl][dl + 1] == 0) & (p1[vl][dl + 2] == 0) &(p1[vl][dl + 3] == 0) &(p1[vl - 1][dl] == 0) & (p1[vl - 1][dl - 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl - 1][dl + 2] == 0) &(p1[vl - 1][dl + 3] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl - 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl + 1][dl + 2] == 0) &(p1[vl + 1][dl + 3] == 0)) {
					p1[vl][dl] = 3; p1[vl][dl + 1] = 3; p1[vl][dl + 2] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing"; }break;
				default: cout << "Wrong number, repeat full" << endl;
					break;
				}
			}
			if ((dl >= 9)&(vl >= 9))
			{
				cout << "Direction:" << endl << "1) Up" << endl << "2) Left" << endl << ">>";
				cin >> z2[2];
				switch (z2[2])
				{
				case '1': if ((p1[vl][dl] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl - 1][dl] == 0) & (p1[vl - 2][dl] == 0) &(p1[vl - 3][dl] == 0) &(p1[vl][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) & (p1[vl - 1][dl - 1] == 0) & (p1[vl - 2][dl - 1] == 0) &(p1[vl - 3][dl - 1] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) & (p1[vl - 1][dl + 1] == 0) & (p1[vl - 2][dl + 1] == 0) &(p1[vl - 3][dl + 1] == 0)) {
					p1[vl][dl] = 3; p1[vl - 1][dl] = 3; p1[vl - 2][dl] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing"; } break;
						  
				case '2': if ((p1[vl][dl] == 0) & (p1[vl][dl + 1] == 0) &(p1[vl][dl - 1] == 0) & (p1[vl][dl - 2] == 0) & (p1[vl][dl - 3] == 0) &(p1[vl - 1][dl] == 0) & (p1[vl - 1][dl + 1] == 0) &(p1[vl - 1][dl - 1] == 0) & (p1[vl - 1][dl - 2] == 0) &(p1[vl - 1][dl - 3] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl + 1] == 0) &(p1[vl + 1][dl - 1] == 0) & (p1[vl + 1][dl - 2] == 0) &(p1[vl + 1][dl - 3] == 0)) {
					p1[vl][dl] = 3; p1[vl][dl - 1] = 3; p1[vl][dl - 2] = 3; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing"; }break;
				default: cout << "Wrong number, repeat full" << endl;
					break;
				}
			}
			if (k == 0)
			{
				cout << "Wrong position, repeat" << endl;
			}
			
		}
		system("pause");
		system("CLS");
	}

	for (int i = 0; i < 1; i++)
		{
		int k = 0;
		for (int i = 1; i < 11; i++)
		{

			for (int j = 1; j < 11; j++)
			{
				cout << p1[i][j];
			}
			cout << "		";
			for (int j = 1; j < 11; j++)
			{
				cout << p2[i][j];
			}
			cout << endl;
		}
		cout << endl;
			cout << endl << "Install ship size 4" << endl;
			cout << "Posittion >>" << endl;
			cout << "Hight >>";
			cin >> z2[0];
			cout << "Long >>";
			cin >> z2[1];
			vl = perevod(z2[0])+1;
			dl = perevod(z2[1])+1;
			i--;
			if (((dl < 8)&(dl > 3))&(vl < 8)&(vl > 3))
			{
				cout << "Direction:" << endl << "1) Up" << endl << "2) Down" << endl << "3) Right" << endl << "4) Left" << endl << ">>";
				cin >> z2[2];

				switch (z2[2])
				{
				case '1': if ((p1[vl][dl] == 0) &(p1[vl + 1][dl] == 0) &(p1[vl - 1][dl] == 0) &(p1[vl - 2][dl] == 0) &(p1[vl - 3][dl] == 0) &(p1[vl - 4][dl] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl - 2][dl + 1] == 0) &(p1[vl - 3][dl + 1] == 0) &(p1[vl - 4][dl + 1] == 0) &(p1[vl][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) &(p1[vl - 1][dl - 1] == 0) &(p1[vl - 2][dl - 1] == 0) &(p1[vl - 3][dl - 1] == 0) &(p1[vl - 4][dl - 1] == 0)) { p1[vl][dl] = 4; p1[vl - 1][dl] = 4; p1[vl - 2][dl] = 4; p1[vl - 3][dl] = 4; i++; k++; }
						  else { cout << "Wrong direction, repeat installing";  } break;
				case '2': if ((p1[vl][dl] == 0) &(p1[vl - 1][dl] == 0) &(p1[vl + 1][dl] == 0) &(p1[vl + 2][dl] == 0) &(p1[vl + 3][dl] == 0) &(p1[vl + 4][dl] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl + 2][dl + 1] == 0) &(p1[vl + 3][dl + 1] == 0) &(p1[vl + 4][dl + 1] == 0) &(p1[vl][dl - 1] == 0) &(p1[vl - 1][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) &(p1[vl + 2][dl - 1] == 0) &(p1[vl + 3][dl - 1] == 0) &(p1[vl + 4][dl - 1] == 0)) { p1[vl][dl] = 4; p1[vl + 1][dl] = 4; p1[vl + 2][dl] = 4; p1[vl + 3][dl] = 4; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing";  } break;
				case '3': if ((p1[vl][dl] == 0) & (p1[vl][dl - 1] == 0) & (p1[vl][dl + 1] == 0) &(p1[vl][dl + 2] == 0) &(p1[vl][dl + 3] == 0) & (p1[vl][dl + 4] == 0) & (p1[vl - 1][dl] == 0) & (p1[vl - 1][dl - 1] == 0) & (p1[vl - 1][dl + 1] == 0) &(p1[vl - 1][dl + 2] == 0) &(p1[vl - 1][dl + 3] == 0) & (p1[vl - 1][dl + 4] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl - 1] == 0) & (p1[vl + 1][dl + 1] == 0) &(p1[vl + 1][dl + 2] == 0) &(p1[vl + 1][dl + 3] == 0) & (p1[vl + 1][dl + 4] == 0)) { p1[vl][dl] = 4; p1[vl][dl + 1] = 4; p1[vl][dl + 2] = 4; p1[vl][dl + 3] = 4; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing";  }break;
				case '4': if ((p1[vl][dl] == 0) & (p1[vl][dl + 1] == 0) & (p1[vl][dl - 1] == 0) &(p1[vl][dl - 2] == 0) &(p1[vl][dl - 3] == 0) & (p1[vl][dl - 4] == 0) & (p1[vl - 1][dl] == 0) & (p1[vl - 1][dl + 1] == 0) & (p1[vl - 1][dl - 1] == 0) &(p1[vl - 1][dl - 2] == 0) &(p1[vl - 1][dl - 3] == 0) & (p1[vl - 1][dl - 4] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl + 1] == 0) & (p1[vl + 1][dl - 1] == 0) &(p1[vl + 1][dl - 2] == 0) &(p1[vl + 1][dl - 3] == 0) & (p1[vl + 1][dl - 4] == 0)) { p1[vl][dl] = 4; p1[vl][dl - 1] = 4; p1[vl][dl - 2] = 4; p1[vl][dl - 3] = 4; i++; k++;
				}
						  else { cout << "Wrong direction, repeat installing";  }break;
				default: cout << "Wrong number, repeat installing" << endl; 
					break;
				}
				if (k == 0)
				{
					cout << "Wrong position, repeat" << endl;
				}
			}
			else
			{
			
				if ((dl >= 8)&((vl < 8)&(vl > 3)))
				{
					cout << "Direction:" << endl << "1) Up" << endl << "2) Down" << endl << "3) Left" << endl << ">>";
					cin >> z2[2];
					switch (z2[2])
					{
					case '1': if ((p1[vl][dl] == 0) &(p1[vl + 1][dl] == 0) &(p1[vl - 1][dl] == 0) &(p1[vl - 2][dl] == 0) &(p1[vl - 3][dl] == 0) &(p1[vl - 4][dl] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl - 2][dl + 1] == 0) &(p1[vl - 3][dl + 1] == 0) &(p1[vl - 4][dl + 1] == 0) &(p1[vl][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) &(p1[vl - 1][dl - 1] == 0) &(p1[vl - 2][dl - 1] == 0) &(p1[vl - 3][dl - 1] == 0) &(p1[vl - 4][dl - 1] == 0)) { p1[vl][dl] = 4; p1[vl - 1][dl] = 4; p1[vl - 2][dl] = 4; p1[vl - 3][dl] = 4; i++; k++;
					}
							  else { cout << "Wrong direction, repeat installing";  } break;
					case '2': if ((p1[vl][dl] == 0) &(p1[vl - 1][dl] == 0) &(p1[vl + 1][dl] == 0) &(p1[vl + 2][dl] == 0) &(p1[vl + 3][dl] == 0) &(p1[vl + 4][dl] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl + 2][dl + 1] == 0) &(p1[vl + 3][dl + 1] == 0) &(p1[vl + 4][dl + 1] == 0) &(p1[vl][dl - 1] == 0) &(p1[vl - 1][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) &(p1[vl + 2][dl - 1] == 0) &(p1[vl + 3][dl - 1] == 0) &(p1[vl + 4][dl - 1] == 0)) { p1[vl][dl] = 4; p1[vl + 1][dl] = 4; p1[vl + 2][dl] = 4; p1[vl + 3][dl] = 4; i++; k++;
					}
							  else { cout << "Wrong direction, repeat installing";  } break;
					case '3': if ((p1[vl][dl] == 0) & (p1[vl][dl + 1] == 0) & (p1[vl][dl - 1] == 0) &(p1[vl][dl - 2] == 0) &(p1[vl][dl - 3] == 0) & (p1[vl][dl - 4] == 0) & (p1[vl - 1][dl] == 0) & (p1[vl - 1][dl + 1] == 0) & (p1[vl - 1][dl - 1] == 0) &(p1[vl - 1][dl - 2] == 0) &(p1[vl - 1][dl - 3] == 0) & (p1[vl - 1][dl - 4] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl + 1] == 0) & (p1[vl + 1][dl - 1] == 0) &(p1[vl + 1][dl - 2] == 0) &(p1[vl + 1][dl - 3] == 0) & (p1[vl + 1][dl - 4] == 0)) { p1[vl][dl] = 4; p1[vl][dl - 1] = 4; p1[vl][dl - 2] = 4; p1[vl][dl - 3] = 4; i++; k++;
					}
							  else { cout << "Wrong direction, repeat installing";  }break;
					default: cout << "Wrong number, repeat full" << endl; 
						break;
					}
				}
				if ((dl >= 8)&((vl >= 8)))
				{
					cout << "Direction:" << endl << "1) Up" << endl << "2) Left" << endl << ">>";
					cin >> z2[2];
					switch (z2[2])
					{
					case '1': if ((p1[vl][dl] == 0) &(p1[vl + 1][dl] == 0) &(p1[vl - 1][dl] == 0) &(p1[vl - 2][dl] == 0) &(p1[vl - 3][dl] == 0) &(p1[vl - 4][dl] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl - 2][dl + 1] == 0) &(p1[vl - 3][dl + 1] == 0) &(p1[vl - 4][dl + 1] == 0) &(p1[vl][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) &(p1[vl - 1][dl - 1] == 0) &(p1[vl - 2][dl - 1] == 0) &(p1[vl - 3][dl - 1] == 0) &(p1[vl - 4][dl - 1] == 0)) { p1[vl][dl] = 4; p1[vl - 1][dl] = 4; p1[vl - 2][dl] = 4; p1[vl - 3][dl] = 4; i++; k++;
					}
							  else { cout << "Wrong direction, repeat installing";  } break;
					case '2': if ((p1[vl][dl] == 0) & (p1[vl][dl + 1] == 0) & (p1[vl][dl - 1] == 0) &(p1[vl][dl - 2] == 0) &(p1[vl][dl - 3] == 0) & (p1[vl][dl - 4] == 0) & (p1[vl - 1][dl] == 0) & (p1[vl - 1][dl + 1] == 0) & (p1[vl - 1][dl - 1] == 0) &(p1[vl - 1][dl - 2] == 0) &(p1[vl - 1][dl - 3] == 0) & (p1[vl - 1][dl - 4] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl + 1] == 0) & (p1[vl + 1][dl - 1] == 0) &(p1[vl + 1][dl - 2] == 0) &(p1[vl + 1][dl - 3] == 0) & (p1[vl + 1][dl - 4] == 0)) { p1[vl][dl] = 4; p1[vl][dl - 1] = 4; p1[vl][dl - 2] = 4; p1[vl][dl - 3] = 4; i++; k++;
					}
							  else { cout << "Wrong direction, repeat installing";  }break;
					default: cout << "Wrong number, repeat full" << endl; 
						break;
					}
				}

				if ((dl >= 8)&((vl <= 3)))
				{
					cout << "Direction:" << endl << "1) Down" << endl << "2) Left" << endl << ">>";
					cin >> z2[2];
					switch (z2[2])
					{
					case '1': if ((p1[vl][dl] == 0) &(p1[vl - 1][dl] == 0) &(p1[vl + 1][dl] == 0) &(p1[vl + 2][dl] == 0) &(p1[vl + 3][dl] == 0) &(p1[vl + 4][dl] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl + 2][dl + 1] == 0) &(p1[vl + 3][dl + 1] == 0) &(p1[vl + 4][dl + 1] == 0) &(p1[vl][dl - 1] == 0) &(p1[vl - 1][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) &(p1[vl + 2][dl - 1] == 0) &(p1[vl + 3][dl - 1] == 0) &(p1[vl + 4][dl - 1] == 0)) { p1[vl][dl] = 4; p1[vl + 1][dl] = 4; p1[vl + 2][dl] = 4; p1[vl + 3][dl] = 4; i++; k++;
					}
							  else { cout << "Wrong direction, repeat installing";  } break;
					case '2': if ((p1[vl][dl] == 0) & (p1[vl][dl + 1] == 0) & (p1[vl][dl - 1] == 0) &(p1[vl][dl - 2] == 0) &(p1[vl][dl - 3] == 0) & (p1[vl][dl - 4] == 0) & (p1[vl - 1][dl] == 0) & (p1[vl - 1][dl + 1] == 0) & (p1[vl - 1][dl - 1] == 0) &(p1[vl - 1][dl - 2] == 0) &(p1[vl - 1][dl - 3] == 0) & (p1[vl - 1][dl - 4] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl + 1] == 0) & (p1[vl + 1][dl - 1] == 0) &(p1[vl + 1][dl - 2] == 0) &(p1[vl + 1][dl - 3] == 0) & (p1[vl + 1][dl - 4] == 0)) { p1[vl][dl] = 4; p1[vl][dl - 1] = 4; p1[vl][dl - 2] = 4; p1[vl][dl - 3] = 4; i++; k++;
					}
							  else { cout << "Wrong direction, repeat installing";  }break;
					default: cout << "Wrong number, repeat full" << endl; 
						break;
					}
				}
				if (((dl > 3)&(dl < 8))&(vl <= 3))
				{
					cout << "Direction:" << endl << "1) Down" << endl << "2) Right" << endl << "3) Left" << endl << ">>";
					cin >> z2[2];
					switch (z2[2])
					{
					case '1': if ((p1[vl][dl] == 0) &(p1[vl - 1][dl] == 0) &(p1[vl + 1][dl] == 0) &(p1[vl + 2][dl] == 0) &(p1[vl + 3][dl] == 0) &(p1[vl + 4][dl] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl + 2][dl + 1] == 0) &(p1[vl + 3][dl + 1] == 0) &(p1[vl + 4][dl + 1] == 0) &(p1[vl][dl - 1] == 0) &(p1[vl - 1][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) &(p1[vl + 2][dl - 1] == 0) &(p1[vl + 3][dl - 1] == 0) &(p1[vl + 4][dl - 1] == 0)) { p1[vl][dl] = 4; p1[vl + 1][dl] = 4; p1[vl + 2][dl] = 4; p1[vl + 3][dl] = 4; i++; k++;
					}
							  else { cout << "Wrong direction, repeat installing";  } break;
					case '3': if ((p1[vl][dl] == 0) & (p1[vl][dl + 1] == 0) & (p1[vl][dl - 1] == 0) &(p1[vl][dl - 2] == 0) &(p1[vl][dl - 3] == 0) & (p1[vl][dl - 4] == 0) & (p1[vl - 1][dl] == 0) & (p1[vl - 1][dl + 1] == 0) & (p1[vl - 1][dl - 1] == 0) &(p1[vl - 1][dl - 2] == 0) &(p1[vl - 1][dl - 3] == 0) & (p1[vl - 1][dl - 4] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl + 1] == 0) & (p1[vl + 1][dl - 1] == 0) &(p1[vl + 1][dl - 2] == 0) &(p1[vl + 1][dl - 3] == 0) & (p1[vl + 1][dl - 4] == 0)) { p1[vl][dl] = 4; p1[vl][dl - 1] = 4; p1[vl][dl - 2] = 4; p1[vl][dl - 3] = 4; i++; k++;
					}
							  else { cout << "Wrong direction, repeat installing";  }break;
					case '2': if ((p1[vl][dl] == 0) & (p1[vl][dl - 1] == 0) & (p1[vl][dl + 1] == 0) &(p1[vl][dl + 2] == 0) &(p1[vl][dl + 3] == 0) & (p1[vl][dl + 4] == 0) & (p1[vl - 1][dl] == 0) & (p1[vl - 1][dl - 1] == 0) & (p1[vl - 1][dl + 1] == 0) &(p1[vl - 1][dl + 2] == 0) &(p1[vl - 1][dl + 3] == 0) & (p1[vl - 1][dl + 4] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl - 1] == 0) & (p1[vl + 1][dl + 1] == 0) &(p1[vl + 1][dl + 2] == 0) &(p1[vl + 1][dl + 3] == 0) & (p1[vl + 1][dl + 4] == 0)) { p1[vl][dl] = 4; p1[vl][dl + 1] = 4; p1[vl][dl + 2] = 4; p1[vl][dl + 3] = 4; i++; k++;
					}
							  else { cout << "Wrong direction, repeat installing";  }break;i++;
					default: cout << "Wrong number, repeat full" << endl; 
						break;
					}
				}
				if ((dl <= 3)&(vl <= 3))
				{
					cout << "Direction:" << endl << "1) Down" << endl << "2) Right" << endl << ">>";
					cin >> z2[2];
					switch (z2[2])
					{
					case '1': if ((p1[vl][dl] == 0) &(p1[vl - 1][dl] == 0) &(p1[vl + 1][dl] == 0) &(p1[vl + 2][dl] == 0) &(p1[vl + 3][dl] == 0) &(p1[vl + 4][dl] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl + 2][dl + 1] == 0) &(p1[vl + 3][dl + 1] == 0) &(p1[vl + 4][dl + 1] == 0) &(p1[vl][dl - 1] == 0) &(p1[vl - 1][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) &(p1[vl + 2][dl - 1] == 0) &(p1[vl + 3][dl - 1] == 0) &(p1[vl + 4][dl - 1] == 0)) { p1[vl][dl] = 4; p1[vl + 1][dl] = 4; p1[vl + 2][dl] = 4; p1[vl + 3][dl] = 4; i++; k++;
					}
							  else { cout << "Wrong direction, repeat installing";  } break;
					case '2': if ((p1[vl][dl] == 0) & (p1[vl][dl - 1] == 0) & (p1[vl][dl + 1] == 0) &(p1[vl][dl + 2] == 0) &(p1[vl][dl + 3] == 0) & (p1[vl][dl + 4] == 0) & (p1[vl - 1][dl] == 0) & (p1[vl - 1][dl - 1] == 0) & (p1[vl - 1][dl + 1] == 0) &(p1[vl - 1][dl + 2] == 0) &(p1[vl - 1][dl + 3] == 0) & (p1[vl - 1][dl + 4] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl - 1] == 0) & (p1[vl + 1][dl + 1] == 0) &(p1[vl + 1][dl + 2] == 0) &(p1[vl + 1][dl + 3] == 0) & (p1[vl + 1][dl + 4] == 0)) { p1[vl][dl] = 4; p1[vl][dl + 1] = 4; p1[vl][dl + 2] = 4; p1[vl][dl + 3] = 4; i++; k++;
					}
							  else { cout << "Wrong direction, repeat installing";  }break;
					default: cout << "Wrong number, repeat full" << endl; 
						break;
					}
				}
				if ((dl <= 3)&((vl < 8)&(vl > 3)))
				{
					cout << "Direction:" << endl << "1) Up" << endl << "2) Down" << endl << "3) Right" << endl << ">>";
					cin >> z2[2];
					switch (z2[2])
					{
					case '1': if ((p1[vl][dl] == 0) &(p1[vl + 1][dl] == 0) &(p1[vl - 1][dl] == 0) &(p1[vl - 2][dl] == 0) &(p1[vl - 3][dl] == 0) &(p1[vl - 4][dl] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl - 2][dl + 1] == 0) &(p1[vl - 3][dl + 1] == 0) &(p1[vl - 4][dl + 1] == 0) &(p1[vl][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) &(p1[vl - 1][dl - 1] == 0) &(p1[vl - 2][dl - 1] == 0) &(p1[vl - 3][dl - 1] == 0) &(p1[vl - 4][dl - 1] == 0)) { p1[vl][dl] = 4; p1[vl - 1][dl] = 4; p1[vl - 2][dl] = 4; p1[vl - 3][dl] = 4; i++; k++;
					}
							  else { cout << "Wrong direction, repeat installing";  } break;
					case '2': if ((p1[vl][dl] == 0) &(p1[vl - 1][dl] == 0) &(p1[vl + 1][dl] == 0) &(p1[vl + 2][dl] == 0) &(p1[vl + 3][dl] == 0) &(p1[vl + 4][dl] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl + 2][dl + 1] == 0) &(p1[vl + 3][dl + 1] == 0) &(p1[vl + 4][dl + 1] == 0) &(p1[vl][dl - 1] == 0) &(p1[vl - 1][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) &(p1[vl + 2][dl - 1] == 0) &(p1[vl + 3][dl - 1] == 0) &(p1[vl + 4][dl - 1] == 0)) { p1[vl][dl] = 4; p1[vl + 1][dl] = 4; p1[vl + 2][dl] = 4; p1[vl + 3][dl] = 4; i++; k++;
					}
							  else { cout << "Wrong direction, repeat installing";  } break;
					case '3': if ((p1[vl][dl] == 0) & (p1[vl][dl - 1] == 0) & (p1[vl][dl + 1] == 0) &(p1[vl][dl + 2] == 0) &(p1[vl][dl + 3] == 0) & (p1[vl][dl + 4] == 0) & (p1[vl - 1][dl] == 0) & (p1[vl - 1][dl - 1] == 0) & (p1[vl - 1][dl + 1] == 0) &(p1[vl - 1][dl + 2] == 0) &(p1[vl - 1][dl + 3] == 0) & (p1[vl - 1][dl + 4] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl - 1] == 0) & (p1[vl + 1][dl + 1] == 0) &(p1[vl + 1][dl + 2] == 0) &(p1[vl + 1][dl + 3] == 0) & (p1[vl + 1][dl + 4] == 0)) { p1[vl][dl] = 4; p1[vl][dl + 1] = 4; p1[vl][dl + 2] = 4; p1[vl][dl + 3] = 4; i++; k++;
					}
							  else { cout << "Wrong direction, repeat installing";  }break;
					default: cout << "Wrong number, repeat full" << endl; 
						break;
					}
				}
				if ((dl <= 3)&(vl >= 8))
				{
					cout << "Direction:" << endl << "1) Up" << endl << "2) Right" << endl << ">>";
					cin >> z2[2];
					switch (z2[2])
					{
					case '1': if ((p1[vl][dl] == 0) &(p1[vl + 1][dl] == 0) &(p1[vl - 1][dl] == 0) &(p1[vl - 2][dl] == 0) &(p1[vl - 3][dl] == 0) &(p1[vl - 4][dl] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl - 2][dl + 1] == 0) &(p1[vl - 3][dl + 1] == 0) &(p1[vl - 4][dl + 1] == 0) &(p1[vl][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) &(p1[vl - 1][dl - 1] == 0) &(p1[vl - 2][dl - 1] == 0) &(p1[vl - 3][dl - 1] == 0) &(p1[vl - 4][dl - 1] == 0)) { p1[vl][dl] = 4; p1[vl - 1][dl] = 4; p1[vl - 2][dl] = 4; p1[vl - 3][dl] = 4; i++; k++;
					}
							  else { cout << "Wrong direction, repeat installing";  } break;
					case '2': if ((p1[vl][dl] == 0) & (p1[vl][dl - 1] == 0) & (p1[vl][dl + 1] == 0) &(p1[vl][dl + 2] == 0) &(p1[vl][dl + 3] == 0) & (p1[vl][dl + 4] == 0) & (p1[vl - 1][dl] == 0) & (p1[vl - 1][dl - 1] == 0) & (p1[vl - 1][dl + 1] == 0) &(p1[vl - 1][dl + 2] == 0) &(p1[vl - 1][dl + 3] == 0) & (p1[vl - 1][dl + 4] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl - 1] == 0) & (p1[vl + 1][dl + 1] == 0) &(p1[vl + 1][dl + 2] == 0) &(p1[vl + 1][dl + 3] == 0) & (p1[vl + 1][dl + 4] == 0)) { p1[vl][dl] = 4; p1[vl][dl + 1] = 4; p1[vl][dl + 2] = 4; p1[vl][dl + 3] = 4; i++; k++;
					}
							  else { cout << "Wrong direction, repeat installing";  }break;
					default: cout << "Wrong number, repeat full" << endl; 
						break;
					}
				}
				if (((dl > 3)&(dl < 8))&(vl >= 8))
				{
					cout << "Direction:" << endl << "1) Up" << endl << "2) Right" << endl << "3) Left" << endl << ">>";
					cin >> z2[2];
					switch (z2[2])
					{
					case '1': if ((p1[vl][dl] == 0) &(p1[vl + 1][dl] == 0) &(p1[vl - 1][dl] == 0) &(p1[vl - 2][dl] == 0) &(p1[vl - 3][dl] == 0) &(p1[vl - 4][dl] == 0) &(p1[vl][dl + 1] == 0) &(p1[vl + 1][dl + 1] == 0) &(p1[vl - 1][dl + 1] == 0) &(p1[vl - 2][dl + 1] == 0) &(p1[vl - 3][dl + 1] == 0) &(p1[vl - 4][dl + 1] == 0) &(p1[vl][dl - 1] == 0) &(p1[vl + 1][dl - 1] == 0) &(p1[vl - 1][dl - 1] == 0) &(p1[vl - 2][dl - 1] == 0) &(p1[vl - 3][dl - 1] == 0) &(p1[vl - 4][dl - 1] == 0)) { p1[vl][dl] = 4; p1[vl - 1][dl] = 4; p1[vl - 2][dl] = 4; p1[vl - 3][dl] = 4; i++; k++;
					}
						else { cout << "Wrong direction, repeat installing";  } break;
					case '3': if ((p1[vl][dl] == 0) & (p1[vl][dl + 1] == 0) & (p1[vl][dl - 1] == 0) &(p1[vl][dl - 2] == 0) &(p1[vl][dl - 3] == 0) & (p1[vl][dl - 4] == 0) & (p1[vl - 1][dl] == 0) & (p1[vl - 1][dl + 1] == 0) & (p1[vl - 1][dl - 1] == 0) &(p1[vl - 1][dl - 2] == 0) &(p1[vl - 1][dl - 3] == 0) & (p1[vl - 1][dl - 4] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl + 1] == 0) & (p1[vl + 1][dl - 1] == 0) &(p1[vl + 1][dl - 2] == 0) &(p1[vl + 1][dl - 3] == 0) & (p1[vl + 1][dl - 4] == 0)) { p1[vl][dl] = 4; p1[vl][dl - 1] = 4; p1[vl][dl - 2] = 4; p1[vl][dl - 3] = 4; i++; k++;
					}
							  else { cout << "Wrong direction, repeat installing";  }break;
					case '2': if ((p1[vl][dl] == 0) & (p1[vl][dl - 1] == 0) & (p1[vl][dl + 1] == 0) &(p1[vl][dl + 2] == 0) &(p1[vl][dl + 3] == 0) & (p1[vl][dl + 4] == 0) & (p1[vl - 1][dl] == 0) & (p1[vl - 1][dl - 1] == 0) & (p1[vl - 1][dl + 1] == 0) &(p1[vl - 1][dl + 2] == 0) &(p1[vl - 1][dl + 3] == 0) & (p1[vl - 1][dl + 4] == 0) &(p1[vl + 1][dl] == 0) & (p1[vl + 1][dl - 1] == 0) & (p1[vl + 1][dl + 1] == 0) &(p1[vl + 1][dl + 2] == 0) &(p1[vl + 1][dl + 3] == 0) & (p1[vl + 1][dl + 4] == 0)) { p1[vl][dl] = 4; p1[vl][dl + 1] = 4; p1[vl][dl + 2] = 4; p1[vl][dl + 3] = 4; i++; k++;
					}
							  else { cout << "Wrong direction, repeat installing";  }break;
					default: cout << "Wrong number, repeat full" << endl; 
						break;
					}
				}
				if (k == 0)
				{
					cout << "Wrong position, repeat" << endl;
				}

			}
			system("pause");
			system("CLS");
	}
		for (int i = 1; i < 11; i++)
		{

			for (int j = 1; j < 11; j++)
			{
				cout << p1[i][j];
			}
			cout << "		";
			for (int j = 1; j < 11; j++)
			{
				cout << p2[i][j];
			}
			cout << endl;
		}


	system("PAUSE");

	return 1;
}


