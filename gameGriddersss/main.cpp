//==========================================================
//
// Title: Game Gridders
// Author: Mercyllia Harmon
// Description:
// Application that displays baseball standings for selected teams
// Created, calculated, and show five variables containing games played.
// Created, calculated, and show five variables containing winning percentages.
// Used only escape sequences to print the data and to separate it into five columns.
//
//
//==========================================================

#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()

{
    
    // Declare variables
    
    string team;
    int wins;
    int losses;
    int totalGames;
    double percent;
    
    // Show application header
    cout << "Welcome to Game Gridders" << endl;
    cout << "--------------------------" << endl << endl;
    
    // Initialize varibles
    cout << "Please input the team name: ";
    getline(cin, team);
    cout << "Please input the score that the team wins: ";
    cin >> wins;
    cout << "Please input the score that the team losses";
    cin >> losses;
    
    
    
    // Caculate the value of played games and wining percentage for the team
    totalGames = wins + losses;
    percent = (double)wins / totalGames;
    
    
    
    // Caculate outputs and show inputs and outputs
    cout << "_______________________________" << endl << endl;
    cout << team << "\t" << "Wins: " << wins << "\t" << "Losses:" << losses << endl;
    cout << team << "\t" << "Wins: " << wins << "\t" << "Losses:" << losses << "\t" << "PlayedGames" << totalGames <<endl;
    cout << "PlayedGames : " << totalGames << endl;
    cout << "\t" << "Wiining Percentage" << percent << endl << endl;
    
    // Show application close
    cout << "nEnd of Game Gridders" << endl;
    
    // Pause before application window closes
    cout << "Press any key to exit ..." << endl;
    
    return 0;
}

