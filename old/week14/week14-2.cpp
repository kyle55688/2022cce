#include <stdio.h>
int z=10;
void func()
{
    int y;
    printf("��i��func()��,z�O%d\n",z);
    z=2;
    printf("�bfunc()��,��z�令%d\n",z);
}
int main()
{
    int x;
    func();
    printf("�bmain()��,z���ȬO%d\n",z);
    z=1;
    printf("�bmain()�̧�z���Ȳ{�b�O%d\n",z);
}