#!/bin/bash

if [ -f ./unittest ]; then
  make test
  make clean
else
  make
  source run.sh
fi

# EOF
