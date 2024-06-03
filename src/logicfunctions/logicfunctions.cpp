#include "logicfunctions.h"

// Compute xor
void exclusive(bool x, bool y, bool& ans){
    ((x && !y) || (!x && y)) ? (ans = true) : (ans = false);
    return;
}

// Compute implication
void implies(bool x, bool y, bool& ans){
    (x && !y) ? (ans = false) : (ans = true);
    return;
}

// Compute equivalence
void equivalence(bool x, bool y, bool& ans){
    ((x && y) || (!x && !y)) ? (ans = true) : (ans = false);
    return;
}