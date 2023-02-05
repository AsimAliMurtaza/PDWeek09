#include <iostream>
using namespace std;

main()
{
    int size = 0;
    int counter = 0;
    int counter2 = 0;

    cout << "Enter size of string: ";
    cin >> size;

    string color[size];
    for(int i =0; i<size; i++)
    {
        cout << "Enter color: ";
        cin >> color[i];
    }

    for(int i = 0; i<size; i++)
    {
        if(color[i]==color[i+1])
        {
            counter2++;
        }
        else if(color[i]!=color[i+1])
        {
            counter = counter + 1;
        }
    }
    int total = (counter * 2) + (counter2 * 2) + (counter - 1);
    cout << "Time taken: " << total << endl;
}