#include "paquet.h"

Paquet::Paquet() {
 /* par default 54 cartes */
}

Paquet::Paquet( uint8_t nbCarte, uint8_t flags ) {
    /* valeurs possible : 32, 52, 54 */

    if ( flags & CREER_CARTE ) {

        switch ( nbCarte ) {
            case 32:
                
                tabCarte = new Carte*[32];

                tabCarte[0] = new Carte( "Coeur", "AS" );
                tabCarte[1] = new Carte( "Carreau", "AS" );
                tabCarte[2] = new Carte( "Pique", "AS" );
                tabCarte[3] = new Carte( "Trefle", "AS" );

                tabCarte[4] = new Carte( "Coeur", "7" );
                tabCarte[5] = new Carte( "Carreau", "7" );
                tabCarte[6] = new Carte( "Pique", "7" );
                tabCarte[7] = new Carte( "Trefle", "7" );

                tabCarte[8] = new Carte( "Coeur", "8" );
                tabCarte[9] = new Carte( "Carreau", "8" );
                tabCarte[10] = new Carte( "Pique", "8" );
                tabCarte[11] = new Carte( "Trefle", "8" );

                tabCarte[12] = new Carte( "Coeur", "9" );
                tabCarte[13] = new Carte( "Carreau", "9" );
                tabCarte[14] = new Carte( "Pique", "9" );
                tabCarte[15] = new Carte( "Trefle", "9" );
                break;
            case 52:

                break;
            case 54:

                break;
            default:
                exit(1);
        }
    } else {

        tabCarte = new Carte*[16];

        for ( uint8_t i = 0 ; i < 16 ; i++ ) {

            tabCarte[i] = NULL;
        }
    }
}

Paquet::Paquet( const Paquet &paquet ) {

}

/* méthodes d'accés */

uint8_t Paquet::nbCartes() {

    uint8_t count = 0;

    for ( uint8_t i = 0 ; i < 16 ; i++ )
        if ( tabCarte[i] != NULL )
            count++;

    return count;
}

/* méthodes de modification */

void Paquet::melanger() {

    uint8_t k;
    Carte *carte;

    for ( uint8_t i = 0 ; i < NB_MELANGE ; i++ ) {
        for ( uint8_t j = 0 ; j < 16 ; j++ ) {

            k = rand() % 16;
            carte = tabCarte[j];
            tabCarte[j] = tabCarte[k];
            tabCarte[k] = carte;

        }
    }
}

void Paquet::piocher( uint8_t nbCartes, Paquet paquet ) {

    for ( ; nbCartes ; nbCartes-- ) {
        for ( uint8_t i = 0 ; i < 16 && tabCarte[i] != NULL ; i++ )
            tabCarte[i] = paquet.premiereCarte();
}

/* destructeur */

Paquet::~Paquet() {

    for ( uint8_t i = 0 ; i < 16 ; i++ )
        delete tabCarte[i];

    delete[] tabCarte;
}

Carte* Paquet::premiereCarte() {

    Carte *carte;

    for ( uint8_t i = 0 ; i < 16 ; i++ )
        if ( tabCarte[i] != NULL ) {

            carte = tabCarte[i];
            tabCarte[i] = NULL;
            return carte;
        }

    return NULL;
}