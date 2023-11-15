#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    char c=0;
    int a, b;
    float d, e;
    cout << "Введите 1 число" << endl ;
    cin >> a;
    cout << "Введите знак или ?" << endl;
    cin >> c ;
    switch (c){
        case '+':{
            cout << "Введите 2 число" << endl;
            cin >> b;
            cout << "(a+b)= " << (a + b) << endl;
            break;
        }
        case '-':{
            cout << "Введите 2 число" << endl;
            cin >> b;
            cout << "(a-b)= " << (a - b) << endl;
            break;
        }
        case '*':{
            cout << "Введите 2 число" << endl;
            cin >> b;
            cout << "(a*b)= " << (a * b) << endl;
            break;
        }
        case '/':{
            cout << "Введите 2 число" << endl;
            cin >> b;
            d = a;
            e = b;
            cout << "(a/b)= " << (d / e) << endl;
            break;
        }
        case '&':{
            cout << "Введите 2 число" << endl;
            cin >> b;
            std::cout << "(a&b)= " << (a & b) << endl;
            break;
        }
        case '^':{
            cout << "Введите 2 число" << endl;
            cin >> b;
            cout << "(a^b)= " << (a ^ b) << endl;
            break;
        }
        case '|':{
            cout << "Введите 2 число" << endl;
            cin >> b;
            cout << "(a|b)= " << (a | b) << endl;
            break;
        }
        case '%':{
            cout << "Введите 2 число" << endl;
            cin >> b;
            cout << "(a%b)= " << (a % b) << endl;
            break;
        }
        case '?': {
            cout
                << "+ - Сложить" << endl
                << "- - Вычесть" << endl
                << "* - Умножить" << endl
                << "/ - Разделить" << endl
                << "% - Остаток от деления (mod)" << endl
                << "& - Побитовое И" << endl                   
                << "^ - Побитовая эксклюзивная OR" << endl
                << "| - Битовая инклюзивная ИЛИ" << endl << endl;
            break;
        }
        default:
            break;
    }
    main();
    return 0;
}