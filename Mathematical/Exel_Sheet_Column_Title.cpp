string convertToTitle(int columnNumber)
{
    string str = "";

    while (columnNumber > 0)
    {
        char ch = char((columnNumber - 1) % 26 + 65);
        str = ch + str;
        columnNumber = (columnNumber - 1) / 26;
    }
    return str;
}