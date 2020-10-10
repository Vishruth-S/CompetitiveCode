int main()
{
    int n,a[500],c=0,temp,i;
    a[0]=1;
    scanf("%d",&n);
    for(;n>=2;n--)
    {
        temp=0;
        for(i=0;i<=c;i++)
        {
            temp=(a[i]*n)+temp;
            a[i]=temp%10;
            temp=temp/10;
        }
        while(temp>0)
        {
            a[++c]=temp%10;
            temp=temp/10;
        }
    }
        for(i=c;i>=0;i--)
        printf("%d",a[i]);
        
    
    return 0;
}
