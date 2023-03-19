/*A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

*/

#include<stdio.h>
#include <ctype.h>
int ischar(char a){
	if((a>=65 && a<=90) || (a>=97 && a<=122)){
		return 1;
	}
	return 0;
}
int is_valid(char str[],int n){
	int l = 0, r = n-1;

	while(l<r){
		if(!isalpha(str[l])){
			l++;
		}
		else if(!isalpha(str[r])){
			r--;
		}
		else if(tolower(str[l]) == tolower(str[r])){
			//printf("%c",str[l]);
			l++;
			r--;
		}
		else{
			return 0;
		}
	}
	return 1;
			
}
int main(){
	char arr[] = "race a car";
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("%d",is_valid(arr,n));
	return 0;
}
