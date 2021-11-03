#include <stdio.h>
#include <windows.h>
int main(void) {
	CONSOLE_SCREEN_BUFFER_INFO curinfo;
	int i, j;
	HANDLE console;
	console = GetStdHandle(STD_OUTPUT_HANDLE);

	for (i = 0; i <= 6; i++) {
		GetConsoleScreenBufferInfo(console, &curinfo);
		if (i < 3) {
			curinfo.dwCursorPosition.X = i;
			SetConsoleCursorPosition(console, curinfo.dwCursorPosition);
		}
		if (i >= 3) {
			curinfo.dwCursorPosition.X = 6 - i;
			SetConsoleCursorPosition(console, curinfo.dwCursorPosition);
		}
		printf("[%d,%d]\n", curinfo.dwCursorPosition.X, curinfo.dwCursorPosition.Y);
	}
 
	getchar();
	return 0;
}