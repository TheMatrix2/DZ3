#include "DZ3.hpp"

long int discriminant(int a, int b, int c){
    return b * b - 4 * a * c;
}

void add_to_file(const vector<char> m, const string name_file){
    ofstream f;
    f.open(name_file, ios_base::binary | ios_base::out);
    for (int i = 0; i < m.size(); i++)
        f.write((char*)&m[i], sizeof(char));
}