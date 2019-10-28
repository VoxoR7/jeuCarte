#include <iostream>

#include "carte.h"

#define MAIN 0
#define CREER_CARTE 1

#define NB_MELANGE 25

class Paquet {

    private:

        Carte **tabCarte;

    public:

        /* constructeur */

        Paquet();
        Paquet( uint8_t, uint8_t );
        Paquet( const Paquet & );

        /* méthodes d'accés */

        uint8_t nbCartes();

        /* méthodes de modification */

        void melanger();
        void piocher( uint8_t, Paquet & );

        /* méthodes d'affichage */

        void afficher();

        /* destructeur */

        ~Paquet();

    /*private:*/

        Carte* premiereCarte();
};