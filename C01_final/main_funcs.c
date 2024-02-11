/*****************ex00******************

int   main(void)
{
    int number;

    ft_ft(&number);
    printf("%d", number);
}

*****************ex01******************

int   main(void)
{
    int nummer;
    int *nbr1 = &nummer;
    int **nbr2 = &nbr1;
    int ***nbr3 = &nbr2;
    int ****nbr4 = &nbr3;
    int *****nbr5 = &nbr4;
    int ******nbr6 = &nbr5;
    int *******nbr7 = &nbr6;
    int ********nbr8 = &nbr7;
    
    ft_ultimate_ft(&nbr8);
    
    printf("%d", nummer);

*****************ex02******************

int main(void)
{
    int x;
    int y;

    x = 2;
    y = 3;
    ft_swap(&x, &y);

    x = x + '0';
    y = y + '0';
    write(1, &x, 1);
    write(1, "\n", 1);
    write(1, &y, 1);
}

*****************ex03******************

int   main(void)
{
    int a;
    int b;
    int x;
    int y;

    a = 10;
    b = 5;
    x = 0;
    y = 0;
    ft_div_mod(a, b, &x, &y);
    printf("%d\n", x);
    printf("%d", y);
}

*****************ex04******************

int   main(void)
{
    int a;
    int b;

    a = 10;
    b = 5;
    ft_ultimate_div_mod(&a, &b);    
    printf("%d\n", a);
    printf("%d\n", b);
} 

*****************ex05******************

char	string = "Hello";
printf("%d", ft_putstr(string));

*****************ex06******************

int   main(void)
{
    char *string = "Hello";

    printf("%d", ft_strlen(string));
}

*****************ex07******************

int   main(void)
{
    int array[] = {2, 4, 6};
    int size = 3;
    int i = 0;

    ft_rev_int_tab(array, size);

    while (i < size)
    {
        printf("%d", array[i]);
        i++;
    }
}

*****************ex08******************

{
    int arr[] = {9, 5, 2, 3};
    int i = 0;
    int n;

    n = sizeof(arr) / sizeof(arr[0]);

    printf("Before: ");

    while (i < n)
    {
        printf("%d", arr[i]);
        i++;
    }

    i = 0;

    ft_sort_int_tab(arr, n);

    printf("\nAfter: ");

    while (i < n)
    {
        printf("%d", arr[i]);
        i++;
    }
}

***************************************/

