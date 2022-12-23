
# 1. Scanning

Scanner takes source code, returns tokens.

Token consist of:

lexeme: "word"

Token type:

- keyword

- operator

- literal

location information: line, column, length

# 2. Representing code

Context-free grammars

EBNF notation

A grammar for lax expressions:

- Literals. Numbers, strings, booleans, nil.

- Unary expressions. prefix !, -

- Binary expressions. the infix arithmetic(+, -, *,/) and logic operations(==, !=, <, <= , >, >=)

- Parentheses, ()

Metaprogramming the trees
