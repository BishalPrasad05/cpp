#include <iostream>

using namespace std;

void fibo(int first, int second, int count)
{
    if (count == 0)
    {
        return;
    }
    cout << first << " ";
    fibo(second, first + second, --count);
}

int main()
{

    fibo(0, 1, 10);
    cout << endl;

    return 0;
}