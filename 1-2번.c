#include <stdio.h>
#include <windows.h>
int main(void) {
	COORD p;
	int i, j;

	HANDLE console;
	console = GetStdHandle(STD_OUTPUT_HANDLE);

	for (i = 0; i <= 5; i++) {
		p.Y = i;
		for (j = 0; j <= 14; j += 2) {
			if ((i == 0 || i == 5)||(j==0||j==14)) {
				p.X = j;
				SetConsoleCursorPosition(console, p);
				printf("бс");
			}
		}
	}
	getchar();
	return 0;
}