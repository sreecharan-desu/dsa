#include <iostream>

using namespace std;

int main()
{

    cout << "Hello" << endl;

    int num;

    cout << "Enter a number : ";
    cin >> num;
    cout << endl;

    cout << "You have entered : " << num << endl;

    (num > 0) ? cout << "Positive" : (num == 0) ? cout << "Zero"
                                                : cout << "Negative";

    cout << endl
         << endl;
    int year;

    cout << "Enter a year : ";
    cin >> year;
    cout << endl;
    (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? cout << year << " is a Leap Year"
                                                            : cout << year << " is not a Leap Year";

    cout << endl
         << endl;

    int a = 63, b = 36;
    bool x = (a < b) ? true : false;
    int y = (a > b) ? a : b;
    cout << x << "," << y << endl;

    //     For any 3 digit number check whether it’s an Armstrong number or not.
    // Armstrong number is a number that is equal to the sum of cubes of its digits.
    // Eg : 371 is an armstrong number.
    // 3*3*3 + 7*7*7 + 1*1*1 = 371

    int three_digit_number;
    cout << "Enter a 3 digit number : ";
    cin >> three_digit_number;
    cout << endl;

    
    
    
    return 0;
}
