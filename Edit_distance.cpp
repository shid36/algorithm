#include <iostream>
#include <vector>
#include <string>
#include <iomanip> 
using namespace std;

int main() {
    string X = "EDITOR";
    string Y = "EDUCATION";

    int m = X.length();
    int n = Y.length();


    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    
    for (int i = 0; i <= m; i++) dp[i][0] = i; 
    for (int j = 0; j <= n; j++) dp[0][j] = j; 

    
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (X[i - 1] == Y[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = 1 + min(min(dp[i - 1][j],     
                                       dp[i][j - 1]),   
                                       dp[i - 1][j - 1]);
            }
        }
    }

   
    cout << setw(5) << " ";
    cout << setw(5) << "' '"; 
    for (int j = 0; j < n; j++) {
        cout << setw(5) << Y[j];
    }
    cout << endl;

   
    for (int i = 0; i <= m; i++) {
        if (i == 0) cout << setw(5) << "' '";
        else cout << setw(5) << X[i - 1];

        for (int j = 0; j <= n; j++) {
            cout << setw(5) << dp[i][j];
        }
        cout << endl;
    }

  
    cout << "\nEdit Distance = " << dp[m][n] << endl;

    return 0;
}
