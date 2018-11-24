#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int wylosuj(int a, int b)
{
    int przedzial1, przedzial2, wylosowana;
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

    wylosowana = ((rand() % (przedzial1 - przedzial2 + 1)) + przedzial2);
    return wylosowana;
}

void wylosujLiczby(int t[], int rozmiar, int przedzial3, int przedzial4)
{
    for (int c = 0; c <= rozmiar;)
    {
        t[rozmiar] = wylosuj(przedzial3, przedzial4);
        rozmiar--;

    }

}
void wypiszLiczby (int t2[], int rozmiar4)
{
    for (int x = 0; x <= rozmiar4;)
    {
        cout << t2[rozmiar4] << endl;
        rozmiar4--;
    }

}

int obliczSume (int t1[], int rozmiar1)
{
    int suma = 0;
    int licznik = 0;
    for (;licznik < rozmiar1; licznik++)
    {
        suma = suma + t1[licznik];
    }
    return suma;
}
int main()
{
    srand(time(NULL));
    int tablica[ 999 ];
    wylosujLiczby( tablica, 999, 4, 10 );
    wypiszLiczby( tablica, 999 );
    int iSuma = obliczSume( tablica, 999 );
    std::cout << "Suma liczb wynosi: " << iSuma << std::endl;
    return 0;
}
