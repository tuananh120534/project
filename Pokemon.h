#include <string>
#ifndef POKEMON_H
#define POKEMON_H

class Pokemon {
protected:
    int health;
    double defence;
    int damage;

public:
    Pokemon();
    Pokemon(int health, double defence, int damage);

    virtual void attack(Pokemon* enemy, Pokemon* player) = 0;
    virtual double damageMultiplier(Pokemon* enemy) const = 0;
    virtual std::string getName() const;

    int getHealth();
    double getDefence();
    int getDamage();

    void setHealth(int health);
    void setDefence(double defence);
    void setDamage(int damage);

    virtual char getWeakness() const = 0;
    virtual char getImmunity() const = 0;

    virtual ~Pokemon();
};

#endif // POKEMON_H
