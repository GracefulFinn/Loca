#include<stdio.h>
int main()
{
	int n,m;
	int a[51][6];
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		int i,j;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
		}
		float b[51],c[6],ping[6];
		for(i=0;i<n;i++)
		{
			b[i]=0;
			for(j=0;j<m;j++)
			{
				b[i]+=a[i][j];
			}
			if(i==0)
			printf("%.2f",b[i]/m);
			else
			printf(" %.2f",b[i]/m);
		}
		printf("\n");
		for(i=0;i<m;i++)
		{
			c[i]=0;
			for(j=0;j<n;j++)
			{
				c[i]+=a[j][i];
			}
			ping[i]=c[i]/n;
			if(i==0)
			printf("%.2f",ping[i]);
			else
			printf(" %.2f",ping[i]);
		}
		printf("\n");
		int k;
		int z=0;
		for(i=0;i<n;i++)
        {
            k=0;
            for(j=0;j<m;j++)
            {
                if(a[i][j]<ping[j])
                {
                    k=1;
                    break;
                }
            }
            if(k==0)
                z++;

        }
        printf("%d\n\n",z);
	}
 }
