#include <stdio.h>
#include <windows.h>
int main(void) {
	COORD p1 = { 0,0 };
	COORD p2 = { 6,6 };

	HANDLE console;//HANDLE�� ������ ���� ���� �ұ�
	console = GetStdHandle(STD_OUTPUT_HANDLE);//����� �Լ��� ����� �ɱ�, � ���� �ϴ� �Լ����ڸ� ���� �ɱ�

	SetConsoleCursorPosition(console, p1);// �ܼ�â���� Ŀ���� ��ġ�� �����ϴ� �Լ�, console�̶�� ������ 0,0�� ��ġ��Ű�� �簢���� ����϶�
	printf("��");

	SetConsoleCursorPosition(console, p2);
	printf("��");

	getchar();
	return 0;
}