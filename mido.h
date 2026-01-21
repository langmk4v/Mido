#pragma once

#include <string>
#include <vector>
#include <optional>
#include <concepts>

namespace mido {

template < typename derived >
struct token_base {

  bool is(auto... cond) {
    return static_cast<derived*>(this)->is(cond...);
  }


};

template < std::derived_from<token_base> token >
class token_stream_base {
public:

  std::vector<std::shared_ptr<token>> stream;

  size_t index = 0;

  token& peek() {
    return *(stream[index++]);
  }

  bool is(auto cond) {
    return 
  }


};

template < class lexer, typename token >
class lexer_base {
public:

  token



private:

};

template < class parser,
           std::derived_from<token_stream_base> token_stream
         >
class parser_base {

public:

  token_stream& tokens;




private:


};



} // namespace mido