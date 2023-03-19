//Given two strings s and t, return true if t is an anagram of s, and false otherwise


#include<stdio.h>
#include<ctype.h>
int is_anagram(char str1[],char str2[], int n1, int n2){
	if(n1 != n2){
		return 0;
	}
	//printf("Hello");
	int arr[25];
	
	for(int i = 0; i<25; i++){
		arr[i] = 0;
	}
	for(int i = 0; i<n1; i++){
		//printf("%d %d",tolower(str1[i])-90, tolower(str2[i])-90);
		arr[str1[i]-97]++;
		arr[str2[i]-97]--;
	}
	for(int i = 0; i<25; i++){
		if(arr[i] != 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	char s[] = "rat";
	char t[] = "car";
	int n1 = sizeof(s)/sizeof(s[0]);
	int n2 = sizeof(t)/sizeof(t[0]);
	printf("%d",is_anagram(s,t,n1,n2));
	return 0;
}