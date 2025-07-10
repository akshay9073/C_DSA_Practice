#include<stdio.h>
void accept(struct book [],int);
void display(struct book [],int);


struct book
{
	char bname[10];
	char auth[10];
	float price;
};


int main()
{
	book b[5];
	
	printf("\nEnter details of books : ");
	accept(b,5);
	printf("\nDisplay details of books : ");
	display(b,5);
	
	return 0;
}

void accept(struct book b[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nDetails of Book(Name, Author, Price) %d :",i+1);
		scanf("%s %s %f",&b[i].bname,&b[i].auth,&b[i].price);
	}
}

void display(struct book b[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nDetails of Book(Name, Author, Price) %d :",i+1);
		printf("Book Name : %s \t Author Name : %s \t Price : %f",b[i].bname,b[i].auth,b[i].price);
	}
}
