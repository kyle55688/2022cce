#include <iostream>
#include <stdio.h>
using namespace std;
int prime(int n){
	int ans;
	for(int i=2;i<n;i++){
		if(n%i==0){
			ans=0;
			break;
		}
		else ans=1;

	}
	return ans;
}
int main(){
  int n;cin>>n;
  cout<<"["<<prime(n)<<"]";
  return 0;
}
/* 上方 C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]", prime(n));
    return 0;
}
*/
