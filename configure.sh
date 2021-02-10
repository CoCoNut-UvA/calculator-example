#!/usr/bin/env sh

echo "Checking prerequisites"
which cmake > /dev/null || { echo "Could not find cmake on path"; exit 1; }
echo "--------------------------------------------------"
echo "Downloading coconut"
echo "--------------------------------------------------"
git submodule update --init || exit 1
echo "--------------------------------------------------"
echo "Building coconut"
echo "--------------------------------------------------"
make -C coconut || exit 1
echo "Project configured."
