#ifndef ${PY_GEN_Project}_Event_Action_H
#define ${PY_GEN_Project}_Event_Action_H 1

#include "G4UserEventAction.hh"

class G4Event;

class ${PY_GEN_Project}_EventAction: public G4UserEventAction
{
    public:
        ${PY_GEN_Project}_EventAction();
        ~${PY_GEN_Project}_EventAction();

    public:
        void BeginOfEventAction(const G4Event*);
        void EndOfEventAction(const G4Event*);
};

#endif

