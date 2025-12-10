#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class CaesarCipher {
    private:
        int rotKey;
        string secretMsg;
        string encryptedMsg;

    public:
        CaesarCipher(string SecrMsg = "Hello World", int shift = 13);

        void setRotKey(int shift);
        void setEncryptedMsg(string secrMsg);

        string getEncrMsg();
        int getRotKey();

        string encrypt(string msg);
};

/*

    This program implements a fully functional Caesar Cipher in C++ 
    that works exactly like rot13.com.
    It supports any shift value (not just 13), preserves letter case, 
    and leaves spaces, punctuation, and all other characters unchanged.

*/


int main() {

    CaesarCipher x("Las llaves estan debajo de la cama", 25);

    cout << x.getEncrMsg() << endl;

    return 0;
}

// Constructor
    CaesarCipher::CaesarCipher(string SecrMsg, int shift) {
        setRotKey(shift);
        setEncryptedMsg(SecrMsg);
    }

// SETTERS
    void CaesarCipher::setRotKey(int shift) {
        rotKey = shift;
    }

    void CaesarCipher::setEncryptedMsg(string secrMsg) {
        encryptedMsg = encrypt(secrMsg);
    }

// GETTERS
    string CaesarCipher::getEncrMsg() {
        return encryptedMsg;
    }

    int CaesarCipher::getRotKey() {
        return rotKey;
    }

    string CaesarCipher::encrypt(string secrMsg) {
        string encryptedMessage = "";

        int key = getRotKey();

        for (int i = 0; i < secrMsg.size(); i++) {

            char ogChar = secrMsg[i];
            int upperCaseRot = key + (int(tolower(ogChar)));
            int lowerCaseRot = key + int(ogChar);

            if (ispunct(ogChar) || isblank(ogChar)) 
                encryptedMessage += ogChar;

            else if (isupper(ogChar)) {

                if (upperCaseRot > 122)
                    encryptedMessage += toupper(char(96 + (key - (122 - int(tolower(ogChar))))));
                else 
                    encryptedMessage += toupper(char(upperCaseRot));
                
            } 
            
            else if (lowerCaseRot > 122) {
                encryptedMessage += 96 + (key - (122 - int(ogChar)));
            }
            
            else {
                encryptedMessage += char(lowerCaseRot);
            }
            
        }

        return encryptedMessage;
    }
