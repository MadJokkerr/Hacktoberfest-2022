#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin>>A>>B>>C;
	if (A >= B && A >= C)
		cout<<"Greater: "<<A;
	else if (B >= A && B >= C)
		cout<<"Greater: "<<B;
	else if (C >= A && C >= B)
		cout<<"Greater: "<<C;
	else
		cout<<"A=B=C";
	return 0;
}
