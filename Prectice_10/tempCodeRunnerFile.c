while (c != EOF)
    {
        fputc(c,ptr2);
        c = fgetc(ptr);
    }