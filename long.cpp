#include<stdio.h>
#include<math.h>
#include<conio.h>

//void nhap(float a[],int n)
//{
//	while(n <= 0)
//	{
//		printf("enter n>0: ");
//		scanf("%d", &n);
//	}
//	for(int i = 0 ; i < n; i++)
//	{
//		printf("a[%f] =",i);
//		scanf("%d", &a[i]);
//	}
//}



// op 1
void inputArr(int a[],int n){
    int i;
    printf("Enter %d float number: ", n);
	for(i = 0; i < n; i++){
		scanf("%f/n", &a[i]);
	}
}



// op 2
//void tangdan(float a[], int n){
//	int i,j;
//	for(i=0;i<n-1;i++){
//		for(j=n-1;j>1;j--){
//			if(a[j]<a[j-1]){
//				int tmp=a[j];
//				a[j]=a[j-1];
//				a[j-1]=tmp;
//			}
//		}
//	}
//}


// op 3
	//void hienthi(float a[],int n)
	//{
	//	int i;
	//	for(i = 0; i < n; i++){
	//		printf("%f",a[i]);
	//	}
	//	printf("\n");
	//}			





int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int choice, num;
    unsigned long int factm;
    while(1)
    {
    	int a[100];
    	int n;
    	
        printf("1. enter the list of float number \n");
        printf("2. sort the list in increasing order\n");
        printf("3. search the value x in the list\n");
        printf("4. display the list\n\n\n");
        printf("exit\n\n\n");
        printf("Enter your choice :  ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1: 
			printf("Input size of array n = "); 
			scanf("%d", &n); 
			inputArr(a,n); 
			break;
        
            case 2:
                 
	    	do 
	    	{
	    		printf("Enter n > 0: ");
	    		scanf("%d", &n);
	    	}
	    	while (n <= 0);
	    	
	    	for(int i = 0 ; i < n; i++)
			{
				printf("a[%d] = ", i);
				scanf("%d", &a[i]);
			}
			
			
			// before sorting
    		printf("\ntrc sap xep: \n");
    		
			for(int i = 0; i < n; i++)
			{
				printf("%.f  ", (float) a[i]);
			}
			printf("\n");
			
			
			// after sorting
   			printf("\nsau sap xep: \n");
   			for (int i = 0; i < n; i++)
		    {
		        //Find the smallest number
		        for (int j = i + 1; j < n; j++)
		        {
		            if (a[j] < a[i])
		            {
		                // change the smallest number to its proper order
		                int inter = a[j];    // inter is the smallest number in the array
		                a[j] = a[i];
		                a[i] = inter;
		            }
		        }
		        printf("%.f  ", (float) a[i]);
			}
			printf("\n");
			printf("\n");
   			break;
        
	        case 3:
	        int x;
	        printf("Enter the value x to be searched: ");
	        scanf("%d", &x);
	        for (int i = 0; i < n; i++)
	        {
	        	if(x == a[i])
	        	{
	        		printf("Found  %f  at position  %d\n", (float) x, i);
				}
			}
		}
    }
    return 0;
}
