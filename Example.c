// Cho mảng các phần tử số, hãy in ra các phần tử của mảng sao cho mỗi phần
// tử chỉ xuất hiện trên màn hình duy nhất một lần.

#include <stdio.h>

/*
	Thuật toán:
	- lặp từ đầu đến cuối mảng
	- tại mỗi phần tử ta kiểm tra tất cả các phần tử trước nó xem 
	  đã tồn tại hay chưa, nếu đã tồn tại thì bỏ qua, nếu chưa thì in ra
	- khi kiểm tra dùng biến đánh dấu lại trạng thái tồn tại của giá trị đó
*/

void showArrayElements(int *arr, int n) {
	int i, j;
	int flag;
	for (i = 0; i < n; i++) {
		flag = 1;
		for (j = 0; j < i; j++) {
			if (arr[j] == arr[i]) {
				flag = 0;
				break;
			}
		}

		if (flag == 1) {
			printf("%5d", arr[i]);
		}
	}
}

int main() {
	int arr[] = { 1, 2, 1, 4, 5, 2, 3, 6, 9, 8, 7, 5, 4, 2, 1, 3, 0 };
	showArrayElements(arr, sizeof(arr) / (sizeof(int)));
	return 0;
}