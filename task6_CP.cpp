#include <iostream>
using namespace std;

main()
{
    int array[3];
    int number;
    
    for(int i = 0; i<3; i++)
    {
        cout << "Enter numbers: ";
        cin >> array[i];
    }
    cout << "Enter number of even-odd times: ";
    cin >> number;

        for(int i = 0; i <3; i++)
        {
            for(int j = 1; j<= number; j++)
            {
                if(array[i]%2==0)
                {
                    array[i] = array[i] - 2;
                }
                else
                {
                    array[i] = array[i] + 2;
                }
            }
        }

        for(int i = 0; i<3; i++)
        {
            cout << array[i] << " ";
        }
}