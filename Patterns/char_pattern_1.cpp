// A A A
// B B B
// C C C
#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "Enter n:";
    cin >> n;
    char c = 'A'; // c = 'A'+ i - 1 ;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << c << " "; // cout << c << " ";
            j++;
        }
        cout << endl;
        c++; //
        i++;
    }
    return 0;
}