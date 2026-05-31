#include "funkcijos.h"

int main()
{
    unordered_map<string, vector<int>> zodziaiKiekis;
	nuskaitymas("tekstas.txt", zodziaiKiekis);
	isvedimas(zodziaiKiekis);

    unordered_set<string>TLD;
    nuskaitymasTLD("TLD.txt", TLD);
    urlIsvedimas("tekstas_su_url.txt", "url.txt", TLD);

	return 0;
}