/*
    dùng vòng lặp for chạy a đến b bị quá thời gian
*/
#include<bits/stdc++.h>

using namespace std;
// hàm đếm số chính  phương
long long dem(long long a, long long b){
    long x =sqrt(a);
    long long count = 0;
    if(x * x == a) count ++;
    x++;
    while(x * x <= b){
        count ++;
        x++;
    }
    cout << count << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b;
        cin >> a >> b;
        dem(a,b);
    }
}