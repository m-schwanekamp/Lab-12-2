//Lab 12-2
#include <iostream>
#include <cstdlib>
using namespace std;

int charcnt(char* ptr, char c);
int repeat(char* ptr);
void reverse(char* ptr);

int main() {
    char c;
    char str[80];
    char* ptr;

    cout << "Enter a string: ";
    cin.getline(str, sizeof(str));
    cout << endl;
    ptr = str;


        cout << "Enter a character: ";
        cin >> c;
        cout << endl;

        int count = charcnt(ptr, c);
        cout << "The character '" << c << "' appears " << count << " times in the string.";
        cout << endl;

        int seq = repeat(ptr);
        cout << "There are " << seq << " repeated characters in the string.";
        cout << endl;

        cout << "The reverse string is: ";
        reverse(ptr);
        cout << endl;

    
    return 0;
}

int charcnt(char* ptr, char c) {
    int count = 0;
    for (int i = 0; i < strlen(ptr); i++) {
        if (ptr[i] == c)
            count++;
    }
    return count;
}

int repeat(char* ptr) {
    int seq = 0;
    for (int n = 0; ptr[n] != '\0'; n++) {
        while (ptr[n] == ptr[n + 1]) {
            n++;
            seq++;
        }
    }
    return seq;
}

void reverse(char* ptr) {
    for (int x = strlen(ptr) - 1; x >= 0; x--) {
        cout << ptr[x];
    }
}
