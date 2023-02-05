#include <iostream>
using namespace std;

main()
{
    string fruits;
    int kgs = 0;
    int total = 0;

    string fruit[4]={"peach", "apple", "guava","watermelon"};
    int price[4]={60, 70, 40, 30};

    cout << "Enter fruit name: ";
    cin >> fruits;
    cout << "Enter kgs to buy: ";
    cin >> kgs;

    for(int i=0; i<4; i++)
    {
        if(fruits==fruit[i])
        {
            total = price[i] * kgs;
        }
    }
    cout << "Total bill: " << total << "RS." << endl;
}