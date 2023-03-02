#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream plik;
    plik.open("mecz.txt");

    int a = 0;
    int b = 0;

    string linia;
    while(getline(plik, linia)){
        for(int i = 0; i < linia.size(); i++){
            if(linia[i] == 'A'){
                a++;
            }
            else{
                b++;
            }

            if((a - b) >= 3 && (a >= 1000 || b >= 1000)){
                break;
            }
            else if((b - a) >= 3 &&(a >= 1000 || b >= 1000)){
                break;
            }
        }
    }
    cout << a << endl;
    cout << b << endl;

    plik.close();
    return 0;
}
