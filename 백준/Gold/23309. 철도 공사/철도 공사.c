#include <stdio.h>

int main(void)
{
	int n, m, tmp1, tmp2, first=0, before=0, p=0;
	
	scanf("%d %d", &n, &m);
	
	int prev[1000001]={};
	int next[1000001]={};
	
    
	n--;
	scanf("%d", &first);
	before = first;
	
    
	while(n--) {
		scanf("%d", &tmp1);
        
		prev[tmp1]=before; 
		next[before]=tmp1;
        
		before = tmp1;
	}
	
    
	next[before] = first;
	prev[first] = before;
	
    
	char c[2] = {};
	
    
	while(m--) {
		scanf(" %c%c", &c[0], &c[1]);
		scanf("%d", &tmp1);
		if(c[0] == 'B') {
			scanf("%d", &tmp2);
			if(c[1] == 'N') { 
				p = next[tmp1]; 
				printf("%d\n", p); 
				prev[p] = tmp2; 
				next[tmp1] = tmp2; 
				prev[tmp2] = tmp1; 
				next[tmp2] = p; 
			}
			else {
				p = prev[tmp1]; 
				printf("%d\n", p);
				next[p] = tmp2; 
				prev[tmp1] = tmp2;
				prev[tmp2] = p; 
				next[tmp2] = tmp1; 
			}
		}
		else {
			if(c[1] == 'N') {
				p = next[tmp1]; 
				printf("%d\n", p);
				next[tmp1] = next[p]; 
				prev[next[p]] = tmp1; 
			}
			else {
				p = prev[tmp1];
				printf("%d\n", p);
                
				prev[tmp1] = prev[p];
				next[prev[p]] = tmp1;
			}
		}
	}
}