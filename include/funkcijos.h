#ifndef FUNKCIJOS_H
#define FUNKCIJOS_H

#include "mylib.h"
void nuskaitymas(const char* failas, unordered_map<string, vector<int>>& zodziaiKiekis);
string suvienodinimas(const string& zodis, const bool& url);
void isvedimas(unordered_map<string, vector<int>>& zodziaiKiekis);
//bool zenkluPasalinimas(const unsigned char& ch);
#endif