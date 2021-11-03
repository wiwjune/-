#include <stdio.h>
#include <windows.h>
int main(void) {
	COORD p;
	int i, j;

	HANDLE console;
	console = GetStdHandle(STD_OUTPUT_HANDLE);

	for (i = 0; i <= 8; i++) {
		p.Y = i;
		for (j = 0; j <= 12; j+=6) {
			p.X = j;
			SetConsoleCursorPosition(console, p);
			printf("бс");
		}
	}

	getchar();
	return 0;
}