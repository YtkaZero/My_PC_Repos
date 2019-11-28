#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
//#include "graphics.h"
#define numMenu 4
#define numSet 10
struct Console {
	int width;
	int height;
	HANDLE hOutput;
	HANDLE hInput;
	COORD coord;
	CONSOLE_SCREEN_BUFFER_INFO defaultBufferSize;
	int ch;
};
struct Item {
	char str[30];
	COORD coord;
};
_Bool console_init(struct Console **c) {
	COORD bufferSize = { 80,25 };
	SMALL_RECT sWin = { 0,0,80 - 1,25 - 1 };
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	if (c == 0) {
		return FALSE;
	}
	(*c) = calloc(1, sizeof(struct Console));
	(*c)->hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	(*c)->hInput = GetStdHandle(STD_INPUT_HANDLE);
	(*c)->ch = -1;
	GetConsoleScreenBufferInfo((*c)->hOutput, &((*c)->defaultBufferSize));
	SetConsoleWindowInfo((*c)->hOutput, TRUE, &sWin);
	SetConsoleScreenBufferSize((*c)->hOutput, bufferSize);
	GetConsoleScreenBufferInfo((*c)->hOutput, &csbi);
	(*c)->width = csbi.dwSize.X;
	(*c)->height = csbi.dwSize.Y;
	return TRUE;
}

void menu_page(struct Item **m, struct Console *c) {
	char str[][10] = {
			"**MENU**",
			"SETTINGS",
			"CONTROL",
			"EXIT"
	};
	if (((*m) = calloc(numMenu, sizeof(struct Item))) == NULL)
		printf("\nERROR_1");
	int j;
	for (j = 0; j < numMenu; j++) {
		strcpy((*m + j)->str, str[j]);
		(*m + j)->coord.X = c->width / 2 - strlen(str[j]) / 2;
		(*m + j)->coord.Y = c->height / 2 - (numMenu * 2 - 1) / 2 + (2 * j);
		SetConsoleCursorPosition(c->hOutput, (*m + j)->coord);
		printf("%s", (*m + j)->str);
	}
}
void menu_set(struct Item **set, struct Console **c) {
	char str[][31] = {
	"**CONTROLS**",
	"Input position on X axis",
	"Input speed on X axis",
	"Input acceleretaion on X axis",
	"Input brake on X axis",
	"Input position on Y axis",
	"Input speed on Y axis",
	"Input acceleretaion on Y axis",
	"Input brake on Y axis",
	"Back"
	};
	if (((*set) = calloc(numSet, sizeof(struct Item))) == NULL)
		printf("\nERROR_1");
	int j;
	for (j = 0; j < numSet; j++) {
		strcpy((*set + j)->str, str[j]);
		(*set + j)->coord.X = (*c)->width / 14;
		(*set + j)->coord.Y = (*c)->height / 2 - (numSet * 2 - 1) / 2 + (2 * j);
		//(*set + j)->coord.Y = c->height/3 - (numSet*2)/2 + 2;
		SetConsoleCursorPosition((*c)->hOutput, (*set + j)->coord);
		printf("%s", (*set + j)->str);
	}
	--(*set + 0)->coord.X;
	(*c)->coord = (*set + 0)->coord;
	SetConsoleCursorPosition((*c)->hOutput, (*c)->coord);
	printf(">");
}

void console_clear(struct Console *c) {
	system("cls");
}

void settings_page(struct Item **set, struct Console **c) {

}

void start_position_cursor(struct Item *m, struct Console **c) {
	(*c)->coord.X = (m + 1)->coord.X - 1;
	(*c)->coord.Y = (m + 1)->coord.Y;
	SetConsoleCursorPosition((*c)->hOutput, (*c)->coord);
	printf(">");
}

void cursor_down(struct Item *m, struct Console *c, const char num) {
	switch (num) {
		case numMenu: {
		if ((c->coord.Y < (m + num - 1)->coord.Y) && (c->coord.Y >= (m + (num - 3))->coord.Y)) {
			SetConsoleCursorPosition(c->hOutput, c->coord);
			printf(" ");
			c->coord.Y = c->coord.Y + 2;
			int i;
			for (i = 1; i < num; i++) {
				if (c->coord.Y == (m + i)->coord.Y) {
					c->coord.X = (m + i)->coord.X - 1;
					SetConsoleCursorPosition(c->hOutput, c->coord);
					printf(">");
				}
			}
		}break;
	}
		case numSet: {
			if ((c->coord.Y < (m + num - 2)->coord.Y)) {  // && (c->coord.Y >= (m + (num - 3))->coord.Y)) {
				SetConsoleCursorPosition(c->hOutput, c->coord);
				printf(" ");
				c->coord.Y = c->coord.Y + 2;
				int i;
				for (i = 1; i < num; i++) {
					if (c->coord.Y == (m + i)->coord.Y) {
						c->coord.X = (m + i)->coord.X - 1;
						SetConsoleCursorPosition(c->hOutput, c->coord);
						printf(">");
					}
				}
			}
			}break;
		
	}
	
}


void cursor_up(struct Item *m, struct Console *c, const char num) {
	switch (num) {
	case numMenu:{if ((c->coord.Y <= (m + num - 1)->coord.Y) && (c->coord.Y > (m + (num - 3))->coord.Y)) {
		SetConsoleCursorPosition(c->hOutput, c->coord);
		printf(" ");
		c->coord.Y = c->coord.Y - 2;
		int i;
		for (i = 1; i < num; i++) {
			if (c->coord.Y == (m + i)->coord.Y) {
				c->coord.X = (m + i)->coord.X - 1;
				SetConsoleCursorPosition(c->hOutput, c->coord);
				printf(">");
			}
		}
	}break; }
	case numSet:{
		printf("%d", c->coord.Y);
		if ((c->coord.Y <= (m + num - 2)->coord.Y) && (c->coord.Y >= (m + 0)->coord.Y)) {
		SetConsoleCursorPosition(c->hOutput, c->coord);
		printf(" ");
		c->coord.Y = c->coord.Y - 2;
		int i;
		for (i = 1; i < num; i++) {
			if (c->coord.Y == (m + i)->coord.Y) {
				c->coord.X = (m + i)->coord.X - 1;
				SetConsoleCursorPosition(c->hOutput, c->coord);
				printf(">");
			}
		}
	}break; }
	}

}

_Bool menu_console_event(struct Console **c) {
	INPUT_RECORD eventBuffer;
	DWORD numEventsRead = 0;
	//GetNumberOfConsoleInputEvents(c->hInput,&numEvents);
	if (ReadConsoleInput((*c)->hInput, &eventBuffer, 1, &numEventsRead))
		if (numEventsRead == 1)
			if (eventBuffer.EventType == KEY_EVENT)
				if (eventBuffer.Event.KeyEvent.bKeyDown) {
					(*c)->ch = eventBuffer.Event.KeyEvent.wVirtualKeyCode;
					return TRUE;
				}
				else return FALSE;
}
void make_event_set(struct Console *c, struct Item *set) {
	_Bool isRun = TRUE;
	while (isRun) {
		if (menu_console_event(&c))
			switch (c->ch) {
			case VK_ESCAPE:
				isRun = FALSE;
				break;
			case VK_DOWN:
				cursor_down(set, c, numSet);
				break;
			case VK_UP:
				cursor_up(set, c, numSet);
				break;
			case VK_RETURN: {
				if (c->coord.Y == set[1].coord.Y) {
					console_clear(c);
					//menu_set(&set,c);
					//start_position_cursor(set,&c);
					//ReadConsole(c->hInput, )

				}
				if (c->coord.Y == set[2].coord.Y) {
					//control_page();
				}
				if (c->coord.Y == set[3].coord.Y) {
					//control_page();
				}
				if (c->coord.Y == set[4].coord.Y) {
					//control_page();
				}
				if (c->coord.Y == set[5].coord.Y) {
					//control_page();
				}
				if (c->coord.Y == set[6].coord.Y) {
					//control_page();
				}
				if (c->coord.Y == set[7].coord.Y) {
					//control_page();
				}
				if (c->coord.Y == set[8].coord.Y)
					isRun = FALSE;
			}
							break;
			}
	}
}

int main() {
	//system("mode con cols=80 lines=25");
	struct Console *c;
	struct Item *m, *set;
	BOOL isRun = TRUE;

	console_init(&c);
	printf("X= %d, Y= %d\n", c->width, c->height);
	menu_page(&m, c);
	start_position_cursor(m, &c);
	while (isRun) {
		if (menu_console_event(&c))
			switch (c->ch) {
			case VK_ESCAPE:
				isRun = FALSE;
				break;
			case VK_DOWN:
				cursor_down(m, c, numMenu);
				break;
			case VK_UP:
				cursor_up(m, c, numMenu);
				break;
			case VK_RETURN: {
				if (c->coord.Y == m[1].coord.Y) {
					console_clear(c);
					menu_set(&set, &c);
					make_event_set(c,set);
				}
				if (c->coord.Y == m[2].coord.Y) {
					//control_page();
				}
				if (c->coord.Y == m[3].coord.Y)
					isRun = FALSE;
			}
							break;
			}
	}
	return 0;
}
