#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void czyszczenie()
{
    cin.clear();
    cin.ignore(1236129372189739127321, '\n');

}

int wczytajLiczbe()
{
    int liczba;
    for (int a=0;;)
    {
        cin >> liczba;
        if (cin.fail() == 0)
        {
            return liczba;
            break;
        }
        else
        {
            cout << "Podaj poprawna liczbe:" << endl;
            czyszczenie();
        }
    }
}



int main()
{
    srand(time(NULL));
    int a, b, wylosowana_liczba, przedzial1, przedzial2, podanaLiczba, liczbaStrzalow = 1;              //a-b przedzial liczbowy
    cout << "Podaj przedzial liczbowy od: " << endl;
    a = wczytajLiczbe();
    cout << "do: " << endl;
    b = wczytajLiczbe();
    if (a > b)
    {
        przedzial1 = a;
        przedzial2 = b;
    }
    else
    {
        przedzial2 = a;
        przedzial1 = b;
    }

    wylosowana_liczba = ((rand() % (przedzial1 - przedzial2 + 1)) + przedzial2);
    cout << wylosowana_liczba;

    for (liczbaStrzalow;liczbaStrzalow > 0;liczbaStrzalow++)
    {
        cout << "Podaj liczbe" << endl;
        podanaLiczba = wczytajLiczbe();

        if (podanaLiczba == wylosowana_liczba) break;
        if (podanaLiczba > wylosowana_liczba)
        {
            cout << "twoja liczba jest troche za duza :>" << endl;
            continue;
        }
        if (podanaLiczba < wylosowana_liczba)
        {
            cout << "twoja liczba jest troche za mala :<" << endl;
            continue;
        }
    }
    cout << "Gratulacje! Podales/podalas poprawna liczbe" << endl;
    cout << "Zajelo ci to razem taka liczbe strzalow:  " << liczbaStrzalow;


    return 0;
}
