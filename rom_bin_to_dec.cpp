#include <iostream>
#include <bitset>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    bitset<12> bin;
    bitset<4> bin4;
    string num;
    int k = 0;
    int i = 0;
    while (i * i < 4096)
    {
        bin = i * i;
        cout << "\t" << k << ": ";
        num = to_string(i * i);
        if (num.length() < 4)
        {
            bin4 = 0;
            cout << bin4;
            if (num.length() < 3)
            {
                bin4 = 0;
                cout << bin4;
                if (num.length() < 2)
                {
                    bin4 = 0;
                    cout << bin4;
                }
            }
        }
        for (int j = 0; j < num.length(); j++)
        {
            bin4 = num[j];
            cout << bin4;
        }
        k++;
        i++;
        cout << ";" << endl;
    }

    return 0;
}
