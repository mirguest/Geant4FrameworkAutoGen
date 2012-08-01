
#ifndef ${PY_GEN_Project}_STEPPING_ACTION_H
#define ${PY_GEN_Project}_STEPPING_ACTION_H 1

#include "G4UserSteppingAction.hh"

class ${PY_GEN_Project}_SteppingAction: public G4UserSteppingAction
{
    public:
        ${PY_GEN_Project}_SteppingAction();
        ~${PY_GEN_Project}_SteppingAction();
    public:
        void UserSteppingAction(const G4Step*);
};

#endif

