#pragma once
#include "Character.h"

struct Dwarf : Character
{
    Dwarf(std::string name_, int hitPoints_, int armor_, int attackDamage_ = 4);

    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};
