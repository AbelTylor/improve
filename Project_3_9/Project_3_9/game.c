#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void Displayboard(char board[ROW][COL], int row, int col)
{
	//打印数据
	int i = 0;
	for(i=0;i<row;i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %d ",board[i][j]);
			if (i < col - 1)
			{
				printf("|");
			}
			printf("\n");
		}
		//打印数据行
		if (i < row - 1) 
		{
			printf("---|---|---\n");
		}



	}
	
}
void PlayerMove(char board[ROW][COL],int row,int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入坐标");
		scanf("%d%d", &x, &y);
		if (1 <= x && x <= ROW && 1 <= y && y <= COL)
		{
			if (board[x - 1][y - 1] != ' ')
				board[x - 1][y - 1] = '*';
			break;
		}
		else
		{
			printf("输入的坐标不合法，请重新输入");
		}
	
	}
	
	void ComputerMove(char board[ROW][COL], int row, int col);
	{
		int x = 0;
		int y = 0;
		
		while (1)
		{
			x = rand() % row;
			y = rand() % col;
			if (board[x][y] != ' ')
			{
				board[x][y] = '#';
			}
			break;
		}

	}

	char IsWin(char board[ROW][COL], int row, int col, char ret)
	{
		int i = 0;
		for (i = 0; i < row, i++)
		{
			if (board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][1]!=' ')


		}
		


	}

	

}