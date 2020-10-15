#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count;
    set<int> sec;
    cin >> count;
    for (int i = 0; i < count; ++i)
    {
        int type, query;
        cin >> type >> query;
        switch (type)
        {
        case 1:
            sec.insert(query);
            break;
        case 2:
            sec.erase(query);
            break;
        case 3:
            cout << (sec.find(query) == sec.end() ? "No" : "Yes") << endl;
            break;
        }
    }
    return 0;
}