#include "CelluleListeTrajet.h"
#include "Trajet.h"

CelluleListeTrajet::CelluleListeTrajet( Trajet* trajet)
    : val(trajet), next(nullptr) {}

CelluleListeTrajet::CelluleListeTrajet( Trajet* trajet,  CelluleListeTrajet* queue)
    : val(trajet), next(queue) {}

CelluleListeTrajet* CelluleListeTrajet::getNext()  { return next; }
Trajet* CelluleListeTrajet::getVal()  { return val; }
void CelluleListeTrajet::setVal(Trajet* newVal) { val = newVal; }
void CelluleListeTrajet::setNext(CelluleListeTrajet* cellule) { next = cellule; }