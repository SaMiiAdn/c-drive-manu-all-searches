void disp ();
void create();
void insert ();
void del ();
void search();
void binary();
void sort();
void insertend();
#define arraysize 10
int arr[arraysize];
int n;
void main()
{

int  c;
clrscr();
textcolor(10);
cprintf("\t \t \t Algorthms Assignment \t \t \t " );
printf("\n**--2k20/CSEE/145 Adnan Abbasi--**");
while(1)
{
printf("\n###########--Menu--###########");
printf( "\n# 1=> Create \n# 2=> Display \n# 3=> Insert  ");
printf("\n# 4=> Exit:\n# 5=> Delete \n# 6=> Search\n# 7=> Binary\n# 8=> Sort");
printf("\n# 9=> Insert at End");
printf("\n##############################");
printf("\n enter your choice..");
scanf("%d",&c);
switch(c)
{
case 1:
       create(arr,n);
       break;
case 2:
       disp();
       break;
case 3:
      insert();
      break;
case 4: exit();
       break;
case 5: del();
       break;
case 6: search();
       break;
case 7: binary();
       break;
case 8: sort();
       break;
case 9: insertend();
       break;
    }
    }
    }
void create ()
{
int i;
clrscr();
printf("enter  size of array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("entry value arr[%d]=",i );
scanf("%d",&arr[i]);
}
}

void disp()
{
int i;
//clrscr();
for(i=0;i<n;i++)
{
printf("array value arr[%d]=%d\n",i,arr[i]);
}
printf("* * * * * * * * * * * * *\n");
}
void insert ()
{
int e,item,j;
clrscr();
printf("Enter the index  number=");
scanf("%d",&e);
printf("Enter new value=");
scanf("%d",&item);
j=n-1;
if(j==arraysize-1)
printf("over flow");
else
{
while(j>=e)
{
arr[j+1]=arr[j];
j=j-1;
}
arr[e]=item;
n=n+1;
disp();
}
}
void del ()
{
int i, e, item,j;
clrscr();
printf("Enter index number=");
scanf("%d",&e);
if(e>=n+1)
printf("detele is not possible");

for(i=e;i<n-1;i++)
arr[i]=arr[i+1];
n=n-1;
printf("after deleted....!\n");
disp();
}

void search()
{
int k,item,loc;
clrscr();
printf(" Enter number want you search=");
scanf("%d",&item);
k=0;
loc=-1;
while(loc==-1&&k<=n)
{
if(item==arr[k])
loc=k;
k=k+1;
}
if(loc==-1)
printf("item is not found");
else
printf("%d is found at location: %d",item,loc);
}

void binary ()
{
int item ,ub,lb,mid ,loc;
clrscr();
printf(" Enter value for binary search=");
scanf("%d",&item);
ub=0;
lb=n;
mid= ((ub+lb)/2);
while(ub<=lb && arr[mid]!=item)
{
if(item<arr[item])
lb=mid-1;
else
ub=mid+1;
mid= ((ub+lb)/2);
}
if(arr[mid]==item) {
loc=mid;
printf("item is found %d",loc);  }
else
printf("item is not found");
}

void sort ()
{
int i,j,temp;
clrscr();
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
printf("After sorting....\n");
disp();
}
void insertend ()
{
int item;
clrscr();
printf("Enter a new value:=");
scanf("%d",&item);
n=n+1;
arr[n-1]=item;
printf("\nAfter insert at End value in Array\n");
disp();
}