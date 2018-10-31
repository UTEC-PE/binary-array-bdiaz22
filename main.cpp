#include <iostream>
#include "binary.cpp"
using namespace std;

int main(int argc, char *argv[]) {
    cout << "===========================================================" << endl;
    cout << "Binary Array Practice" << endl;
    cout << "===========================================================" << endl << endl;

    boolean mb(8);
    mb.bitOn(2);
    cout<< mb[2]<<"\n";
    mb.bitOff(2);
    cout<< mb[2]<<"\n";

    system("read");
    return EXIT_SUCCESS;
}

