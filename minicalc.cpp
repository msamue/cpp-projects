/**
 * MiniCalc: A mini calculator that can do simple arithmetic between 2 operands
 * @author: msamue@github.com
*/

#include <iostream>
using namespace std;

int main ()
{
    cout << " ================================" << endl;
    cout << "  __  __ _      _  ___      _    " << endl;
    cout << " |  \\/  (_)_ _ (_)/ __|__ _| |__ " << endl;
    cout << " | |\\/| | | ' \\| | (__/ _` | / _|" << endl;
    cout << " |_|  |_|_|_||_|_|\\___\\__,_|_\\__|" << endl;
    cout << "                                 " << endl;
    cout << " ================================" << endl;
    
    cout << " MiniCalc: A mini calculator that" << endl;
    cout << " can do the 4 basic operations:  " << endl;
    cout << " add:        +   subtract:   -   " << endl;
    cout << " multiply:   *   divide:     /   " << endl;
    cout << endl;
    cout << " Enter the operands (numbers you " << endl;
    cout << " are using) and operator when    " << endl;
    cout << " prompted followed by ENTER.     " << endl;
    cout << " --------------------------------" << endl;
    
    label:
    double num1, num2;
    char op, choice;
    cout << " Enter 1st operand: ";
    cin >> num1;
    cout << " Enter operator: ";
    cin >> op;
    cout << " Enter 2nd operand: ";
    cin >> num2;
    cout << endl;
    switch(op){
        case '+': cout << " " << num1 << " + " << num2 << " = " << num1 + num2;
        break;
        case '-': cout << " " << num1 << " - " << num2 << " = " << num1 - num2;
        break;
        case '*': cout << " " << num1 << " * " << num2 << " = " << num1 * num2;
        break;
        case '/': cout << " " << num1 << " / " << num2 << " = " << num1 / num2;
        break;
        default: cout << "ERROR: Invalid operator.";
    } 
    cout << endl;
    label2:
    cout << " --------------------------------" << endl;
    cout << " Calculate again? y/n: ";
    cin >> choice;
    cout << " --------------------------------" << endl;
    if(choice == 'y') {
        goto label;
    } else if (choice == 'n') {
        cout << " Goodbye!";
        return 0;
    } else {
        cout << " ERROR: Invalid option." << endl;
        goto label2;
    }
}
