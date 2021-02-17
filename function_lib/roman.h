#pragma once
#include <iostream>
#include <string>
#include <map>
struct roman {
    std::string value;
};

struct arabic {
    int value;
};

class Convertor {
    arabic toArabic(roman r);
    roman toRoman(arabic a); 
};