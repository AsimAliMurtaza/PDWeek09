#include <iostream>
using namespace std;

bool isSeven(int number);

main()
{
    int size;
    bool isFound = false;

    cout << "Enter size of array: ";
    cin >> size;

    int numbers[size];

    for(int i=0; i<size; i++)
    {
        cout << "Enter numbers: ";
        cin >> numbers[i];
    }

    for(int i=0; i<size; i++)
    {
        if(isSeven(numbers[i]))
        {
            isFound = true;
        }
    }
        if(isFound==true)
        {
            cout << "Boom!";
        }
        else
        {
            cout << "Number 7 not found in array.";
        }
}

bool isSeven(int number)
{
    if(number>0)
    {
        while(number>0)
        {
            int rem = number % 10;
            number = number / 10;
            if(rem==7)
            {
                return true;
            }
            else
            {
                if(number==7)
                {
                    return true;
                }
            }
            return false;
        }
    }
}