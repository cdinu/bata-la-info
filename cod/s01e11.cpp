#include <iostream>
using namespace std;

// Rezolvarea unei probleme de la PBINFO
// https://www.pbinfo.ro/probleme/categorii/4/algoritmi-elementari-maxime-si-minime

void problema_1()
{
    // Se dau n numere intregi.
    // Calculati cel mai mare dintre cele n numere date.
    int numere[] = {19, 21, 17, -92, 10, 22, 25, 76, 99, 199};

    int lungime = sizeof(numere)/sizeof(int);

    int i = 0;

    int maxim = numere[0];

    cout << "Voi calcula maximul celor " << lungime << " numere." << endl;
    cout << "i=" << i << endl;
    cout << "maxim=" << maxim << endl;

    for (i = 1; i < lungime; i++)
    {
        cout << "i=" << i << endl;
        cout << "numere["<< i << "]=" << numere[i] << endl;
        cout << "maxim inainte=" << maxim << endl;
        if(numere[i] > maxim)
        {
            maxim = numere[i];
            cout << "AM GASIT UNUL NOU " << maxim << endl;
        }
    }

    cout << "Maximul este: " << maxim << "." << endl;
}

void problema_2()
{
    // Se dau n numere intregi.
    // Calculati cel mai mic dintre cele n numere date.
    int numere[] = {19, 21, 17, -92, 10, 22, 25, 76, 99, 199};

    int lungime = sizeof(numere)/sizeof(int);

    int i = 0;

    int minim = numere[0];

    cout << "Voi calcula minim celor " << lungime << " numere." << endl;
    cout << "i=" << i << endl;
    cout << "minim=" << minim << endl;

    for (i = 1; i < lungime; i++)
    {
        cout << "i=" << i << endl;
        cout << "numere["<< i << "]=" << numere[i] << endl;
        cout << "minim inainte=" << minim << endl;
        if(numere[i] < minim)
        {
            minim = numere[i];
            cout << "AM GASIT UNUL NOU " << minim << endl;
        }
    }

    cout << "Minimul este: " << minim << "." << endl;
}

void problema_1bis() {
    int crt;

    cout << "Introdu cate un  numar. Daca vrei sa termini introdu 0" << endl;

    cin >> crt;
    int maxim = crt;

    while (crt != 0) {
        cin >> crt;
        if(crt > maxim) {
            cout << "Avem un nou maxim!" << endl;
            maxim = crt;
        }
    }

    cout << "Maximul " << maxim << endl;

}

void problema_1bis_cu_for() {
    int crt;
    int maxim;

    cout << "Introdu cate un  numar. Daca vrei sa termini introdu 0" << endl;

    cin >> crt;

    for (maxim = crt; crt != 0; cin >> crt)
    {
        if(crt > maxim) {
            cout << "Avem un nou maxim!" << endl;
            maxim = crt;
        }
    }

    cout << "Maximul " << maxim << endl;

}

int main()
{
    problema_1bis_cu_for();
    return 0;
}
