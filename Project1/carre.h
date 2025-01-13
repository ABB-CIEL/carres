

#pragma once
#include <iostream>

/// @brief Programme de gestion d'un carré
/// @file carre.h
/// @date 
/// @version 1.0
/// @author THIERRY

class CCarre {
    /// @brief Classe CCarre

private:
    /// @brief Attributs de la classe CCarre
    int sx;   ///< Coordonnée x de l'origine du carré
    int sy;   ///< Coordonnée y de l'origine du carré
    unsigned int cote; ///< Longueur du côté du carré

public:
    /// @brief Constructeur avec paramètres
    /// @param sx Coordonnée x
    /// @param sy Coordonnée y
    CCarre(int sx, int sy ,unsigned int cote);

    /// @brief Constructeur par défaut
    CCarre();

    /// @brief Définit la coordonnée x
    /// @param sx1 Nouvelle coordonnée x
    void Setsx(int sx1);

    /// @brief Définit la coordonnée y
    /// @param sy1 Nouvelle coordonnée y
    void Setsy(int sy1);

    /// @brief Définit la longueur du côté
    /// @param cote1 Nouvelle longueur du côté
    void Setcote(unsigned int cote1);

    /// @brief Obtient la coordonnée x
    /// @return Coordonnée x actuelle
    int Getsx();

    /// @brief Obtient la coordonnée y
    /// @return Coordonnée y actuelle
    int Getsy();

    /// @brief Obtient la longueur du côté
    /// @return Longueur du côté actuelle
    unsigned int GetCote();

    /// @brief Déplace le carré sans le dessiner
    /// Les attributs x et y sont modifiés en ajoutant ou retranchant la valeur
    /// de saut en fonction de la direction.
    /// @param direction Direction ('n' = nord, 's' = sud, 'o' = ouest, 'e' = est)
    /// @param saut Nombre de pixels de déplacement
    void Deplacer(char direction, int saut);

    /// @brief Déplace le carré de dx et dy
    /// @param dx Déplacement en x
    /// @param dy Déplacement en y
    void Deplacer(int dx, int dy);

    /// @brief Affiche les informations du carré
    void Afficher();
};
