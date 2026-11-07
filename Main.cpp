#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int userchoice;
    int computerchoice;

    //Generate a different random sequece each time
    srand(time(0));

    cout << "===== Rock Paper Scissors =====\n";

    cout << "1 . Rock\n";
    cout << "2 . Paper\n";
    cout <<" 3 . Scissors\n";

    cout << " Enter your choice : ";
    cin >> userchoice;

    computerchoice = rand() %
    3+1;
    cout << "\nYou choice: ";

    if (userchoice == 1)
    cout << "Rock\n";
    else if (userchoice == 2)
    cout << "Paper\n";
    else if (userchoice == 3)
    cout << "Scissors\n";
    else
        cout << "Invaild choice\n";
        cout << " Computer chose:";

        if (computerchoice == 1)
        cout << "Rock\n";
        else if (computerchoice == 2)
        cout << "Paper\n";
        else if (computerchoice == 3)
        cout <<" Scissors\n";

        if (userchoice == computerchoice)
        {
            cout << "\nIt's a draw!\n";
        
        }
        else if (
            (userchoice == 1&& computerchoice ==3)||
            (userchoice == 2 && computerchoice ==1)||
            (userchoice == 3 && computerchoice == 2)
        
        )
        { cout <<"\nYou win !!\n";
        }
        else
        {
            cout << "\ncomputer wins !!\n";
        }
        return 0;
}