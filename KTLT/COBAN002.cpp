#include"iostream"
#include"math.h"
#include"iomanip"


using namespace std;

// hàm tách số
int tachso(long long n){
	while(n>=10){
		int tmp=n%10;
		if( tmp!=0  &&  tmp!=1 && tmp!=4 && tmp!=9){
			return 0;
		}
		n/=10;
	}
	if( n!=1 && n!=4 && n!=9){
		return 0;
	}
	return 1;
}
// hàm kiểm tra kết quả số chính phương
long long result(int n)
{
    int x, y;
    if (n%2 == 0)
    {
        x = sqrt(pow(10,n-1))+1;
        y = sqrt(pow(10,n));
    } else {
        x = sqrt(pow(10,n-1));
        y = sqrt(pow(10,n))+1;
    }
    
    for(long long i = x; i < y ; i ++)
    {
        if(tachso(i*i) == 1)
        {
            return i*i;
        }
    }
    
    return 0;
}

int main(){
	unsigned int t;
	cin >>t;
	for(int i=0;i<t;i++){
		long long n;
		cin >> n;
        cout << result(n) << endl;
    }
    return 0;
}