#include <bits/stdc++.h>
using namespace std;

int main () {
int n;
cin >> n;

int count;

for(int i=1; i<=n; i++) {
if(i % 2 == 0) {
cout << count++;
}
}

cout << count;

return 0;
}