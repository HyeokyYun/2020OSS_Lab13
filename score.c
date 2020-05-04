#include "score.h"

int addScore(Score *s){
	printf("학생의 이름: ");
	scanf("%s\n", s->name);
	printf("국어점수: ");
	scanf("%d\n", &p->kor);
	printf("수학점수: ");
	scanf("%d\n", &p->math);
	printf("영어점수: ");
	scanf("%d\n", &p->eng);
	printf("==> 추가됨!\n");
	
	return 1;
}

void readScore(Score s){
	if(s.kor == -1 && s.math == -1 && s.eng == -1) return;
	p.avg = p.sum/3.0;
	printf("%s %d %d %d %d %.1f", s.name, s.kor, s.math, s.eng, s.sum, s.avg);
}



