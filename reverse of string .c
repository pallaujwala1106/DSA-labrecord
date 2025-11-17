#include <stdio.h>
#include <string.h>
#define MAX 100

Char Stack [MAX];
Int top = -1;

void push (char c)
{
    Stack[++top] = c;
}

Char pop()
{
    return Stack[top--];
}

int main()
{
    Char str[MAX], reversed[MAX];
    int i;
    printf("Enter an expression: ");
    scanf("%s", str);
    int n = strlen(str);
    for (i = 0; i < n; i++)
    {
        push(str[i]);
    }
    for (i = 0; i < n; i++)
    {
        reversed[i] = pop();
    }
    reversed = '\0';
    printf("reversed expression: %s\n", reversed);
    return 0;
}
default:
printf("incorrect operation selected"):
break;
}
}
return 0;
}
