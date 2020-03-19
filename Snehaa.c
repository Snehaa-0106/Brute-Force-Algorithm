#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,w,a,t[100],l[100],k,j,q,p[100],f,z,v=0;
	char s[100][100],s1[100][100],c[100],r[100][100];
	FILE *M;
	FILE *G;
	FILE *O;
	while(scanf("%s",r[v])==1 && v<4)
	{
		v++;
	}
	M=fopen(r[2],"r");
	G=fopen(r[4],"r");
	O=fopen("Output.txt","w");
	fscanf(M,"%d",&k);
	for(i=0;i<k;i++)
		fscanf(M,"%s %d\n",&s1[i],&l[i]);
	while(fscanf(G,"%d %d",&n,&a)==2)
	{
		for(i=0;i<n;i++)
			fscanf(G,"%s %d\n",&s[i],&t[i]);
		for(i=0;i<n;i++)
		{
			for(j=0;j<k;j++)
				if(strcmp(s[i],s1[j])==0)
					p[i]=l[j]-t[i];
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(p[i]>p[j])
				{
					strcpy(c,s[i]);
					strcpy(s[i],s[j]);
					strcpy(s[j],c);
					q=p[i];
					p[i]=p[j];
					p[j]=q;
					q=t[i];
					t[i]=t[j];
					t[j]=q;
				}
			}
		}
		fprintf(O,"%d ",n);
		f=0;
		q=0;
		z=0;
		for(i=0;i<n;i++)
		{
			w=0;
			if(a>=t[i])
			{
				for(j=0;j<k;j++)
					if(strcmp(s[i],s1[j])==0)
						break;
				q=q+l[j]-t[i];
				a=a-t[i];
				w++;
			}
			f=f+w;
			if(w!=0)
				strcpy(r[z++],s[i]);
		}
		fprintf(O,"%d %d 0\n",q,f);
		for(i=0;i<z;i++)
			fprintf(O,"%s\n",r[i]);
		fprintf(O,"\n");
	}
	fclose(M);
	fclose(G);
	fclose(O);
	return 0;
}
