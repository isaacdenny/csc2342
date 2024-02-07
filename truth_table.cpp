#include <iostream>
using namespace std;

// This works, but uses an if statement and 2 loops
// void printTable(unsigned char n) {
//     unsigned char i, j;
//     for (i = 1 << 0; i <= (1 << n); i++) {
//         for (j = 1 << n; j > 0; j = j / 2)
//         {
//             cout << (int)((((i - 1) & j) >> (int)(i / n)) & 1);
//             // if (((i - 1) & j) != 0)
//             // {
//             //     cout << "1 ";
//             // }
//             // else
//             // {
//             //     cout << "0 ";
//             // }
//         }
//         cout << endl;
//     }
// }

// This also works, but it uses an if statement and recursive
int decimalToBinary(int n) {
    if (n == 0) return 0;
    else return (n % 2 + 10 * decimalToBinary(n / 2));
}


void printTable(unsigned char n) {
    unsigned char i, j;
    for (i = 0; i < n; i++) {
        cout << decimalToBinary(i);
        // for (j = i; j > 0; j = j >> 1) {
        //     cout << (j & 1);
        // }
        cout << endl;
    }
}

// Driver Code
int main()
{
    printTable(4);
    return 0;
}