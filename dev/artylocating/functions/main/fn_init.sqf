#include "script_component.hpp"

params [
    [_radars, [], [[]]],
    ["_distance", 4500, [0]],
    ["_tickInterval", 0.75, [0]],
    ["_showProjectiles", true, [true]],
    ["_showImpacts", true, [true]],
    ["_side", sideUnknown, [sideUnknown]]
];

GVAR(active) = true;

GVAR(radars) append _radars;

GVAR(distance) = _distance;
GVAR(tickInterval) = _tickInterval;
GVAR(showProjectiles) = _showProjectiles;
GVAR(showImpacts) = _showImpacts;
GVAR(side) = _side;