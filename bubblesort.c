#include <stdio.h>
main()
{
	int a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1;
	int a2,b2,c2,d2,e2,f2,g2,h2,i2,j2,k2;
	int temp;
	int num;
	int ascending_exchange_count, descending_exchange_count; //오름차순, 내림차순 횟수 세기용 변수 
	
	printf("10개의 정수를 입력하세요. 각 정수는 띄어쓰기로 구분합니다. \n");
	printf(":");
	scanf("%d %d %d %d %d %d %d %d %d %d", &a1, &b1, &c1, &d1, &e1, &f1, &g1, &h1, &i1, &j1);
    a2=a1, b2=b1, c2=c1, d2=d1, e2=e1, f2=f1, g2=g1, h2=h1, i2=i1, j2=j1;
	
	for (num =0 ; num <10 ; num++) // 내림차순 구하는 부분 
	{
        if (a1 < b1) {
        	temp = a1;
        	a1 = b1;
        	b1 = temp;
    	}
        if (b1 < c1) {
        	temp = b1;
			b1 = c1;
        	c1 = temp;
     	}
        if (c1 < d1) {
        	temp = c1;
			c1 = d1;
			d1 = temp;
		}
		if (d1 < e1){
			temp = d1;
			d1 = e1;
			e1 = temp;
		}
		if (e1 < f1){
			temp = e1;
			e1 = f1;
			f1 = temp;
		}
		if(f1 < g1){
			temp = f1;
			f1 = g1;
			g1 = temp;
		}
		if(g1 < h1){
			temp = g1;
			g1 = h1;
			h1 = temp;
		}
		if(h1 < i1){
			temp = h1;
			h1 = i1;
			i1 = temp;
		}
		if(i1 < j1){
			temp = i1;
			i1 = j1;
			j1 = temp;
		}
    }            
    printf("내림차순: %d %d %d %d %d %d %d %d %d %d \n", a1,b1,c1,d1,e1,f1,g1,h1,i1,j1); 


	for (num =0 ; num <10 ; num++) // 오름차순 구하는 부분 
	{
        if (a2 > b2) {
        	temp = a2;
        	a2 = b2;
        	b2 = temp;
    	}
        if (b2 > c2) {
        	temp = b2;
			b2 = c2;
        	c2 = temp;
     	}
        if (c2 > d2) {
        	temp = c2;
			c2 = d2;
			d2 = temp;
		}
		if (d2 > e2){
			temp = d2;
			d2 = e2;
			e2 = temp;
		}
		if (e2 > f2){
			temp = e2;
			e2 = f2;
			f2 = temp;
		}
		if(f2 > g2){
			temp = f2;
			f2 = g2;
			g2 = temp;
		}
		if(g2 > h2){
			temp = g2;
			g2 = h2;
			h2 = temp;
		}
		if(h2 > i2){
			temp = h2;
			h2 = i2;
			i2 = temp;
		}
		if(i2 > j2){
			temp = i2;
			i2 = j2;
			j2 = temp;
		}
    }            
    printf("오름차순: %d %d %d %d %d %d %d %d %d %d", a2,b2,c2,d2,e2,f2,g2,h2,i2,j2);  
}
