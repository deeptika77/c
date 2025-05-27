#include<stdio.h>
int main()
{
	FILE *fp1,*fp2;
	fp1=fopen("old.dat","r");
	fp2=fopen("new.dat","w");
	if(fp1==NULL)
    {
        printf("\n error opening the file");
        return 1;
    }
    if(fp2==NULL)
    {
        printf("\n error opening the file");
        return 1;
    }
    int n,i,c=0;
    while(fscanf(fp1,"%d",&n)!=EOF){
    	c=0;
    	if(n==1 || n==2){
			fprintf(fp2,"%d\t",n);
		}
    	else{
    		for(i=1;i<=n;i++){
    			if(n%i==0)
    			{
    				c++;
				}
			}
			if(c==2){
				fprintf(fp2,"%d\t",n);
			}
		}
		
	}
printf("done");
fclose(fp1);
fclose(fp2);
return 0;

}
