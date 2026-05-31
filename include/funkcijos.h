#ifndef FUNKCIJOS_H
#define FUNKCIJOS_H

#include "mylib.h"
void nuskaitymas(const string& failas, unordered_map<string, vector<int>>& zodziaiKiekis);
string suvienodinimas(const string& zodis, const bool& url);
void isvedimas(unordered_map<string, vector<int>>& zodziaiKiekis);
void nuskaitymasTLD(const string& failas, unordered_set<string>&TLD);
string rastiTLD(const string& zodis);
void urlIsvedimas(const string& urlFailas, const string& outputFailas, unordered_set<string>& TLD);
//bool zenkluPasalinimas(const unsigned char& ch);
#endif