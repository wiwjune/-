#include <stdio.h>
#include <windows.h>
int main(void) {
	CONSOLE_SCREEN_BUFFER_INFO curinfo;
	int i, j;
	HANDLE console;
	console = GetStdHandle(STD_OUTPUT_HANDLE);

	for (i = 0; i <= 6; i++) {
		GetConsoleScreenBufferInfo(console, &curinfo);
		printf("[%d,%d]\n", curinfo.dwCursorPosition.X, curinfo.dwCursorPosition.Y);
		if (i < 3) {
			curinfo.dwCursorPosition.X = i + 1;
			SetConsoleCursorPosition(console, curinfo.dwCursorPosition);
			GetConsoleScreenBufferInfo(console, &curinfo);
		}
		if (i >= 3) {
			curinfo.dwCursorPosition.X = 6 - (i + 1);
			SetConsoleCursorPosition(console, curinfo.dwCursorPosition);
			GetConsoleScreenBufferInfo(console, &curinfo);
		}
	}

	getchar();
	return 0;
}