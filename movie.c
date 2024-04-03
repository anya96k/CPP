#include<stdio.h>

int main(){
	char movie_name[100];
	int adult,child,tsolda,tsoldc,totalts,grossa,pgrossad,amountd,p,nets;
	
	printf("ENTER A MOVIE NAME :\n");
	gets(movie_name);
	
	printf("ENTER A ADULT TICKET PRICE :\n");
	scanf("%d",&adult);
	
	printf("ENTER A CHILD TICKET PRICE :\n");
	scanf("%d",&child);
	
	printf("ENTER A ADULT TICKET SOLD :\n");
	scanf("%d",&tsolda);
	
	printf("ENTER A CHILD TICKET SOLD :\n");
	scanf("%d",&tsoldc);
	
	printf("ENTER PERCANTEGE OF GROSS AMOUNT DONETED :\n");
	scanf("%d",&pgrossad);
	
	
	totalts=tsolda+tsoldc;
	grossa=(tsolda*80)+(tsoldc*50);
	p=pgrossad/100;
	amountd=grossa*(pgrossad/100);
	nets=grossa-amountd;
	
	printf("MOVIE NAME : %s\n",movie_name);
	printf("NUMBER OF TICKET SOLD : %d\n",totalts);
	printf("GROSS AMOUNT : %d\n",grossa);
	printf("PERCANTEGE OF GROSS AMOUNT DONETED : %d\n",gross"%");
	printf("AMOUNT DONETED : %d\n",amountd);
	printf("NET SaLe : %d\n",nets);
	
	
	
	return 0;
	
	
	
}
	
	
	
	
	
	
	
	
	
}
