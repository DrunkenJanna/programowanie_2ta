#include <iostream>

using namespace std;

void wczytaj_tablica (int tab[], int wielkosc)
{
    int liczba;
    for (int i = 0; i < wielkosc; i++)
    {
        cout << "Podaj liczbe" << endl;
        cin >> liczba;
        tab[i] = liczba;
    }
}
void wypisz_kwadraty (int tab[], int wielkosc)
{
    cout << "KWADRATY LICZB WYGLADAJA TAK:" << endl;
    for (int i = 0; i < wielkosc; i++)
    {
        cout << tab[i] * tab[i] << endl;
    }
}
void wypisz_szesciany (int tab[], int wielkosc)
{
    cout << "SZESCIANY LICZB WYGLADAJA TAK:" << endl;
    for (int i = 0; i < wielkosc; i++)
    {
        cout << tab[i] * tab[i] * tab[i] << endl;
    }
}
void razy_dwa (int tab[], int wielkosc)
{
    cout << "LICZBY PODWOJONE:" << endl;
    for (int i = 0; i < wielkosc; i++)
    {
        cout << tab[i] * 2<< endl;
    }
}
void przedzial (int tab[], int wielkosc)
{
    cout << "LICZBY Z PRZEDZIALU <4;15>:" << endl;
    for (int i = 0; i < wielkosc; i++)
    {
        if (tab[i] <= 15 && tab[i] >= 4) cout << tab[i]<< endl;
    }
}
void ujemne_na_zera (int tab[], int wielkosc)
{
    cout << "UJEMNE ZMIENIONE W ZERA:" << endl;
    for (int i = 0; i < wielkosc; i++)
    {
        if (tab[i] < 0) cout << 0 << endl;
        else cout << tab[i] << endl;
    }
}
int main()
{
    int wielkosc;
    cout << "Podaj wielkosc tablicy" << endl;
    cin >> wielkosc;
    const int n = wielkosc;
    int tablica [n];
    wczytaj_tablica(tablica, n);
    wypisz_kwadraty(tablica, n);
    wypisz_szesciany(tablica, n);
    razy_dwa(tablica, n);
    przedzial(tablica, n);
    ujemne_na_zera(tablica, n);



    return 0;
}
