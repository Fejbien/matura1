#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream plik;
    plik.open("mecz.txt");

    int licznik = 0;

    string linia;
    while(getline(plik, linia)){
        for(int i = 0; i < linia.size() - 1; i++){
            if(linia[i] != linia[i+1]){
                licznik++;
            }
        }
    }
    cout << licznik << endl;

    plik.close();
    return 0;
}
