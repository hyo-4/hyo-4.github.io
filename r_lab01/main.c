#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX_TERM 1001


struct term {
	int row[10];
	int col[10];
	int value;
};


void main() {

	struct term B[MAX_TERM]={ 0 };
	int array[10][10] = { 0 };
	int r, m;
	
	int d = 0;

	printf("입력할 데이터(0이 아닌 데이터)의 개수를 입력하세요 ");
	scanf("%d", &d);

	for (r = 0; r < d; r++) {
		int co, ro = 0;

		printf("입력할 데이터의 행을 입력하세요(10X10) ");
		scanf("%d", &ro);
		if (ro > 10) 
		{
			printf("잘못된 입력값입니다");
			return 0;
		}
		printf("입력할 데이터의 열을 입력하세요(10X10) ");
		scanf("%d", &co);
		if (co > 10)
		{
			printf("잘못된 입력값입니다");
			return 0;
		}
		printf("입력할 데이터의 값을 입력하세요 ");
		scanf("%d", &array[ro][co]);


	}
	
	int bcount = 1;
	B[0].col == 10;
	B[0].row == 10;
	B[0].value == d;

	for (int i = 0; i < 10; i++) {
		
		for (int j = 0; j < 10; j++) {
			if (array[i][j] != 0) {
				B[bcount].col == i;
				B[bcount].row == j;
				B[bcount].value == array[i][j];
				bcount++;
			}
		}
	}


	for (int i = 0; i < bcount; i++) {

		printf("%d ",B[i].col);
		printf("%d ",B[i].row);
		printf("%d\n",B[i].value);

	}
	

	for (int i = 0; i < 10; i++) {

		for (int j = 0; j < 10; j++) {
			
			printf(" %d ", array[i][j]);
		}

		printf("\n");
	}



	
}