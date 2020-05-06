//05.04.2020
#include "total.h"

int Menu(){
	int num;
	printf("====메뉴목록====\n");
	printf("1. 조회\n");
	printf("2. 추가\n");
	printf("3. 수정\n");	
	printf("4. 삭제\n");
	printf("0. 종료\n");
	printf("원하는 작업: ");
	scanf("%d", &num);
	
	return num;
}

int main(void){
	Score s;
	int choice;
	
	while(1){
		choice = Menu():
		if(choice == 0) break;
		else if(choice == 1){
			if(count > 0){
				readScore(s);
			}
		}
		else if(choice == 2){
			count += addScore(&s);
		}
	}
	printf("==>종료됨!\n");
	return 0;
}
