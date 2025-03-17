// Seciton 10 Challenge

/******************************************************************************************
A simple and very old method of sending secret messages is the substitution cipher.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.

Write a program that ask a user to enter a secret message

Encrypt this message using the substitution cipher and display the encrpted message
Then decrpted the encrpted message back to the original message.

Use 2 strings below for the substitution
To encrypt, replace the character at position n in alphabet with the character at position n in key.

To decrypt, replace the character at position n in key with the character at position n in alphabet.



*******************************************************************************************/

#include <iostream>
#include <string>

using namespace std;

const string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
const string key{ "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm" };

string encrypt(const string& message) {
    string encrypted_message;
    for (char c : message) {
        size_t index = alphabet.find(c);
        if (index != string::npos) {
            encrypted_message += key[index];
        }
        else {
            encrypted_message += c; // Keep non-alphabet characters unchanged
        }
    }
    return encrypted_message;
}

string decrypt(const string& message) {
    string decrypted_message;
    for (char c : message) {
        size_t index = key.find(c);
        if (index != string::npos) {
            decrypted_message += alphabet[index];
        }
        else {
            decrypted_message += c;
        }
    }
    return decrypted_message;
}

int main() {
    string secret_message;

    cout << "Enter a secret message: ";
    getline(cin, secret_message);

    string encrypted_message = encrypt(secret_message);
    string decrypted_message = decrypt(encrypted_message);

    cout << "\nSecret message: " << secret_message;
    cout << "\nEncrypted message: " << encrypted_message;
    cout << "\nDecrypted message: " << decrypted_message << endl;

    return 0;
}
