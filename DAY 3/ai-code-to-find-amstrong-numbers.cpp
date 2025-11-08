#include <iostream>
#include <string>
using namespace std;

long long power(int base, int exp)
{
    long long result = 1;
    while (exp--)
        result *= base;
    return result;
}

bool isArmstrong(long long num)
{
    string s = to_string(num);
    int n = s.size();
    long long sum = 0;
    for (char c : s)
        sum += power(c - '0', n);
    return sum == num;
}

int main()
{
    long long limit;
    cout << "Enter a number: ";
    cin >> limit;

    for (long long i = 1; i <= limit; i++)
    {
        if (isArmstrong(i))
            cout << i << endl;
    }
}