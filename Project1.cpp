#include <iostream>

using namespace std;

int main() {
    
    int liczba;
    
    char litera = 'b';//98+96 = T

    for (int i = 1; i <= 26; i++) {
        cout << i << " litera to " << (char)(i + 96) << "\n";
        }
    return 0;
}