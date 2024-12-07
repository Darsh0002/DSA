// 1 2 3
// 4 5 6
// 7 8 9
//  DARSH BALAR
#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "Enter n: ";
    cin >> n;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}