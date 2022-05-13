struct {
    char c;
    void(*fptr)(va_list)
} FPTR_TAB
{
    {"env",&functenv};
    {"exit",&funct_exit};
    etc...
}