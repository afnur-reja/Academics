#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout;
    fout.open("data.txt");
    fout << "Hello you !";
    fout.close();

    return 0;
}