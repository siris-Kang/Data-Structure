 #include <cstring>
 #include <iostream>

 int ComparedTo(char letters[], char otherString[])
{
    int idx = 0;
    int a;
    a = compareStr(letters, otherString);

    while(idx < a && letters[idx] == otherString[idx])
    {
        idx += 1;
    }
    if (idx < a)
    {
        if (letters[idx] < otherString[idx])
            return -1;
        else //(this->letters[idx] > otherString.letters[idx])
            return 1;
    }
    else //(idx == a)
    {
        if (letters[idx] == '\0' && otherString[idx] == '\0')
            return 0;
        else
        {
            if (letters[idx] < otherString[idx])
                return -1;
            else //(this->letters[idx] > otherString.letters[idx])
                return 1;
        }
    }
}

int compareStr(char a[], char b[]) //더 작은 수의 길이 return
{
    int x, y;
    x = strlen(a);
    y = strlen(b);
    if (x > y || x == y)
        return y;
    else
        return x;
}

int main()
{
	char a[] = "data";
	char b[] = "date";
	int c = ComparedTo(a, b);
	std::cout << c;
}