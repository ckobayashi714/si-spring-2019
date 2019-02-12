
#! /usr/bin/env bash

git add .
git commit -m "git configuration"

git remote add omolazabal https://github.com/omolazabal/si-spring-2019.git
git fetch omolazabal

git branch solutions omolazabal/master
git checkout solutions


