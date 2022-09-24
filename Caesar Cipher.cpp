#include<iostream>
#include<string.h>

using namespace std;

//Function to encrypt the given string 
string encrypt(string &inp, int key){
    string res = inp;
    int i=0;
    for(char c : inp){
        res[i] = c + key;
        i++;
    }
    return res;
}

//Function to decryptthe encrypted string
string decrypt(string &inp, int key){
    string res = inp;
    int i=0;
    for(char c : inp){
        res[i] = c - key;
        i++;
    }
    return res;
}

int main(){
    string inp, enc, dec;
    int key;
    cout<<"Enter the string: ";
    getline(cin, inp);
    cout<<"Enter the Key: ";
    cin>>key;
    enc = encrypt(inp, key);
    dec = decrypt(enc, key);
    cout<<"\nEncryption: "<<enc;
    cout<<"\nDecryption: "<<dec;
}
