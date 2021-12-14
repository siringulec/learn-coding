#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int num;
    fstream infile;
    infile.open ("input.txt");
    while (infile >> num)
        cout << num << " ";
    infile.close();
    return 0;
}
