#include "mylib.h"

void nuskaitymasTLD(const string& failas, set<string>&TLD){
    ifstream in(failas);
    if(!in) std::cerr << "Nepavyko atidaryti failo!\n";
    string tld;
    while(in >> tld){
        if (tld[0] == '#') continue;
        string domain = ".";
        for(const char& ch : tld){
            domain += tolower(ch);
        }
        TLD.insert(domain);
    }
}