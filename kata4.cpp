# include <string>
std::string disemvowel(std::string str)
{
    std::string newStr;
    for(int i = 0; i < str.size(); ++i)
    {
        switch(tolower(str[i]))
        {
          case 'a':
          case 'e':
          case 'i':
          case 'o':
          case 'u':
            continue;
        }
        newStr += str[i];
    }
    return newStr;
}