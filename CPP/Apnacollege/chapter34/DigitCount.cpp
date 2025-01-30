#include <iostream>

using namespace std;
class DigitCount
{
private:
    int n;

public:
    DigitCount(int n)
    {
        this->n = n;
    }
    void printDigit(int n = -1)
    {
        //  shortcut log10(n)+1 
        if (n == -1)
        {
            n = this->n;
        }
        while (n)
        {
            cout << n % 10 << ' ';
            n /= 10;
        }
        cout << endl;
    }
    void printSumOfDigit(int n = -1)
    {
        if (n == -1)
        {
            n = this->n;
        }
        int sum = 0;
        while (n)
        {
            sum += n % 10;
            n /= 10;
        }
        cout << "Sum IS :" << sum << endl;
    }
};

int main()
{
    DigitCount df(12345);
    df.printDigit();
    df.printSumOfDigit(12);
}