#include <iostream>

using namespace std;


int liczby_chaos[] = {5,3,7,1,4};
int pikaczu(int szukana) {
    for(int i = 0; i <= sizeof(liczby_chaos); i++) {
        if (szukana == liczby_chaos[i]) return i;
    }
    return -1;
}

int main() {
    for (int i = 15; i >= -6; i-=3) {
        int fr_answer = pikaczu(i);
        if (fr_answer >= 0)
            cout << "Franek powiedzial ze " <<i<<" pod num " << fr_answer <<endl;
        else
            cout <<"Franek nie znalazł" << i << endl;
    }
    return 0;
}
