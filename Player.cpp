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


    Joueur :: Joueur(): _pseudo("null"), _bestScore() { } ;

    Joueur :: Joueur(std :: string nom): _pseudo(nom), _bestScore() { } ;

    void Joueur :: ajoutScore(){
        _bestScore[0] = 34;
    }


    void Joueur :: calculMinMaxScore(){

    }


    void Joueur :: calculMoyenneScore(){
    }


    int Joueur :: afficheStates(){
        std::cout << " " << std::endl;
        std::cout << " ______ Statistique de : "<< _pseudo << "______" << std::endl;
        std::cout << " " << std::endl;
        std::cout << "-- Meilleur Score --" << std::endl;
        std::cout << "1er  = " << _bestScore[0] << std::endl;
        std::cout << "2eme = " << _bestScore[1] << std::endl;
        std::cout << "3eme = " << _bestScore[2] << std::endl;
        std::cout << "4eme = " << _bestScore[3] << std::endl;
        std::cout << "5eme = " << _bestScore[4]<< std::endl;
        std::cout << " " << std::endl;
        std::cout << "Score Max = " << _bestScore[0] << std::endl;
        std::cout << "Score Max = " << _bestScore[4] << std::endl;
        std::cout << "Moyenne des Score = " <<std::endl;
    }   
    
