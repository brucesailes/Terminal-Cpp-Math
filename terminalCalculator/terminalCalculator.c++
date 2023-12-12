#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double num1, num2, num3;
    char operation, redo;

    cout << "Welcome to Calculator program v3.0 written by ya boy Bruce Sailes!" << endl;

    cout << "************* Its About To Begin! ****************" << endl;

    cout << "Lets Start!" << endl;

    cout << endl
         << endl
         << endl;

    do

    {
        cout << "Welcome to my mini calculator, this calculator performs basic arithmetic! Don't use for any test hahaha!";

        cout << " Please enter your operations (+, *, -, /)";

        cin >> operation;

        cout << endl

             << endl

             << endl;

        cout << "Please enter your numbers aqui, sorry sometimes I speak spanish =)";

        cout << operation << "):" << endl

             << "1st Number:";
        cin >> num1;
        cout << "2nd Number:";
        cin >> num2;
        cout << "3rd Number:";
        cin >> num3;

        switch (operation)

        {
        case '+':
            cout << "The addition of three numbers (" << num1 << "," << num2 << "," << num3 << "):";
            cout << num1 + num2 + num3 << endl;
            break;
        case '-':
            cout << "The subtraction of three numbers (" << num1 << "," << num2 << "," << num3 << "):";
            cout << num1 - num2 - num3 << endl;
            break;
        case '*':
            cout << "The multiplication of three numbers (" << num1 << "," << num2 << "," << num3 << "):";
            cout << num1 * num2 * num3 << endl;
            break;
        case '/':
            cout << "The division of three numbers (" << num1 << "," << num2 << "," << num3 << "):";

            if (num3 == 0)
            {

                cout << "Not Valid" << endl;
            }

            cout << (num1 / num2 / num3) << endl;

            break;

        default:
            cout << "Unknown command" << endl;
        }

        cout << "Enter y or Y to continue:";
        cin >> redo;
        cout << endl
             << endl;

    } while (redo == 'y' || redo == 'Y');

    return 0;
}
