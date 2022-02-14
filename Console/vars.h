#include <iostream>
#include <string>

#include "../vars.h"

string lol = BrewLOL('\0');
string lol2 = BrewLOL('2');
string lol3 = BrewLOL('3');

char ArrBrewConsole[7]{'C', 'o', 'n', 's', 'o', 'l', 'e'};
string console = brew(ArrBrewConsole, 7);