#include <stdio.h>
#include <windows.h>
int main(void) {
	COORD p;

	HANDLE console;
	console = GetStdHandle(STD_OUTPUT_HANDLE);

	p.X = 6, p.Y = 3;
	SetConsoleCursorPosition(console, p);
	printf("��");

	p.X = 12, p.Y = 6;
	SetConsoleCursorPosition(console, p);
	printf("��");

	getchar();
	return 0;
}