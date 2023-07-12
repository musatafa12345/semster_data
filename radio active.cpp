#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

bool analyzeData(int patientNum, double *avgHalfLife, int *numMeasurements);
double halfLife(double C0, double Ct, double t);
bool highest2halfLifes(double avgHalfLife, int *patient1, double *halflife1, int *patient2, double *halflife2);


int main()
{
    int patientNum;
    char option;
    double avgHalfLife = 0;
    int numMeasurements = 0;

    do
    {
        cout << "\nNew Pain Drug - Half-Life Determination\n";
        cout << "---------------------------------------\n";
        cout << " [P] - Patient Summary\n";
        cout << " [H] - Highest two half-lifes\n";
        cout << " [X] - to Exit\n";
        cout << "\nEnter Option: ";
        cin >> option;

        switch (option)
        {
        case 'p': 
            cout << "Enter patient number (1-5): ";
            cin >> patientNum;
            analyzeData(patientNum, &avgHalfLife, &numMeasurements);
            cout << "Half-life of patient #" << patientNum << " is " << fixed << setprecision(2) << avgHalfLife << " hrs, using " << numMeasurements << " measurements.\n";
            break;

        case 'h': 
            break;

        case 'x': option = false;
            break;

        default: cout << "Invalid option entered.\n";
        }
    }
    while (option);
    return 0;
}

bool analyzeData(int patientNum, double *avgHalfLife, int *numMeasurements) {
    double C0, Ct, t, t1;
    double sumHalfLifes = 0;

    int patient;
    ifstream fin;
    fin.open("Patient_Data.txt");

    if(fin) {
        while(fin >> patient >> C0 >> Ct >> t) {
            if(patient == patientNum) {
                bool analyzeData = true;
                t1 = halfLife(C0, Ct, t);

                *numMeasurements++;
                sumHalfLifes = sumHalfLifes + t1;
                *avgHalfLife = sumHalfLifes / *numMeasurements;
            }
        }
    } else
        cout << "Error opening file.";

    fin.close();
    return analyzeData;
}


double halfLife(double C0, double Ct, double t)
{
    double k, t1;

    k = - log(Ct/C0)/t;
    t1 = log(2)/k;

    return t1/2;
}

bool highest2halfLifes(double avgHalfLife, int *patient1, double *halflife1, int *patient2, double *halflife2)
{
    double highest = avgHalfLife;

    if (avgHalfLife > highest)
        highest = avgHalfLife;

    return highest2halfLifes;
}
