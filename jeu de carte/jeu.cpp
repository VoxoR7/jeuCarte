#include "carte.h"

int main() {

    srand( time( NULL));

    Carte c1 = Carte( "rouge", "5");

    c1.afficher();
}