#include "../header/Recommendations.hpp"

void Recommendations::readCSV(istream &input, vector< vector<string> > &output)
{
    string csvLine;
    // read every line
    while ( getline(input, csvLine) )
    {
        istringstream csvStream(csvLine);
        vector<string> csvColumn;
        string csvElement;
        // elements are separated by commas
        while ( getline(csvStream, csvElement, ',') )
        {
            csvColumn.push_back(csvElement);
        }
        output.push_back(csvColumn);
    }
}