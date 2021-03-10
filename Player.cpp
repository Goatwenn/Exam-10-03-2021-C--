#include <iostream>
#include <string>
#include "player.h"

/* 

   private :
        std::string _pseudo;
        int _bestScore[5]= {0,0,0,0,0};
        int _maxScore();
        int _minScore();
        int _moyenneScore();

    public :
        std::string getPseudo;
        void ajoutScore();
        void calculMinMaxScore();
        void calculMoyenneScore();
        void afficheStates();
        Joueur();
        Joueur(std :: string nom);

*/


Joueur :: Joueur(): _pseudo("null"), _bestScore {}

Joueur :: Joueur(std :: string nom): _pseudo(nom), _bestScore;

void Joueur :: ajoutScore(){
}


void Joueur :: calculMinMaxScore(){

}


void Joueur :: calculMoyenneScore(){
}


void Joueur :: afficheStates(){

}
