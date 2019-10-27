#include <string>
#include <iostream>

#pragma once

class Carte {

    private:

        std::string m_couleur;
        std::string m_rang;

    public:

        /* constructeur */

        Carte();
        Carte( std::string, std::string );
        Carte(const Carte &c);

        /* setter */

        void setCouleur( std::string );
        void setRang( std::string);

        /* getter */

        std::string getCouleur();
        std::string getRang();

        /* methode d'affichage */

        void afficher();

        /* destructeur */

        ~Carte();
};