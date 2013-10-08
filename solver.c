#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <conio.h>

main()
{
    int choice, var1, var2, var3, var4, var2a, var3a,m1[10][10], m2[10][10],add[10][10];
    int a[9],x, row1, col1, row2, col2;
    int i, O,power,s, ii;
    float f,p,n, sum,mean,b[9],d1,d2,c=0;

    do
    {
        printf("----------Main Menu----------\n");
        printf("[1]Evaluate Polynomial\n");
        printf("[2]Statistical Algorithms\n");
        printf("[3]Matrix Operations\n");
        printf("[4]Exit\n");
        printf("-------------------------------------\n");
        printf ("\nChoice: ");
        scanf("%d",&choice);

        if(choice==1)
        {   
            do
            {
                printf("--- Evaluate Polynomial --- \n");
                printf ("[1] Compute\n");
                printf ("[2] Go to Main Menu\n");
                printf ("Choice: ");
                scanf ("%d", &var1);


                if (var1==1)
                {

                    printf("Enter the order of the polynomial\n");
                    scanf("%d", &O);

                    if (O<=10)
                    {
                        printf ("Enter %d constant coefficient\n", O+1);
            
                        for (i=0; i <=O; i++)
                            scanf("%d",&a[i]);
            
                        printf("Enter the value of x:\n");
                        scanf("%f", &n);

                        p=a[0];

                        for (i=1;i<=O;i++)
                        {
                          p=p*n+a[i];
                        }
                        
                        printf("\nSum of the polynomial = %6.2f\n",p);
                    }

                    else 
                      printf("Invalid input\n");
                }
            }while(var1!=2);
                
            if(choice==2)
                return (main());
        }  

        if(choice==2)
        { 
            do
            {
                printf("--- Statistical Algorithms --- \n");
                printf ("[1] Compute\n");
                printf ("[2] Go to Main Menu\n");
                printf ("Choice: ");
                scanf ("%d", &var2);

                if (var2==1)
                {
                    printf("Enter the number of data\n");
                    scanf("%d", &s);
                    
                    if (s<=10)
                    {   
                        printf("Input values of your data:\n");
                        
                        for (i=0;i < s;i++)
                            scanf("%d", &a[i]);
          
                        printf("[1]Sum\n");
                        printf("[2]Mean\n");
                        printf("[3]Standard Deviation\n");
                        printf("[4]Go to Main Menu\n");
                        printf("Choice:");
                        scanf("%d", &var2a);
                        
                        sum=a[0];
          
                        for(i=1;i < s;i++)
                            sum=sum+a[i];

                        mean=sum/s;
                        
                        if (var2a==1)
                            printf("Sum: %.2f\n", sum);
          
                        else if (var2a==2)
                            printf("Mean: %.2f\n", mean);
          
                        else if (var2a==3)
                        {
                            for (i=0;i < s;i++)
                            {
                                b[i]=((a[i]-mean)*(a[i]-mean));
                                c=c+b[i];
                            }
           
                            d1=sqrt(c/(s-1));
                            d2=-1*sqrt(c/(s-1));
                            printf("standard deviation: %.2f, %.2f\n", d1,d2);

                        }
                        
                        else if (var2a==4)
                            return(main());
                    }                                                 
                }
            }while(var2!=2);
            
            if (var2==2)
                return (main());
        }  
    
        if(choice==3)
        { 
            do
            {
                printf("--- Matrix Operations --- \n");
                printf ("[1] Compute\n");
                printf ("[2] Go to Main Menu\n");
                printf ("Choice: ");
                scanf ("%d", &var3);

                if(var3==1)
                {
                    do
                    {
                        printf("[1]Addition\n");
                        printf("[2]Multiplication\n");
                        printf("[3]Tanspose\n");
                        printf("[4]Go to Main Menu\n");
                        printf("Choice:");
                        scanf("%d", &var3a);

                        if (var3a==1)
                        {
                            printf("First Matrix*\n");
                            printf("Enter number of rows:\n");
                            scanf("%d", &row1);
                            printf("Enter number of columns:\n");
                            scanf("%d", &col1);

                            printf("Enter the elements:\n");   
                     
                            for ( i = 0 ; i < row1 ; i++ )
                                for ( ii = 0 ; ii < col1 ; ii++ )
                                    scanf("%d", &m1[i][ii]);

                            printf("Second Matrix*\n");
                            printf("Enter number of rows:\n");
                            scanf("%d", &row2);
                            printf("Enter number of columns:\n");
                            scanf("%d", &col2);

                            printf("Enter the elements:\n");
                            for ( i = 0 ; i < row2 ; i++ )
                                for ( ii = 0 ; ii < col2 ; ii++ )
                                    scanf("%d", &m2[i][ii]);

                            if((row1!=row2)&&(col1!=col2))
                                printf("Invalid Matrices\n");
                            
                            else
                            {
                                for ( i = 0 ; i < row1 ; i++ )
                                    for ( ii = 0 ; ii < col1 ; ii++ )
                                        add[i][ii] = m1[i][ii] + m2[i][ii];

                                printf("The sum of the first and second matrix:\n");

                                for ( i = 0 ; i < row1 ; i++ )
                                {
                                    for ( ii = 0 ; ii < col1 ; ii++ )
                                        printf("%d\t", add[i][ii]); 
                                    printf("\n");
                                }
                            }
                        }

                        if (var3a==2)
                        {
                            printf("First Matrix*\n");
                            printf("Enter number of rows:\n");
                            scanf("%d", &row1);
                            printf("Enter number of columns:\n");
                            scanf("%d", &col1);

                            printf("Enter the elements:\n");   
                            
                            for ( i = 0 ; i < row1 ; i++ )
                                for ( ii = 0 ; ii < col1 ; ii++ )
                                    scanf("%d", &m1[i][ii]);

                            printf("Second Matrix*\n");
                            printf("Enter number of rows:\n");
                            scanf("%d", &row2);
                            printf("Enter number of columns:\n");
                            scanf("%d", &col2);

                            printf("Enter the elements:\n");
                            
                            for ( i = 0 ; i < row2 ; i++ )
                                for ( ii = 0 ; ii < col2 ; ii++ )
                                    scanf("%d", &m2[i][ii]);

                            if((row1!=row2)&&(col1!=col2))
                                printf("Invalid Matrices\n");
                            
                            else
                            {
                                for ( i = 0 ; i < row1 ; i++ )
                                    for ( ii = 0 ; ii < col1 ; ii++ )
                                        add[i][ii] = m1[i][ii] + m2[i][ii];

                                printf("The sum of the first and second matrix:\n");

                                for ( i = 0 ; i < row1 ; i++ )
                                {
                                    for ( ii = 0 ; ii < col1 ; ii++ )
                                        printf("%d\t", add[i][ii]); 
                                    printf("\n");
                                }
                            }
                        }

                        if (var3a==3)
                        {
                            printf("Enter number of rows:\n");
                            scanf("%d", &row1);
                            printf("Enter number of columns:\n");
                            scanf("%d", &col1);

                            printf("Enter the elements:\n");   
                
                            for ( i = 0 ; i < row1 ; i++ )
                                for ( ii = 0 ; ii < col1 ; ii++ )
                                    scanf("%d", &m1[i][ii]);
                            
                                
                            for( i = 0 ; i < row1 ; i++ )
                                for( ii = 0 ; ii < col1 ; ii++ )
                                    m2[ii][i] = m1[i][ii];
                            
                            printf("Transpose Matrix :\n");

                            for( i = 0 ; i < col1 ; i++ )
                            {    
                                for( ii = 0 ; ii < row1 ; ii++ )
                                    printf("%d\t",m2[i][ii]);
                                
                                printf("\n");
                            }  
                        }
                    }while(var3a!=4);
                
                    if (var2==2)
                        return (main());
                }

                if(var3==2)
                    return (main());

            }while(var2!=2);
 
            if (var2==2)
                return (main());
        }                
    }while(choice!=4);		

    if(choice==4)
        printf("Thank you for using this program.\n");

    if(choice < 1 || choice > 4)
        printf("Please enter a valid input.\n");
}




