# SObjectizer-error

This repository shows the problem with [SObjectizer library](https://github.com/Stiffstream/sobjectizer) (build is not successful), when boost is as a part of project.

Fixed by adding `-s compiler.libcxx=libstdc++11` in `conan install` command: ABI incompability was.

## How to build
```
conan remote add stiffstream https://api.bintray.com/conan/stiffstream/public
mkdir obj && cd obj
conan install ../ --build=missing -s compiler.libcxx=libstdc++11
cmake ../
make
```