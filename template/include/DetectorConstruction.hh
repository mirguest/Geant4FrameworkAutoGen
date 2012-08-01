
#ifndef ${PY_GEN_Project}_Detector_Construction
#define ${PY_GEN_Project}_Detector_Construction

class G4LogicalVolume;
class G4VPhysicalVolume;

#include "G4VUserDetectorConstruction.hh"

class ${PY_GEN_Project}_DetectorConstruction : public G4VUserDetectorConstruction
{
    public:
        ${PY_GEN_Project}_DetectorConstruction();
        ~${PY_GEN_Project}_DetectorConstruction();

        G4VPhysicalVolume* Construct();

    private:

};

#endif
