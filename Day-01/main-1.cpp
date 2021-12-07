#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

// #include <boost/filesystem.hpp>

using namespace std;

int main()
{
    string inputFileName;
    cout << "Enter the filename of the depth readings: ";
    cin >> inputFileName;
    fstream depthReadingsFile;
    depthReadingsFile.open(inputFileName, ios::in);
    if (depthReadingsFile.is_open())
    {
        int lastDepthReading = INT32_MAX;
        size_t numTimesDepthIncreased = 0;
        string currentLine;
        while (getline(depthReadingsFile, currentLine))
        {
            int currentDepthReading = stoi(currentLine);
            if (currentDepthReading > lastDepthReading) {
                ++numTimesDepthIncreased;
            }
            lastDepthReading = currentDepthReading;
        }
        depthReadingsFile.close();
        cout << "Number of times depth increased: " << numTimesDepthIncreased;
    } else {
        cout << "ERROR: Could not open file with name: " << inputFileName;
    }

    // fstream outputFile;
    // outputFile.open("solution.txt", ios::out);
    // if (outputFile.is_open())
    // {
    // }
}