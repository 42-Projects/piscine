int main()
{ 
     
    char str1[] = "Maggie";
    char str2[] = "Maggv";
     
    int res = ft_strcmp(str1, str2);
     
    if (res==0)
        printf("Strings are equal");
    else
        printf("Strings are unequal");
     
    printf("\nValue returned by restul:  %d" , res);
    return 0;
}
