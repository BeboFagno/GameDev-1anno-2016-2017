#include <iostream>
#include <string>

using namespace std;

int main()
{

    const int PLAYERS = 10;
    int scores[PLAYERS];

    for (int i=0; i<PLAYERS; i++)
        {

        cout<<"Inserisci il punteggio per il giocatore "<<i<<endl;
        cin>>scores[i];



        }

        for (int s=9; s>=0; s--)
            {

            cout<<"Giocatore "<<s<<" "<<scores[s]<<" punti"<<endl;

            }

}
