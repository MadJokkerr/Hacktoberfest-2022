#include <iostream>
using namespace std;

int fibonacci_series(int n)
{
	if(n == 0){
		return 0;
	}
	else if(n == 1){
		return 1;
	}
	else{
		return fibonacci_series(n-2) + fibonacci_series(n-1);
	}
}

int main() {
	int n;
	cin>>n;
    for(int i = 0; i < n; i++)
    {
        cout << fibonacci_series(i) << " ";
    }
	return 0;
}