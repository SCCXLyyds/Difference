#include <iostream>

using namespace std;
const int N=100010;
int a[N],b[N],m,n,l,r,c;
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        b[i]=a[i]-a[i-1];
    }
    while(m--)
    {
        scanf("%d%d%d",&l,&r,&c);
        b[l]+=c;
        b[r+1]-=c;
    }
    for(int i=1;i<=n;i++){
        a[i]=a[i-1]+b[i];
        printf("%d ",a[i]);
    }
    return 0;
}
