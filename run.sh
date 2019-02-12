#! /usr/bin/env bash

# Find width of terminal
COLUMNS=$(tput cols) 

# Compile tests
title="COMPILING TESTS" 
printf '\n%*s\n' "$COLUMNS" '' | tr ' ' =
printf "\n%*s\n\n" $(((${#title}+$COLUMNS)/2)) "$title"
make

# Output results
title="RUNNING TESTS" 
printf '\n%*s\n' "$COLUMNS" '' | tr ' ' =
printf "\n%*s\n\n" $(((${#title}+$COLUMNS)/2)) "$title"
./test

# Remove generated files
title="CLEANING UP" 
printf '\n%*s\n' "$COLUMNS" '' | tr ' ' =
printf "\n%*s\n\n" $(((${#title}+$COLUMNS)/2)) "$title"
make clean
