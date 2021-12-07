#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

#include <boost/filesystem.hpp>

using namespace std;

int main()
{
    string inputFileName;
    while (inputFileName.substr())
    cout << "Enter the filename of the depth readings: ";
    cin >> inputFileName;
    fstream depthReadings;
    depthReadings.open("SampleMaps.txt", ios::in);
    if (depthReadings.is_open())
    {
        string currentLine;
        while (getline(depthReadings, currentLine))
        {
            stoi(currentline)
        }
        depthReadings.close();
    }

    fstream outputFile;
    outputFile.open("solution.txt", ios::out);
    if (outputFile.is_open()) {
        
    }
}