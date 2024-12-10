# include <stdio.h>
int quality_points(int x);
int main(){
printf("enter the grade of student:");
int grade;
scanf("%d",&grade);
int res = quality_points(grade);
printf("the average grade of student = %d\n",res);
}
int quality_points(int x){
	if(x>100 || x<0)
		printf("not vaild grade\n");
	else if(x>=90 )
		return 4;
	else if(x >=80)
		return 3;
	else if(x >= 70)
		return 2;
	else if(x>=60)
		return 1;
	else
		return 0;
}