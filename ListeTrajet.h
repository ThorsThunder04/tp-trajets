#ifndef __LLISTE_TRAJET
#define __LLISTE_TRAJET
#include "Trajet.h"
#include "CelluleListeTrajet.h"


class ListeTrajet {

    private:
        CelluleListeTrajet* liste = nullptr;
        unsigned int taille;
    
    public:
        ListeTrajet(Trajet* trajet);
        virtual ~ListeTrajet();
        
        /**
         * @brief Ajouter un trajet en tete de liste
         * 
         * @param trajet le trajet a ajouter au liste
         */
        void ajouter(Trajet* trajet);

        /**
         * @brief Supprime un trajet donnee de la liste
         * 
         * @param trajet si trajet est dans la liste chainee elle sera supprimee
         * @returns true si la suppression c'est produit, false sinon (introuvable)
         */
        bool suppression(const Trajet* trajet);


        /**
         * @brief Renvoi si la liste contient un trajet donnee ou non
         * 
         * @param trajet le tarjet a rechercher 
         * @return true si `trajet` est dans la liste, `false` sinon
         */
        bool contient(const Trajet* t) const;
        
        /**
         * @brief Compte combiens d'elements sont dans la liste
         * 
         * @return unsigned int le nombre d'elements dans la liste
         */
        unsigned int size() const;

        /**
         * @brief Recupere la tete du liste
         * 
         * @return CelluleListeTrajet* 
         */
        CelluleListeTrajet* getHead() const;

        std::string stringuifier() const;

        

};

#endif
