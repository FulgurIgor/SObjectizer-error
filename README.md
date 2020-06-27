# SObjectizer-error

This repositary shows the problem with [SObjectizer library](https://github.com/Stiffstream/sobjectizer) (build is not successful), when boost is as a part of project.

## How to build
```
conan remote add stiffstream https://api.bintray.com/conan/stiffstream/public
mkdir obj && cd obj
conan install ../ --build=missing
cmake ../
make
```