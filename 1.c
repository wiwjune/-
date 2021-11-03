#include <stdio.h>
#include <windows.h>
int main(void) {
	COORD p1 = { 0,0 };
	COORD p2 = { 6,6 };

	HANDLE console;//HANDLE형 변수는 무슨 일을 할까
	console = GetStdHandle(STD_OUTPUT_HANDLE);//어떤일을 함수를 사용한 걸까, 어떤 일을 하는 함수인자를 넣은 걸까

	SetConsoleCursorPosition(console, p1);// 콘솔창에서 커서의 위치를 설정하는 함수, console이라는 변수를 0,0에 위치시키고 사각형을 출력하라
	printf("■");

	SetConsoleCursorPosition(console, p2);
	printf("■");

	getchar();
	return 0;
}