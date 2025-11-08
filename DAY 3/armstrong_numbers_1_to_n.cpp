// My code to find Armstrong numbers between 1 to n

#include <iostream>
#include <cmath> // Required for pow()

using namespace std;

int AmStrongCheck(int num)
{

    // Store the original number to display later
    int original_num = num;
    int original_num_count = 0;

    // Counting no.of digits in the number
    while (num != 0)
    {
        num /= 10;
        original_num_count++; // Increment count for each digit
    }

    // cout << "Number of digits in " << original_num << " is: " << original_num_count << endl;

    // Check if the number is an Armstrong number
    int amstrong_count = 0;
    num = original_num;

    while (num != 0)
    {
        int last_digit;
        last_digit = num % 10;

        amstrong_count += pow(last_digit, original_num_count);

        num /= 10;
    }

    // Display whether it is an Armstrong number or not
    if (amstrong_count == original_num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (AmStrongCheck(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}