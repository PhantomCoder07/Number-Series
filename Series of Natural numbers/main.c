// for loop
#include <stdio.h>
int main()
{
    int i, num;
    printf ("Enter n term: ");
    scanf ("%d",&num);
    printf ("First %d natural number: ",num);
    for (i=1; i<=num; i++)
    {
        printf ("%d ",i);
    }
    return 0;
}
// while loop
#include <stdio.h>
int main()
{
    int i=1, num;
    printf ("Enter n term: ");
    scanf ("%d",&num);
    printf ("First %d natural number: ",num);
    while (i<=num)
    {
        printf ("%d ",i);
        i++;
    }
    return 0;
}
// do-while loop
#include <stdio.h>
int main()
{
    int i=1, num;
    printf ("Enter n term: ");
    scanf ("%d",&num);
    printf ("First %d natural number: ",num);
    do
    {
        printf ("%d ",i);
        i++;
    }
    while (i<=num);
    return 0;
}
