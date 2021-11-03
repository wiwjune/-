#include <stdio.h>
#include <windows.h>
int main(void) {
	CONSOLE_SCREEN_BUFFER_INFO curinfo;

	HANDLE console;
	console = GetStdHandle(STD_OUTPUT_HANDLE);
	
	GetConsoleScreenBufferInfo(console, &curinfo);
	printf("[%d,%d]\n", curinfo.dwCursorPosition.X, curinfo.dwCursorPosition.Y);
	puts("첫번째 안녕하세요");
	
	GetConsoleScreenBufferInfo(console, &curinfo);
	printf("[%d,%d]\n", curinfo.dwCursorPosition.X, curinfo.dwCursorPosition.Y);
	puts("두번째 안녕하세요");

	getchar();
	return 0;
}