# SObjectizer-error

## How to install
```
conan remote add stiffstream https://api.bintray.com/conan/stiffstream/public
mkdir obj && cd obj
conan install ../ --build=missing
cmake ../
make
```