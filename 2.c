#include <stdio.h>
#include <windows.h>
int main(void) {
	COORD p1;

	HANDLE console;//HANDLE�� ������ ���� ���� �ұ�
	console = GetStdHandle(STD_OUTPUT_HANDLE);//����� �Լ��� ����� �ɱ�, � ���� �ϴ� �Լ����ڸ� ���� �ɱ�

	p1.X = 0, p1.Y = 0;
	SetConsoleCursorPosition(console, p1);// �ܼ�â���� Ŀ���� ��ġ�� �����ϴ� �Լ�, console�̶�� ������ 0,0�� ��ġ��Ű�� �簢���� ����϶�
	printf("��");

	p1.X = 6, p1.Y = 6;
	SetConsoleCursorPosition(console, p1);
	printf("��");

	getchar();
	return 0;
}