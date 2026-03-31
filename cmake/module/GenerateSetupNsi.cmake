# Copyright (c) 2023-present The Perbug Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or https://opensource.org/license/mit/.

function(generate_setup_nsi)
  set(abs_top_srcdir ${PROJECT_SOURCE_DIR})
  set(abs_top_builddir ${PROJECT_BINARY_DIR})
  set(CLIENT_URL ${PROJECT_HOMEPAGE_URL})
  set(CLIENT_TARNAME "perbug")
  set(BITCOIN_WRAPPER_NAME "perbug")
  set(BITCOIN_GUI_NAME "perbug-qt")
  set(BITCOIN_DAEMON_NAME "perbugd")
  set(BITCOIN_CLI_NAME "perbug-cli")
  set(BITCOIN_TX_NAME "perbug-tx")
  set(BITCOIN_WALLET_TOOL_NAME "perbug-wallet")
  set(BITCOIN_TEST_NAME "test_perbug")
  set(EXEEXT ${CMAKE_EXECUTABLE_SUFFIX})
  configure_file(${PROJECT_SOURCE_DIR}/share/setup.nsi.in ${PROJECT_BINARY_DIR}/perbug-win64-setup.nsi USE_SOURCE_PERMISSIONS @ONLY)
endfunction()
