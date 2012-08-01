
#include "${PY_GEN_Project}_PhysicsList.hh" 

#include "globals.hh" 
#include "G4ProcessManager.hh"
#include "G4ParticleTypes.hh"

${PY_GEN_Project}_PhysicsList::${PY_GEN_Project}_PhysicsList() 
    : G4VUserPhysicsList()
{
    defaultCutValue = 1.0 *cm;
}

${PY_GEN_Project}_PhysicsList::~${PY_GEN_Project}_PhysicsList() 
{

}

void ${PY_GEN_Project}_PhysicsList::ConstructParticle()
{

}

void ${PY_GEN_Project}_PhysicsList::ConstructProcess()
{

}

void ${PY_GEN_Project}_PhysicsList::SetCuts()
{

}
