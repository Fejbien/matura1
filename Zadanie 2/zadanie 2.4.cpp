#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream plik;
    plik.open("pary.txt");

    string linia;
    while(getline(plik, linia)){
        int srodek;
        for(int i = 0; i < linia.size(); i++){
            if(linia[i]==' ')
                srodek = i;
        }

        int lewa, prawa;
        string t = "";
        for(int i = 0; i < srodek; i++){
            t+= linia[i];
        }
        lewa = stoi(t);
        t = "";
        for(int i = srodek; i < linia.size(); i++){
            t+= linia[i];
        }
        prawa = stoi(t);

        int przed = prawa;
        while(lewa <= prawa){
            if(prawa == lewa){
                cout << lewa << " " << przed << endl;
            }

            if(prawa % 2 == 1){
                prawa = prawa - 1;
            }

            prawa = prawa / 2;
        }
    }

    plik.close();
    return 0;
}
