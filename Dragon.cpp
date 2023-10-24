#include "Dragon.h"
#include "DragonSlayer.h"
#include "Utility.h"

Dragon::Dragon(std::string name_, int hitPoints_, int armor_, int attackDamage_) :
Character( hitPoints_, armor_, attackDamage_ ),
name (name_)
{

}


void Dragon::attack(Character &other)
{
    std::cout << name << " is attacking " << other.getName() << "!!!" << std::endl;
    if( auto* slayer = dynamic_cast<DragonSlayer*>(&other) )
    {
        //dragons can't attack dragon slayers
        slayer->defend();
    }
    else
    {
        Character::attack(other);
    }
}

const std::string& Dragon::getName()
{
    return name; 
}

std::string Dragon::getStats()
{
    return getCharacterStats(this);
}
