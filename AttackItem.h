#pragma once

#include "Item.h"
#include "Utility.h"

struct Character;

struct AttackItem : Item
{
    AttackItem();
    void use(Character* character) override;
};
