#include <stdio.h>
#include <iostream>
using namespace std;
int prime(int n)
{
	int i,ans=0;
	for(i=1; i<=n; i++){
		if(n%i==0) ans++;
	}
	if(ans==2) return 1;
	else return 0;
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
