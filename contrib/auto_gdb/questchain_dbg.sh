#!/bin/bash
# use testnet settings,  if you need mainnet,  use ~/.questchaincore/questchaind.pid file instead
questchain_pid=$(<~/.questchaincore/testnet3/questchaind.pid)
sudo gdb -batch -ex "source debug.gdb" questchaind ${questchain_pid}
