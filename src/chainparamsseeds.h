#ifndef PERBUG_CHAINPARAMSSEEDS_H
#define PERBUG_CHAINPARAMSSEEDS_H

/**
 * Fixed seed nodes for Perbug.
 *
 * Intentionally left empty for initial launch.
 * Perbug currently relies on runtime vSeeds entries defined in chainparams.cpp,
 * including the explicit seed node 144.126.133.21.
 *
 * Once you have stable public nodes, regenerate this file with:
 *   contrib/seeds/generate-seeds.py
 */

#include <cstdint>

static const uint8_t chainparams_seed_main[] = {
};

static const uint8_t chainparams_seed_test[] = {
};

static const uint8_t chainparams_seed_testnet4[] = {
};

static const uint8_t chainparams_seed_signet[] = {
};

#endif // PERBUG_CHAINPARAMSSEEDS_H
