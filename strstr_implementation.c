char    *my_strstr(const char *haystack, const char *needle)
{
    size_t  needle_len;

    needle_len = strlen(needle);
    while (*haystack)
    {
        if (*haystack == *needle)
        {
            if (!strncmp(haystack, needle, needle_len))
                    return ((char *)haystack);
        }
        haystack++;
    }
    return (NULL);
}
