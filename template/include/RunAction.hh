
#ifndef ${PY_GEN_Project}_RUN_ACTION_H
#define ${PY_GEN_Project}_RUN_ACTION_H 1

#include "G4UserRunAction.hh"
#include "globals.hh"

class G4Run;

class ${PY_GEN_Project}_RunAction: public G4UserRunAction
{
    public:
        ${PY_GEN_Project}_RunAction();
        ~${PY_GEN_Project}_RunAction();

    public:
        void BeginOfRunAction(const G4Run*);
        void EndOfRunAction(const G4Run*);
};

#endif

