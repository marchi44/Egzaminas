#include "mylib.h"

void nuskaitymasTLD(const string& failas, unordered_set<string>& TLD){
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

string rastiTLD(const string& zodis) {
    size_t taskoPoz = zodis.rfind('.');
    if (taskoPoz == string::npos) return "";
    
    size_t pradzia = taskoPoz;
    
    size_t pabaiga = pradzia + 1;
    while (pabaiga < zodis.size() && isalnum(zodis[pabaiga]))
        pabaiga++;
    
    return zodis.substr(pradzia, pabaiga - pradzia);
}

void urlIsvedimas(const string& urlFailas, const string& outputFailas, unordered_set<string>& TLD){
    ifstream in(urlFailas);
    ofstream out(outputFailas);
    string zodis;
    while(in >> zodis){
        string tld = rastiTLD(zodis);
        if(TLD.count(tld)) out << zodis << endl;
    }
}