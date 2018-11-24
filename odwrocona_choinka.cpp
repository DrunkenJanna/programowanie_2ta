#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj rozmiar choinki";
    int rozmiar, liczG, liczS;
    cin >> rozmiar;
    rozmiar--;
    liczS = rozmiar - 1;
    for (int d = 0; d < liczS; d++)
    cout << " ";
    cout << "#" << endl;
    liczG = 2*rozmiar-1;
    liczS = 0;
    for (int a = 0; a < rozmiar; a++)
    {
        for (int c = 0; c < liczS; c++)
        {
            cout << " ";
        }
        liczS ++;
        for (int b = 0; b < liczG; b = b + 1)
        {
            cout << "*";
        }
        liczG = liczG - 2;
        cout << endl;
    }

    return 0;
}
