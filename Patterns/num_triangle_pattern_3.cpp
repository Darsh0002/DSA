// 1
// 2 1
// 3 2 1
// 4 3 2 1
// DARSH BALAR
#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "Enter n:";
    cin >> n;
    while (i <= n)
    {
        int j = i;            //.....int j = 1;
        while (j >= 1)        //.....while(j <= i)
        {                     //.....{
            cout << j << " "; //..... cout << (i-j+1) << " ";
            j--;              //......j++;}
        }
        cout << endl;
        i++;
    }
    return 0;
}