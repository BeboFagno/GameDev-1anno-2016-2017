#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;

void initialize(vector<int> grid);
void printGrid(vector<int> grid);
void setTraps(vector<int> grid);
int getHeroPos(vector<int> grid);

bool canMove = false;
int heroPos = 0;
int t1, t2, t3;
const int HERO = 7;
const int TRAPS = 5;
const int TREASURE = 1;
const int EMPTYS = 0;

int main()
{
    vector<int> grid(25);
    initialize(grid);
    grid[10] = HERO;

    setTraps(grid);

    printGrid(grid);

    cout<<heroPos<<endl;

}

void initialize(vector<int> grid)
{
    vector<int>::const_iterator iter;
    for (iter = grid.begin(); iter != grid.end(); ++iter)
    {
        *iter == 0;
    }
}

void printGrid(vector<int> grid)
{
    system("cls");
    vector<int>::const_iterator iter;

    cout << "Ecco la situazione:\n";

    int row = 0;

    for (iter = grid.begin(); iter != grid.end(); ++iter)
    {
        cout << *iter << " ";
        row++;
        if (row == 5)
        {
            cout<<"\n";
            row = 0;
        }
    }

}

//Le trappole non vengono impostate
void setTraps (vector<int> grid)
{
    vector<int>::const_iterator iter;

    srand(static_cast<unsigned int>(time(0)));
    t1 = rand()%25;
    t2 = rand()%25;
    t3 = rand()%25;

    grid[t1] == TRAPS;
    grid[t2] == TRAPS;
    grid[t3] == TRAPS;
}

int getHeroPos(vector<int> grid)
{
    vector<int>::const_iterator iter;

    iter = find (grid.begin(), grid.end(), HERO);
    heroPos = *iter;
    cout<<"La posizione è "<< heroPos<<" !"<<endl;
    return heroPos;

}
