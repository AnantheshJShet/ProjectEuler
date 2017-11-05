#include <iostream>

using namespace std;

int main(void)
{
    int number = 1000;
    int sum = 0;

    while(--number)
    {
        if((0 == number%3) || (0 == number%5))
        {
            cout << number <<"\n";
            sum += number;
        }
    }

    cout<<sum;
    return 0;
}
