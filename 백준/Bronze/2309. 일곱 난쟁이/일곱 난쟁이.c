#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int dwarf[9]; //난쟁이의 키를 담을 배열
	int total = 0; //제시된 키의 전체합 
	int over = 0; //초과한 양
	int i, j; 

	//입력받는 부분
	for ( i = 0; i < 9; i++) {
		scanf("%d", &dwarf[i]);
		total = total + dwarf[i];
	}

	//100 초과 수 확인
	over = total - 100;
	
	//난쟁이의 키가 아닌 두 수 찾기
	int p = 0;
	int q = 0;
	//이중 for문 이용
	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 9; j++) {
			if ((dwarf[i] + dwarf[j]) == over) {
				p = i;
				q = j;
				break;
			}
		}
	}


	int tmp;
	int r_dwarf[7]; //실제 난쟁이 키의 리스트
	j = 0;
	for (i = 0; i < 9; i++) {
		if (i != p && i != q) {
			r_dwarf[j] = dwarf[i];
			j++;
		}
	}

	//난쟁이 키 리스트 정렬
	for (i = 0; i < 7; i++) {
		for (j = i + 1; j < 7; j++) {
			if (r_dwarf[i] > r_dwarf[j]) {
				tmp = r_dwarf[i];
				r_dwarf[i] = r_dwarf[j];
				r_dwarf[j] = tmp;
			}
		}
	}

	//오름차순으로 출력
	for (i = 0; i < 7; i++) {
		printf("%d\n", r_dwarf[i]);
	}
}