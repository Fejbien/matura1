#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool isPrime(int liczba);

int main()
{
    ifstream plik;
    plik.open("liczby.txt");

    int licznik = 0;

    string linia;
    while(getline(plik, linia)){
        int liczba = stoi(linia) - 1;
        if(isPrime(liczba)){
            licznik++;
        }
    }

    cout << licznik << endl;

    plik.close();
    return 0;
}

bool isPrime(int liczba){
    for(int i = 2; i < liczba / 2 + 1; i++){
        if(liczba % i == 0)
            return false;
    }

    return true;
}
