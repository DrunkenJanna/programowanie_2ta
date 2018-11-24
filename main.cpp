#include <iostream>

using namespace std;

void od_zera (int tab[], int n)
{
    for (int i = 0; i < n; i++)
    {
        tab[i] = i;
    }

}
void od_siedmiu (int tab[], int n)
{
    for (int i = 0; i < n; i++)
    {
        tab[i] = i + 7;
    }

}
void od_dwoch (int tab[], int n)
{
    for (int i = 0; i < n; i++)
    {
        tab[i] = i + 2;
    }

}
void cztery_osiem (int tab[], int n)
{
    for (int i = 0; i < n; i++)
    {
        tab[i] = i * 4 + 4;
    }
}
void dwa_do_potegi (int tab[], int n)
{
    int p = 1;
    for (int i = 0; i < n; i++)
    {
        tab [i] = p;
        p = p * 2;
        p = p * 2;
        p = p * 2;
        p = p * 2;
        p = p * 2;
        p = p * 2;
    }
}
void wypisz (int tab[], int n)
{
    for (int i = 0; i < n; i ++)
    {
        cout << tab[i] << ", ";
    }
    cout << endl;
}

int main()
{
    cout << "Podaj n" << endl;
    int zmienna_n;
    cin >> zmienna_n;
    const int n = zmienna_n;
    int tablica1 [n];
    int tablica2 [n];
    int tablica3 [n];
    int tablica4 [n];
    int tablica5 [n];
    od_zera(tablica1, n);
    od_siedmiu(tablica2, n);
    od_dwoch(tablica3, n);
    cztery_osiem(tablica4, n);
    dwa_do_potegi(tablica5, n);
    wypisz(tablica1, n);
    wypisz(tablica2, n);
    wypisz(tablica3, n);
    wypisz(tablica4, n);
    wypisz(tablica5, n);


    return 0;
}
