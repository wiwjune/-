#include <stdio.h>
#include <windows.h>
int main(void) {
	CONSOLE_SCREEN_BUFFER_INFO curinfo;

	HANDLE console;
	console = GetStdHandle(STD_OUTPUT_HANDLE);
	
	GetConsoleScreenBufferInfo(console, &curinfo);
	printf("[%d,%d]\n", curinfo.dwCursorPosition.X, curinfo.dwCursorPosition.Y);
	puts("ù��° �ȳ��ϼ���");
	
	GetConsoleScreenBufferInfo(console, &curinfo);
	printf("[%d,%d]\n", curinfo.dwCursorPosition.X, curinfo.dwCursorPosition.Y);
	puts("�ι�° �ȳ��ϼ���");

	getchar();
	return 0;
}