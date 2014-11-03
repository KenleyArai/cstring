int my_strlen(const char * s)
{
    int i = 0;

    while(*(s + i))
        i++;

    return i + 1;
}

char * my_strncpy(char * d, const char * s, int n)
{
    for(int i = 0; i < n; i++)
        *(d + i) = *(s + i);
    return d;
}

char * my_strcpy(char * d, const char * s)
{
    return my_strncpy(d, s, my_strlen(s));
}

char * my_strncat(char * d, const char * s, int n)
{
    int len_of_d = my_strlen(d);
    for(int i = len_of_d; i < len_of_d + n - 1; i++)
        *(d + i - 1) = *(s + i - len_of_d);
    return d;
}

char * my_strcat(char * d, const char * s)
{
    return my_strncat(d, s, my_strlen(s));
}

int my_strcmp(const char * s1, const char * s2)
{
    for(int i = 0; *(s1 + i) && *(s2 + i); i++)
    {
        if( *(s1 + i) < *(s2 + i) )
            return -1;
        else if( *(s1 + i) > *(s2 + i) )
            return 1;
    }
    return 0;
}

char * my_strchr(const char * s, char c)
{
    for(int i = 0; *(s + i); i++)
        if( *(s + i) == c  )
            return (char*)(s + i);
    return 0;
}

char * my_strstr(const char * s1, const char * s2)
{
    int len_of_s2 = my_strlen(s2);
    char * p = my_strchr(s1, s2[0]);

    for( int i = 0; i < len_of_s2 - 1; i++ )
    {
        if( *(p + i) != *(s2 + i)  )
        {
            p = my_strchr((p + i), s2[0]);
            i = 0;   
        }
        if(!p)
            return 0;
    }

    return p;
}
