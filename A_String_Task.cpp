#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;
    for (char &c : str){c = tolower(c);
  } 
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'||c=='y')
            continue;
        cout << "." << c;
    }
    return 0;
}
