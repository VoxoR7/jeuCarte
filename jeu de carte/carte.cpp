#include "carte.h"

Carte::Carte() {

    m_couleur = "";
    m_rang = "";
}

Carte::Carte( std::string p_couleur, std::string p_rang ) {

    m_couleur = p_couleur;
    m_rang = p_rang;
}

Carte::Carte(const Carte &c) {

    m_couleur = c.m_couleur;
    m_rang = c.m_rang;
}

void Carte::setCouleur( std::string p_couleur ) {

    m_couleur = p_couleur;
}

void Carte::setRang( std::string p_rang ) {

    m_rang = p_rang;
}

std::string Carte::getCouleur() {

    return m_couleur;
}

std::string Carte::getRang() {

    return m_rang;
}

void Carte::afficher() {

    std::cout << "couleur : " << m_couleur << " ; hauteur : " << m_rang << std::endl;
}

Carte::~Carte() {

}