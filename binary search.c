#include <stdio.h>
int main ()
{
int i, n, key;
int start, end, mid;
int found = 0;
printf("Enter the size of Sorted array");
scanf("%d", &n);
int a;
printf ("Enter the Sorted element: \n", n);
for (i=0; i<n; i++)
scanf("%d", &a[i]);

printf ("Enter the elements to Search");
scanf ("%d", &key);
start=0;
end=n-1;
while (start <= end)
{
mid = (start + end )/2;
if (a[mid] == key)
{
printf("Element found at position mid \n", mid+1);
return 0;
}
else if (a[mid] < key)
{
start = mid+1;
}
Else
