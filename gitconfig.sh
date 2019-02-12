
#! /usr/bin/env bash

git stash

git remote add omolazabal https://github.com/omolazabal/si-spring-2019.git
git fetch omolazabal

git branch solutions omolazabal/master
git checkout solutions

git fetch omolazabal
git reset --hard omolazabal/master

git checkout master
git stash apply

