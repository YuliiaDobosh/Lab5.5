#include <iostream>
#include<math.h>
using namespace std;

void DecToBin(int n)
{
    if (n >= 2)
    {
        DecToBin(n / 2);
    }
    cout << n % 2;
    return;
}
void DecToOct(int n)
{

    if (n >= 8)
    {
        DecToOct(n / 8);
    }
    cout << n % 8;
    return;
}

void DecToRand(int n, int x, int level, int& depth)
{
    if (level > depth)
        depth = level;

    if (n >= x)
    {
        DecToRand(n / x, x, level + 1, depth);
    }
    cout << n % x;
    return;
}


int main() {

    int n;
    int x;
    int depth;
    cout << "Number = ? "; cin >> n;
    cout << "Rand = ? "; cin >> x;


    cout << n << " (Dec) = ";
    DecToBin(n);
    cout << " (Bin)" << endl;

    cout << n << " (Dec) = ";
    DecToOct(n);
    cout << " (Oct)" << endl;

    cout << n << " (Dec) = ";
    DecToRand(n, x, 1, depth);
    cout << " (Rand)" << endl;
    cout << "depth of DecToRand() = " << depth << endl;
    return 0;

}