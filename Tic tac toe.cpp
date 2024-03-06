#include<stdio.h>
#include<conio.h>

//Array that has box numbers
char Arr[10] = {'0','1','2','3','4','5','6','7','8','9'};

//Function prototypes
void display_board();
int win_or_draw();

int main(){
	
	int player = 1;
	int choice;
	int i ;
//Variable to store symbol X or O
	char symbol;
	
	printf("    Tic Tac Toe    \n");
	printf("Player 1 has symbol X and player 2 has symbol O\n");
	
//do while that assigns symbol to box choosen by player	
	do
	{
	
		display_board();
		player = (player % 2) ? 1 : 2;
		printf("Player %d, enter your choice (1-9): ", player);
    	scanf("%d", &choice);
		symbol = (player == 1)? 'X' : 'O';
		
		if(choice == 1 && Arr[1] == '1')
		{
			Arr[1] = symbol;
		}
		else if(choice == 2 && Arr[2] == '2')
		{
			Arr[2] = symbol;
		}
		else if(choice == 3 && Arr[3] == '3')
		{
			Arr[3] = symbol;
		}
		else if(choice == 4 && Arr[4] == '4')
		{
			Arr[4] = symbol;
		}
		else if(choice == 5 && Arr[5] == '5')
		{
			Arr[5] = symbol;
		}
		else if(choice == 6 && Arr[6] == '6')
		{
			Arr[6] = symbol;
		}
		else if(choice == 7 && Arr[7] == '7')
		{
			Arr[7] = symbol;
		}
		else if(choice == 8 && Arr[8] == '8')
		{
			Arr[8] = symbol;
		}
		else if(choice == 9 && Arr[9] == '9')
		{
			Arr[9] = symbol;
		}
//Tells the user about wrong input and the same user has to enter a value again		
	else
		{
			printf("Wrong input value ! please choose any box from 1-9 that donot already have a symbol press any key to resume the game \n");
			player--;
			getch();
		}

	i = win_or_draw();
	player++;
	
	
} while(i == -1);
	
	display_board();
	player--;
	
	if(i == 1)
	{
		printf("congratulations! player %d \n",player);
		printf("player %d wins !\n",player);
	}
	else
	{
		printf("DRAW!\n");
	}
			
	return 0;
}

//Function that prints the board
void display_board()
{
	
	printf("        |        |        \n");
	printf("        |        |        \n");
	printf("    %c   |    %c   |    %c   \n",Arr[1],Arr[2],Arr[3]);
	printf("--------|--------|--------\n");
	printf("        |        |        \n");
	printf("        |        |        \n");
	printf("    %c   |    %c   |    %c   \n",Arr[4],Arr[5],Arr[6]);
	printf("--------|--------|--------\n");
	printf("        |        |        \n");
	printf("    %c   |    %c   |    %c   \n",Arr[7],Arr[8],Arr[9]);
	printf("        |        |        \n");
	
}

//Functions that determines if a player won or the game is drawn
int win_or_draw()
{
// checking for same row values
	if(Arr[7] == Arr[8] && Arr[8] == Arr[9])
	{
		return 1;
	}
	else if(Arr[1] == Arr[2] && Arr[2] == Arr[3])
	{
		return 1;
	}
	else if(Arr[4] == Arr[5] && Arr[5] == Arr[6])
	{
		return 1;
	}
	
//checkng for same column values
	else if(Arr[2] == Arr[5] && Arr[5] == Arr[8])
	{
		return 1;
	}
	else if(Arr[3] == Arr[6] && Arr[6] == Arr[9])
	{
		return 1;
	}
	else if(Arr[1] == Arr[4] && Arr[4] == Arr[7])
	{
		return 1;
	}
	
//checking for same diagonal values
	else if(Arr[3] == Arr[5] && Arr[5] == Arr[7])
	{
		return 1;
	}
	else if(Arr[1] == Arr[5] && Arr[5] == Arr[9])
	{
		return 1;
	}
//checking for draw
	else if (Arr[1] != '1' && Arr[2] != '2' && Arr[3] != '3' && Arr[4] != '4' && Arr[5] != '5' && Arr[6] != '6' && Arr[7] != '7' && Arr[8] != '8' && Arr[9] != '9')
	{
		return 0;
	}
	else 
	{
		return -1;
	}
}
