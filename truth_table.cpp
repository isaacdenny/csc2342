#include <iostream>
using namespace std;

void printTable(unsigned char n) {
    unsigned char i, j;
    for (i = 1 << 0; i <= (1 << n); i++) {
        for (j = 1 << n; j > 0; j = j / 2)
        {
            // cout << (int)((i - 1) & j);
            if (((i - 1) & j) != 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

// Driver Code
int main()
{
    printTable(2);
}