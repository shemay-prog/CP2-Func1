#include <iostream>

using namespace std;

//functions 

int main()
{
    float first = 0;
    float second = 0;
    float sum = 0;
    int option = 0;
    bool wantToCont = true;


    do {
        cout << "\nExit [0] | Multiplication [1] | Division [2] | Add [3] or Subtract [4]: ";
        cin >> option;

        switch (option) {
        case 0:
            wantToCont = false;
            cout << "\nBye, b!";
            exit(0);
            break;

        case 1:
            system("cls");
            cout << "-Multiplication-\n";
            cout << "\nInput first value: ";
            cin >> first;

            cout << "Input second value: ";
            cin >> second;

            sum = first * second;

            cout << "\n" << first << " x " << second << " = " << sum << endl;
            break;

        case 2:
            system("cls");
            cout << "-Division-\n";
            cout << "\nInput first value: ";
            cin >> first;

            cout << "Input second value: ";
            cin >> second;

            sum = first / second;

            cout << "\n" << first << " / " << second << " = " << sum << endl;
            break;

        case 3:
            system("cls");
            cout << "-Addition-\n";
            cout << "\nInput first value: ";
            cin >> first;

            cout << "Input second value: ";
            cin >> second;

            sum = first + second;

            cout << "\n" << first << " + " << second << " = " << sum << endl;
            break;

        case 4:
            system("cls");
            cout << "-Subtraction-\n";
            cout << "\nInput first value: ";
            cin >> first;

            cout << "Input second value: ";
            cin >> second;

            sum = first - second;

            cout << "\n" << first << " - " << second << " = " << sum << endl;
            break;

        default:
            system("cls");
            cout << "\nInvalid input\n";
            break;
        }
    }

    while (true);
}
