// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX x
#define PREFIX cl
#define MAINCOMPONENT artylocating

#define MAINAUTHOR "[W] DasCleverle"
#define AUTHORS MAINAUTHOR

#define MAJOR 1
#define MINOR 0
#define PATCHLVL 0

#ifdef DEV
    #define VERSION MAJOR.MINOR.PATCHLVL-dev.DEV
    #define VERSION_AR MAJOR,MINOR,PATCHLVL,DEV
#else
    #define VERSION MAJOR.MINOR.PATCHLVL
    #define VERSION_AR MAJOR,MINOR,PATCHLVL,0
#endif

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 1.56