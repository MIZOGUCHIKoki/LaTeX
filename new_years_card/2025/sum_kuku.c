#include <stdio.h>
int main() {
 int i; int j; int ans = 0;
 for (i = 1; i <= 9; i++){ for (j = 1; j <= 9; j++) {
	 ans += j * i; } }
	printf("%d\n", ans); // 25
	return 0;
}
