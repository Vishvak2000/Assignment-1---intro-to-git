#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "cards.h"
using namespace std;

// Global constants (if any)
int N_GAMES = 1;

// Non member functions declarations (if any)
void print_info(Player* player, Player* dealer);
// Non member functions implementations (if any)
void print_info(Player* player, Player* dealer) {
   
    cout << "---------------------------" << endl << endl;
    cout << "Game Number: " << N_GAMES << endl << "Your money : " << player->get_money() << endl << endl;

    cout << "Your cards: " << endl;
     player->get_hand()->print_hand();
    cout << "Your total: " << player->get_hand()->get_total() << endl << endl;

    cout << "Dealer's cards: " << endl;
    dealer->get_hand()->print_hand();
    cout << "Your total: " << dealer ->get_hand()->get_total()<< endl << endl;
    
}

// Stub for main
int main() {
    Card B;
    cout << A.get_english_rank() << "and" << A.get_english_suit() << "and" << A.get_rank();
}