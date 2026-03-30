// Substitution Cyper

#include <iostream>
#include <string>


using namespace std;

int main() {

    
    string message {};
    
    cout << "Write a message you want to cyper: ";
    getline(cin, message);
    
    cout << "origin message is: ";
    cout << message << endl;        //origin messeage
    
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASR"};
    
    for(size_t i {0}; i < message.length(); i++) {      // Encryption
        
        char tmp = message.at(i);
        if(tmp >= 65 && tmp <= 90){    // Upcase
            tmp = key.at(tmp-65);
            message.at(i) = tmp;
        }
        else if(tmp >= 97 && tmp <=122){    // Downcase
            tmp = key.at(tmp-97) + 32;
            message.at(i) = tmp;
        }
    }
    
    cout << "Encryped message is: ";
    cout << message << endl;        
    
    
    for(size_t i {0}; i < message.length(); i++) {      // Decryption
        
        char tmp = message.at(i);
        if(tmp >= 65 && tmp <= 90){    // Upcase
            message.at(i) = key.find(tmp)+65;
            
        }
        else if(tmp >= 97 && tmp <=122){    // Downcase
            tmp = tmp - 32;
            message.at(i) = key.find(tmp)+97;

            
        }
    }
    
    cout << "Decryped message is: ";
    cout << message << endl;        








    // Solution
//    
//    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWYZ"};
//    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
//    
//    string secret_message {};
//    cout << "Enter your secret message: ";
//    getline(cin, secret_message);
//    
//    string encrypted_message {};
//    
//    cout << "\nEncrypted message..." << endl;
//    
//    for (char c: secret_message) {
//        size_t position = alphabet.find(c);
//        if (position != string::npos) {
//            char new_char { key.at(position) };
//            encrypted_message += new_char;
//        } else {
//            encrypted_message += c;
//
//        }
//    }
//    
//    cout << "\nEncrypted message: " << encrypted_message << endl;
//
//    string decrypted_message {};
//    cout << "\nDecrypted message..." << endl;
//
//for (char c: encrypted_message) {
//        size_t position = key.find(c);
//        if (position != string::npos) {
//            char new_char { alphabet.at(position) };
//            encrypted_message += new_char;
//        } else {
//            encrypted_message += c;
//
//        }
//    }
//
//    cout << "\nSecret message: " << secret_message << endl;
//    
//    
//    
// 
    return 0;
}















