#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

using namespace std;

// Function prototypes

// Overloaded function
void displayTournament();
void displayTournament(string r16_1, string r16_2, string r16_3, string r16_4, string r16_5, string r16_6, string r16_7, string r16_8);
void displayTournament(string r16_1, string r16_2, string r16_3, string r16_4, string r16_5, string r16_6, string r16_7, string r16_8, string qf_1, string qf_2, string qf_3, string qf_4);
void displayTournament(string r16_1, string r16_2, string r16_3, string r16_4, string r16_5, string r16_6, string r16_7, string r16_8, string qf_1, string qf_2, string qf_3, string qf_4, string sf_1, string sf_2);
void displayTournament(string r16_1, string r16_2, string r16_3, string r16_4, string r16_5, string r16_6, string r16_7, string r16_8, string qf_1, string qf_2, string qf_3, string qf_4, string sf_1, string sf_2, string fm);

string toLowercase(const string& team);
void roundOfSixteen();
void quarterFinals();
void semiFinals();
void championsLeagueFinal();

// Global Variables
string firstRoundOfSixteen = "(R16-1)", secondRoundOfSixteen = "(R16-2)", thirdRoundOfSixteen = "(R16-3)", fourthRoundOfSixteen = "(R16-4)";
string fifthRoundOfSixteen = "(R16-5)", sixthRoundOfSixteen = "(R16-6)", seventhRoundOfSixteen = "(R16-7)", eightRoundOfSixteen = "(R16-8)";
string firstQuarterfinal = "(QF-1)", secondQuarterfinal = "(QF-2)", thirdQuarterfinal = "(QF-3)", fourthQuarterfinal = "(QF-4)";
string firstSemifinal = "(SF-1)", secondSemifinal = "(SF-2)", finalMatch = "(Final)";

const int NUM_OF_TEAMS = 16;

int totalTeams = 0;
   
string teams [] = {"Arsenal", "Aston Villa", "Atletico Madrid", "Barcelona",
   "Bayer Leverkusen", "Bayern Munich", "Benfica", "Borussia Dortmund", "Club Brugge",
   "Feyenoord", "Inter Milan", "Lille", "Liverpool", "PSG", "PSV", "Real Madrid"};

// Main function
int main() 
{
  
  // Display initial blank tournament brackets
  displayTournament();

  // Call function that prompts user to assign values to roundOfSixteen variables
  roundOfSixteen();

  // Display tournament with newly assigned roundOfSixteen variables
  displayTournament(
    firstRoundOfSixteen, secondRoundOfSixteen,
    thirdRoundOfSixteen, fourthRoundOfSixteen,
    fifthRoundOfSixteen, sixthRoundOfSixteen,
    seventhRoundOfSixteen, eightRoundOfSixteen);

  // Call function that prompts user to assign values to quarterFinal variables
  quarterFinals();

  // Display tournament with newly assigned quarterFinal variables
  displayTournament(
    firstRoundOfSixteen, secondRoundOfSixteen,
    thirdRoundOfSixteen, fourthRoundOfSixteen,
    fifthRoundOfSixteen, sixthRoundOfSixteen,
    seventhRoundOfSixteen, eightRoundOfSixteen,
    firstQuarterfinal, secondQuarterfinal,
    thirdQuarterfinal, fourthQuarterfinal);

  // Call function that prompts user to assign values to semiFinal variables
  semiFinals();

  // Display tournament with newly assigned semiFinals variables
  displayTournament(
    firstRoundOfSixteen, secondRoundOfSixteen,
    thirdRoundOfSixteen, fourthRoundOfSixteen,
    fifthRoundOfSixteen, sixthRoundOfSixteen,
    seventhRoundOfSixteen, eightRoundOfSixteen,
    firstQuarterfinal, secondQuarterfinal,
    thirdQuarterfinal, fourthQuarterfinal,
    firstSemifinal, secondSemifinal);

  // Call function that prompts user to assign values to the final match
  championsLeagueFinal();

  // Display completed tournament, with a reveal and congratulation of the winner of the competition
  displayTournament(
    firstRoundOfSixteen, secondRoundOfSixteen,
    thirdRoundOfSixteen, fourthRoundOfSixteen,
    fifthRoundOfSixteen, sixthRoundOfSixteen,
    seventhRoundOfSixteen, eightRoundOfSixteen,
    firstQuarterfinal, secondQuarterfinal,
    thirdQuarterfinal, fourthQuarterfinal,
    firstSemifinal, secondSemifinal, finalMatch);

  return 0;
} // End of main function

// Initial version of the overloaded function which serves to display and visualize the structure/flow of the tournament before values are assigned
void displayTournament() 
{
  // top structure of tournament
  cout << setw(25) << setfill('=') << left << teams[14] << "                                                               "<< setw(25) << setfill('=') << right << teams [6]  << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "                                                               " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill(' ') << right << firstRoundOfSixteen << "===========                                         ===========" << fifthRoundOfSixteen << setw(25) << setfill(' ') << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "          =                                         =          " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill('=') << left << teams[0] << "          =                                         =          " << setw(25) << setfill('=') << right << teams [3]  << endl;
  
      //quarterfinal                                          empty line size
  cout << setw(36) << setfill(' ') << right << "=" << "                                         " << "=" << endl;
  cout << setw(36) << setfill(' ') << right << firstQuarterfinal << "==========" << "                     ==========" << thirdQuarterfinal << endl;
  cout << setw(36) << setfill(' ') << right << "=" << "         =                     =         " << "=" << endl;
  
  cout << setw(25) << setfill('=') << left << teams[15] << "          =         =                     =         =          "<< setw(25) << setfill('=') << right << teams [7]  << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "          =         =                     =         =          " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill(' ') << right << secondRoundOfSixteen << "===========         =                     =         ===========" << sixthRoundOfSixteen << setw(25) << setfill(' ') << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "                    =                     =                    " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill('=') << left << teams[2] << "                    =                     =                    " << setw(25) << setfill('=') << right << teams [11]  << endl;


  
  // champions league final
  cout << setw(46) << setfill(' ') << right << "=" << "                     " << "=" << endl;
  cout << setw(46) << setfill(' ') << right << firstSemifinal;
  cout << setw(13) << setfill('=') << finalMatch << setw(9) << right << "=" << secondSemifinal << endl;
  cout << setw(46) << setfill(' ') << right << "=" << "                     " << "=" << endl;


  
  // bottom structure of tournament
  cout << setw(25) << setfill('=') << left << teams[13] << "                    =                     =                    "<< setw(25) << setfill('=') << right << teams [5]  << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "                    =                     =                    " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill(' ') << right << thirdRoundOfSixteen << "===========         =                     =         ===========" << seventhRoundOfSixteen << setw(25) << setfill(' ') << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "          =         =                     =         =          " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill('=') << left << teams[12] << "          =         =                     =         =          " << setw(25) << setfill('=') << right << teams [4]  << endl;
  
      //quarterfinal                                        empty line size
  cout << setw(36) << setfill(' ') << right << "=" << "         =                     =         " << "=" << endl;
  cout << setw(36) << setfill(' ') << right << secondQuarterfinal << "==========" << "                     ==========" << fourthQuarterfinal << endl;
  cout << setw(36) << setfill(' ') << right << "=" << "                                         " << "=" << endl;
  
  cout << setw(25) << setfill('=') << left << teams[8] << "          =                                         =          "<< setw(25) << setfill('=') << right << teams [9]  << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "          =                                         =          " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill(' ') << right << fourthRoundOfSixteen << "===========                                         ===========" << eightRoundOfSixteen << setw(25) << setfill(' ') << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "                                                               " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill('=') << left << teams[1] << "                                                               " << setw(25) << setfill('=') << right << teams [10]  << endl;

}

// Second version of the overloaded function to display the tournament with assigned Round of 16 brackets
void displayTournament(string r16_1, string r16_2, string r16_3, string r16_4, string r16_5, string r16_6, string r16_7, string r16_8) 
{
  // top structure of tournament
  cout << setw(25) << setfill('=') << left << teams[14] << "                                                               "<< setw(25) << setfill('=') << right << teams [6]  << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "                                                               " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill(' ') << right << r16_1 << "===========                                         ===========" << r16_5 << setw(25) << setfill(' ') << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "          =                                         =          " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill('=') << left << teams[0] << "          =                                         =          " << setw(25) << setfill('=') << right << teams [3]  << endl;
  
      //quarterfinal                                          empty line size
  cout << setw(36) << setfill(' ') << right << "=" << "                                         " << "=" << endl;
  cout << setw(36) << setfill(' ') << right << firstQuarterfinal << "==========" << "                     ==========" << thirdQuarterfinal << endl;
  cout << setw(36) << setfill(' ') << right << "=" << "         =                     =         " << "=" << endl;
  
  cout << setw(25) << setfill('=') << left << teams[15] << "          =         =                     =         =          "<< setw(25) << setfill('=') << right << teams [7]  << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "          =         =                     =         =          " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill(' ') << right << r16_2 << "===========         =                     =         ===========" << r16_6 << setw(25) << setfill(' ') << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "                    =                     =                    " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill('=') << left << teams[2] << "                    =                     =                    " << setw(25) << setfill('=') << right << teams [11]  << endl;


  
  // champions league final
  cout << setw(46) << setfill(' ') << right << "=" << "                     " << "=" << endl;
  cout << setw(46) << setfill(' ') << right << firstSemifinal;
  cout << setw(13) << setfill('=') << finalMatch << setw(9) << right << "=" << secondSemifinal << endl;
  cout << setw(46) << setfill(' ') << right << "=" << "                     " << "=" << endl;


  
  // bottom structure of tournament
  cout << setw(25) << setfill('=') << left << teams[13] << "                    =                     =                    "<< setw(25) << setfill('=') << right << teams [5]  << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "                    =                     =                    " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill(' ') << right << r16_3 << "===========         =                     =         ===========" << r16_7 << setw(25) << setfill(' ') << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "          =         =                     =         =          " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill('=') << left << teams[12] << "          =         =                     =         =          " << setw(25) << setfill('=') << right << teams [4]  << endl;
  
      //quarterfinal                                        empty line size
  cout << setw(36) << setfill(' ') << right << "=" << "         =                     =         " << "=" << endl;
  cout << setw(36) << setfill(' ') << right << secondQuarterfinal << "==========" << "                     ==========" << fourthQuarterfinal << endl;
  cout << setw(36) << setfill(' ') << right << "=" << "                                         " << "=" << endl;
  
  cout << setw(25) << setfill('=') << left << teams[8] << "          =                                         =          "<< setw(25) << setfill('=') << right << teams [9]  << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "          =                                         =          " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill(' ') << right << r16_4 << "===========                                         ===========" << r16_8 << setw(25) << setfill(' ') << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "                                                               " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill('=') << left << teams[1] << "                                                               " << setw(25) << setfill('=') << right << teams [10]  << endl;

}

// Third version of the overloaded function to display the tournament with assigned Round of 16 and Quarterfinal brackets
void displayTournament(string r16_1, string r16_2, string r16_3, string r16_4, string r16_5, string r16_6, string r16_7, string r16_8, string qf_1, string qf_2, string qf_3, string qf_4) 
{
  // top structure of tournament
  cout << setw(25) << setfill('=') << left << teams[14] << "                                                               "<< setw(25) << setfill('=') << right << teams [6]  << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "                                                               " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill(' ') << right << r16_1 << "===========                                         ===========" << r16_5 << setw(25) << setfill(' ') << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "          =                                         =          " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill('=') << left << teams[0] << "          =                                         =          " << setw(25) << setfill('=') << right << teams [3]  << endl;
  
      //quarterfinal                                          empty line size
  cout << setw(36) << setfill(' ') << right << "=" << "                                         " << "=" << endl;
  cout << setw(36) << setfill(' ') << right << qf_1 << "==========" << "                     ==========" << qf_3 << endl;
  cout << setw(36) << setfill(' ') << right << "=" << "         =                     =         " << "=" << endl;
  
  cout << setw(25) << setfill('=') << left << teams[15] << "          =         =                     =         =          "<< setw(25) << setfill('=') << right << teams [7]  << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "          =         =                     =         =          " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill(' ') << right << r16_2 << "===========         =                     =         ===========" << r16_6 << setw(25) << setfill(' ') << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "                    =                     =                    " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill('=') << left << teams[2] << "                    =                     =                    " << setw(25) << setfill('=') << right << teams [11]  << endl;


  
  // champions league final
  cout << setw(46) << setfill(' ') << right << "=" << "                     " << "=" << endl;
  cout << setw(46) << setfill(' ') << right << firstSemifinal;
  cout << setw(13) << setfill('=') << finalMatch << setw(9) << right << "=" << secondSemifinal << endl;
  cout << setw(46) << setfill(' ') << right << "=" << "                     " << "=" << endl;


  
  // bottom structure of tournament
  cout << setw(25) << setfill('=') << left << teams[13] << "                    =                     =                    "<< setw(25) << setfill('=') << right << teams [5]  << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "                    =                     =                    " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill(' ') << right << r16_3 << "===========         =                     =         ===========" << r16_7 << setw(25) << setfill(' ') << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "          =         =                     =         =          " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill('=') << left << teams[12] << "          =         =                     =         =          " << setw(25) << setfill('=') << right << teams [4]  << endl;
  
      //quarterfinal                                        empty line size
  cout << setw(36) << setfill(' ') << right << "=" << "         =                     =         " << "=" << endl;
  cout << setw(36) << setfill(' ') << right << qf_2 << "==========" << "                     ==========" << qf_4 << endl;
  cout << setw(36) << setfill(' ') << right << "=" << "                                         " << "=" << endl;
  
  cout << setw(25) << setfill('=') << left << teams[8] << "          =                                         =          "<< setw(25) << setfill('=') << right << teams [9]  << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "          =                                         =          " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill(' ') << right << r16_4 << "===========                                         ===========" << r16_8 << setw(25) << setfill(' ') << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "                                                               " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill('=') << left << teams[1] << "                                                               " << setw(25) << setfill('=') << right << teams [10]  << endl;

}

// Fourth version of the overloaded function to display the tournament with assigned Round of 16, Quarterfinal, and Semifinal brackets
void displayTournament(string r16_1, string r16_2, string r16_3, string r16_4, string r16_5, string r16_6, string r16_7, string r16_8, string qf_1, string qf_2, string qf_3, string qf_4, string sf_1, string sf_2) 
{
  // top structure of tournament
  cout << setw(25) << setfill('=') << left << teams[14] << "                                                               "<< setw(25) << setfill('=') << right << teams [6]  << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "                                                               " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill(' ') << right << r16_1 << "===========                                         ===========" << r16_5 << setw(25) << setfill(' ') << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "          =                                         =          " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill('=') << left << teams[0] << "          =                                         =          " << setw(25) << setfill('=') << right << teams [3]  << endl;
  
      //quarterfinal                                          empty line size
  cout << setw(36) << setfill(' ') << right << "=" << "                                         " << "=" << endl;
  cout << setw(36) << setfill(' ') << right << qf_1 << "==========" << "                     ==========" << qf_3 << endl;
  cout << setw(36) << setfill(' ') << right << "=" << "         =                     =         " << "=" << endl;
  
  cout << setw(25) << setfill('=') << left << teams[15] << "          =         =                     =         =          "<< setw(25) << setfill('=') << right << teams [7]  << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "          =         =                     =         =          " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill(' ') << right << r16_2 << "===========         =                     =         ===========" << r16_6 << setw(25) << setfill(' ') << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "                    =                     =                    " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill('=') << left << teams[2] << "                    =                     =                    " << setw(25) << setfill('=') << right << teams [11]  << endl;


  
  // champions league final
  cout << setw(46) << setfill(' ') << right << "=" << "                     " << "=" << endl;
  cout << setw(46) << setfill(' ') << right << sf_1;
  cout << setw(13) << setfill('=') << finalMatch << setw(9) << right << "=" << sf_2 << endl;
  cout << setw(46) << setfill(' ') << right << "=" << "                     " << "=" << endl;


  
  // bottom structure of tournament
  cout << setw(25) << setfill('=') << left << teams[13] << "                    =                     =                    "<< setw(25) << setfill('=') << right << teams [5]  << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "                    =                     =                    " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill(' ') << right << r16_3 << "===========         =                     =         ===========" << r16_7 << setw(25) << setfill(' ') << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "          =         =                     =         =          " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill('=') << left << teams[12] << "          =         =                     =         =          " << setw(25) << setfill('=') << right << teams [4]  << endl;
  
      //quarterfinal                                        empty line size
  cout << setw(36) << setfill(' ') << right << "=" << "         =                     =         " << "=" << endl;
  cout << setw(36) << setfill(' ') << right << qf_2 << "==========" << "                     ==========" << qf_4 << endl;
  cout << setw(36) << setfill(' ') << right << "=" << "                                         " << "=" << endl;
  
  cout << setw(25) << setfill('=') << left << teams[8] << "          =                                         =          "<< setw(25) << setfill('=') << right << teams [9]  << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "          =                                         =          " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill(' ') << right << r16_4 << "===========                                         ===========" << r16_8 << setw(25) << setfill(' ') << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "                                                               " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill('=') << left << teams[1] << "                                                               " << setw(25) << setfill('=') << right << teams [10]  << endl;

}
// Fifth version of the overloaded function to display the tournament with assigned Round of 16, Quarterfinal, Semifinal, and Final brackets
void displayTournament(string r16_1, string r16_2, string r16_3, string r16_4, string r16_5, string r16_6, string r16_7, string r16_8, string qf_1, string qf_2, string qf_3, string qf_4, string sf_1, string sf_2, string fm) 
{
  // top structure of tournament
  cout << setw(25) << setfill('=') << left << teams[14] << "                                                               "<< setw(25) << setfill('=') << right << teams [6]  << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "                                                               " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill(' ') << right << r16_1 << "===========                                         ===========" << r16_5 << setw(25) << setfill(' ') << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "          =                                         =          " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill('=') << left << teams[0] << "          =                                         =          " << setw(25) << setfill('=') << right << teams [3]  << endl;
  
      //quarterfinal                                          empty line size
  cout << setw(36) << setfill(' ') << right << "=" << "                                         " << "=" << endl;
  cout << setw(36) << setfill(' ') << right << qf_1 << "==========" << "                     ==========" << qf_3 << endl;
  cout << setw(36) << setfill(' ') << right << "=" << "         =                     =         " << "=" << endl;
  
  cout << setw(25) << setfill('=') << left << teams[15] << "          =         =                     =         =          "<< setw(25) << setfill('=') << right << teams [7]  << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "          =         =                     =         =          " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill(' ') << right << r16_2 << "===========         =                     =         ===========" << r16_6 << setw(25) << setfill(' ') << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "                    =                     =                    " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill('=') << left << teams[2] << "                    =                     =                    " << setw(25) << setfill('=') << right << teams [11]  << endl;


  
  // champions league final
  cout << setw(46) << setfill(' ') << right << "=" << "                     " << "=" << endl;
  cout << setw(46) << setfill(' ') << right << sf_1;
  cout << setw(13) << setfill('=') << fm << setw(9) << right << "=" << sf_2 << endl;
  cout << setw(46) << setfill(' ') << right << "=" << "                     " << "=" << endl;


  
  // bottom structure of tournament
  cout << setw(25) << setfill('=') << left << teams[13] << "                    =                     =                    "<< setw(25) << setfill('=') << right << teams [5]  << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "                    =                     =                    " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill(' ') << right << r16_3 << "===========         =                     =         ===========" << r16_7 << setw(25) << setfill(' ') << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "          =         =                     =         =          " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill('=') << left << teams[12] << "          =         =                     =         =          " << setw(25) << setfill('=') << right << teams [4]  << endl;
  
      //quarterfinal                                        empty line size
  cout << setw(36) << setfill(' ') << right << "=" << "         =                     =         " << "=" << endl;
  cout << setw(36) << setfill(' ') << right << qf_2 << "==========" << "                     ==========" << qf_4 << endl;
  cout << setw(36) << setfill(' ') << right << "=" << "                                         " << "=" << endl;
  
  cout << setw(25) << setfill('=') << left << teams[8] << "          =                                         =          "<< setw(25) << setfill('=') << right << teams [9]  << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "          =                                         =          " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill(' ') << right << r16_4 << "===========                                         ===========" << r16_8 << setw(25) << setfill(' ') << endl;
  cout << setw(25) << setfill(' ') << right << "=" << "                                                               " << setw(25) << setfill(' ') << left << "=" << endl;
  cout << setw(25) << setfill('=') << left << teams[1] << "                                                               " << setw(25) << setfill('=') << right << teams [10]  << endl;

}

// Function that takes a string as a parameter and returns the same string in all lowercase characters
string toLowercase(const string& team)
{
  // Local string variable used to store the lowercased string
  string lowercasedTeamName = "";

  // Loop iterates through each character in the user given string and converts it to lowercase at each iteration
  for( int a = 0; a < team.length(); a++)
    lowercasedTeamName += tolower(team[a]);
    // Lowercased value is returned
    return lowercasedTeamName;
}

// Function that takes two team names as string parameters and returns the winner of that matchup based on the user's choice
string getMatchWinner(const string& team1, const string& team2) 
{
  // Local variable used to store the user's choice
  string input;
  
  // Loop control variable
  bool valid = false;

  // Loop that prompts the user for a winner until a valid choice is entered
  do {
    // User prompt
      cout << "Who wins this match? " << team1 << " or " << team2 << ": ";
      // The next line of input given is stored, including whitespace
      getline(cin, input);

      // Input is lowercased by a function call and assigned to a newly declared local variable
      string lowered = toLowercase(input);
      
      // The lowercased user input is compared to the first team name parameter of the function
      if (lowered == toLowercase(team1)) {
        // If the comparison equals true, that first team name is returned to the calling statement
          return team1;
      // The lowercase user input is compared to the second team name parameter of the function
      } else if (lowered == toLowercase(team2)) {
          // If the comparison equals true, that second team name is returned to the calling function
          return team2;
      } else {
          // Input validation
          cout << "Invalid input. Please try again." << endl;
      }

  } while (!valid);

  return ""; // Fallback, though it should never reach here
}

// Function that assigns values/winners to each matchup in the Round of 16 bracket
void roundOfSixteen() 
{

  firstRoundOfSixteen = getMatchWinner(teams[14], teams[0]);
  secondRoundOfSixteen = getMatchWinner(teams[15], teams[2]);
  thirdRoundOfSixteen = getMatchWinner(teams[13], teams[12]);
  fourthRoundOfSixteen = getMatchWinner(teams[8], teams[1]);
  fifthRoundOfSixteen = getMatchWinner(teams[6], teams[3]);
  sixthRoundOfSixteen = getMatchWinner(teams[7], teams[11]);
  seventhRoundOfSixteen = getMatchWinner(teams[5], teams[4]);
  eightRoundOfSixteen = getMatchWinner(teams[9], teams[10]);
}

// Funtion that assigns values/winners to each matchup in the Quarterfinals bracket
void quarterFinals()
{

  firstQuarterfinal = getMatchWinner(firstRoundOfSixteen, secondRoundOfSixteen);
  secondQuarterfinal = getMatchWinner(thirdRoundOfSixteen, fourthRoundOfSixteen);
  thirdQuarterfinal = getMatchWinner(fifthRoundOfSixteen, sixthRoundOfSixteen);
  fourthQuarterfinal = getMatchWinner(seventhRoundOfSixteen, eightRoundOfSixteen);

}

// Function that assigns values/winners to each matchup in the Semifinals bracket
void semiFinals() 
{

  firstSemifinal = getMatchWinner(firstQuarterfinal, secondQuarterfinal);
  secondSemifinal = getMatchWinner(thirdQuarterfinal, fourthQuarterfinal);

}

// Function that assings the value/winner of the Final match of the tournament
void championsLeagueFinal()
{

  finalMatch = getMatchWinner(firstSemifinal, secondSemifinal);

  cout << "\nCongratulations to " << finalMatch << ", winners of the 2024/2025 Champions League!" << endl;

}