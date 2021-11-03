#include <stdio.h>
#include <windows.h>
int main(void) {
	COORD p1;

	HANDLE console;//HANDLE형 변수는 무슨 일을 할까
	console = GetStdHandle(STD_OUTPUT_HANDLE);//어떤일을 함수를 사용한 걸까, 어떤 일을 하는 함수인자를 넣은 걸까

	p1.X = 0, p1.Y = 0;
	SetConsoleCursorPosition(console, p1);// 콘솔창에서 커서의 위치를 설정하는 함수, console이라는 변수를 0,0에 위치시키고 사각형을 출력하라
	printf("■");

	p1.X = 6, p1.Y = 6;
	SetConsoleCursorPosition(console, p1);
	printf("■");

	getchar();
	return 0;
}