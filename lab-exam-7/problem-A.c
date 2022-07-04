#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int arr[n];
	int i = 0, sum = 0;
	while(n--){
		scanf("%d", &arr[i]);
		sum += arr[i];
		i++;
	}
	printf("%d", sum);
	return 0;
}
