#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;
void printInv(vector<string> inventory);

int main()
{
    vector<string> inventory;
    inventory.push_back("vino");
    inventory.push_back("lana");
    inventory.push_back("avorio");
    inventory.push_back("legno");

    printInv(inventory);

    cout<<"Poco dopo la partenza "<<inventory.back()<<" cade dalla tua nave in mare\n"<<endl;
    inventory.pop_back();

    printInv(inventory);

    inventory.insert(inventory.begin(), "te'");
    cout<<"Lungo il viaggio un mercante amico ti dona "<<inventory.front()<<"\n"<<endl;

    printInv(inventory);

    cout<<"Al mercato scambi lana col frumento\n"<<endl;
    vector<string>::iterator myIter;
    myIter = find (inventory.begin(), inventory.end(), "lana");
    *myIter="frumento";

    printInv(inventory);

    cout<<"Vieni attaccato da dei pirati golosi e ti rubano il vino\n"<<endl;
    myIter = find (inventory.begin(), inventory.end(), "vino");
    inventory.erase(myIter);

    printInv(inventory);

    sort(inventory.begin(), inventory.end());

    printInv(inventory);

    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(inventory.begin(), inventory.end());

    printInv(inventory);

    cout<<"Arrivato al mercato di Tiro vendi tutte le merci per oro\n"<<endl;
    inventory.clear();
    inventory.insert(inventory.begin(), "oro");

    printInv(inventory);

}

void printInv(vector<string> inventory)
{
    vector<string>::const_iterator iter;

    cout << "Gli oggetti nel tuo inventario:\n";

    for (iter = inventory.begin(); iter != inventory.end(); ++iter)
    {
        cout << *iter << endl;
    }
    cout<<"\n"<<endl;

}

