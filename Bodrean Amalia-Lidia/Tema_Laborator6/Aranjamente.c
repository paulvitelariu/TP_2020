#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int i, varf, n, a, v[100], sol = 0;
char isSuc, isVal = 0;
void Init(int varf) { 
	v[varf] = 0; 
}
int Succesor(int varf) {
	if (v[varf] < n) { 
		v[varf]++; 
		return 1; 
	}
	else 
		return 0;
}

int Valid(int kvarf) {
	for (i = 1; i < varf; i++) 
		if (v[i] == v[varf])
			return 0;
		else
			return 1;
}
int Solution(varf) {
	return (varf == a);
}
void Print() {
	printf("%d : ", ++sol);
	for (i = 1; i <= a; i++)
		printf("%d ", v[i]);
	printf("\n");
}
void Back()
{
	varf = 1;
	Init(varf);
	while (varf > 0)  
	{
		isSuc = 0;
		isVal = 0;
		if (varf <= a) 
			do { 
				isSuc = Succesor(varf);
				if (isSuc) isVal = Valid(varf);
			} while (isSuc && !isVal); 
			if (isSuc) 
				if (Solution(varf)) 
					Print(); 
				else { 
					varf++;
					Init(varf);
				}
			else 
				varf--; 
	}
}
int main()
{
	n = 6; a = 5;
	Back();
	system("pause");
	return 0;

}