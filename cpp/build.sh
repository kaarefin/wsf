#!/bin/bash
set -e
sh autogen.sh

./configure --prefix=${AXIS2C_HOME} --with-axis2=${AXIS2C_HOME}/include/axis2-1.1
make -j 10 
