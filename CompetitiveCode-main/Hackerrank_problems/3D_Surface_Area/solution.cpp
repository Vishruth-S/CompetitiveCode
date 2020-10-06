/* LOGIC:
* There will be 6 surfaces for each toy. 
* We start with adding the surfaces on the left which will difference in consecutive height.
* The only right surface will be the height of last piece of each row. Similarly, we can 
* calculate total surface for front and back of the toy. Finally, top and bottom view of 
* the toy are rectangles, so we can directly add the area of the rectangle twice.
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
	int H, W, ans = 0;
	cin >> H >> W;
	int A[H][W];

	for(int i = 0; i < H; i++) 
		for(int j = 0; j < W; j++)
			cin >> A[i][j];

	// Adding all the left and right surfaces
	for(int i = 0; i < H; i++) {
		ans += A[i][0];
		for(int j = 0; j < W; j++) {
			if(j == W-1)
				ans += A[i][j];
			else
				ans += abs(A[i][j] - A[i][j+1]);
		}
	}

	// Adding all the front and back surfaces
	for(int j = 0; j < W; j++) {
		ans += A[0][j];
		for(int i = 0; i < H; i++) {
			if(i == H-1)
				ans += A[i][j];
			else
				ans += abs(A[i][j] - A[i+1][j]);
		}
	}

	// Adding the top and bottom surfaces
	ans += 2 * (H * W);

	cout << ans << endl;
	return 0;
}
