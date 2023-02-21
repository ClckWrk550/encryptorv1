#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    
    string alphabet = " [abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string key = "[ XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr";
    string secretMsg {};
    
    // Prompt the User
    
    cout << "------------------" << endl;
    cout << "Message Encrypter" << endl;
    cout << "------------------" << endl;
    cout << "Please enter a secret message: ";
    getline(cin, secretMsg);
    
    char tempLetter {};
    int tempIndex {};
    
    // Encryption
    
    cout << "\nEncypting... " << endl;
    
    for (int i = 0; i < secretMsg.length(); i++) {
         tempLetter = secretMsg.at(i);
         
         if (alphabet.find(tempLetter) != string::npos) {
         tempIndex = alphabet.find(tempLetter);
         tempLetter = key.at(tempIndex);
         secretMsg.at(i) = tempLetter;
         }
         else {
             secretMsg.at(i) = tempLetter;
         }
    }
    
    cout << "\nEncrypted Message: " + secretMsg << endl;
    
    // Decryption
    
    cout << "\nDecrypting... " << endl;
    
    for (int i = 0; i < secretMsg.length(); i++) {
         tempLetter = secretMsg.at(i);
         
         if (alphabet.find(tempLetter) != string::npos) {
         tempIndex = key.find(tempLetter);
         tempLetter = alphabet.at(tempIndex);
         secretMsg.at(i) = tempLetter;
         } 
         
         else {
             secretMsg.at(i) = tempLetter;
         }
    }
    
    cout << "\nDecrypted Message: " + secretMsg << endl;

    return 0;
}