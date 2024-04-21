#include <stdio.h>

int row = 3;
int col = 3;

/*
 *  * | * | *
 *  ----------
 *  * | * | *
 *  ----------
 *  * | * | *
 */

void init_board(char arr[row][col])
{
  int _row, _col;

  for(_row = 0; _row < row; _row++){
    for(_col = 0; _col < col; _col++) {
      arr[_row][_col] = '*';
    }
  }
}

void print_board(char array[row][col])
{
  int _row, _col;

  for(_row = 0; _row < 3; _row++){
    for(_col = 0; _col < col; _col++) {
      printf(" %c ", array[_row][_col]);
      if(_col != 2)
	printf("|");
      
    }
    printf("\n");
    printf("-----------\n");
  }
  
}

main()
{
  char board[3][3];
  printf("Tic Tac Toe !\n\n");
  init_board(board);
  print_board(board);
}
