#include<stdio.h>
#include<string>
struct tumau
      {int tuso,mauso;
      };
struct pso 
      {tumau ps; 	
      }; 
pso a[100]; int n;
nhap(pso a[], int &n)
      {printf("so luong phan so la");scanf ("%d",&n);
       fflush(stdin);
	   printf("nhap phan so");
	   for(int i=0;i<n;i++)
	   {printf("nhap phan so thu %d",i);
		printf("nhap tu so:");
		scanf ("%d",&a[i].ps.tuso);
		printf("nhap mau so:");
		scanf ("%d",&a[i].ps.mauso);
		while(a[i].ps.mauso==0)
		    {printf("nhap sai do mau ko bao gio am");scanf("%d",&a[i].ps.mauso);
		    }
	   }
      }
void ucnh(int &a,int &x)
   {if(a<x)
      {	for(int i=a;i>1;i--)
	      {if(a%i==0&&x%i==0)
		     {	a=a/i;
				x=x/i;	
				break;
			 }
		  }
	  }
	else
		for(int i=x;i>1;i--)
		   {if(a%i==0&&x%i==0)
			  {	a=a/i;
				x=x/i;break;
			  }
		   }
   }
void rutgon(pso a[], int n)
   {
	for(int i=0;i<n;i++) ucnh(a[i].ps.tuso,a[i].ps.mauso);
   }
void xuat(pso a[],int &n)
   {
	for(int i=0;i<n;i++) printf("%d / %d\n",a[i].ps.tuso,a[i].ps.mauso); 
   } 
main()
   {
	nhap(a,n);
	rutgon(a,n);
	xuat(a,n); 
   }
