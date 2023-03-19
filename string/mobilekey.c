
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void solve(char* str, char* mob[]){
	int n = strlen(str);
	 printf("%d",n);
	char op[100];// = (char*)calloc(100,sizeof(char));
	int j = 0;
	for(int i = 0; i<n; i++){
		if(str[i] == ' '){
			op[j++] = '0';
		}
		else{
			for(int k = 0; k<strlen(mob[str[i]-'A']); k++){
				op[j++] = mob[str[i]-'A'][k];
			}
		}
		
	}
	printf("%s",op);
	/*for(int i = 0; i<j; i++){
	    printf("")
	}
	return op;*/
}
	

int main(){
	char* mob[] = {"2","22","222",
                    "3","33","333",
                    "4","44","444",
                    "5","55","555",
                    "6","66","666",
                    "7","77","777","7777",
                    "8","88","888",
                    "9","99","999","9999"
                   };
	char str[] = "GEEKSFORGEEKS";
	solve(str,mob);
	return 0;
}	