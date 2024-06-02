#include <iostream>
#include <fstream>
#include "functions.h"

using namespace std;

int main(){
    string start_str = "../";
    string end_str = ".txt";
    string filename;

    cout << "Введіть назву файлу з розкладом: ";

    cin >> filename;

    ifstream inputFile(start_str+filename+end_str);
    system("clear");

    PrintTrains(inputFile);

    return 0;
}
