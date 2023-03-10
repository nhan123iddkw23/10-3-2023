#include "stdio.h"
#include "math.h"
#include "string.h"
#include "ctype.h"
#include "stdlib.h"

int main() {
    char c[100]; 
    gets(c);
    int n=strlen(c);
    for(int i=0;i<n;i++) {
    	printf("%c: ",c[i]);
    	int dem=0;
    	int a[100];
    	while(c[i]!=0) {
    		a[dem]=c[i]%2;
    	    c[i]/=2;
    	    dem++;
		}
		
		for(int i=dem-1;i>=0;i--) {
			printf("%d",a[i]);
		}
		printf("\n");
    }
}