#include <iostream>

using namespace std;

void wczytaj (int tab[], int ilosc_do_wczytania)
{
    int liczba;
    for (int i = 0; i < ilosc_do_wczytania; i++)
    {
        cin >> liczba;
        tab[i] = liczba;
    }
}

void wypisz (int tab[], int ilosc_do_wypisania)
{
    for (int i = 0; i < ilosc_do_wypisania; i++)
    {
        cout << tab[i] << endl;
    }
}
int znajdz_max_lub_min (int tab[], int wielkosc_tablicy, int &ile_razy, string max_min)
{
    ile_razy = 0;
    int maximum, minimum;
    if (max_min == "max")
    {
        maximum = tab[0];
        for (int i = 1; i < wielkosc_tablicy; i++)
        {
            if (tab[i] > maximum) maximum = tab [i];
        }
        for (int i = 0; i < wielkosc_tablicy; i++)
        {
            if (tab[i]  == maximum) ile_razy++;
        }
    return maximum;
    }
    if (max_min == "min")
        {
            minimum = tab[0];
            for (int i = 1; i < wielkosc_tablicy; i++)
            {
                if (tab[i] < minimum) minimum = tab [i];

            }
            for (int i = 0; i < wielkosc_tablicy; i++)
            {
                if (tab[i]  == minimum) ile_razy++;
            }
            return minimum;
        }


}

int main()
{
    cout << "Podaj ilosc elementow, ktore chcesz wczytac" << endl;
    int zmienna;
    int ile_razy_max, ile_razy_min;
    cin >> zmienna;
    const int n = zmienna;
    int tablica[n];
    wczytaj (tablica, n);

    cout << "maksymalna wynosi: " << znajdz_max_lub_min(tablica, n, ile_razy_max, "max") << endl;
    cout << "powtorzyla sie " << ile_razy_max << " razy" << endl;
    cout << "minimalna wynosi: " << znajdz_max_lub_min(tablica, n, ile_razy_min, "min") << endl;
    cout << "powtorzyla sie " << ile_razy_min << " razy";


    return 0;
}
