#include <iostream>
using namespace std;

bool inRange (int number) //we need to pass a number argument here from main function.
{
    bool status; //status has local scope inside inRange function only.
    if (number >= 100 && number <= 200)
    {
        status = true;
    }
    else
    {
        status = false;
    }
    return status; //status gets assigned true or false depending on argument.
}

int main ()
{
    int value = 30;
    if (inRange(value))
        //runs value 30 into inRange function and returns status of false.
        //notice: function is called within conditional parenthesis.
        //same as is status true or false? false bc 30 does not suffice function condition.
    {
        cout << "your number " << value << " is within 100 and 200.";
    }
    else
    {
        cout << "your number " << value << " is not within 100 and 200.";
    }
    return 0;
}
