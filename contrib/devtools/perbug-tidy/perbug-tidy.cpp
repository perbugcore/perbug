// Copyright (c) 2023 Perbug Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "nontrivial-threadlocal.h"

#include <clang-tidy/ClangTidyModule.h>
#include <clang-tidy/ClangTidyModuleRegistry.h>

class PerbugModule final : public clang::tidy::ClangTidyModule
{
public:
    void addCheckFactories(clang::tidy::ClangTidyCheckFactories& CheckFactories) override
    {
        CheckFactories.registerCheck<perbug::NonTrivialThreadLocal>("perbug-nontrivial-threadlocal");
    }
};

static clang::tidy::ClangTidyModuleRegistry::Add<PerbugModule>
    X("perbug-module", "Adds perbug checks.");

volatile int PerbugModuleAnchorSource = 0;
