//Longest Substring Without Repeating Characters
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void solve(char* str){
	int n = strlen(str);
    int arr[25];
    for(int i = 0; i<25;i++){
        arr[i] = 0;
    }
    int max = 0, count = 0, j=0;
    for(int i = 0; i<n; i++){
        if(arr[str[i]-'a'] != 0){
            arr[str[i]-'a'] = 0;
            if(max < count){
                max = count;
            }
            count = 0;
            for(int k = j;k<i;k++ ){
                arr[str[k]-'a'] = 0;
            }
            j = i;
        }
        arr[str[i]-'a']++;
        count++;
    }
    printf("%d",max);
}
	

int main(){
	char str[] = "pwwkew";
	solve(str);
	return 0;
}	