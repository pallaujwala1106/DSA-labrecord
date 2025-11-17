/* linear search: */
#include <stdio.h>
int main()
{
  int i, n, key, found = 0;
  printf("enter the size of array ");
  scanf("%d", &n);
  int A;
  printf("ent %d element: \n", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &A[i]);
  }
  printf("enter the elements to search");
  scanf("%d", &key);
  for (i = 0; i < n; i++)
  {
    if (A[i] == key)
    {
      printf("Element found at position %d\n", i + 1);
      found = 1;
      break;
    }
  }
  if (!found)
  {
    printf("Elements not found \n");
  }
  return 0;
}
