#include <iostream>
#include<stdlib.h>
#include<cstdlib>
#include <bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{

    int n;
    
    while (scanf("%d", &n) != EOF && n != 0)
    {
        int b = n / 7;
        float m = b, ch = b, g = 0;
        switch (n % 7)
        {
        case 1:
            m += 0.5;
            break;
        case 2:
            m += 0.5;
            g = 1.0;
            break;
        case 3:
            ch += 0.5;
            g = 0.5;
            break;
        case 4:
            ch += 0.5;
            m += 0.5;
            g = 0.5;
            break;
        case 5:
            ch += 0.5;
            m += 1;
            g = 0.5;
            break;
        case 6:
            ch += 1;
            m += 0.5;
            break;
        }

        cout << setprecision(2)<< g <<" "<<setprecision(2)<< m <<" "<<setprecision(2)<< m <<" " <<setprecision(2)<<ch <<" "<< endl;
    }
}