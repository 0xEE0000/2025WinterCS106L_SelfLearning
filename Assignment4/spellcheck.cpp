#include "spellcheck.h"

#include <algorithm>
#include <iostream>
#include <numeric>
#include <ranges>
#include <set>
#include <vector>

template <typename Iterator, typename UnaryPred>
std::vector<Iterator> find_all(Iterator begin, Iterator end, UnaryPred pred);

Corpus tokenize(const std::string& source) {
  /* TODO: Implement this method */
  auto whitespaces=find_all(source.begin(),source.end(),isspace);
  Corpus tokens;
  std::transform(
      whitespaces.begin(),whitespaces.end()-1,whitespaces.begin()+1,std::inserter(tokens,tokens.end()),[&source](auto start,auto end){return Token(source,start,end);}
      );
  std::erase_if(tokens,[](const Token& t){return t.content.empty();});
  return tokens;
}

std::set<Mispelling> spellcheck(const Corpus& source, const Dictionary& dictionary) {
  /* TODO: Implement this method */
  namespace rv=std::ranges::views;
  auto misspelled=source 
    | rv::filter([&dictionary](const Token& t){return !dictionary.contains(t.content);})
    | rv::transform([&dictionary](const Token& t){
        auto sug= dictionary | rv::filter([&t](const std::string& word){return levenshtein(t.content,word)==1;});
        std::set<std::string> suggestions(sug.begin(),sug.end());
        return Mispelling{t,suggestions};
      })
    | rv::filter([](const Mispelling& m){return !m.suggestions.empty();});
    return std::set<Mispelling>(misspelled.begin(),misspelled.end());
}
/* Helper methods */

#include "utils.cpp"
