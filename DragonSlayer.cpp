#include "DragonSlayer.h"
#include "Dragon.h"
#include "Utility.h"

DragonSlayer::DragonSlayer(std::string name_, int hitPoints_, int armor_, int attackDamage_) : 
Character( hitPoints_, armor_, attackDamage_ ),
name (name_)
{
    helpfulItems = makeHelpfulItems(3);
    defensiveItems = makeDefensiveItems(1);
}

const std::string& DragonSlayer::getName()
{ 
    return name;
}

std::string DragonSlayer::getStats()
{ 
    return getCharacterStats(this);
}

void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {
        
        if(attackItem != nullptr)
        {
            attackItem->use(this);
            attackItem.reset();
        }
        while( dragon->getHP() > 0 )
        {
            dragon->takeDamage(attackDamage);
        }
    }
        
    Character::attack(other);
        
}
