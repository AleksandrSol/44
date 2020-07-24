#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

#define N 5
int main()
{
    {
        setlocale(LC_CTYPE, "ukr");
        cout << "++++++++++++++++++++++++++++++++++++\n";
        cout << "            Iнформацiя:           \n";
        cout << "Група: IПЗ-I 18к                  \n";
        cout << "ПІБ: Соляной Александр Олегович\n";
        cout << "Номер теми: 1.1.2 \n";
        cout << "Номер завдання: 44 " << "\n";
        cout << "+++++++++++++++++++++++++++++++++++\n\n";

        map< string, int > otveti;

        for (int i = 0; i < N; i++)
        {
            string tmp;

            cout << "Enter otvet: ";
            cin >> tmp;

            if (otveti.count(tmp) > 0)
                otveti[tmp] += 1;
            else
                otveti[tmp] = 1;
        }


        for (auto [key, value] : otveti)
        {
            cout << key << " : " << ((double)(value) / (double)(N) * 100) << " % \n";
        }
    }
}
