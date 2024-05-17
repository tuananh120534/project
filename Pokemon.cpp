#include "Pokemon.h"
#include <iostream>
#include <string>
using namespace std;

Pokemon :: Pokemon(): Pokemon("",0,0,0,""){}
Pokemon :: Pokemon(string name,int health,int damage,int armor,string element): Pokemon(name,health,damage,armor,element){}
void Pokemon:: setName(string name){
    this->name=name;
}
void Pokemon:: setHealth(int health){
    this->health=health;
}
void Pokemon:: setArmor(int armor){
    this->armor=armor;
}
void Pokemon::setArmor(int damage){
    this->damage=damage;}

int Pokemon::getHealth() { return health; }
string Pokemon::getElement() { return element; }
string Pokemon::getName(){return name;}
int Pokemon::getArmor(){return armor;}


void Pokemon:: takeDamage(int damage){
    this->health = this->health + armor - damage;
}
Pokemon :: ~Pokemon(){};