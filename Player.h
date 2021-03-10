#include <string>

class Player 
{
    private :
        std::string _pseudo;
        int _bestScore[5]= {0,0,0,0,0};
        int _maxScore();
        int _minScore();
        int _moyenneScore();

    public :
        std::string getPseudo;
        int ajoutScore();
        void calculMinMaxScore();
        void calculMoyenneScore();
        void afficheStates();
        Player();
        Player(std :: string nom);
};


