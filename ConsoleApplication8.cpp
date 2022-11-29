#include <iostream>
using namespace std;
int main()
{
        char op;
        float num1, num2;
cout<<"Programm was made by Great Anton Zhabotinskyi and GREAT AhmaDICK Nehlavi";
        cout << "Enter operator: +, -, *, /: ";
        cin >> op;

        cout << "Enter 1 number: ";
        cin >> num1 ;  
         cout << "Enter 2 number: ";
        cin>>num2;

        switch (op) {

        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;

        default:
            
            cout << "Error! operator is Wrong";
            break;
        }

        return 0;
    }




