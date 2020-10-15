#include <stdio.h> 

int main() {

	int T;
	scanf("%d", &T);
	while (T--) {
		int A, B;
		scanf("%d %d", &A, &B);

		int ans = A + B;
		printf("%d\n", ans);
	}

	return 0;
}