#include <stdio.h>
#include <windows.h>
int main(void) {
	CONSOLE_SCREEN_BUFFER_INFO curinfo;
	int i, j;
	HANDLE console;
	console = GetStdHandle(STD_OUTPUT_HANDLE);

	GetConsoleScreenBufferInfo(console, &curinfo);
	for (i = 0; i <= 6; i++) {
		printf("[%d,%d]\n", curinfo.dwCursorPosition.X, curinfo.dwCursorPosition.Y);
		GetConsoleScreenBufferInfo(console, &curinfo);
		if (i < 3) {
			curinfo.dwCursorPosition.X = i + 1;
			SetConsoleCursorPosition(console, curinfo.dwCursorPosition);
			GetConsoleScreenBufferInfo(console, &curinfo);
		}
		if (i >= 3) {
			curinfo.dwCursorPosition.X = 6 - (i+1);
			SetConsoleCursorPosition(console, curinfo.dwCursorPosition);
			GetConsoleScreenBufferInfo(console, &curinfo);
		}
	}

	getchar();
	return 0;
}