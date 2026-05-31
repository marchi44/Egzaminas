#include "funkcijos.h"
#include <clocale>

int main()
{
    unordered_map<string, vector<int>> zodziaiKiekis;
	nuskaitymas("tekstas.txt", zodziaiKiekis);
	isvedimas(zodziaiKiekis);
	return 0;
}