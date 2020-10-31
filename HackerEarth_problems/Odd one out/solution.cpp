#include <iostream>

using namespace std;

int main(){
	int n, inp;
	int x=0, y=0;

	cin >> n;

    /*
        we capture the input numbers and add them in the variable x,
        and add the odd numbers, we compare the two sums and find the missing number.
    */
    for(int i=1; i<n*2; i++){
        if( i % 2 == 0){
			cin >> inp;
			x+=inp;
		}else{

			y+=i;
		}
	}
	cout << y - x <<endl;
    return 0;
}
