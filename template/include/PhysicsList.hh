
#ifndef ${PY_GEN_Project}_PHYSICSLIST_HH
#define ${PY_GEN_Project}_PHYSICSLIST_HH 1

#include "G4VUserPhysicsList.hh"
#include "globals.hh"

class ${PY_GEN_Project}_PhysicsList: public G4VUserPhysicsList
{
    public:
        ${PY_GEN_Project}_PhysicsList();
        ~${PY_GEN_Project}_PhysicsList();
    protected:
        void ConstructParticle();
        void ConstructProcess();
        void SetCuts();
};

#endif
