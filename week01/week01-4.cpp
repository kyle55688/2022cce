#include <stdio.h>
#include <string.h>
int main()
{
    char c;
    char line[30];

    printf("請輸入一個字串，不要太長: ");
    scanf("%s", line);///讀入整個字串，沒有&
    ///會以空格斷字
    printf("你輸入:%s",line);
    int N = strlen(line);
    for(int i=0;i<N;i++){
        if(line[i]=='2'){
            printf("找到2\n");
        }
    }
}

