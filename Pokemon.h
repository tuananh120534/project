#ifndef POKEMON_H
#define POKEMON_H
#include <iostream>
#include <string>
using namespace std;

class Pokemon{
    protected:
        string name;
        int health;
        int damage;
        int armor;
        string element;
    public:
    Pokemon();
    Pokemon(string name,int health,int damage,int armor,string element);
     void setHealth(int health);
     void setName(string name);

     void setDmage(int damage);

     void setArmor(int armor);

     void setElement(string element);

     string getName();
     int getHealth();
     int getDamage();
     int getArmor();
     string getElement();


    virtual void attack()=0;
    virtual void takeDamage(int damage);
    ~Pokemon();





};




#endif