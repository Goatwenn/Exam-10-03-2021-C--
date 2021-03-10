#include <iostream>
#include <string>
#include "player.h"

/* 

  private :
        std::string _pseudo;
        int _bestScore[5];
        int _maxScore();
        int _minScore();
        int _moyenneScore();

    public :
        std::string getPseudo;
        void ajoutScore();
        void calculMinMaxScore();
        void calculMoyenneScore();
        void afficheStates();
        Player();
        Player(std :: string nom);

*/


Player :: Player() : _pseudo("null"), _bestScore {};

Player :: Player(std :: string nom): _pseudo(nom), _bestScore {};

int Player :: ajoutScore(chanson,newScore){
    if(_bestScore[chanson] < newScore){
        bestScore = newScore;
        return _bestScore;
    }
}


void Player :: calculMinMaxScore(){

}


void Player :: calculMoyenneScore(){
}


void Player :: afficheStates(){

}
