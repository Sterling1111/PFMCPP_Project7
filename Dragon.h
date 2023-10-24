#pragma once

#include "Character.h"

struct Dragon : Character
{
    Dragon(std::string name_, int hitPoints_, int armor_, int attackDamage_ = 80);

    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character &other) override;

private:
    const std::string name;
};
