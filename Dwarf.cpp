#include "Dwarf.h"
#include "Utility.h"

Dwarf::Dwarf(std::string name_, int hitPoints_, int armor_, int attackDamage_) : 
    Character(hitPoints_, armor_, attackDamage_),
    name(name_)
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(5);
}

const std::string& Dwarf::getName()
{
    return name;
}

std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}
