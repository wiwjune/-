#include <stdio.h>
#include <windows.h>
int main(void) {
	COORD p;
	int i, j;

	HANDLE console;
	console = GetStdHandle(STD_OUTPUT_HANDLE);

	for (i = 0; i <= 5;i++) {
		p.Y = i;
		for (j = 0; j <= 20; j += 2) {
			if (j==(10-2*i)|| j == (10 + 2 * i)||i==5) {
				p.X = j;
				SetConsoleCursorPosition(console, p);
				printf("бс");
			}
		}
	}

	getchar();
	return 0;
}