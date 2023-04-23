#pragma once
#include <iostream>
#include <string>

class Cipher {
public:
    void encrypt(std::string& message, int key) {
        for (char& c : message) {
            c = (c + key) % 256;
        }
    }
};

class Decipher {
public:
    void decrypt(std::string& message, int key) {
        for (char& c : message) {
            c = (c - key + 256) % 256;
        }
    }
};