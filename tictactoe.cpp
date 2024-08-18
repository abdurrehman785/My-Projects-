// tic tac toe game 
#include<iostream>
using namespace std;

char square[10] = {'0','1', '2', '3', '4', '5', '6', '7', '8', '9'};

// function for game status (all possibilities of winning)

int checkwin()
{
    if(square[1] == square[2] && square[2]== square[3])
    {
        return 1;
    }
    else if(square[4] == square[5] && square[5]== square[6])
    {
        return 1;
    }
    else if (square[7]==square[8] && square[8]==square[9])
    {
        return 1;
    }
    else if (square[1]==square[5] && square[5]==square[9])
    {
        return 1;
    }
    else if (square[2]==square[5] && square[5]==square[8])
    {
        return 1;
    }
    else if (square[3]==square[5] && square[5]==square[7])
    {
        return 1;
    }
    else if (square[3]==square[6] && square[6]==square[9])
    {
        return 1;
    }
    else if (square[1]==square[4] && square[4]==square[7])
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

void board()
{
    system("cls");
    cout<<"\n\n Tic Tac Toe Game \n\n";

    cout<<"player 1(X) and player 2(O)"<<endl<<endl;
    cout<<endl;

    //drawing 
    /*cout<<"     |        |       "<< endl;
    cout<<" "<<square[1] <<" | "<<square[2]<<" | "<<square[3] << endl;

    cout<<"_______|_________|________"<<endl;
    cout<<"_______|_________|________"<<endl;
    cout<<" "<<square[4] << " | " << square[5] <<" | " <<square[6] << endl;

     cout<<"_______|_________|________"<<endl;
     cout<<"_______|_________|________"<<endl;
    cout<<" "<<square[7] << " | " << square[8] <<" | " <<square[9] << endl;*/
    // Drawing
cout << "     |     |     " << endl;
cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
cout << "_____|_____|_____" << endl;
cout << "     |     |     " << endl;
cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
cout << "_____|_____|_____" << endl;
cout << "     |     |     " << endl;
cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
cout << "     |     |     " << endl;

}


int main()
{
    int player = 1;
    int i, choice;

    char mark;

    do
    {
        board();
        player = (player%2)?1:2;
        cout<<"Player "<<player<<"Enter the number: ";
        cin>>choice;

        mark =(player ==1)?'X' : 'O';
        if(choice == 1 && square[1] == '1')
        {
            square[1] = mark;
        }
        else if(choice ==2 && square[2]=='2')
        {
            square[2] = mark;
        }
         else if(choice ==3 && square[3]=='3')
        {
            square[3] = mark;
        }
         else if(choice ==4 && square[4]=='4')
        {
            square[4] = mark;
        }
         else if(choice ==5 && square[5]=='5')
        {
            square[5] = mark;
        }
         else if(choice ==6 && square[6]=='6')
        {
            square[6] = mark;
        }
         else if(choice ==7 && square[7]=='7')
        {
            square[7] = mark;
        }
         else if(choice ==8 && square[8]=='8')
        {
            square[8] = mark;
        }
         else if(choice ==9 && square[9]=='9')
        {
            square[9] = mark;
        }
        else 
        {
            "INVALID MOVE";
            player--;
            cin.ignore();
            cin.get();
        }
        i = checkwin();
        player++;
    } while (i == -1);
    board();
    if(i == 1)
    {
        cout<<"\nCongratulations"<<--player<<"wins"<<endl;
    }
}
/*
TIC TAC TOE GAME EXPLANATION:       inspiration from youtube channel devression 
#include<iostream>
using namespace std;

char square[10]={'0','1',}

int checkwin()
{
	// all possibilities of winning 
	// 1 = 3= 5 etc if true return1 else return -1
}
void board()
{
	system("clr");
	//drawing ____|___|___
}
int main()
{
	// asssingn player =1 
	int i;
	char choice;
	// do while loop 
	// enter the choice and create a character mark == x 
	//player = (player%2)?1:2; shuffels b/w 1 and 2 
	//if(player ==1)?'X' : 'Y'; gives player 1 X and player 2 O
	//after the while loop assign i == the check win function 
	// if its - 1 loop keeps running and incase if invalid entry we player-- so player can repeat his/her turn and add cin.ignore() to ignore errors
	// thats it
}*/