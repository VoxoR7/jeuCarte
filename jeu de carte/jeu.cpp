#include "carte.h"
#include "paquet.h"

int main() {

    srand( time( NULL));

    Paquet paquet( 32, CREER_CARTE);
    Paquet main1( 0, MAIN);
    Paquet main2( 0, MAIN);

    paquet.afficher();

    std::cout << "Melange ..." << std::endl;

    paquet.melanger();

    paquet.afficher();

    std::cout << "tirage de carte ..." << std::endl;

    main1.piocher( 4, paquet);

    main1.afficher();

    std::cout << "il reste dans le paquet ..." << std::endl;

    paquet.afficher();

    std::cout << "tirage de carte dans la main 2 ..." << std::endl;

    main2.piocher( 2, paquet);

    main2.afficher();

    exit(0);
}