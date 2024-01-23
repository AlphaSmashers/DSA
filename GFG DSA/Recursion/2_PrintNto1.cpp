#include <bits/stdc++.h>
using namespace std;

void printNTo1(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    printNTo1(n - 1);
} // ø(n) and auxilary space = ø(n+1), but as it is a tail recursive function, its auxilory space will be  (1) only, due to modern compilers.(converts recursion to simple goto)

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printNTo1(n);
    return 0;
}