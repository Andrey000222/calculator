#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    char c=0;
    int a, b;
    float d, e;
    cout << "������� 1 �����" << endl ;
    cin >> a;
    cout << "������� ���� ��� ?" << endl;
    cin >> c ;
    switch (c){
        case '+':{
            cout << "������� 2 �����" << endl;
            cin >> b;
            cout << "(a+b)= " << (a + b) << endl;
            break;
        }
        case '-':{
            cout << "������� 2 �����" << endl;
            cin >> b;
            cout << "(a-b)= " << (a - b) << endl;
            break;
        }
        case '*':{
            cout << "������� 2 �����" << endl;
            cin >> b;
            cout << "(a*b)= " << (a * b) << endl;
            break;
        }
        case '/':{
            cout << "������� 2 �����" << endl;
            cin >> b;
            d = a;
            e = b;
            cout << "(a/b)= " << (d / e) << endl;
            break;
        }
        case '&':{
            cout << "������� 2 �����" << endl;
            cin >> b;
            std::cout << "(a&b)= " << (a & b) << endl;
            break;
        }
        case '^':{
            cout << "������� 2 �����" << endl;
            cin >> b;
            cout << "(a^b)= " << (a ^ b) << endl;
            break;
        }
        case '|':{
            cout << "������� 2 �����" << endl;
            cin >> b;
            cout << "(a|b)= " << (a | b) << endl;
            break;
        }
        case '%':{
            cout << "������� 2 �����" << endl;
            cin >> b;
            cout << "(a%b)= " << (a % b) << endl;
            break;
        }
        case '?': {
            cout
                << "+ - �������" << endl
                << "- - �������" << endl
                << "* - ��������" << endl
                << "/ - ���������" << endl
                << "% - ������� �� ������� (mod)" << endl
                << "& - ��������� �" << endl                   
                << "^ - ��������� ������������ OR" << endl
                << "| - ������� ����������� ���" << endl << endl;
            break;
        }
        default:
            break;
    }
    main();
    return 0;
}