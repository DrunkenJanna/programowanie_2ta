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
float zwroc_srednia (int tab[], int wielkosc)
{
    float suma = 0;
    for (int i = 0; i < wielkosc; i++)
    {
        suma = suma + tab[i];
    }
    return suma / wielkosc;
}
float zwroc_sume (int tab[], int wielkosc)
{
    float suma = 0;
    for (int i = 0; i < wielkosc; i++)
    {
        suma = suma + tab[i];
    }
    return suma;
}
float zwroc_sume_kwadratow (int tab[], int wielkosc)
{
    float suma = 0;
    for (int i = 0; i < wielkosc; i++)
    {
        suma = suma + tab[i] * tab[i];
    }
    return suma;
}
int main()
{
    int wielkosc;
    cout << "Podaj wielkosc tablicy" << endl;
    cin >> wielkosc;
    const int n = wielkosc;
    int tablica [n];
    wczytaj_tablica(tablica, n);
    cout << "Srednia to: " << zwroc_srednia(tablica, n) << endl;
    cout << "Suma to: " << zwroc_sume(tablica, n) << endl;
    cout << "Suma kwadratow to: " << zwroc_sume_kwadratow(tablica, n) << endl;
    return 0;
}
