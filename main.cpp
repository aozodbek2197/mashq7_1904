// 1-mashq
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = n-1; i >= 0; i--)
        cout << a[i] << " ";
}
// 2-mashq
#include <iostream>
using namespace std;

int main() {
    int n, x, f = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> x;

    for(int i = 0; i < n; i++)
        if(a[i] == x) f = 1;

    cout << f;
}
// 3-mashq
#include <iostream>
using namespace std;

int main() {
    int n, x, c = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x % 2 == 0) c++;
    }
    cout << c;
}
