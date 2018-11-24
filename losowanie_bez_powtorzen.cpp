#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void wypisywanie_tablicy (int tablica[], int ilewypisac)             // i = ile wypisac
{
    for (int i = 0; i < ilewypisac; i++)
    cout << tablica[i] << ", ";
}
bool czy_byla_wylosowana (int tablica [], int iLiczba, int ile)
{
    if (ile <= 0) return false;
    for (int i = 0; i < ile; i++)
    {
        if (tablica[i] == iLiczba) return true;
    }
    return false;
}

int main()
{
    const int rozmiar_tablicy = 5;
    const int ilosc_liczb_losowych = 3;
    srand( time ( NULL ));
    int liczba, wylosowana;
    int tablica[rozmiar_tablicy], tablica2[ilosc_liczb_losowych];
    for (int a = 0; a < rozmiar_tablicy; a++)
    {
    cout << "Podaj liczbe" << endl;
    cin >> liczba;
    tablica[a] = liczba;
    }
    cout << "Tablica wyglada tak:" << endl;
    wypisywanie_tablicy(tablica, rozmiar_tablicy);
    cout << endl;
    cout << "A wylosowane liczby tak:" << endl;
    for (int i = 0; i < ilosc_liczb_losowych; i++)
    {
        tablica2[i] = tablica [(rand() % rozmiar_tablicy ) + 0];
        if (czy_byla_wylosowana(tablica2, tablica2[i], i)) i--;

    }
    wypisywanie_tablicy(tablica2, ilosc_liczb_losowych);





    return 0;
}
