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
void hand_info(Player* player, Player* dealer) {

    
    cout << "Your cards: " << endl;
    player->get_hand()->print_hand();
    cout << "Your total: " << player->get_hand()->get_total() << endl << endl;

    cout << "Dealer's cards: " << endl;
    dealer->get_hand()->print_hand();
    cout << "Your total: " << dealer->get_hand()->get_total() << endl << endl;

}

int check_win(Player* player, Player* Dealer) {
    if (Dealer->get_hand()->get_total() >= 7.5) {
        cout << "Player wins!" << endl;
        return 2;
        
    }
    else if (player->get_hand()->get_total() >= 7.5) {
        cout << "Dealer wins!" << endl;
        return 1;
        
    }
    else {
        return 3;
    }
}
// Stub for main
int main() {
    bool win = false;
    Player D();
    Player A(800);
    int bet;
    cout << "Enter the bet: " << endl;
    cin >> bet;
    cout >> "__________________________________" << endl;

    while (win = false) {
        if (D.get_hand()->get_total() <= 5.5) {
            cout >> "Dealer picks a card:" << endl;
                Card * p = new Card;
            D.get_hand()->add_card(p);
        }
        else {
            cout << "Dealer doesn't pick a card" << endl;
        }
        p = new Card;
        cout >> "Pick a card (y/n)" << endl;
        char ans;
        cin >> ans;
        if (ans == 'y') {
            A.get_hand()->add_card(p);
        } else 
        hand_info(A,D);
        
        if (check_win(A, D) == 1 || checkwin(A, D) == 2) {
            win = true;
        }
    }
    
   
}