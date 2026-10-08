#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main()
{

    mt19937 gen(time(NULL));
    uniform_int_distribution<int> dist(1, 100);
    int random_number = dist(gen);
    cout << random_number << endl;
    int guess = 0;
    int max = 101;
    int min = 0;
    int Player = 1;

    while (guess != random_number)
    {
        cout << "input your number , Player " << Player << endl;
        cin >> guess;
        if (guess >= max || guess <= min)
        {
            cout << "Pleaes input between " << min + 1 << "-" << max - 1 << endl;
        }
        else
        {
            if (guess < random_number)
            {
                min = guess;
                cout << "between " << min << " and " << max << endl;
            }
            else if (guess > random_number)
            {
                max = guess;
                cout << "between " << min << " and " << max << endl;
            }
            if (guess != random_number)
            {
                if (Player == 1)
                {
                    Player = 2;
                }
                else if (Player == 2)
                {
                    Player = 1;
                }
            }
        }
    }
    cout << "Player " << Player << " Win " << endl;

    return 0;
}
