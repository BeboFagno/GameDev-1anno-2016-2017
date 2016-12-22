#include <iostream>
#include <time.h>

using namespace std;

void DraculaMatch();
void NormalMatch();
void Hunt();
int findProb = 0;
bool isFound = false;

class Entity
{
    public:
        bool m_isDead;
        int m_health;
        int m_will;
        int m_atk;
        int m_intimidate;

        Entity(int health, int will, int atk, int intimidate); //Costruttore
        void Atk();
        void Intimidate();
        void Rest();
};

Entity::Entity (int health, int will, int atk, int intimidate)
{
    m_health = health;
    m_will = will;
    m_atk = atk;
    m_intimidate = intimidate;
    m_isDead = false;
}

void Entity::Rest()
{

}

void Hunt()
{
    if (isFound = true)
    {
        DraculaMatch();
    }
    else NormalMatch();
}

void DraculaMatch()
{

}

void NormalMatch()
{
    findProb += 10; // Se l'incontro viene vinto
}

int main()
{
    srand(time(0));
    Entity VanHelsing = Entity(100, 100, 10, 10);
    Entity Dracula = Entity(50, 50, 20, 20);
    Entity Servant = Entity(12, 30, 12, 10);
    Entity Spectre = Entity(100, 12, 2, 20);
}
