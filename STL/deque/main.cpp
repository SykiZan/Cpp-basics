
// this program checks strings if they are palindromes
//A palindrome is a word, number, phrase,
//or other sequence of characters which reads the same backward as forward, 
//such as 'taco cat' or 'madam' or 'race car' or the number 10801.

#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

bool is_palindrome(const std::string& s)
{
   std::string str1;
   std::string str2;
	   
   for(auto c: s)
	{
	   if(std::isalpha(c) )
	   {
		   str1.push_back(std::toupper(c));
		   str2.insert(str2.begin(), std::toupper(c));
	   }
   }
   
   if(str1 == str2)
	   return true;
   else
	   return false;	   
   
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}