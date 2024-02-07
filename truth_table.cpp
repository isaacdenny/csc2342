#include <iostream>
using namespace std;

void bin(unsigned char n)
{
    unsigned char i;
    i = 1 << n;
    cout << (int)i << endl;
    for (i = 1 << n; i > 0; i = i / 2)
    {
        if ((n & i) != 0)
        {
            cout << "1";
        }
        else
        {
            cout << "0";
        }
    }
}

// Driver Code
int main(void)
{
    bin(2);
    cout << endl;
    bin(3);
}