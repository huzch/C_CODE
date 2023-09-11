#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
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

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				j < col - 1 ? printf("---|") : printf("---");
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:\n");
	while (1)
	{
		printf("请输入坐标(x,y):");
		scanf("%d,%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标已被占用\n");
			}
		}
		else
		{
			printf("输入坐标非法\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//1表示棋盘满了
//0表示棋盘未满
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	////横三行
	//for (i = 0; i < row; i++)
	//{
	//	if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
	//	{
	//		return board[i][0];
	//	}
	//}
	////竖三列
	//for (i = 0; i < col; i++)
	//{
	//	if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
	//	{
	//		return board[0][i];
	//	}
	//}
	////两个对角线
	//if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	//{
	//	return board[1][1];
	//}
	//if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	//{
	//	return board[1][1];
	//}
	for (i = 0; i < row; i++)
	{
		int sum = 0;
		for (j = 0; j < col - 1; j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j] != ' ')
			{
				sum++;
			}
		}
		if (sum == col - 1)
			return board[i][j];
	}
	for (i = 0; i < col; i++)
	{
		int sum = 0;
		for (j = 0; j < row - 1; j++)
		{
			if (board[j][i] == board[j + 1][i] && board[j][i] != ' ')
			{
				sum++;
			}
		}
		if (sum == col - 1)
			return board[j][i];
	}
	int sum_x = 0;
	int sum_y = 0;
	for (i = 0; i < row - 1; i++)
	{
		if (board[i][i] == board[i + 1][i + 1] && board[i][i] != ' ')
		{
			sum_x++;
		}
		else if (board[row - i - 1][i] == board[row - i - 2][i + 1] && board[row - i - 1][i] != ' ')
		{
			sum_y++;
		}
	}
	if (sum_x == row - 1)
	{
		return board[i][j];
	}
	if (sum_y == row - 1)
	{
		return board[row - i - 1][i];
	}
	//判断是否平局
	if (1 == IsFull(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}