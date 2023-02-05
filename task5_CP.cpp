#include <iostream>
using namespace std;

main()
{

    bool isSame = false;

    string input[4];
    for(int i = 0; i<4; i++)
    {
        cout << "Enter Input: ";
        cin >> input[i];
    }
        if(input[0]==input[3] && input[1]==input[3] && input[2]==input[3])
        {
            isSame = true;
        }
    if(isSame==true)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}