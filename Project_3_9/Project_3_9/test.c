#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("********************\n");
	printf("******1.play********\n");
	printf("******0.paly********\n");
}
void game()
{
	char board[ROW][COL] = { '0' };
	Initboard(board, ROW, COL);
	Dispalyboard(board, ROW, COL);
	PlayerMove(board, ROW, COL);
	Displayboard(board, ROW, COL);
	IsWin(board,ROW,COL,'*');
	ComputerMove(board, ROW, COL);
	Displayboard(board, ROW, COL);
	IsWin(board, ROW, COL,'#');
	/*�ж��Ƿ�Ӯ
	IsWin�����������
	*�������Ӯ
	#�������Ӯ
	C�������
	Q����ƽ��
	*/



}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do {		
		menu();
		printf("����������");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
			break;
		//game();
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����Ƿ�\n");
			break;

		}
	} while (input);
}
int main()
{
	test();
	return 0;
}