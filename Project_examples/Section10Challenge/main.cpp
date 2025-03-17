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
	string decryted_secret_message;
	string encryted_secret_message;

	cout << "Enter a secret message: ";
	getline(cin, secret_message);

	// Encryted the secret message
	for (rsize_t i{}; i < secret_message.size(); ++i) {
		if (secret_message.at(i) == 'a' || secret_message.at(i) == 'b' || secret_message.at(i) == 'c') {
			if (secret_message.at(i) == 'a')
				encryted_secret_message.insert(i, "2");
			else if (secret_message.at(i) == 'b')
				encryted_secret_message.insert(i, "2'");
			else if (secret_message.at(i) == 'c')
				encryted_secret_message.insert(i, "2''");
		}
		else if (secret_message.at(i) == 'g' || secret_message.at(i) == 'h' || secret_message.at(i) == 'i') {
			if (secret_message.at(i) == 'g')
				encryted_secret_message.insert(i, "4");
			else if (secret_message.at(i) == 'h')
				encryted_secret_message.insert(i, "4'");
			else if (secret_message.at(i) == 'i')
				encryted_secret_message.insert(i, "4''");
		}
		else if (secret_message.at(i) == 'm' || secret_message.at(i) == 'n' || secret_message.at(i) == 'o') {
			if (secret_message.at(i) == 'm')
				encryted_secret_message.insert(i, "6");
			else if (secret_message.at(i) == 'n')
				encryted_secret_message.insert(i, "6'");
			else if (secret_message.at(i) == 'o')
				encryted_secret_message.insert(i, "6''");
		}
		else if (secret_message.at(i) == 't' || secret_message.at(i) == 'u' || secret_message.at(i) == 'v') {
			if (secret_message.at(i) == 't')
				encryted_secret_message.insert(i, "8");
			else if (secret_message.at(i) == 'u')
				encryted_secret_message.insert(i, "8'");
			else if (secret_message.at(i) == 'v')
				encryted_secret_message.insert(i, "8''");
		}
		else if (secret_message.at(i) == 'D' || secret_message.at(i) == 'J' || secret_message.at(i) == 'P' || secret_message.at(i) == 'W') {
			if (secret_message.at(i) == 'D')
				encryted_secret_message.insert(i, "3");
			else if (secret_message.at(i) == 'J')
				encryted_secret_message.insert(i, "5");
			else if (secret_message.at(i) == 'P')
				encryted_secret_message.insert(i, "7");
			else if (secret_message.at(i) == 'W')
				encryted_secret_message.insert(i, "9");
		}
		else
			encryted_secret_message.push_back(secret_message.at(i));
	}

	// Decrypted the secret message
	for (size_t i{}; i < secret_message.size() ; i++)
	{
		if (encryted_secret_message.at(i) == '2') {
			if (encryted_secret_message.at(i) == '2' && encryted_secret_message.at(i + 1) != '\'')
				decryted_secret_message.insert(i, "a");
			else if (encryted_secret_message.at(i) == '2' && encryted_secret_message.at(i + 1) == '\'')
				decryted_secret_message.insert(i, "b");
			else if (encryted_secret_message.at(i) == '2' && encryted_secret_message.at(i + 1) == '\'' && encryted_secret_message.at(i + 2) == '\'')
				decryted_secret_message.insert(i, "c");
		}
		else if (encryted_secret_message.at(i) == '4') {
			if (encryted_secret_message.at(i) == '4' && encryted_secret_message.at(i + 1) != '\'')
				decryted_secret_message.insert(i, "g");
			else if (encryted_secret_message.at(i) == '4' && encryted_secret_message.at(i + 1) == '\'')
				decryted_secret_message.insert(i, "h");
			else if (encryted_secret_message.at(i) == '4' && encryted_secret_message.at(i + 1) == '\'' && encryted_secret_message.at(i + 2) == '\'')
				decryted_secret_message.insert(i, "i");
		}
		else if (encryted_secret_message.at(i) == '6') {
			if (encryted_secret_message.at(i) == '6' && encryted_secret_message.at(i + 1) != '\'')
				decryted_secret_message.insert(i, "mg");
			else if (encryted_secret_message.at(i) == '6' && encryted_secret_message.at(i + 1) == '\'')
				decryted_secret_message.insert(i, "n");
			else if (encryted_secret_message.at(i) == '6' && encryted_secret_message.at(i + 1) == '\'' && encryted_secret_message.at(i + 2) == '\'')
				decryted_secret_message.insert(i, "o");
		}
		else if (encryted_secret_message.at(i) == '8') {
			if (encryted_secret_message.at(i) == '8' && encryted_secret_message.at(i + 1) != '\'')
				decryted_secret_message.insert(i, "t");
			else if (encryted_secret_message.at(i) == '8' && encryted_secret_message.at(i + 1) == '\'')
				decryted_secret_message.insert(i, "u");
			else if (encryted_secret_message.at(i) == '8' && encryted_secret_message.at(i + 1) == '\'' && encryted_secret_message.at(i + 2) == '\'')
				decryted_secret_message.insert(i, "v");
		}
		else if (encryted_secret_message.at(i) == '3' || encryted_secret_message.at(i) == '5' || encryted_secret_message.at(i) == '7' || encryted_secret_message.at(i) == '9') {
			if (encryted_secret_message.at(i) == '3')
				decryted_secret_message.insert(i, "D");
			else if (encryted_secret_message.at(i) == '5')
				decryted_secret_message.insert(i, "J");
			else if (encryted_secret_message.at(i) == '7')
				decryted_secret_message.insert(i, "P");
			else if (encryted_secret_message.at(i) == '9')
				decryted_secret_message.insert(i, "W");
		}
		else
			if (encryted_secret_message.at(i) != '\'')
				decryted_secret_message.push_back(encryted_secret_message.at(i));
	}


	// Display the secret, encryped and decrypted message
	cout << "\nSceret message:\n" << secret_message
		<< "\n\nEncryted message:\n" << encryted_secret_message
		<< "\n\nDecrypted message:\n" << decryted_secret_message << endl;

	return 0;
}