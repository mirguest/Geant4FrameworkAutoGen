
#ifndef ${PY_GEN_Project}_PRIMARYGENERATORACTION_hh
#define ${PY_GEN_Project}_PRIMARYGENERATORACTION_hh 1

#include "G4VUserPrimaryGeneratorAction.hh"

class G4ParticleGun;
class G4Event;

class ${PY_GEN_Project}_PrimaryGeneratorAction: public G4VUserPrimaryGeneratorAction
{
    public:
        ${PY_GEN_Project}_PrimaryGeneratorAction();
        ~${PY_GEN_Project}_PrimaryGeneratorAction();

        void GeneratePrimaries(G4Event* anEvent);

    private:
        G4ParticleGun* particleGun;

};

#endif
