#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;//输入行列
    for(int i=0;i<n;i++){
        int j=0;
        for(char a='A'+i;a>'A'&&j<m;a--){//输出前面倒序部分
            cout<<a;
            j++;
        }
        for(char a='A';a<'Z'&&j<m;a++){//输出后面顺序部分
            cout<<a;
            j++;
        }
        cout<<endl;
    }
    return 0;

}
