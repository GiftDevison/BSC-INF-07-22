#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

string Reverse(const string& str);

int main(){
    ifstream inputFile("textfile.text");

    if(!inputFile){
        cerr << "Unable to open the file." << endl;
        return 1;
    }
    string fileData((istreambuf_iterator<char>(inputFile)),istreambuf_iterator<char>());

    inputFile.close();

    cout << "Content of the file:" << endl;
    cout << fileData << endl;

    int vowelCount = 0;
    for (char c : fileData){
        if (tolower(c)=='a'|| tolower(c)== 'e'|| tolower(c)=="i"|| tolower(c)=='o'|| tolower(c)=='u'){
            vowelCount++;
        }
    }
    cout << "Number of vowels:" << vowelCount << endl;

    int wordCount = 0;
    for (size_t i = 0; i < fileData.size(); ++i){
        if (isalnum(fileData[i])){
            while (isalnum(fileData[i]) && i < fileData.size()){
                i++;
            }
            wordCount++;
        }
    }
    cout << "Number of words: " << wordCount << endl;

    cout << "Reversed statement: " << Reverse(fileData) << endl;

    bool capitalizeNext = true;
    for (char& c : fileData){
        if (isalnum(c)){
            if (capitalizeNext){
                c = toupper(c);
                capitalizeNext = false;
            }
        }else{
            capitalizeNext = true;
        }
    }
    cout << "Capitalising the second letter of each word: " << fileData << endl;
    return 0;
}
string Reverse(const string& str){
    string reversedStr;
    for (int i = str.size()- 1; i >= 0; --i){
        reversedStr += Str[i];
    }
    return reversedStr;
}