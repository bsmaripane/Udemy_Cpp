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

int main() {
	string secret_message;
	string decrypted_secret_message;
	string encrypted_secret_message;

	cout << "Enter a secret message: ";
	getline(cin, secret_message);

	// Encryted the secret message
	for (rsize_t i{}; i < secret_message.size(); ++i) {
		if (secret_message.at(i) == 'a' || secret_message.at(i) == 'b' || secret_message.at(i) == 'c') {
			if (secret_message.at(i) == 'a')
				encrypted_secret_message.insert(i, "2");
			else if (secret_message.at(i) == 'b')
				encrypted_secret_message.insert(i, "2'");
			else if (secret_message.at(i) == 'c')
				encrypted_secret_message.insert(i, "2''");
		}
		else if (secret_message.at(i) == 'g' || secret_message.at(i) == 'h' || secret_message.at(i) == 'i') {
			if (secret_message.at(i) == 'g')
				encrypted_secret_message.insert(i, "4");
			else if (secret_message.at(i) == 'h')
				encrypted_secret_message.insert(i, "4'");
			else if (secret_message.at(i) == 'i')
				encrypted_secret_message.insert(i, "4''");
		}
		else if (secret_message.at(i) == 'm' || secret_message.at(i) == 'n' || secret_message.at(i) == 'o') {
			if (secret_message.at(i) == 'm')
				encrypted_secret_message.insert(i, "6");
			else if (secret_message.at(i) == 'n')
				encrypted_secret_message.insert(i, "6'");
			else if (secret_message.at(i) == 'o')
				encrypted_secret_message.insert(i, "6''");
		}
		else if (secret_message.at(i) == 't' || secret_message.at(i) == 'u' || secret_message.at(i) == 'v') {
			if (secret_message.at(i) == 't')
				encrypted_secret_message.insert(i, "8");
			else if (secret_message.at(i) == 'u')
				encrypted_secret_message.insert(i, "8'");
			else if (secret_message.at(i) == 'v')
				encrypted_secret_message.insert(i, "8''");
		}
		else if (secret_message.at(i) == 'D' || secret_message.at(i) == 'J' || secret_message.at(i) == 'P' || secret_message.at(i) == 'W') {
			if (secret_message.at(i) == 'D')
				encrypted_secret_message.insert(i, "3");
			else if (secret_message.at(i) == 'J')
				encrypted_secret_message.insert(i, "5");
			else if (secret_message.at(i) == 'P')
				encrypted_secret_message.insert(i, "7");
			else if (secret_message.at(i) == 'W')
				encrypted_secret_message.insert(i, "9");
		}
		else
			encrypted_secret_message.push_back(secret_message.at(i));
	}

	// Decrypted the secret message
	for (size_t i{}; i < secret_message.size() ; i++)
	{
		if (encrypted_secret_message.at(i) == '2') {
			if (encrypted_secret_message.at(i) == '2' && encrypted_secret_message.at(i + 1) != '\'')
				decrypted_secret_message.insert(i, "a");
			else if (encrypted_secret_message.at(i) == '2' && encrypted_secret_message.at(i + 1) == '\'')
				decrypted_secret_message.insert(i, "b");
			else if (encrypted_secret_message.at(i) == '2' && encrypted_secret_message.at(i + 1) == '\'' && encrypted_secret_message.at(i + 2) == '\'')
				decrypted_secret_message.insert(i, "c");
		}
		else if (encrypted_secret_message.at(i) == '4') {
			if (encrypted_secret_message.at(i) == '4' && encrypted_secret_message.at(i + 1) != '\'')
				decrypted_secret_message.insert(i, "g");
			else if (encrypted_secret_message.at(i) == '4' && encrypted_secret_message.at(i + 1) == '\'')
				decrypted_secret_message.insert(i, "h");
			else if (encrypted_secret_message.at(i) == '4' && encrypted_secret_message.at(i + 1) == '\'' && encrypted_secret_message.at(i + 2) == '\'')
				decrypted_secret_message.insert(i, "i");
		}
		else if (encrypted_secret_message.at(i) == '6') {
			if (encrypted_secret_message.at(i) == '6' && encrypted_secret_message.at(i + 1) != '\'')
				decrypted_secret_message.insert(i, "mg");
			else if (encrypted_secret_message.at(i) == '6' && encrypted_secret_message.at(i + 1) == '\'')
				decrypted_secret_message.insert(i, "n");
			else if (encrypted_secret_message.at(i) == '6' && encrypted_secret_message.at(i + 1) == '\'' && encrypted_secret_message.at(i + 2) == '\'')
				decrypted_secret_message.insert(i, "o");
		}
		else if (encrypted_secret_message.at(i) == '8') {
			if (encrypted_secret_message.at(i) == '8' && encrypted_secret_message.at(i + 1) != '\'')
				decrypted_secret_message.insert(i, "t");
			else if (encrypted_secret_message.at(i) == '8' && encrypted_secret_message.at(i + 1) == '\'')
				decrypted_secret_message.insert(i, "u");
			else if (encrypted_secret_message.at(i) == '8' && encrypted_secret_message.at(i + 1) == '\'' && encrypted_secret_message.at(i + 2) == '\'')
				decrypted_secret_message.insert(i, "v");
		}
		else if (encrypted_secret_message.at(i) == '3' || encrypted_secret_message.at(i) == '5' || encrypted_secret_message.at(i) == '7' || encrypted_secret_message.at(i) == '9') {
			if (encrypted_secret_message.at(i) == '3')
				decrypted_secret_message.insert(i, "D");
			else if (encrypted_secret_message.at(i) == '5')
				decrypted_secret_message.insert(i, "J");
			else if (encrypted_secret_message.at(i) == '7')
				decrypted_secret_message.insert(i, "P");
			else if (encrypted_secret_message.at(i) == '9')
				decrypted_secret_message.insert(i, "W");
		}
		else
			if (encrypted_secret_message.at(i) != '\'')
				decrypted_secret_message.push_back(encrypted_secret_message.at(i));
	}


	// Display the secret, encryped and decrypted message
	cout << "\nSecret message:\n" << secret_message
		<< "\n\nEncrypted message:\n" << encrypted_secret_message
		<< "\n\nDecrypted message:\n" << decrypted_secret_message << endl;

	return 0;
}