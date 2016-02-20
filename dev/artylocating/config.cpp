#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main", "cl_tracking_main", "cl_rft"};
        author[] = {AUTHORS};
        authorUrl = "http://www.gruppe-w.de/";
        VERSION_CONFIG;
    };
};

#include "CfgFunctions.hpp"