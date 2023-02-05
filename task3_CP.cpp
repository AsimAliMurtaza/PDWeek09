#include <iostream>
using namespace std;

main()
{
    string str;
    int len = 0;
    cout << "Enter string: ";
    getline(cin, str);

    while(str[len]!='\0')
    {
        len++;
    }
    if(len%2==0)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}