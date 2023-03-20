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
	/*判断是否赢
	IsWin函数如果返回
	*代表玩家赢
	#代表电脑赢
	C代表继续
	Q代表平局
	*/



}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do {		
		menu();
		printf("请输入数字");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			break;
		//game();
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入非法\n");
			break;

		}
	} while (input);
}
int main()
{
	test();
	return 0;
}