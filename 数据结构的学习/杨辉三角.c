#include<stdio.h>

int main()

{
    int a[100][100],i,j,n;
    printf("请输入要打印的行数：");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        a[i][0]=a[i][i]=1;//令第一个和最后一个数为1
    }
     for(i=2;i<n;i++){   //杨辉三角的本质，任何一个数为顶上两个数之和
        for(j=1;j<i;j++){
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
     }
     for(i=0;i<n;i++){
        for(j=0;j<=i;j++){  //如果j<i就不能把最后一排1给打印出来，因为最后一行的行列数相等
            printf("%6d",a[i][j]);
        }
        printf("\n");
     }

     return 0;
}
