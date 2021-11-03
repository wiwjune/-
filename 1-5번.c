#include <stdio.h>
#include <windows.h>
char blockType[7][4][4] =
{
	{
		{ 0,0,0,0 },
		{ 1,0,0,0 },
		{ 1,1,1,0 },
		{ 0,0,0,0 } },
	{
		{ 0,0,0,0 },
		{ 0,0,1,0 },
		{ 1,1,1,0 },
		{ 0,0,0,0 } },
	{
		{ 0,0,0,0 },
		{ 0,1,0,0 },
		{ 1,1,1,0 },
		{ 0,0,0,0 } },
	{
		{ 0,1,0,0 },
		{ 0,1,0,0 },
		{ 0,1,0,0 },
		{ 0,1,0,0 } },
	{
		{ 1,1,0,0 },
		{ 1,1,0,0 },
		{ 0,0,0,0 },
		{ 0,0,0,0 } },
	{
		{ 0,0,0,0 },
		{ 0,1,1,0 },
		{ 1,1,0,0 },
		{ 0,0,0,0 } },
	{
		{ 0,0,0,0 },
		{ 1,1,0,0 },
		{ 0,1,1,0 },
		{ 0,0,0,0 } }
};
COORD GetCurrentCursorPos();
void SetCurrentCursorPos(int x, int y);
void ShowBlock(char blockinfo[4][4]);


int main(void) {
	SetCurrentCursorPos(0, 0);
	ShowBlock(blockType[0]);

	SetCurrentCursorPos(10, 0);
	ShowBlock(blockType[1]);

	SetCurrentCursorPos(20, 0);
	ShowBlock(blockType[2]);

	SetCurrentCursorPos(0, 5);
	ShowBlock(blockType[3]);

	SetCurrentCursorPos(10, 5);
	ShowBlock(blockType[4]);

	SetCurrentCursorPos(20, 5);
	ShowBlock(blockType[5]);

	SetCurrentCursorPos(0, 10);
	ShowBlock(blockType[6]);

	getchar();
	return 0;
}
/*
int main(){

	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD p = {0,0};

	int i, x = 0, line = 0;
	for(i = 0; i < 7; i++){
		SetCurrentCursorPos(x, line);
		showBlock(blockmode[i]);
		if((i+1) % 3 == 0) line += 7;
		x += 10;
		if(x == 30) x = 0;
	}

	return 0;
}


*/

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