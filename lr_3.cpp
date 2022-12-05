#include <iostream>
#include <fstream>
using namespace std;

/*
Дан текстовый файл. С консоли считывается строка.
Найти номера всех строк, в которых встречается данная подстрока.
*/

int main()
{
    const int max = 50;
    char str[max];
    int i = 0;
    int pos;
    string instr;
    string tempstr;
    cout << "Enter your love letter:";
    cin >> instr;
    ifstream file;
    file.open("in.txt");

    while (!file.eof())
    {
        file.getline(str, max); 
        tempstr = str;
        pos = tempstr.find(instr);
        i++;
        if (pos != -1)
        {
            cout << i << endl;
        }
    }
    file.close();
    return 0;
}


