// A B C
// D E F
// G H I
#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "Enter n:";
    cin >> n;
    char c = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << c << " ";
            c++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}