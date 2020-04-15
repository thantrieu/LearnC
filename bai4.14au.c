 #include<stdio.h>
#include<math.h>

void nhap(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\na[%d] = ",i);
		scanf("%d",&a[i]);
	}
}

void xuat(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\na[%d] = %d ",i,a[i]);
	}
}


int chen(int a[],int n,int b[],int m)
{
	int k, i, c[100];
	printf("vi tri k: \n");
	scanf("%d", &k);

	for(i=0;i<=k;i++)
	{
		c[i]=a[k+i];
	}

	for(i=k;i<m+n-k-1;i++)
	{
		a[i]=b[i-k];
	}

	for(i=0;i<=k;i++)
	{
		a[k+m+i]=c[i];

	}	
	xuat(a,n+m);

}

int main()
{
	int a[100],n,b[100],m;
	printf("nhap n:\n");
	scanf("%d",&n);
	nhap(a,n);
	printf("nhap m:\n");
	scanf("%d",&m);
	nhap(b,m);
	chen(a,n,b,m);
}
