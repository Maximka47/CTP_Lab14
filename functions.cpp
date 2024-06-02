//
// Created by Maximka47 on 14.04.2024.
//
#include <iostream>
#include <fstream>
#include "functions.h"
using namespace std;

int PrintTrains(std::ifstream& inputFile) {
    struct Train {
        string departureCity;
        string arrivalCity;
        string departureTime;
        string arrivalTime;
    };
    if (!inputFile) {
        cerr << "Не вдалося відкрити файл." << endl;
        return 1;
    }

    Train trainData;
    while (inputFile >> trainData.departureCity >> trainData.arrivalCity >> trainData.departureTime >> trainData.arrivalTime) {
        cout << "-----------------------------" << endl;
        cout << "Місто відправлення: " << trainData.departureCity << endl;
        cout << "Місто прибуття: " << trainData.arrivalCity << endl;
        cout << "Час відправлення: " << trainData.departureTime << endl;
        cout << "Час прибуття: " << trainData.arrivalTime << endl;
        cout << "-----------------------------" << endl;
    }

    inputFile.close();

    return 0;
}
