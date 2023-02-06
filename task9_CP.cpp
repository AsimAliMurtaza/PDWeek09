#include<iostream>
using namespace std;

string moves[10]={"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado",
"Pop", "Lock", "Arabesque"};

main()
{
    char inputPIN[4];
    int current = 0;
    int digit[4];

    cout << "Enter 4 digit PIN: ";
    cin >> inputPIN;

    bool isValid = false;

    for(int i = 0; i<4;i++)
    {
        if(inputPIN[i] == '0' || inputPIN[i] == '1' || inputPIN[i] == '2' || inputPIN[i] == '3' || inputPIN[i] == '4' || 
        inputPIN[i] == '5' || inputPIN[i] == '6' || inputPIN[i] == '7' || inputPIN[i] == '8' || inputPIN[i] == '9')
        {
            isValid = true;
        }
        else
        {
            cout << "Invalid PIN.";
            return 0;
        }
    }

    if(isValid = true)
    {
        for(int i = 0; i < 4; i++)
        {
            if(inputPIN[i]=='0')
            {
                digit[i]=0;
            }
            if(inputPIN[i]=='1')
            {
                digit[i]=1;
            }
            if(inputPIN[i]=='2')
            {
                digit[i]=2;
            }
            if(inputPIN[i]=='3')
            {
                digit[i]=3;
            }
            if(inputPIN[i]=='4')
            {
                digit[i]=4;
            }
            if(inputPIN[i]=='5')
            {
                digit[i]=5;
            }
            if(inputPIN[i]=='6')
            {
                digit[i]=6;
            }
            if(inputPIN[i]=='7')
            {
                digit[i]=7;
            }
            if(inputPIN[i]=='8')
            {
                digit[i]=8;
            }
            
            if(inputPIN[i]=='9')
            {
                digit[i]=9;
            }
        }
        for(int i = 0; i<4;i++)
        {
            current = digit[i]+i;
            
            if(current>=10)
            {
                current = current % 10;
            }
            cout << moves[current] << " ";
        }
    }
}