#include <iostream>
using namespace std;

main()
{
    string movies;
    float total = 0;

    string movie[5]={"gladiator", "starWars", "terminator","takingLives", "tombRaider"};
    int price[5]={500, 500, 500, 500, 500};

    cout << "Enter movie name: ";
    cin >> movies;

    for(int i=0; i<5; i++)
    {
        if(movies==movie[i])
        {
            if(i%2==0)
            {
            total = (price[i] * 0.9);
            }
        }
        if(movies==movie[i])
        {
            if(i%2!=0)
            {
            total = (price[i] * 0.95);
            }
        }
    }
    cout << "Total bill after discount: " << total << "RS." << endl;
}