#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream infile("in.txt");
    ofstream outfile("out.txt");

    string s;
    while(getline(infile, s))
        outfile << s << endl;

    infile.close();
    outfile.close();
    return 0;
}
