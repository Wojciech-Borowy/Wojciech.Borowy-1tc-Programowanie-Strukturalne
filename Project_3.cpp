#include <iostream>

using namespace std;


    int liczby_chaos[] = {5,3,7,1,4};
    int pikaczu(int szukana) {
        for(int i = 0; i <= sizeof(liczby_chaos); i++) {
            if (szukana == liczby_chaos[i]) return i;
        }
    }

int main() {

    return 0;
}
