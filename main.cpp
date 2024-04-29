#include <iostream>    // ________      ________    ________       ___   ___     
#include <cstdlib>     //|\   ____\    |\  _____\  |\   ___  \    |\  \  \  \    
#include <ctime>       //\ \  \___|    \ \  \___    \ \  \  \  \   \ \ \__\  \   
#include <string>      // \ \  \        \ \   ___\   \ \  \  \  \   \ \   __  \  
#include <algorithm>   //  \ \  \____    \ \  \       \ \  \  \  \   \ \  \ \  \ 
#include <cstring>     //   \ \_______\   \ \__\      \ \__\  \__\    \ \__\ \__\
#include <cstdio>      //    \|_______|    \|__|       \|__|  |__|     \|__| |__|
#include <cmath>       //
using namespace std;char character, lastchar = '.';bool isInsideString = false; int main(int argc, char *argv[]){srand(time(0));;;;;
;if (argc == 1){cout << "CFNH: fatal error: no input files\n";return 0;}if (argc == 2){string tempFileName = (string) "cfnh"+(string)
(string)argv[1];string deleteCommand = "rm " + tempFileName;system(deleteCommand.c_str());freopen(tempFileName.c_str(), "w", stdout);
freopen(argv[1], "r", stdin);while ((character = getchar()) != EOF){if ((character == '"' || character == '\'') && lastchar != '\\') 
isInsideString = !isInsideString;if (!isInsideString){ if (character == '\n'){cout << "/*";int randomLength = rand() % 10 + 10;for (
int i = 1; i <= randomLength; i++){int Rand = rand() % 35;if (Rand == 26) cout << '?';else if (Rand == 27) cout << '.';else if (Rand
== 28) cout << '!';else if (Rand == 29) cout << '&';else if (Rand == 30) cout << '%';else if (Rand == 31) cout << '#';else if (Rand 
== 32) cout << '$';else if (Rand == 33) cout << '@';else if (Rand == 34) cout << '^';else cout << (char)(Rand + 'a');}cout << "*/\n";
}else if (character == ' '){cout << "/*";int randomLength = rand() % 10 + 10;for (int i = 1; i <= randomLength; i++){int Rand = rand()
% 35;if (Rand == 26) cout << '?';else if (Rand == 27) cout << '.';else if (Rand == 28) cout << '!';else if (Rand == 29) cout << '&';else
if (Rand == 30) cout << '%';else if (Rand == 31) cout << '#';else if (Rand == 32) cout << '$';else if (Rand == 33) cout << '@';else if
(Rand == 34) cout << '^';else cout << (char)(Rand + 'a');}cout << "*/";}else cout << character;}else cout << character;lastchar = character;}}}
