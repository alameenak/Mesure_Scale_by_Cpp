#include<iostream.h>
#include<conio.h>
#include<math.h>
class weight
{
	int w;
	int a;
public:
	weight()
	{
		cout<<"enter weight(2<=Weight<=109):";
		cin>>w;
		cout<<"enter weight of mass(a):";
		cin>>a;
	}
	void compute();
};

void weight::compute()
{
	int arr[7];
	int c=0;
	for(int i=0;i<=6;i++)
		arr[i]=pow(a,i);
	for(i=0;i<=6;i++)
	{
		
		if(arr[i]==w)
		{
			cout<<"YES\n"<<a<<">>"<<i<<"="<<w;
			c++;
			break;
		}
		for(int j=i+1;j<=6;j++)
		{
			if(arr[i]+arr[j]==w)
			{
				cout<<"YES\n"<<a<<">>"<<i<<"+"<<a<<">>"<<j<<"="<<w;
				c++;
				break;
			}
		}
		if(c==0)
		{
			j=i+1;
			for(int k=j+1;k<=6;k++)
			{
				if(arr[i]+arr[j]+arr[k]==w)
				{
					cout<<"YES\n"<<a<<">>"<<i<<"+"<<a<<">>"<<j<<"+"<<a<<">>"<<k<<"="<<w;
					c++;
					break;
				}
			}
		}
		
		if(c==0)
		{
			j=i+1;
			int k=j+1;
			for(int l=k+1;l<=6;l++)
			{
				if(arr[i]+arr[j]+arr[k]+arr[l]==w)
				{
					cout<<"YES\n"<<a<<">>"<<i<<"+"<<a<<">>"<<j<<"+"<<a<<">>"<<k<<"+"<<a<<">>"<<l<<"="<<w;
					c++;
					break;
				}
			}
		}
		
	}
	if(c==0)
			cout<<"NO";
}

void main()
{
	clrscr();
	weight w;
	w.compute();
	getch();
}