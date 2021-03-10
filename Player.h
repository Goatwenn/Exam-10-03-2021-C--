#include <string>

class Joueur 
{
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
        int afficheStates();
        Joueur();
        Joueur(std :: string nom);
};


