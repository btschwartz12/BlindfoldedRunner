// BlindfoldedRunBoyASSN.cpp
// benny schgwartz

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
void pause()
{
    cout << "Press enter to continue..." << endl;
    cin.clear();//?
    cin.get();
}
int main()
{
    char choice = 'y';
    while (choice != 'n')
    {
        char disp = '~';
        bool first = true;
        string runnerName;
        cout << "WELCOME TO THE VIEWING OF THE BLINDFOLDED RUNNER!!!\n";
        pause();
        cout << "What is the name of the runner you want to watch run blindly? ";
        getline(cin, runnerName);
        while (disp != 'V' && disp != 'H')
        {
            if (!first) {
                cout << "\n\tYou are stupid, you entered an incorrect input. Let's try again...\n";
                //pause(); // why the hell does this not work
            }
            else
                cout << "\n\tGreat! *" << runnerName << "* is now ready to run.\n";
            first = false;
            cout << "\nWould you like a horizontal or vertical display? (H or V) : ";
            cin >> disp;
        }
        cout << "\n*******************\n\nWe're ready to roll! Whenever you're ready!\n";
        pause();

        if (disp == 'V')
        {
            string goodStringBoy = "|     +     |";
            cout << goodStringBoy << endl;
            int pos = 6, count = 0;
            while (pos != 1 && pos != 11) {
                int random = rand() % 3;
                if (random == 0)
                    pos++;
                else if (random == 1)
                    pos--;
                goodStringBoy = "|";
                for (int i = 1; i < pos; i++)
                    goodStringBoy += " ";
                goodStringBoy += "+";
                for (int i = 1; i < 12 - pos; i++)
                    goodStringBoy += " ";
                goodStringBoy += "|";
                cout << goodStringBoy << endl;
                count++;
            }
            if (pos == 1)
                cout << "|X          |";
            else
                cout << "|          X|";
            cout << "\n\nit took " << runnerName << " " << count << " times to do the good\n";
        }
        if (disp == 'H')
        {
            //do the good screen clear............
            /*string goodStringBoy = "|     +     |";
            cout << goodStringBoy << endl;
            int pos = 6, count = 0;
            while (pos != 1 && pos != 11) {
                int random = rand() % 3;
                if (random == 0)
                    pos++;
                else if (random == 1)
                    pos--;
                goodStringBoy = "|";
                for (int i = 1; i < pos; i++)
                    goodStringBoy += " ";
                goodStringBoy += "+";
                for (int i = 1; i < 12 - pos; i++)
                    goodStringBoy += " ";
                goodStringBoy += "|";
                count++;
             }*/
        }
        cout << "\n***Would you like to play again? (y/n) ";
        cin >> choice;
        cout << "\n*\n*\n";
    }
    


    
    
}
