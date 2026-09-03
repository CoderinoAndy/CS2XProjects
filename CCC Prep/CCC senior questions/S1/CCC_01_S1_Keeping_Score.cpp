#include <iostream>
#include <string>
using namespace std;

int main(){
    // ace - 4
    // king - 3
    // queen - 2
    // jack - 1
    string hand;
    cin >> hand;
    int clubpoints = 0;
    int diamondpoints = 0;
    int heartpoints = 0;
    int spadepoints = 0;
    int clubs = 0;
    int diamonds = 0;
    int hearts = 0;
    int spades = 0;
    string clubcards;
    string diamondcards;
    string heartcards;
    string spadecards;
    string suit;

    auto suitcount = [&clubs, &diamonds, &hearts, &spades, &clubpoints, &diamondpoints, &heartpoints, &spadepoints, &clubcards, &diamondcards, &heartcards, &spadecards](string suit, int points, char character){
        if(suit == "clubs"){
            ++clubs;
            clubpoints += points;
            clubcards += character;
            clubcards += ' ';
        } else if(suit == "diamonds"){
            ++diamonds;
            diamondpoints += points;
            diamondcards += character;
            diamondcards += ' ';
        } else if(suit == "hearts"){
            ++hearts;
            heartpoints += points;
            heartcards += character;
            heartcards += ' ';
        } else{
            ++spades;
            spadepoints += points;
            spadecards += character;
            spadecards += ' '; 
        }
        return 0; // necessary?
    };

    for(auto const& character : hand){
        if(character == 'C'){
            suit = "clubs";
        } else if(character == 'D'){
            suit = "diamonds";
        } else if(character == 'H'){
            suit = "hearts";
        } else if(character == 'S') {
            suit = "spades";
        } else if(character == 'A'){
            suitcount(suit, 4, 'A');
        } else if(character == 'K'){
            suitcount(suit, 3, 'K');
        } else if(character == 'Q'){
            suitcount(suit, 2, 'Q');
        } else if(character == 'J'){
            suitcount(suit, 1, 'J');
        } else {
            suitcount(suit, 0, character);
        }
    }
    if(clubs == 0){
        clubpoints += 3;
    } else if(clubs == 1){
        clubpoints += 2;
    } else if(clubs == 2){
        clubpoints += 1;
    }   
    if(diamonds == 0){
        diamondpoints += 3;
    } else if(diamonds == 1){
        diamondpoints += 2;
    } else if(diamonds == 2){
        diamondpoints += 1;
    }
    if(hearts == 0){
        heartpoints += 3;
    } else if(hearts == 1){
        heartpoints += 2;
    } else if(hearts == 2){
        heartpoints += 1;
    }
    if(spades == 0){
        spadepoints += 3;
    } else if(spades == 1){
        spadepoints += 2;
    } else if(spades == 2){
        spadepoints += 1;
    }
    int total = clubpoints + diamondpoints + heartpoints + spadepoints;
    cout << "Cards Dealt              Points" << '\n';
    cout << "Clubs " << clubcards << "             " << clubpoints << '\n';
    cout << "Diamonds " << diamondcards << "             " << diamondpoints << '\n';
    cout << "Hearts " << heartcards << "             " << heartpoints << '\n';
    cout << "Spades " << spadecards << "             " << spadepoints << '\n';
    cout << "                       Total " << total;
}