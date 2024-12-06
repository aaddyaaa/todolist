#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t; 
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<string> words(n);
        for (int i = 0; i < n; i++) {
            cin >> words[i];
        }
        
        int tlength = 0, count = 0;
        for (int i = 0; i < n; i++) {
            int wordlength = words[i].length();
            if (tlength + wordlength <= m) {
                tlength += wordlength;
                count++;
            } else {
                break;
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}
