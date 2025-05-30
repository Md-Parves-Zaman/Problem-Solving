#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<string> carpet(n);
    for (int i = 0; i < n; i++) {
      cin >> carpet[i];
    }

    bool found = false;
    for (int i = 0; i < m && !found; i++) {
      for (int j = i + 1; j < m && !found; j++) {
        for (int k = j + 1; k < m && !found; k++) {
          for (int l = k + 1; l < m && !found; l++) {
            bool has_v = false, has_i = false, has_k = false, has_a = false;
            for (int r = 0; r < n; r++) {
              if (carpet[r][i] == 'v') has_v = true;
              if (carpet[r][j] == 'i') has_i = true;
              if (carpet[r][k] == 'k') has_k = true;
              if (carpet[r][l] == 'a') has_a = true;
            }
            if (has_v && has_i && has_k && has_a) found = true;
          }
        }
      }
    }

    cout << (found ? "YES" : "NO") << endl;
  }
  return 0;
}


//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    int t, n, m;
//    cin >> t;
//    while (t--) {
//        cin >> n >> m;
//        char s[n][m];
//        for (int i = 0; i < n; i++){
//            for (int j = 0; j < m; j++){
//                cin >> s[i][j];
//            }
//        }
//        bool found[4] = {false};
//        for (int i = 0; i < n; i++){
//            for (int j = 0; j < m; j++){
//                if (s[i][j] == 'v'){
//                    found[0] = true;
//                }else if (s[i][j] == 'i'){
//                    found[1] = true;
//                }else if (s[i][j] == 'k'){
//                    found[2] = true;
//                }else if (s[i][j] == 'a'){
//                    found[3] = true;
//                }
//            }
//        }
//        if (found[0] && found[1] && found[2] && found[3]) {
//            cout << "YES" << endl;
//        } else {
//            cout << "NO" << endl;
//        }
//    }
//
//    return 0;
//}



