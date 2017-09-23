// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2017-2017 The BitCoin Core developers
//// Copyright (c) 2009-2017 The BitCore Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCORE_TEST_RANDOM_H
#define BITCORE_TEST_RANDOM_H

#include "random.h"

extern FastRandomContext insecure_rand_ctx;

static inline void seed_insecure_rand(bool fDeterministic = false)
{
    insecure_rand_ctx = FastRandomContext(fDeterministic);
}

static inline uint32_t insecure_rand(void)
{
    return insecure_rand_ctx.rand32();
}

#endif
