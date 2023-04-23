#include <iostream>
#include <string>
#include "caesar_cipher.h"

int main(int argc, char *argv[]) {
    std::string message = argv[1];
    int key = std::stoi(argv[2]);

    Cipher cipher;
    cipher.encrypt(message, key);
    std::cout << "Encrypted message: " << message << std::endl;

    Decipher decipher;
    decipher.decrypt(message, key);
    std::cout << "Decrypted message: " << message << std::endl;

    return 0;
}