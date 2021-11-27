#include<iostream>
#include<cmath>
using namespace std;
// hàm đếm số lượng chữ số của n
int countDigit(int n){
  int count = 0;
  while(n > 0){
    n /= 10;
    count ++; 
  }
  return count;
}
// hàm kiểm tra số Armstrong
bool isArmstrong (int n){
  int num = countDigit(n);
  int tmp = n, sum = 0, last;
  while(tmp > 0){
    last = tmp % 10;// lấy số cuối
    tmp = tmp / 10;// bỏ số cuối
    sum = sum + pow (last, num);
  }
  if (sum == n)
  return true;
  else return false;
}

int main(){
  int t,n;
  cin >> t;
  while(t--){
    cin >> n;
    if(isArmstrong(n) == true){
      cout << "1\n";
    }
    else
      cout << "0\n";
  }
}