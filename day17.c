#include <stdio.h>
void display (char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}
int check_winner(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return board[i][0];
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return board[0][i];
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return board[0][0];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return board[0][2];
    return 0;
}
int main()
{
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    int player = 1, choice, row, col;
    char mark;
    do
    {
        display(board);
        player = (player % 2) ? 1 : 2;
        printf("Player %d, enter a number (1-9): ", player);
        scanf("%d", &choice);
        mark = (player == 1) ? 'X' : 'O';
        row = (choice - 1) / 3;
        col = (choice - 1) % 3;
        if (board[row][col] != 'X' && board[row][col] != 'O')
            board[row][col] = mark;
        else
        {
            printf("Invalid move! Try again.\n");
            player--;
        }
        player++;
    } while (check_winner(board) == 0 && choice != 0);
    display(board);
    if (check_winner(board) == 'X')
        printf("Player 1 wins!\n");
    else if (check_winner(board) == 'O')
        printf("Player 2 wins!\n");
    else
        printf("It's a draw!\n");
    return 0;
}