#include "Item.h"

Item::~Item() {}

Item::Item(const std::string& name_, int effect ) : name(name_), boost(effect) { }
