#include <stdio.h>
#include <windows.h>
char blockMode[4][4][4] = 
{
	{
		{ 0,0,0,0 },
		{ 1,0,0,0 },
		{ 1,1,1,0 },
		{ 0,0,0,0 }	},
	{
		{ 0,1,0,0 },
		{ 0,1,0,0 },
		{ 1,1,0,0 },
		{ 0,0,0,0 }	},
	{
		{ 0,0,0,0 },
		{ 1,1,1,0 },
		{ 0,0,1,0 },
		{ 0,0,0,0 } },
	{
		{ 1,1,0,0 },
		{ 1,0,0,0 },
		{ 1,0,0,0 },
		{ 0,0,0,0 } }
};
COORD GetCurrentCursorPos();
void SetCurrentCursorPos(int x, int y);
void ShowBlock(char blockinfo[4][4]);


int main(void) {
	SetCurrentCursorPos(0,0);
	ShowBlock(blockMode[0]);

	SetCurrentCursorPos(10, 0);
	ShowBlock(blockMode[1]);

	SetCurrentCursorPos(0, 4);
	ShowBlock(blockMode[2]);

	SetCurrentCursorPos(10, 5);
	ShowBlock(blockMode[3]);
	
	getchar();
	return 0;
}

void ShowBlock(char blockinfo[4][4]) {
	int x, y;
	COORD curpos = GetCurrentCursorPos();

	for (y = 0; y < 4; y++) {
		for (x = 0; x < 4; x++) {
			SetCurrentCursorPos(curpos.X + (x * 2), curpos.Y + y);
			if (blockinfo[y][x] == 1) {
				printf("бс");
			}
		}
	}
	SetCurrentCursorPos(curpos.X, curpos.Y);
}

COORD GetCurrentCursorPos() {
	CONSOLE_SCREEN_BUFFER_INFO curinfo;
	COORD curpoint;

	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curinfo);
	curpoint.X = curinfo.dwCursorPosition.X;
	curpoint.Y = curinfo.dwCursorPosition.Y;
	
	return curpoint;
}
void SetCurrentCursorPos(int x, int y) {
	COORD p = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}