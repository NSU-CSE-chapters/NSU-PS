#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int que, type;
    cin >> que;
    map<string, int> clas;
    string name;
    for (int i(0), mark; i < que; i++)
    {
        cin >> type >> name;
        if (type == 1)
        {
            cin >> mark;
            clas[name] += mark;
        }
        else if (type == 2)
            clas.erase(name);
        else
            cout << clas[name] << "\n";
    }
    return 0;
}