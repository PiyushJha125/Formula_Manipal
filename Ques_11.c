/*Write a program that accepts n products' details and calculates and displays the total value of the inventory (i.e., quantity * price). Find the product with the highest quantity and the product with the highest Price and display their details. 
Create a structure to represent a product in an inventory. The structure should include:
Product ID (integer)
Product Name (string)
Quantity (integer)
Price (float)*/
#include <stdio.h>
struct Product
{
    int ProId;
    char ProName[100];
    int Quantity;
    float Price;

};

void main()
{
    int i,n;
    float totalVal=0;
    printf("Enter the number of products \n");
    scanf("%d",&n);
    struct Product products[n];
    for (i = 0; i < n; i++) 
    {
        printf("Enter details for product %d: \n", i + 1);
        printf("Product ID:");
        scanf("%d",&products[i].ProId);
        printf("Product Name:");
        scanf("%s", products[i].ProName);
        printf("Quantity:");
        scanf("%d", &products[i].Quantity);
        printf("Price:");
        scanf("%f", &products[i].Price);
        totalVal= totalVal + products[i].Quantity * products[i].Price;
    }
    
    int maxQty=0,imaxQty,imaxPrice;
    float maxPrice=0;
    for (i = 0; i < n; i++) 
    {
        
        if(products[i].Quantity>maxQty)
        {
           maxQty=products[i].Quantity;
           imaxQty=i;
        }
        if(products[i].Price>maxPrice)
        {
           maxPrice=products[i].Price;
           imaxPrice=i;
        }
    }
    printf("The total Value of all the products is : %f \n", totalVal);

    printf("The details of the product with the max quantity: \n");
        printf("Product Id : ");
        printf("%d\n",products[imaxQty].ProId);
        printf("Product Name: ");
        printf("%s\n", products[imaxQty].ProName);
        printf("Quantity: ");
        printf("%d\n",products[imaxQty].Quantity);
        printf("Price: ");
        printf("%f\n",products[imaxQty].Price);

    printf("The details of the product with the max price: \n");
       printf("Product Id : ");
        printf("%d\n",products[imaxPrice].ProId);
        printf("Product Name: ");
        printf("%s\n", products[imaxPrice].ProName);
        printf("Quantity: ");
        printf("%d\n",products[imaxPrice].Quantity);
        printf("Price: ");
        printf("%f\n",products[imaxPrice].Price);


}