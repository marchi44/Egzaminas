#include "mylib.h"

void nuskaitymas(const char* failas, unordered_map<string, vector<int>>& zodziaiKiekis) {
	ifstream in(failas);
	string eilute;
    int eilNr = 1;
	while (getline(in, eilute)) {
        istringstream iss(eilute);
        string input;
        while(iss >> input){
		    string zodis = suvienodinimas(input, 0);
		    if (!zodis.empty()) {
			    zodziaiKiekis[zodis].push_back(eilNr);
		    }
        }
        eilNr++;
	}
    in.close();
}

string suvienodinimas(const string& zodis, const bool& url) {
	string suvienodintasZodis = "";
	for (const char& ch : zodis) {
		if(url && ch == '/')
            return suvienodintasZodis;
        if (!ispunct(ch))
			suvienodintasZodis += tolower(ch);
	}
	return suvienodintasZodis;
}

void isvedimas(unordered_map<string, vector<int>>& zodziaiKiekis){
    ofstream out("output.txt");
    out << "Žodis                 | Eilutės | Kiek kartų\n";
    out << "----------------------|---------|-----------\n";
    
   for (const auto& [zodis, eilutes] : zodziaiKiekis) {
    if (eilutes.size() > 1) {
        out << std::left << std::setw(22) << zodis << "| ";
        
        string eilutesStr;
        for (int i = 0; i < (int)eilutes.size(); i++) {
            eilutesStr += std::to_string(eilutes[i]);
            if (i < (int)eilutes.size() - 1) eilutesStr += ", ";
        }
        
        out << std::setw(8) << eilutesStr << "| " << eilutes.size() << "\n";
    }
}
    out.close();
}
/*
bool zenkluPasalinimas(const unsigned char& ch){
    if((ch >= 48 && ch <= 57) || (ch >= 65 && ch <= 90) ||
    (ch >= 97 && ch <= 122) || (ch == 142) && (ch == 138) ||
    (ch == 154) || (ch == 140) || (ch == 156) || (ch == 158) ||
    (ch == 159) || (ch >= 192 && ch <= 214) || (ch >= 216 && ch <= 246) ||
    (ch >= 248 && ch <= 255))
        return false;
    else return true;
}
    */