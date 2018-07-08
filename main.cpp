#include <iostream>
#include <fstream>
#include <cstdlib>
#include <windows.h>
#include <conio.h>

using namespace std;

void konwertowanie(string nazwaPliku) {
    string nazwaPlikuZrodlowego = nazwaPliku + ".txt", nazwaNowegoPliku = nazwaPliku +  "_nowy_format.txt";
    fstream plikZrodlowy, plikSkonwertowany;
    string linia;
    int nrLinii=1;

    plikZrodlowy.open(nazwaPlikuZrodlowego.c_str(), ios::in);
    plikSkonwertowany.open(nazwaNowegoPliku.c_str(), ios::out | ios::app);

    if(plikZrodlowy.good()) {
        while (getline(plikZrodlowy, linia)) {
            switch (nrLinii) {
            case 1:
                plikSkonwertowany<<linia<<"|";
                break;
            case 2:
                plikSkonwertowany<<linia<<"|";
                break;
            case 3:
                plikSkonwertowany<<linia<<"|";
                break;
            case 4:
                plikSkonwertowany<<linia<<"|"<<endl;
                break;

            }
            if(nrLinii==4)
                nrLinii=0;
            ++nrLinii;
        }
    }
    plikZrodlowy.close();
    plikSkonwertowany.close();
}

int main()
{
    string nazwaPliku;

    cout<<"Podaj nazwe pliku do skonwertowania: ";
    cin>>nazwaPliku;
    konwertowanie(nazwaPliku);
    cout<<endl<<"Zrobione - utworzono plik o nowym formacie danych."<<endl;
    return 0;
}
