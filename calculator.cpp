#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    char c,run;
    int a, b;
    float d, e;
    do {
        cout << "введите 1 число" << endl;
        cin >> a;
        cout << "введите знак или ? (список команд)" << endl;
        cin >> c;
        cout << "Введите 2 число" << endl;
        cin >> b;
        switch (c) {
        case '+': {
            cout << "(a+b)= " << (a + b) << endl;
            break;
        }
        case '-': {
            cout << "(a-b)= " << (a - b) << endl;
            break;
        }
        case '*': {
            cout << "(a*b)= " << (a * b) << endl;
            break;
        }
        case '/': {
            d = a;
            e = b;
            cout << "(a/b)= " << (d / e) << endl;
            break;
        }
        case '&': {
            cout << "(a&b)= " << (a & b) << endl;
            break;
        }
        case '^': {
            cout << "(a^b)= " << (a ^ b) << endl;
            break;
        }
        case '|': {
            cout << "(a|b)= " << (a | b) << endl;
            break;
        }
        case '%': {
            cout << "(a%b)= " << (a % b) << endl;
            break;
        }
        case '?': {
            cout
                << "+ - сложение" << endl
                << "- - вычитание" << endl
                << "* - умножение" << endl
                << "/ - деление" << endl
                << "% - остаток от деления (mod)" << endl
                << "& - коньюнкция" << endl
                << "^ - поразрядное исключение" << endl
                << "| - дизьюнкция" << endl << endl;
            break;
        }
        default:
            break;
        }
        cout << "для продолжения нажмите n для выхода q" << endl;
        cin >> run;
    } while (run != 'q');
    return 0;
}
