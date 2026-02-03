#pragma once

/* Since the higher folders already define these, we need to 
   #undef them first so we can redefine them without an error.
*/

// 1. Increase Layers
#undef DYNAMIC_KEYMAP_LAYER_COUNT
#define DYNAMIC_KEYMAP_LAYER_COUNT 13

// 2. Space Bar Speed Fixes
#undef TAPPING_TERM
#define TAPPING_TERM 200

#define PERMISSIVE_HOLD
#define QUICK_TAP_TERM 0