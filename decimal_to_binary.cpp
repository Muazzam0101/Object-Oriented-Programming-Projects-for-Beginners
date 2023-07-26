#include <iostream>
#include <cmath>
using namespace std;
class Decimal_number
{
protected:
    int a;

public:
    void set_val(int a1)
    {
        a = a1;
    }
};
class Binary_Number : public Decimal_number
{
protected:
    int arr[32];
    int n = 0;

public:
    void calculate()
    {
        int num = a;
        while (num > 0)
        {
            arr[n] = num % 2;
            num /= 2;
            n++;
        }
        if (a == 0)
        {
            arr[n] = 0;
            n++;
        }
    }
};

class Display : public Binary_Number
{
public:
    void display()
    {
        for (int j = n - 1; j >= 0; j--)
        {
            cout << arr[j];
        }
    }
};
int main()
{
    int decimal_number;
    Display d1;
    cout<<"Enter the decimal number here to convert it into binary"<<endl;
    cin>>decimal_number;
    d1.set_val(decimal_number);
    d1.calculate();
    d1.display();
    return 0;
}