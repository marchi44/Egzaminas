#include "funkcijos.h"

int main()
{
    unordered_map<string, vector<int>> zodziaiKiekis;
	nuskaitymas("tekstas.txt", zodziaiKiekis);
	isvedimas(zodziaiKiekis);

    set<string>TLD;
    nuskaitymasTLD("TLD.txt", TLD);
	return 0;
}