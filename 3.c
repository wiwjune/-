#include <stdio.h>
#include <windows.h>
int main(void) {
	COORD p;

	p.X = 0, p.Y = 0;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
	printf("��");

	p.X = 12, p.Y = 6;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
	printf("��");

	getchar();
	return 0;
}