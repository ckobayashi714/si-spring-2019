[![Build Status](https://travis-ci.com/omolazabal/si-spring-2019.svg?branch=solutions)](https://travis-ci.com/omolazabal/si-spring-2019)

# CPCS 131 Supplemental Instruction
Every week new exercises will be introduced in the GitHub repo. The exercises will have missing information. Students will be tasked with contributing to the codebase by filling in the missing information. 

The following steps need to be taken to contribute.

## Prerequisites
- Linux or macOS with [command line tools](http://osxdaily.com/2014/02/12/install-command-line-tools-mac-os-x/)
- A GitHub account

## Getting started
1. **Fork this repository** by clicking [Fork](https://github.com/omolazabal/si-spring-2019/fork) on the top right corner of this page
2. **Navigating to your preferred workspace in your terminal** to work on the repository locally. Use [this guide](https://www.git-tower.com/learn/git/ebook/en/command-line/appendix/command-line-101) if necessary
3. **Clone your repository** by running the command `git clone https://github.com/{YOUR_GITHUB_USERNAME}/si-spring-2019.git`. Replace {YOUR_GITHUB_USERNAME} with your GitHub username
4. **Configure the solutions branch** by running the command `./gitconfig`  

## Workflow
Every week this repository will be updated with new exercises. The files of each exercise will available in their respective folder. The task is to fill out the functions in the `.cpp` files that are labeled with TODO comments.

To update your repository with the latest problems, run the command `./update` at the root of the repository. This will merge your repository with the [orignal master repository](https://github.com/omolazabal/si-spring-2019). To avoid merge conflicts, be sure to only make edits within the functions what are labeled TODO.

To execute your programs, run the command `./run` at the root of the repository. This will run all of the test cases for all of the exercises. You can view the unit test by visiting the exercise's directory and opening the `unit_test_X.cpp` files.

To view the solutions, switch to the solutions branch by running the command `./view_solutions`. To go back to your workspace, run the command `./view_workspace`. **Do not** modify any code when viewing solutions. Only modify code when you are in your workspace.

### Summary of commands

| Script  | Action |
| ------------- | ------------- |
| gitconfig  | Initial git configuration  |
| update  | Update workspace with newly available problems  |
| run  | Run unit tests to see how your programs perform  |
| view_solutions  | View the soltuions to the programming exercises  |
| view_workspace  | Switch back to your workspace to continue coding  |
