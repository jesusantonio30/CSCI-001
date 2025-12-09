#include <iostream>
#include <string>

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


int main() {

    CaesarCipher x("hello world!", 13);

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

    // So only alphabetical characters are rotated
    // both capitals and lowercase

    // ASCII 65 - 90 (A - Z) and 97 - 122 (a - z)

    // if num is 78 or 110, %26

    // my name is jesus
    // zl anzr vf wrfhf

    string CaesarCipher::encrypt(string secrMsg) {
        string encryptedMessage = "";
        for (int i = 0; i < secrMsg.size(); i++) {

            char tempLowerCase = ' ';

            int currIndex = int(secrMsg[i]) + getRotKey();

            if (isblank(secrMsg[i]) || ispunct(secrMsg[i])) 
                encryptedMessage += secrMsg[i];
            
            if (isalpha(currIndex)) {
                if (currIndex < 96) {
                    encryptedMessage += toupper(char(int(tolower(char(currIndex)))));
                } else {
                    encryptedMessage += char(int(secrMsg[i]) + getRotKey());
                }
            }
            
            if (currIndex > 122) 
                encryptedMessage += char( ( getRotKey() - (122 - int(secrMsg[i])) ) + 96 );
                

            
        }

        return encryptedMessage;
    }

