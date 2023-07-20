#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

//board initialize
char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

int choice;
int row,column;
char turn = 'X';
bool draw = false;
string p1 = "Congratulations! Player1 with 'X' won the game";
string p2 = "Congratulations! Player2 with 'O' won the game";
string d = "You both played well! The game is DRAWN";
//Function to show the current status of the gaming board

void boardDisplay(){

    //Render Game Board LAYOUT

    cout<<"\tPLAYER - 1 [X]\t PLAYER - 2 [O]\n\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[0][0]<<"  | "<<board[0][1]<<"  |  "<<board[0][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[1][0]<<"  | "<<board[1][1]<<"  |  "<<board[1][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[2][0]<<"  | "<<board[2][1]<<"  |  "<<board[2][2]<<" \n";
    cout<<"\t\t     |     |     \n";
}

//Function to get the player input and update the board

void boardUpdate(){
    if(turn == 'X'){
        cout<<"\n\tPlayer - 1 [X] turn : ";
    }
    else if(turn == 'O'){
        cout<<"\n\tPlayer - 2 [O] turn : ";
    }
    //Taking input from user
    //updating the board according to choice and reassigning the turn Start

    cin>> choice;

    //switch case to get which row and column will be update

    switch(choice){
        case 1: row=0; column=0; break;
        case 2: row=0; column=1; break;
        case 3: row=0; column=2; break;
        case 4: row=1; column=0; break;
        case 5: row=1; column=1; break;
        case 6: row=1; column=2; break;
        case 7: row=2; column=0; break;
        case 8: row=2; column=1; break;
        case 9: row=2; column=2; break;
        default:
            cout<<"\tInvalid Move";
    }

    if(turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O'){
        //updating the position for 'X' symbol if
        //it is not already occupied
        board[row][column] = 'X';
        turn = 'O';
    }else if(turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O'){
        //updating the position for 'O' symbol if
        //it is not already occupied
        board[row][column] = 'O';
        turn = 'X';
    }else {
        //if input position already filled
        cout<<"\tBox already filled!\n \tPlease choose another!!\n\n";
        boardUpdate();
    }
    /* Ends */
    boardDisplay();
    system("cls");
    cout<<"\n\n\n\n\n";
}

//Function to get the game status e.g. GAME WON, GAME DRAW GAME IN CONTINUE MODE

bool gameContinue(){
    //checking if any Row or Column matched
    for(int i=0; i<3; i++)
    if(board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
    return false;

    //checking if diagonal matched or not

    if(board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
    return false;

    //Checking if continue or NOT
    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
    if(board[i][j] != 'X' && board[i][j] != 'O')
    return true;

    //Checking if game is DRAW
    draw = true;
    return false;
}

//Program Main Method

int main()
{
	cout<<endl;
	cout<<endl;
	cout<<endl;
    cout << "\t\t<================================================================================>" << endl;
    cout << "\t\t|                        WELCOME TO TIC-TAC-TOE Game!                             |" << endl;
    cout << "\t\t|       Fill The numbers with X or O and match a 3x3 row or column or diagonal    |" << endl;
    cout << "\t\t<================================================================================>" << endl;
    cout<<endl;
    while(gameContinue()){
        boardDisplay();
        boardUpdate();
        gameContinue();
    }
    if(turn == 'X' && draw == false){
        cout<<"\n\n";
        int i=0;
        while(p2[i] != '\0')
	    {
			cout<<p2[i];
	        Sleep(100);
	        i++;
    	}
    }
    else if(turn == 'O' && draw == false){
        cout<<"\n\n";
        int i=0;
        while(p1[i] != '\0')
	    {
			cout<<p1[i];
	        Sleep(100);
	        i++;
    	}
    }
    else
    {
    	cout<<"\n\n";
    	int i=0;
        while(d[i] != '\0')
	    {
			cout<<d[i];
	        Sleep(100);
	        i++;
    	}
	}
    
    return 0;
} 