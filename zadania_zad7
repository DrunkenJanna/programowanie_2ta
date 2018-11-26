#include <iostream>

using namespace std;
void wczytaj (int tab[], int wielkosc)
{
    int liczba;
    for (int i = 0; i < wielkosc; i++)
    {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        tab[i] = liczba;
    }
}
void wypisz (int tab[], int wielkosc)
{
    for (int i = 0; i < wielkosc; i++)
        cout << tab[i] << endl;
}
void wszystkie_to_zera (int tab[], int wielkosc)
{

    for (int i = 0; i < wielkosc; i++)
        tab[i] = 0;
}
void wszystkie_to_indeksy (int tab[], int wielkosc)
{

    for (int i = 0; i < wielkosc; i++)
        tab[i] = i;
}
void wszystkie_podwojone (int tab[], int wielkosc)
{
    for (int i = 0; i < wielkosc; i++)
        tab[i] = 2 * tab[i];
}
void wartosc_bezwzgledna (int tab[], int wielkosc)
{
    for (int i = 0; i < wielkosc; i++)
    {
        if (tab[i] < 0) tab[i] = -tab[i];
        else tab[i] = tab[i];
    }
}
int main()
{
    cout << "Podaj wielkosc tablicy" << endl;
    int zmienna_n;
    cin >> zmienna_n;
    int const n = zmienna_n;
    int tablica[zmienna_n];
    wczytaj(tablica, n);
    wszystkie_to_zera(tablica, n);
    cout << "WSZYSTKIE TO ZERA" << endl;
    wypisz(tablica, n);
    wszystkie_to_indeksy(tablica, n);
    cout << "ROWNE INDEKSOM" << endl;
    wypisz(tablica, n);
    wszystkie_podwojone(tablica, n);
    cout << "PODWOJONE!!!!!!!!" << endl;
    wypisz(tablica, n);
    wartosc_bezwzgledna(tablica, n);
    cout << "WARTOSC BEZWZGLEDNA" << endl;
    wypisz(tablica, n);
    return 0;
}
