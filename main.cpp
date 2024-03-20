#include <bits/stdc++.h>
using namespace std;
char c;
bool f = false;
bool s = true;
int main(int cnt, char* ch[]) {
    srand(time(0));
    if (cnt == 1) {
        cout << "CFNH: fatal error: no input files\n";
        return 0;
    }
    if (cnt == 2) {
        string cc = (string) "cfnh" + (string)ch[1];
        string ccc = "del " + cc;
        system(ccc.c_str());
        freopen(cc.c_str(), "w", stdout);
        freopen(ch[1], "r", stdin);
        while ((c = getchar()) != EOF) {
            s = false;
            if (c == '\n') {
                cout << "/*";
                int r = rand() % 10 + 10;
                for (int i = 1; i <= r; i++)
                    cout << (char)(rand() % 26 + 'a');
                cout << "*/\n";
            } else if (c == ' ') {
                cout << "/*";
                int r = rand() % 10 + 10;
                for (int i = 1; i <= r; i++)
                    cout << (char)(rand() % 26 + 'a');
                cout << "*/";
            } else
                cout << c;
        }
    }
}
