#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream plik;
    plik.open("mecz.txt");

    int teraz = 0;
    int maks = 0;
    int passs = 0;
    char znak = ' ';

    string linia;
    while(getline(plik, linia)){
        for(int i = 0; i < linia.size() - 1; i++){
            if(linia[i] == linia[i+1]){
                teraz++;

                if(maks < teraz){
                    znak = linia[i];
                    maks = teraz;
                }
            }
            else{
                teraz++;
                if(maks < teraz){
                    znak = linia[i];
                    maks = teraz;
                }

                if(teraz >= 10){
                    passs++;
                }

                teraz = 0;
            }
        }
    }
    cout << passs << endl;
    cout << maks << endl;
    cout << znak << endl;

    plik.close();
    return 0;
}
